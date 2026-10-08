
undefined8 FUN_100cb4340(long *param_1)

{
  undefined8 uVar1;
  int in_R8D;
  
  uVar1 = 0xffffffff;
  if (*(code **)(*param_1 + 0x28) != (code *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x28))(param_1);
    if (0 < (int)uVar1) {
      param_1[3] = param_1[3] + (long)in_R8D;
      param_1[4] = param_1[4] + (long)(int)uVar1;
    }
  }
  return uVar1;
}

