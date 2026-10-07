
undefined8 FUN_100331e40(long param_1,ulong *param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  
  uVar5 = 0xf0000003;
  if (param_3 == 0x1c) {
    uVar5 = 0;
    if (*(long **)(param_1 + 0x28) != (long *)0x0) {
      plVar2 = *(long **)(param_1 + 0x28);
      plVar3 = (long *)(param_1 + 0x28);
      do {
        while (plVar4 = plVar2, *param_2 <= (ulong)plVar4[4]) {
          plVar2 = (long *)*plVar4;
          plVar3 = plVar4;
          if ((long *)*plVar4 == (long *)0x0) goto LAB_100331ea0;
        }
        plVar1 = plVar4 + 1;
        plVar2 = (long *)*plVar1;
        plVar4 = plVar3;
      } while ((long *)*plVar1 != (long *)0x0);
LAB_100331ea0:
      if (((plVar4 != (long *)(param_1 + 0x28)) && ((ulong)plVar4[4] <= *param_2)) &&
         (uVar5 = 0, plVar4[5] != 0)) {
        FUN_100359800();
      }
    }
  }
  return uVar5;
}

