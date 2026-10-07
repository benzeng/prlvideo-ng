
undefined8 FUN_1004e6230(long *param_1,char param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x60))();
  if (((int)uVar1 == 0) || (param_2 == '\0')) {
    uVar1 = FUN_1004e3390(param_1[4],param_2);
    if ((int)uVar1 == 0) {
      *(char *)(param_1 + 5) = param_2;
      *(char *)((long)param_1 + 0x29) = param_2;
      uVar1 = 0;
    }
  }
  return uVar1;
}

