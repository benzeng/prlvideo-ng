
/* WARNING: Removing unreachable block (ram,0x0001006cca48) */
/* WARNING: Removing unreachable block (ram,0x0001006cca4b) */
/* WARNING: Removing unreachable block (ram,0x0001006ccad9) */
/* WARNING: Removing unreachable block (ram,0x0001006ccb0e) */
/* WARNING: Removing unreachable block (ram,0x0001006ccae6) */
/* WARNING: Removing unreachable block (ram,0x0001006cc90a) */
/* WARNING: Removing unreachable block (ram,0x0001006ccb00) */
/* WARNING: Removing unreachable block (ram,0x0001006ccb1a) */
/* WARNING: Removing unreachable block (ram,0x0001006ccb4b) */
/* WARNING: Removing unreachable block (ram,0x0001006ccb55) */
/* WARNING: Removing unreachable block (ram,0x0001006ccb62) */
/* WARNING: Removing unreachable block (ram,0x0001006ccb6b) */
/* WARNING: Removing unreachable block (ram,0x0001006ccb70) */
/* WARNING: Removing unreachable block (ram,0x0001006ccb79) */
/* WARNING: Removing unreachable block (ram,0x0001006ccb7e) */
/* WARNING: Removing unreachable block (ram,0x0001006ccb8a) */
/* WARNING: Removing unreachable block (ram,0x0001006ccb98) */
/* WARNING: Removing unreachable block (ram,0x0001006ccd01) */
/* WARNING: Removing unreachable block (ram,0x0001006ccd5f) */
/* WARNING: Removing unreachable block (ram,0x0001006ccd15) */

undefined4 FUN_1006cc690(uint param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined4 uVar14;
  long local_78;
  void *pvStack_70;
  long local_68;
  undefined1 local_5e [6];
  undefined1 local_58 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  param_1 = param_1 & 0xfffffff;
  iVar6 = FUN_1006cadb0(param_1,local_58,local_5e);
  if (iVar6 < 1) {
    FUN_1008e3970("","prl_net",0,"[Mac_SetAdapterName %d] No suitable device found for vnic%c.",
                  param_1,param_1 + 0x30);
    uVar14 = 0xfffffffc;
  }
  else {
    uVar7 = _CFStringCreateWithCString(0,local_58,0x600);
    uVar8 = QString::utf16();
    uVar8 = _CFStringCreateWithCharacters(0,uVar8,(long)*(int *)(*param_2 + 4));
    lVar9 = _SCPreferencesCreate(0,&cf_com_parallels_prl_net_library,0);
    if (lVar9 == 0) {
      uVar14 = 0xffffffff;
      FUN_1008e3970("","prl_net",0,"[Mac_SetAdapterName %d] Cannot open System Preferences.",param_1
                   );
    }
    else {
      cVar5 = _SCPreferencesLock(lVar9,1);
      if (cVar5 == '\0') {
        uVar14 = 1;
        FUN_1008e3970("","prl_net",0,"[Mac_SetAdapterName %d] Cannot lock System Preferences.",
                      param_1);
      }
      else {
        uVar1 = *(undefined8 *)PTR__kSCPrefSets_100ba2528;
        lVar10 = _SCPreferencesGetValue(lVar9);
        lVar11 = _CFDictionaryGetTypeID();
        if ((lVar10 == 0) || (lVar12 = _CFGetTypeID(lVar10), lVar12 != lVar11)) {
          FUN_1008e3970("","prl_net",0,"[Mac_SetAdapterName %d] Cannot get System Preferences Sets."
                        ,param_1);
          _SCPreferencesUnlock(lVar9);
          uVar14 = 0xffffffff;
        }
        else {
          local_78 = 0;
          pvStack_70 = (void *)0x0;
          local_68 = 0;
          FUN_1006cd640(&local_78,lVar10);
          pvVar4 = pvStack_70;
          lVar10 = local_78;
          if (0 < local_78) {
            uVar2 = *(undefined8 *)PTR__kSCCompNetwork_100ba24e0;
            uVar3 = *(undefined8 *)PTR__kSCCompService_100ba24e8;
            lVar11 = 0;
            do {
              _CFStringCreateWithFormat
                        (0,0,&cf_____________,uVar1,*(undefined8 *)((long)pvVar4 + lVar11 * 8),uVar2
                         ,uVar3);
              lVar12 = _SCPreferencesPathGetValue(lVar9);
              _CFRelease();
              lVar13 = _CFDictionaryGetTypeID();
              if ((lVar12 != 0) && (lVar12 = _CFGetTypeID(), lVar12 == lVar13)) {
                FUN_1006cd640();
              }
              lVar11 = lVar11 + 1;
            } while (lVar11 < lVar10);
          }
          uVar14 = 0xffffffff;
          _SCPreferencesUnlock(lVar9);
          _CFRelease(uVar7);
          _CFRelease(uVar8);
          lVar11 = local_68;
          pvVar4 = pvStack_70;
          if (pvStack_70 != (void *)0x0) {
            if (0 < lVar10) {
              lVar12 = 0;
              do {
                if (*(long *)((long)pvVar4 + lVar12 * 8) != 0) {
                  _CFRelease();
                }
                if (*(long *)(lVar11 + lVar12 * 8) != 0) {
                  _CFRelease();
                }
                lVar12 = lVar12 + 1;
              } while (lVar12 < lVar10);
            }
            _free(pvVar4);
          }
          local_78 = 0;
          pvStack_70 = (void *)0x0;
        }
      }
      _CFRelease(lVar9);
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar14;
}

