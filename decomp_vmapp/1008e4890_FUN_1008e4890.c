
undefined8 FUN_1008e4890(undefined1 *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  bool bVar7;
  long local_40;
  long local_38;
  long local_30;
  
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  iVar2 = _SecCodeCopySelf(0,&local_30);
  uVar6 = 1;
  if (iVar2 == 0) {
    iVar2 = _SecCodeCopyStaticCode(local_30,0,&local_38);
    if (iVar2 == 0) {
      iVar2 = _SecCodeCopySigningInformation(local_38,4,&local_40);
      if (iVar2 == 0) {
        lVar3 = _CFDictionaryGetValue(local_40,&cf_entitlements_dict);
        uVar6 = 0;
        bVar7 = false;
        if (lVar3 != 0) {
          lVar3 = _CFDictionaryGetValue(lVar3,&cf_com_apple_security_app_sandbox);
          if (lVar3 == 0) {
            bVar7 = false;
          }
          else {
            lVar4 = _CFGetTypeID(lVar3);
            lVar5 = _CFBooleanGetTypeID();
            if (lVar4 == lVar5) {
              cVar1 = _CFBooleanGetValue(lVar3);
              bVar7 = cVar1 != '\0';
            }
            else {
              bVar7 = false;
            }
          }
        }
        *param_1 = bVar7;
      }
    }
  }
  if (local_40 != 0) {
    _CFRelease();
  }
  if (local_38 != 0) {
    _CFRelease();
  }
  if (local_30 != 0) {
    _CFRelease();
  }
  return uVar6;
}

