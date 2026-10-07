
undefined8 FUN_10034b690(long param_1,long param_2)

{
  void *pvVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  bool bVar7;
  
  uVar6 = 9;
  if (0xb < *(uint *)(param_2 + 4)) {
    uVar6 = 0;
    if (*(long **)(param_1 + 0xa818) != (long *)0x0) {
      plVar3 = *(long **)(param_1 + 0xa818);
      plVar4 = (long *)(param_1 + 0xa818);
      do {
        while (plVar5 = plVar3, *(uint *)(param_2 + 8) <= *(uint *)(plVar5 + 4)) {
          plVar3 = (long *)*plVar5;
          plVar4 = plVar5;
          if ((long *)*plVar5 == (long *)0x0) goto LAB_10034b700;
        }
        plVar2 = plVar5 + 1;
        plVar5 = plVar4;
        plVar3 = (long *)*plVar2;
      } while ((long *)*plVar2 != (long *)0x0);
LAB_10034b700:
      if ((plVar5 != (long *)(param_1 + 0xa818)) &&
         (*(uint *)(plVar5 + 4) <= *(uint *)(param_2 + 8))) {
        pvVar1 = (void *)plVar5[5];
        if ((*(void **)(param_1 + 0x648) == pvVar1) && (*(void **)(param_1 + 0x648) != (void *)0x0))
        {
          *(undefined8 *)(param_1 + 0x648) = 0;
          *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 2;
        }
        if (pvVar1 != (void *)0x0) {
          if (*(long *)((long)pvVar1 + 8) != 0) {
            operator_delete__((void *)(*(long *)((long)pvVar1 + 8) + -8));
          }
          operator_delete(pvVar1);
        }
        plVar3 = plVar5;
        plVar4 = (long *)plVar5[1];
        if ((long *)plVar5[1] == (long *)0x0) {
          do {
            plVar2 = (long *)plVar3[2];
            bVar7 = (long *)*plVar2 != plVar3;
            plVar3 = plVar2;
          } while (bVar7);
        }
        else {
          do {
            plVar2 = plVar4;
            plVar4 = (long *)*plVar2;
          } while ((long *)*plVar2 != (long *)0x0);
        }
        if (*(long **)(param_1 + 0xa810) == plVar5) {
          *(long **)(param_1 + 0xa810) = plVar2;
        }
        *(long *)(param_1 + 0xa820) = *(long *)(param_1 + 0xa820) + -1;
        FUN_1000e86c0(*(undefined8 *)(param_1 + 0xa818),plVar5);
        operator_delete(plVar5);
        uVar6 = 0;
      }
    }
  }
  return uVar6;
}

