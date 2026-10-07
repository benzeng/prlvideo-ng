
undefined8 FUN_10034d510(long param_1,long param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  bool bVar7;
  
  uVar2 = 9;
  if (0xb < *(uint *)(param_2 + 4)) {
    uVar2 = 4;
    if (*(long **)(param_1 + 0x12870) != (long *)0x0) {
      plVar4 = *(long **)(param_1 + 0x12870);
      plVar6 = (long *)(param_1 + 0x12870);
      do {
        while (plVar5 = plVar4, *(uint *)(param_2 + 8) <= *(uint *)(plVar5 + 4)) {
          plVar4 = (long *)*plVar5;
          plVar6 = plVar5;
          if ((long *)*plVar5 == (long *)0x0) goto LAB_10034d580;
        }
        plVar3 = plVar5 + 1;
        plVar5 = plVar6;
        plVar4 = (long *)*plVar3;
      } while ((long *)*plVar3 != (long *)0x0);
LAB_10034d580:
      if ((plVar5 != (long *)(param_1 + 0x12870)) &&
         (*(uint *)(plVar5 + 4) <= *(uint *)(param_2 + 8))) {
        pvVar1 = (void *)plVar5[5];
        if (*(void **)(param_1 + 0x2760) == pvVar1) {
          *(undefined8 *)(param_1 + 0x2760) = 0;
          *(undefined1 *)(param_1 + 0x2768) = 0;
        }
        FUN_100365c30(*(undefined8 *)(param_1 + 0x2778),pvVar1);
        if (pvVar1 != (void *)0x0) {
          operator_delete(pvVar1);
        }
        plVar4 = plVar5;
        plVar6 = (long *)plVar5[1];
        if ((long *)plVar5[1] == (long *)0x0) {
          do {
            plVar3 = (long *)plVar4[2];
            bVar7 = (long *)*plVar3 != plVar4;
            plVar4 = plVar3;
          } while (bVar7);
        }
        else {
          do {
            plVar3 = plVar6;
            plVar6 = (long *)*plVar3;
          } while ((long *)*plVar3 != (long *)0x0);
        }
        if (*(long **)(param_1 + 0x12868) == plVar5) {
          *(long **)(param_1 + 0x12868) = plVar3;
        }
        *(long *)(param_1 + 0x12878) = *(long *)(param_1 + 0x12878) + -1;
        FUN_1000e86c0(*(undefined8 *)(param_1 + 0x12870),plVar5);
        operator_delete(plVar5);
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

