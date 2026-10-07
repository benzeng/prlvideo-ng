
undefined8 * FUN_100110730(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  size_t sVar9;
  undefined8 uVar10;
  int iVar11;
  cfstringStruct *local_48;
  long local_40;
  long local_38;
  
  lVar4 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar4;
  lVar1 = _CFStringCreateWithCString(0,param_2,0);
  local_48 = &cf_CFBundleVersion;
  local_40 = lVar1;
  if (lVar1 == 0) {
    uVar10 = QString::fromAscii_helper((char *)0x0,-1);
    *param_1 = uVar10;
    goto LAB_1001108d1;
  }
  lVar2 = _CFArrayCreate(0,&local_40,1,0);
  if (lVar2 == 0) {
    uVar10 = QString::fromAscii_helper((char *)0x0,-1);
    *param_1 = uVar10;
  }
  else {
    lVar3 = _CFArrayCreate(0,&local_48,1,0);
    if (lVar3 == 0) {
      uVar10 = QString::fromAscii_helper((char *)0x0,-1);
      *param_1 = uVar10;
    }
    else {
      lVar4 = _KextManagerCopyLoadedKextInfo(lVar2,lVar3);
      if (lVar4 == 0) {
        uVar10 = QString::fromAscii_helper((char *)0x0,-1);
        *param_1 = uVar10;
      }
      else {
        lVar5 = _CFDictionaryGetValue(lVar4,lVar1);
        if (lVar5 == 0) {
          uVar10 = QString::fromAscii_helper((char *)0x0,-1);
        }
        else {
          lVar5 = _CFDictionaryGetValue(lVar5,&cf_CFBundleVersion);
          if (lVar5 != 0) {
            lVar6 = _CFGetTypeID(lVar5);
            lVar7 = _CFStringGetTypeID();
            if (lVar6 == lVar7) {
              pcVar8 = (char *)_CFStringGetCStringPtr(lVar5,0);
              iVar11 = -1;
              if (pcVar8 != (char *)0x0) {
                sVar9 = _strlen(pcVar8);
                iVar11 = (int)sVar9;
              }
              uVar10 = QString::fromAscii_helper(pcVar8,iVar11);
              goto LAB_1001108a4;
            }
          }
          uVar10 = QString::fromAscii_helper((char *)0x0,-1);
        }
LAB_1001108a4:
        *param_1 = uVar10;
        _CFRelease(lVar4);
      }
      _CFRelease(lVar3);
      lVar4 = *(long *)PTR____stack_chk_guard_100ba2320;
    }
    _CFRelease(lVar2);
  }
  _CFRelease(lVar1);
LAB_1001108d1:
  if (lVar4 == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

