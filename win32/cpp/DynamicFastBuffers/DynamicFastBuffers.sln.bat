:: This script execute Visual Studio getting first the version of the product.

:: Get the current vesion of DFB
call %EPROSIMADIR%\scripts\common_pack_functions.bat :getVersionFromCPP VERSIONDFB ..\..\..\include\dfb\DFB_version.h
if not %errorstatus%==0 goto :EOF

set VERSION=-%VERSIONDFB%

start "C:\Program Files (x86)\Microsoft Visual Studio 10.0\Common7\IDE\devenv.exe" DynamicFastBuffers.sln
