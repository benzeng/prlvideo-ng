
undefined8 FUN_1008d7a80(long *param_1)

{
  undefined8 uVar1;
  int in_R8D;
  
  uVar1 = 0xffffffff;
  if (*(code **)(*param_1 + 0x20) != (code *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x20))(param_1);
    if (0 < (int)uVar1) {
      param_1[1] = param_1[1] + (long)in_R8D;
      param_1[2] = param_1[2] + (long)(int)uVar1;
    }
  }
  return uVar1;
}

