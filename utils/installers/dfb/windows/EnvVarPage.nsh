!include nsDialogs.nsh
!include LogicLib.nsh

Var Dialog
Var FirstTime

Var Label

Var CheckboxDYNAMIC_FAST_BUFFERS
Var CheckboxDYNAMIC_FAST_BUFFERS_State

Var CheckboxX64
Var CheckboxX64_State

Var CheckboxI86
Var CheckboxI86_State

LangString PAGE_TITLE ${LANG_ENGLISH} "Environment variables setting"
LangString PAGE_SUBTITLE ${LANG_ENGLISH} "Choose which environment variables must be set."

Function VariablesEntornoPage

    !insertmacro MUI_HEADER_TEXT $(PAGE_TITLE) $(PAGE_SUBTITLE)

    nsDialogs::Create 1018
    
    Pop $Dialog

    ${If} $Dialog == error
        Abort
    ${EndIf}
       
    ### Creación de los elementos gráficos    
    ${NSD_CreateLabel} 0 0 100% 20u "Check the environment variables thet must set and uncheck the environment variables that must not be set. Click Next to continue."
    Pop $Label

    ${NSD_CreateCheckbox} 10 20u 100% 12u "Set the DYNAMIC_FAST_BUFFERS environment variable."
    Pop $CheckboxDYNAMIC_FAST_BUFFERS
    ${If} $CheckboxDYNAMIC_FAST_BUFFERS_State == ${BST_CHECKED}
        ${NSD_Check} $CheckboxDYNAMIC_FAST_BUFFERS
    ${EndIf}
        
    ${NSD_CreateCheckbox} 10 32u 100% 24u "&Add to the PATH environment variable the location of Dynamic Fast Buffers target$\r$\nlibraries for platform x64"
    Pop $CheckboxX64  
    ${If} $CheckboxX64_State == ${BST_CHECKED}
        ${NSD_Check} $CheckboxX64
    ${EndIf}
    
    ${NSD_CreateCheckbox} 10 54u 100% 24u "&Add to the PATH environment variable the location of Dynamic Fast Buffers target$\r$\nlibraries for platform i86"
    Pop $CheckboxI86
    ${If} $CheckboxI86_State == ${BST_CHECKED}
        ${NSD_Check} $CheckboxI86
    ${EndIf}
    
    ### La primera vez que lanzamos el instalador, el checkbox de DYNAMIC_FAST_BUFFERS
    ### y el de SCRIPTS deben estar marcados. 
    StrCmp $FirstTime "FirstTime" +5 0 ### Si son iguales las cadenas, GOTO +5, si no, GOTO 0
        ${NSD_Check} $CheckboxDYNAMIC_FAST_BUFFERS
        ${NSD_GetState} $CheckboxDYNAMIC_FAST_BUFFERS $CheckboxDYNAMIC_FAST_BUFFERS_State
        StrCpy $FirstTime "FirstTime"
        
    ### Fijamos los callbacks para cuando se haga click en los CheckBoxes
    ${NSD_OnClick} $CheckboxDYNAMIC_FAST_BUFFERS ClickDYNAMIC_FAST_BUFFERS 
    ${NSD_OnClick} $CheckboxX64 ClickX64  
    ${NSD_OnClick} $CheckboxI86 ClickI86  

    nsDialogs::Show
FunctionEnd

### Callback invocado cuando se pulsa el CheckBox DYNAMIC_FAST_BUFFERS
### Guardamos el estado en la variable _state
Function ClickDYNAMIC_FAST_BUFFERS
    ${NSD_GetState} $CheckboxDYNAMIC_FAST_BUFFERS $CheckboxDYNAMIC_FAST_BUFFERS_State
FunctionEnd

### Callback invocado cuando se pulsa el CheckBox x64
### Sirve para deshabilitar el i86, pues no pueden aparecer a la vez
### También guardamos el estado en la variable _state
Function ClickX64
    Pop $CheckboxX64
    ${NSD_GetState} $CheckboxX64 $0
    ${If} $0 == 1
        ${NSD_SetState} $CheckboxI86 0
        ${NSD_GetState} $CheckboxI86 $CheckboxI86_State
    ${EndIf}
    ${NSD_GetState} $CheckboxX64 $CheckboxX64_State
FunctionEnd

### Callback invocado cuando se pulsa el CheckBox i86
### Sirve para deshabilitar el x64, pues no pueden aparecer a la vez
### También guardamos el estado en la variable _state
Function ClickI86
    Pop $CheckboxI86
    ${NSD_GetState} $CheckboxI86 $0
    ${If} $0 == 1
        ${NSD_SetState} $CheckboxX64 0
        ${NSD_GetState} $CheckboxX64 $CheckboxX64_State
    ${EndIf}
    ${NSD_GetState} $CheckboxI86 $CheckboxI86_State
FunctionEnd