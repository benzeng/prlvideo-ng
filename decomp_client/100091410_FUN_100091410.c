
void FUN_100091410(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  QMapNodeBase *pQVar6;
  
  pQVar6 = *(QMapNodeBase **)(param_1 + 0x30);
  if (*(long *)(pQVar6 + 0x10) != 0) {
    lVar2 = *(long *)(pQVar6 + 0x10);
    lVar3 = 0;
    do {
      while (lVar5 = lVar2, uVar4 = *(ulong *)(lVar5 + 0x18), *(ulong *)(param_2 + 8) <= uVar4) {
        lVar2 = *(long *)(lVar5 + 8);
        lVar3 = lVar5;
        if (*(long *)(lVar5 + 8) == 0) goto LAB_10009146b;
      }
      lVar2 = *(long *)(lVar5 + 0x10);
    } while (*(long *)(lVar5 + 0x10) != 0);
    if (lVar3 == 0) {
      return;
    }
    uVar4 = *(ulong *)(lVar3 + 0x18);
LAB_10009146b:
    if (uVar4 <= *(ulong *)(param_2 + 8)) {
      if (1 < *(uint *)pQVar6) {
        FUN_1000957d0((undefined8 *)(param_1 + 0x30));
        pQVar6 = *(QMapNodeBase **)(param_1 + 0x30);
      }
      if (*(long *)(pQVar6 + 0x10) != 0) {
        lVar2 = *(long *)(pQVar6 + 0x10);
        lVar3 = 0;
        do {
          while (lVar5 = lVar2, uVar4 = *(ulong *)(lVar5 + 0x18), *(ulong *)(param_2 + 8) <= uVar4)
          {
            lVar2 = *(long *)(lVar5 + 8);
            lVar3 = lVar5;
            if (*(long *)(lVar5 + 8) == 0) goto LAB_1000914ce;
          }
          lVar2 = *(long *)(lVar5 + 0x10);
        } while (*(long *)(lVar5 + 0x10) != 0);
        if (lVar3 != 0) {
          uVar4 = *(ulong *)(lVar3 + 0x18);
          lVar5 = lVar3;
LAB_1000914ce:
          if (uVar4 <= *(ulong *)(param_2 + 8)) {
            plVar1 = *(long **)(lVar5 + 0x20);
            QMapDataBase::freeNodeAndRebalance(pQVar6);
            *(undefined1 *)(plVar1 + 8) = 1;
            if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001000914fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar1 + 0x20))(plVar1);
              return;
            }
            return;
          }
        }
      }
      DAT_00000040 = 1;
    }
  }
  return;
}

