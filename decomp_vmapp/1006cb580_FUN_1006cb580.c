
bool FUN_1006cb580(int param_1,code *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  long lVar8;
  bool bVar9;
  
  bVar9 = false;
  uVar6 = _SCPreferencesCreate(0,&cf_com_parallels_prl_net_library,0);
  cVar3 = FUN_1006cd0a0(uVar6);
  if (cVar3 != '\0') {
    bVar9 = false;
    DAT_10116d768 = _socket(2,2,0);
    if (-1 < DAT_10116d768) {
      uVar1 = _SCNetworkServiceCopyAll(uVar6);
      iVar4 = _CFArrayGetCount(uVar1);
      bVar9 = true;
      lVar8 = 0;
      if (0 < iVar4) {
        bVar9 = false;
        do {
          lVar2 = _CFArrayGetValueAtIndex(uVar1,lVar8);
          bVar7 = bVar9;
          if ((lVar2 != 0) && (iVar5 = FUN_1006cb0e0(uVar6,lVar2), iVar5 == param_1)) {
            cVar3 = (*param_2)(lVar2,param_3);
            bVar7 = true;
            if (cVar3 == '\0') {
              bVar7 = bVar9;
            }
          }
          lVar8 = lVar8 + 1;
          bVar9 = bVar7;
        } while (iVar4 != (int)lVar8);
        bVar9 = true;
        if (bVar7) {
          cVar3 = _SCPreferencesCommitChanges(uVar6);
          bVar9 = false;
          if (cVar3 != '\0') {
            cVar3 = _SCPreferencesApplyChanges(uVar6);
            bVar9 = cVar3 != '\0';
          }
        }
      }
      _SCPreferencesUnlock(uVar6);
      _CFRelease(uVar1);
      _CFRelease(uVar6);
      _close(DAT_10116d768);
      DAT_10116d768 = -1;
    }
  }
  return bVar9;
}

