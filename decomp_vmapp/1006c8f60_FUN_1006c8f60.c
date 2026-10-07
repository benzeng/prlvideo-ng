
/* WARNING: Removing unreachable block (ram,0x0001006c92b9) */
/* WARNING: Removing unreachable block (ram,0x0001006c91e2) */
/* WARNING: Removing unreachable block (ram,0x0001006c91e8) */
/* WARNING: Removing unreachable block (ram,0x0001006c9261) */
/* WARNING: Removing unreachable block (ram,0x0001006c926e) */
/* WARNING: Removing unreachable block (ram,0x0001006c927b) */
/* WARNING: Removing unreachable block (ram,0x0001006c9388) */
/* WARNING: Removing unreachable block (ram,0x0001006c9438) */
/* WARNING: Removing unreachable block (ram,0x0001006c946a) */
/* WARNING: Removing unreachable block (ram,0x0001006c94a8) */
/* WARNING: Removing unreachable block (ram,0x0001006c9496) */
/* WARNING: Removing unreachable block (ram,0x0001006c94cd) */
/* WARNING: Removing unreachable block (ram,0x0001006c953a) */
/* WARNING: Removing unreachable block (ram,0x0001006c955c) */
/* WARNING: Removing unreachable block (ram,0x0001006c92c3) */
/* WARNING: Removing unreachable block (ram,0x0001006c9292) */
/* WARNING: Removing unreachable block (ram,0x0001006c92d2) */
/* WARNING: Removing unreachable block (ram,0x0001006c92e0) */
/* WARNING: Removing unreachable block (ram,0x0001006c92e9) */
/* WARNING: Removing unreachable block (ram,0x0001006c92ee) */
/* WARNING: Removing unreachable block (ram,0x0001006c92fb) */
/* WARNING: Removing unreachable block (ram,0x0001006c9300) */
/* WARNING: Removing unreachable block (ram,0x0001006c930c) */
/* WARNING: Removing unreachable block (ram,0x0001006c9327) */
/* WARNING: Removing unreachable block (ram,0x0001006c9629) */
/* WARNING: Removing unreachable block (ram,0x0001006c978f) */
/* WARNING: Removing unreachable block (ram,0x0001006c963f) */

undefined8 FUN_1006c8f60(uint param_1)

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
    FUN_1008e3970("","prl_net",0,"[UnconfigureAdapter %d] Cannot open System Preferences.",param_1);
    goto LAB_1006c90b5;
  }
  cVar5 = FUN_1006cd0a0(lVar6);
  if (cVar5 == '\0') {
    uVar10 = 1;
    FUN_1008e3970("","prl_net",0,"[UnconfigureAdapter %d] Cannot lock System Preference.",param_1);
  }
  else {
    uVar10 = *(undefined8 *)PTR__kSCPrefSets_100ba2528;
    uVar1 = *(undefined8 *)PTR__kSCCompNetwork_100ba24e0;
    uVar2 = *(undefined8 *)PTR__kSCCompService_100ba24e8;
    local_48 = 0;
    pvStack_50 = (void *)0x0;
    local_58 = 0;
    lVar9 = _SCPreferencesGetValue(lVar6,uVar10);
    if (lVar9 == 0) {
LAB_1006c95c7:
      uVar10 = 1;
      FUN_1008e3970("","prl_net",0,"[UnconfigureAdapter %d] Cannot get System Preferences Sets.",
                    param_1);
      bVar3 = true;
    }
    else {
      lVar7 = _CFGetTypeID(lVar9);
      lVar11 = _CFDictionaryGetTypeID();
      if (lVar7 != lVar11) goto LAB_1006c95c7;
      FUN_1006cd640(&local_58,lVar9);
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
            FUN_1006cd640();
            lVar9 = local_58;
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 < lVar9);
      }
      FUN_1008e3970("","prl_net",0,"[UnconfigureAdapter %d] No System Preferences changes required."
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
LAB_1006c90b5:
  _CFRelease(local_38);
  return uVar10;
}

