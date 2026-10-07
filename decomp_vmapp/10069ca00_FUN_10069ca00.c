
undefined1 FUN_10069ca00(long *param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 uVar2;
  
  if (*(int *)((long)param_1 + 0x14) == -1) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_1007db390(param_1[1],param_2);
    if (iVar1 < 0) {
      *(undefined4 *)((long)param_1 + 0x14) = 0xffffffff;
      param_1 = (long *)*param_1;
      (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x1a0))
                ((long)param_1 + *(long *)(*param_1 + -0x18));
      uVar2 = 1;
    }
    else {
      uVar2 = 1;
      if (iVar1 != 0) {
        iVar1 = FUN_1007db270(param_1[1],param_2);
        if (iVar1 < 0) {
          *(undefined4 *)((long)param_1 + 0x14) = 0xffffffff;
          param_1 = (long *)*param_1;
          (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x1a0))
                    ((long)param_1 + *(long *)(*param_1 + -0x18));
          uVar2 = 0;
        }
        else {
          *(int *)(param_1 + 2) = (int)param_1[2] + -1;
        }
      }
    }
  }
  return uVar2;
}

