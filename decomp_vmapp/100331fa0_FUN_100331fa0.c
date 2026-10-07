
undefined8 FUN_100331fa0(long param_1,ulong *param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0xf0000003;
  if (param_3 == 0x80) {
    uVar3 = param_2[1];
    if (param_2[1] == 0) {
      uVar3 = *param_2;
    }
    uVar7 = 0;
    uVar6 = 0;
    if (*(long **)(param_1 + 0x28) != (long *)0x0) {
      plVar2 = *(long **)(param_1 + 0x28);
      plVar5 = (long *)(param_1 + 0x28);
      do {
        while (plVar4 = plVar2, uVar3 <= (ulong)plVar4[4]) {
          plVar2 = (long *)*plVar4;
          plVar5 = plVar4;
          if ((long *)*plVar4 == (long *)0x0) goto LAB_100332020;
        }
        plVar1 = plVar4 + 1;
        plVar4 = plVar5;
        plVar2 = (long *)*plVar1;
      } while ((long *)*plVar1 != (long *)0x0);
LAB_100332020:
      if ((((plVar4 != (long *)(param_1 + 0x28)) && ((ulong)plVar4[4] <= uVar3)) &&
          (uVar7 = uVar6, plVar4[5] != 0)) &&
         (FUN_10035adb0(plVar4[5],param_2), (int)param_2[0xf] == 1)) {
        if ((*(uint *)((long)param_2 + 0x74) < *(uint *)(*(long *)(param_1 + 0x10) + 0x928)) &&
           (*(int *)((long)param_2 + 0x7c) == 4)) {
          *(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0x920) +
                  (ulong)*(uint *)((long)param_2 + 0x74)) = (int)param_2[0xe];
        }
      }
    }
  }
  return uVar7;
}

