:: This script pack DynamicFastBuffers library for any platform in Windows.
::
:: This script needs the next environment variables to be run.
:: - SVN_BIN_DIR: Directory with the subversion binaries.
:: - LIBREOFFICE_BIN_DIR: Directory with the LibreOffice binaries.
:: - NSIS_BIN_DIR: Directory with the NSIS installer libraries.
:: - EPROSIMADIR: URL to the directory with common sources of eProsima.
:: - ANT_BIN_DIR: Directory with the ant binaries.
:: - DOXYGEN_BIN_DIR: Directory with the doxygen binaries. (Also pdflatex and graphviz)
:: Also this script needs the eProsima.documentation.changeVersion macro installed in the system.

setlocal EnableDelayedExpansion
setlocal EnableExpansion
@echo off

:: Initialize the returned value to 0 (all succesfully)
set errorstatus=0

if "%EPROSIMADIR%"=="" (
    echo "EPROSIMADIR environment variable has to be set"
    set errorstatus=-1
    goto :exit
)

:: Go to root directory
cd "..\.."

:: Update and compile CDR library.
cd "..\CDR"
:: Update CDR library.
svn update
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
:: Compile CDR library.
cd "utils\scripts"
call build_cdr.bat
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
cd "..\..\..\DynamicFastBuffers"

:: Get the current vesion of DynamicFastBuffers
call %EPROSIMADIR%\scripts\common_pack_functions.bat :getVersionFromCPP VERSIONDFB include/dfb/DFB_version.h
if not %errorstatus%==0 goto :exit

:: Update and compile DynamicFastBuffers application.
:: Update DynamicFastBuffers application.
svn update
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
:: Compile DynamicFastBuffers for target.
cd "utils\scripts"
call build_dfb.bat
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit

:: Create PDFS from documentation.
cd "..\..\doc"
:: Installation manual
soffice.exe --headless "macro:///eProsima.documentation.changeVersion(%CD%\DFB - Installation Manual.odt,%VERSIONDFB%)"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
:: User manual
soffice.exe --headless "macro:///eProsima.documentation.changeVersion(%CD%\DFB - User Manual.odt,%VERSIONDFB%)"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit

:: Copy pfd files into pdf dir
xcopy /Y "DFB - Installation Manual.pdf" "pdf\DFB - Installation Manual.pdf"
del "DFB - Installation Manual.pdf"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit

xcopy /Y "DFB - User Manual.pdf" "pdf\DFB - User Manual.pdf"
del "DFB - User Manual.pdf"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit

cd ".."
:: Create README
soffice.exe --headless "macro:///eProsima.documentation.changeVersionToHTML(%CD%\README.odt,%VERSIONDFB%)"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit

:: Create doxygen information.
:: Generate the examples
:: Export version
set VERSION_DOX=%VERSIONDFB%
mkdir doc\html
mkdir utils\doxygen\output
mkdir utils\doxygen\output\doxygen
cd "utils\doxygen"
doxygen doxyfile
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
cd output\doxygen\latex
call make.bat
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
ren refman.pdf "API C++ Manual.pdf"
cd "..\..\..\..\.."



:: Create installers.
cd "utils\installers\dfb\windows"
:: Win32 installer.
makensis.exe /DVERSION="%VERSIONDFB%" setup.nsi
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
cd "..\..\..\.."
rd /S /Q "utils\doxygen\output"

:: rmdir /S /Q utils\doxygen\output

goto :exit

:: Function exit ::
:exit
if %errorstatus%==0 (echo "PACKAGING SUCCESSFULLY") else (echo "PACKAGING FAILED")
exit /b %errorstatus%
goto :EOF
