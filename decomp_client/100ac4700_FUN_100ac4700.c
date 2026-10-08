
void FUN_100ac4700(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  QMapNodeBase *pQVar5;
  long *plVar6;
  
  pQVar5 = *(QMapNodeBase **)(param_1 + 0xaf8);
  if (*(uint *)(pQVar5 + 4) != 0) {
    plVar6 = (long *)(param_1 + 0xaf8);
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("CHRCLIENT","ChrToolClient",3,"Remove window entered to FS");
      pQVar5 = (QMapNodeBase *)*plVar6;
    }
    if (1 < *(uint *)pQVar5) {
      FUN_100ac86d0(plVar6);
      pQVar5 = (QMapNodeBase *)*plVar6;
    }
    lVar2 = *(long *)(pQVar5 + 0x10);
    if (lVar2 != 0) {
      do {
        lVar1 = 0;
        do {
          while (lVar4 = lVar2, uVar3 = *(uint *)(lVar4 + 0x18), param_2 <= uVar3) {
            lVar2 = *(long *)(lVar4 + 8);
            lVar1 = lVar4;
            if (*(long *)(lVar4 + 8) == 0) goto LAB_100ac47cb;
          }
          lVar2 = *(long *)(lVar4 + 0x10);
        } while (*(long *)(lVar4 + 0x10) != 0);
        if (lVar1 == 0) break;
        uVar3 = *(uint *)(lVar1 + 0x18);
LAB_100ac47cb:
        if (param_2 < uVar3) break;
        QMapDataBase::freeNodeAndRebalance(pQVar5);
        pQVar5 = (QMapNodeBase *)*plVar6;
        lVar2 = *(long *)(pQVar5 + 0x10);
      } while (lVar2 != 0);
      pQVar5 = (QMapNodeBase *)*plVar6;
    }
    if ((*(uint *)(pQVar5 + 4) == 0) && (2 < DAT_10230ffd0)) {
      FUN_100df99c0("CHRCLIENT","ChrToolClient",3,"Deactivation logic unblocked");
      return;
    }
  }
  return;
}

