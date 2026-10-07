
undefined8 FUN_100332080(long param_1,ulong *param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  
  uVar3 = 0xf0000003;
  if (((0x3b < param_3) && (((ulong)param_3 - 0x3c & 0xf) == 0)) &&
     ((ulong)param_3 - 0x3c >> 4 == (ulong)(uint)param_2[5])) {
    if (*(long **)(param_1 + 0x28) != (long *)0x0) {
      plVar2 = *(long **)(param_1 + 0x28);
      plVar5 = (long *)(param_1 + 0x28);
      do {
        while (plVar4 = plVar2, *param_2 <= (ulong)plVar4[4]) {
          plVar2 = (long *)*plVar4;
          plVar5 = plVar4;
          if ((long *)*plVar4 == (long *)0x0) goto LAB_100332101;
        }
        plVar1 = plVar4 + 1;
        plVar4 = plVar5;
        plVar2 = (long *)*plVar1;
      } while ((long *)*plVar1 != (long *)0x0);
LAB_100332101:
      if (((plVar4 != (long *)(param_1 + 0x28)) && ((ulong)plVar4[4] <= *param_2)) &&
         (plVar4[5] != 0)) {
        FUN_10035ac30(plVar4[5],param_2,(long)param_2 + 0x3c);
      }
    }
    uVar3 = 0;
    if (*(int *)((long)param_2 + 0x34) == 1) {
      if (((uint)param_2[6] < *(uint *)(*(long *)(param_1 + 0x10) + 0x928)) &&
         ((int)param_2[7] == 4)) {
        *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x920) + (ulong)(uint)param_2[6]) =
             *(undefined4 *)((long)param_2 + 0x2c);
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}

