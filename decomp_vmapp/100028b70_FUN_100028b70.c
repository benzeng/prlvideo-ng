
void FUN_100028b70(long param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  QMapNodeBase *pQVar6;
  
  pQVar6 = *(QMapNodeBase **)(param_1 + 0x30);
  if (*(long *)(pQVar6 + 0x10) != 0) {
    lVar2 = 0;
    lVar3 = *(long *)(pQVar6 + 0x10);
    do {
      while (uVar4 = *(uint *)(lVar3 + 0x18), uVar4 < param_2) {
        plVar1 = (long *)(lVar3 + 0x10);
        lVar3 = *plVar1;
        if (*plVar1 == 0) {
          if (lVar2 == 0) {
            return;
          }
          uVar4 = *(uint *)(lVar2 + 0x18);
          goto LAB_100028bc8;
        }
      }
      plVar1 = (long *)(lVar3 + 8);
      lVar2 = lVar3;
      lVar3 = *plVar1;
    } while (*plVar1 != 0);
LAB_100028bc8:
    if (uVar4 <= param_2) {
      if (1 < *(uint *)pQVar6) {
        FUN_10002dc50((undefined8 *)(param_1 + 0x30));
        pQVar6 = *(QMapNodeBase **)(param_1 + 0x30);
      }
      lVar2 = *(long *)(pQVar6 + 0x10);
      lVar3 = 0;
      if (*(long *)(pQVar6 + 0x10) != 0) {
        do {
          while (lVar5 = lVar2, uVar4 = *(uint *)(lVar5 + 0x18), param_2 <= uVar4) {
            lVar2 = *(long *)(lVar5 + 8);
            lVar3 = lVar5;
            if (*(long *)(lVar5 + 8) == 0) goto LAB_100028c1b;
          }
          lVar2 = *(long *)(lVar5 + 0x10);
        } while (*(long *)(lVar5 + 0x10) != 0);
        if (lVar3 == 0) {
          return;
        }
        uVar4 = *(uint *)(lVar3 + 0x18);
        lVar5 = lVar3;
LAB_100028c1b:
        if (uVar4 <= param_2) {
          plVar1 = *(long **)(lVar5 + 0x20);
          QMapDataBase::freeNodeAndRebalance(pQVar6);
          if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100028c37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar1 + 0x20))(plVar1);
            return;
          }
        }
      }
    }
  }
  return;
}

