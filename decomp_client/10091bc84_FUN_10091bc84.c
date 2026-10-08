
void FUN_10091bc84(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 != 0) {
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
    *(undefined4 *)(param_1 + 0x60) = 0x71a;
  }
  ___xmlSimpleError(0x11,2,param_3,0,param_2);
  return;
}

