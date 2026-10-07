
undefined8 FUN_1003f3d90(long *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffff;
  if (*(int *)((long)param_1 + 0x8c) == 0) {
    (**(code **)(*param_1 + 0xa0))(param_1);
    FUN_1003f2330(param_1);
    uVar1 = 0;
  }
  return uVar1;
}

