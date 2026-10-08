
undefined1 FUN_100a62ee0(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 uVar6;
  
  lVar2 = _CFPreferencesCopyValue
                    (&cf_AppleGlobalTextInputProperties,&cf_com_apple_HIToolbox,
                     *(undefined8 *)PTR__kCFPreferencesCurrentUser_1021e18f8,
                     *(undefined8 *)PTR__kCFPreferencesCurrentHost_1021e18f0);
  if (lVar2 == 0) {
    uVar6 = 0;
  }
  else {
    lVar3 = _CFGetTypeID(lVar2);
    lVar4 = _CFDictionaryGetTypeID();
    if (lVar3 == lVar4) {
      lVar3 = _CFDictionaryGetValue(lVar2,&cf_TextInputGlobalPropertyPerContextInput);
      if (lVar3 == 0) {
        uVar6 = 0;
      }
      else {
        lVar4 = _CFGetTypeID(lVar3);
        lVar5 = _CFBooleanGetTypeID();
        if (lVar4 == lVar5) {
          cVar1 = _CFBooleanGetValue(lVar3);
          *(bool *)param_1 = cVar1 != '\0';
          uVar6 = 1;
        }
        else {
          uVar6 = 0;
        }
      }
    }
    else {
      uVar6 = 0;
    }
    _CFRelease(lVar2);
  }
  return uVar6;
}

