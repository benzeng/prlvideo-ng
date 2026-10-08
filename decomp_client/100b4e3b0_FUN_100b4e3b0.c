
/* WARNING: Removing unreachable block (ram,0x000100b4e709) */
/* WARNING: Removing unreachable block (ram,0x000100b4e632) */
/* WARNING: Removing unreachable block (ram,0x000100b4e638) */
/* WARNING: Removing unreachable block (ram,0x000100b4e6b1) */
/* WARNING: Removing unreachable block (ram,0x000100b4e6be) */
/* WARNING: Removing unreachable block (ram,0x000100b4e6cb) */
/* WARNING: Removing unreachable block (ram,0x000100b4e7d8) */
/* WARNING: Removing unreachable block (ram,0x000100b4e888) */
/* WARNING: Removing unreachable block (ram,0x000100b4e8ba) */
/* WARNING: Removing unreachable block (ram,0x000100b4e8f8) */
/* WARNING: Removing unreachable block (ram,0x000100b4e8e6) */
/* WARNING: Removing unreachable block (ram,0x000100b4e91d) */
/* WARNING: Removing unreachable block (ram,0x000100b4e98a) */
/* WARNING: Removing unreachable block (ram,0x000100b4e9ac) */
/* WARNING: Removing unreachable block (ram,0x000100b4e713) */
/* WARNING: Removing unreachable block (ram,0x000100b4e6e2) */
/* WARNING: Removing unreachable block (ram,0x000100b4e722) */
/* WARNING: Removing unreachable block (ram,0x000100b4e730) */
/* WARNING: Removing unreachable block (ram,0x000100b4e739) */
/* WARNING: Removing unreachable block (ram,0x000100b4e73e) */
/* WARNING: Removing unreachable block (ram,0x000100b4e74b) */
/* WARNING: Removing unreachable block (ram,0x000100b4e750) */
/* WARNING: Removing unreachable block (ram,0x000100b4e75c) */
/* WARNING: Removing unreachable block (ram,0x000100b4e777) */
/* WARNING: Removing unreachable block (ram,0x000100b4ea79) */
/* WARNING: Removing unreachable block (ram,0x000100b4ebdf) */
/* WARNING: Removing unreachable block (ram,0x000100b4ea8f) */

undefined8 FUN_100b4e3b0(uint param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  void *pvVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long local_58;
  void *pvStack_50;
  long local_48;
  uint local_40 [2];
  undefined8 local_38;
  
  param_1 = param_1 & 0xfffffff;
  local_40[0] = param_1;
  local_38 = _CFNumberCreate(0,3,local_40);
  lVar6 = _SCPreferencesCreate(0,&cf_com_parallels_prl_net_library,0);
  if (lVar6 == 0) {
    uVar10 = 1;
    FUN_100df99c0("","prl_net",0,"[UnconfigureAdapter %d] Cannot open System Preferences.",param_1);
    goto LAB_100b4e505;
  }
  cVar5 = FUN_100b524f0(lVar6);
  if (cVar5 == '\0') {
    uVar10 = 1;
    FUN_100df99c0("","prl_net",0,"[UnconfigureAdapter %d] Cannot lock System Preference.",param_1);
  }
  else {
    uVar10 = *(undefined8 *)PTR__kSCPrefSets_1021e1a40;
    uVar1 = *(undefined8 *)PTR__kSCCompNetwork_1021e19f8;
    uVar2 = *(undefined8 *)PTR__kSCCompService_1021e1a00;
    local_48 = 0;
    pvStack_50 = (void *)0x0;
    local_58 = 0;
    lVar9 = _SCPreferencesGetValue(lVar6,uVar10);
    if (lVar9 == 0) {
LAB_100b4ea17:
      uVar10 = 1;
      FUN_100df99c0("","prl_net",0,"[UnconfigureAdapter %d] Cannot get System Preferences Sets.",
                    param_1);
      bVar3 = true;
    }
    else {
      lVar7 = _CFGetTypeID(lVar9);
      lVar11 = _CFDictionaryGetTypeID();
      if (lVar7 != lVar11) goto LAB_100b4ea17;
      FUN_100b52a90(&local_58,lVar9);
      pvVar4 = pvStack_50;
      if (0 < local_58) {
        lVar7 = 0;
        lVar9 = local_58;
        do {
          _CFStringCreateWithFormat
                    (0,0,&cf_____________,uVar10,*(undefined8 *)((long)pvVar4 + lVar7 * 8),uVar1,
                     uVar2);
          lVar11 = _SCPreferencesPathGetValue(lVar6);
          _CFRelease();
          lVar8 = _CFDictionaryGetTypeID();
          if ((lVar11 != 0) && (lVar11 = _CFGetTypeID(), lVar11 == lVar8)) {
            FUN_100b52a90();
            lVar9 = local_58;
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 < lVar9);
      }
      FUN_100df99c0("","prl_net",0,"[UnconfigureAdapter %d] No System Preferences changes required."
                    ,param_1);
      _SCPreferencesUnlock(lVar6);
      bVar3 = false;
      uVar10 = 0;
    }
    lVar7 = local_48;
    pvVar4 = pvStack_50;
    lVar9 = local_58;
    if (pvStack_50 != (void *)0x0) {
      if (0 < local_58) {
        lVar11 = 0;
        do {
          if (*(long *)((long)pvVar4 + lVar11 * 8) != 0) {
            _CFRelease();
          }
          if (*(long *)(lVar7 + lVar11 * 8) != 0) {
            _CFRelease();
          }
          lVar11 = lVar11 + 1;
        } while (lVar11 < lVar9);
      }
      _free(pvVar4);
    }
    local_58 = 0;
    pvStack_50 = (void *)0x0;
    if (bVar3) {
      _SCPreferencesUnlock(lVar6);
    }
  }
  _CFRelease(lVar6);
LAB_100b4e505:
  _CFRelease(local_38);
  return uVar10;
}

