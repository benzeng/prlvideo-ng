
uint FUN_100b4de00(void *param_1,void *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  void *pvVar11;
  uint uVar12;
  long local_38;
  
  lVar4 = _SCPreferencesCreate(0,&cf_com_parallels_prl_net_library,&cf_NetworkInterfaces_plist);
  if (lVar4 == 0) {
    FUN_100df99c0("","prl_net",0,"[changemac] Cannot open Network Interfaces plist.");
    return 0xffffffff;
  }
  cVar2 = _SCPreferencesLock(lVar4,1);
  if (cVar2 == '\0') {
    uVar12 = 0xffffffff;
    FUN_100df99c0("","prl_net",0,"[changemac] Cannot lock Network Interfaces plist.");
    goto LAB_100b4e1d5;
  }
  local_38 = _SCPreferencesGetValue(lVar4,&cf_Interfaces);
  if (local_38 == 0) {
LAB_100b4e15d:
    uVar12 = 0;
    FUN_100df99c0("","prl_net",0,"[changemac] No Network Interfaces changes required.");
  }
  else {
    lVar5 = _CFGetTypeID(local_38);
    lVar6 = _CFArrayGetTypeID();
    if (lVar5 != lVar6) goto LAB_100b4e15d;
    lVar5 = _CFArrayGetCount(local_38);
    uVar7 = _CFArrayCreateMutableCopy(0,lVar5,local_38);
    if (lVar5 < 1) goto LAB_100b4e15d;
    lVar6 = 0;
    uVar1 = 0;
    do {
      uVar8 = _CFArrayGetValueAtIndex(uVar7,lVar6);
      cVar2 = _CFDictionaryGetValueIfPresent(uVar8,&cf_IOPathMatch,&local_38);
      if ((cVar2 == '\0') || (local_38 == 0)) {
LAB_100b4df30:
        cVar2 = _CFDictionaryGetValueIfPresent(uVar8,&cf_IOMACAddress,&local_38);
        lVar9 = local_38;
        if ((((cVar2 != '\0') && (lVar10 = _CFDataGetTypeID(), lVar9 != 0)) &&
            (lVar9 = _CFGetTypeID(lVar9), lVar9 == lVar10)) &&
           (lVar9 = _CFDataGetLength(local_38), lVar9 == 6)) {
          pvVar11 = (void *)_CFDataGetBytePtr(local_38);
          iVar3 = _memcmp(pvVar11,param_1,6);
          if (iVar3 == 0) {
            uVar1 = uVar1 | 1;
          }
          else {
            pvVar11 = (void *)_CFDataGetBytePtr(local_38);
            iVar3 = _memcmp(pvVar11,param_2,6);
            if (iVar3 == 0) {
              uVar1 = uVar1 | 2;
            }
          }
        }
      }
      else {
        lVar9 = _CFGetTypeID();
        lVar10 = _CFStringGetTypeID();
        if ((lVar9 != lVar10) ||
           (cVar2 = _CFStringHasSuffix(local_38,&cf_PrlvnicInterface), cVar2 != '\0'))
        goto LAB_100b4df30;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < lVar5);
    if (0 < lVar5) {
      lVar6 = 0;
      do {
        uVar8 = _CFArrayGetValueAtIndex(uVar7,lVar6);
        cVar2 = _CFDictionaryGetValueIfPresent(uVar8,&cf_IOPathMatch,&local_38);
        lVar9 = local_38;
        if (((((cVar2 == '\0') || (lVar10 = _CFStringGetTypeID(), lVar9 == 0)) ||
             ((lVar9 = _CFGetTypeID(lVar9), lVar9 != lVar10 ||
              (cVar2 = _CFStringHasSuffix(local_38,&cf_PrlvnicInterface), cVar2 != '\0')))) &&
            ((cVar2 = _CFDictionaryGetValueIfPresent(uVar8,&cf_IOMACAddress,&local_38),
             lVar9 = local_38, cVar2 != '\0' && (lVar10 = _CFDataGetTypeID(), lVar9 != 0)))) &&
           ((lVar9 = _CFGetTypeID(lVar9), lVar9 == lVar10 &&
            (lVar9 = _CFDataGetLength(local_38), lVar9 == 6)))) {
          pvVar11 = (void *)_CFDataGetBytePtr(local_38);
          iVar3 = _memcmp(pvVar11,param_1,6);
          if (iVar3 == 0) {
            if (uVar1 == 3) {
              _CFArrayRemoveValueAtIndex(uVar7,lVar6);
              lVar6 = lVar6 + -1;
              lVar5 = lVar5 + -1;
              uVar1 = 7;
            }
            else if (uVar1 == 1) {
              uVar8 = _CFDictionaryCreateMutableCopy(0,0,uVar8);
              local_38 = _CFDataCreate(0,param_2,6);
              _CFDictionarySetValue(uVar8,&cf_IOMACAddress,local_38);
              uVar1 = 5;
              _CFArraySetValueAtIndex(uVar7,lVar6,uVar8);
            }
          }
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar5);
    }
    uVar12 = uVar1 & 4;
    if ((uVar1 & 4) == 0) goto LAB_100b4e15d;
    cVar2 = _SCPreferencesSetValue(lVar4,&cf_Interfaces,uVar7);
    if (cVar2 == '\0') {
      FUN_100df99c0("","prl_net",0,"[changemac] Cannot update Network Interfaces.");
      uVar12 = 0xffffffff;
      _SCPreferencesUnlock(lVar4);
      goto LAB_100b4e1d5;
    }
    cVar2 = _SCPreferencesCommitChanges(lVar4);
    if (cVar2 == '\0') {
      FUN_100df99c0("","prl_net",0,"[changemac] Failed to commit changes to Network Interfaces.");
    }
    else {
      _SCPreferencesApplyChanges(lVar4);
      FUN_100df99c0("","prl_net",0,"[changemac] Changes to Network Interfaces commited.");
    }
  }
  _SCPreferencesUnlock(lVar4);
  uVar12 = uVar12 >> 2;
LAB_100b4e1d5:
  _CFRelease(lVar4);
  return uVar12;
}

