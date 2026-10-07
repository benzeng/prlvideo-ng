
undefined8 FUN_100331ed0(long param_1,ulong *param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  
  uVar3 = 0xf0000003;
  if (((0x5f < param_3) && (((ulong)param_3 - 0x60 & 0xf) == 0)) &&
     ((ulong)param_3 - 0x60 >> 4 == (ulong)*(uint *)((long)param_2 + 0x24))) {
    if (*(long **)(param_1 + 0x28) != (long *)0x0) {
      plVar2 = *(long **)(param_1 + 0x28);
      plVar5 = (long *)(param_1 + 0x28);
      do {
        while (plVar4 = plVar2, *param_2 <= (ulong)plVar4[4]) {
          plVar2 = (long *)*plVar4;
          plVar5 = plVar4;
          if ((long *)*plVar4 == (long *)0x0) goto LAB_100331f51;
        }
        plVar1 = plVar4 + 1;
        plVar4 = plVar5;
        plVar2 = (long *)*plVar1;
      } while ((long *)*plVar1 != (long *)0x0);
LAB_100331f51:
      if (((plVar4 != (long *)(param_1 + 0x28)) && ((ulong)plVar4[4] <= *param_2)) &&
         (plVar4[5] != 0)) {
        FUN_10035a5e0(plVar4[5],param_2,param_2 + 0xc);
      }
    }
    uVar3 = 0;
    if ((int)param_2[10] == 1) {
      if ((*(uint *)((long)param_2 + 0x4c) < *(uint *)(*(long *)(param_1 + 0x10) + 0x928)) &&
         (*(int *)((long)param_2 + 0x54) == 4)) {
        *(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0x920) +
                (ulong)*(uint *)((long)param_2 + 0x4c)) = (int)param_2[9];
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}

