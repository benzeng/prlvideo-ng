
void FUN_1008c0f90(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 5) = 0xffffffff;
    if (param_1[6] != 0) {
      FUN_100885590(param_1[6],FUN_100899890);
      param_1[6] = 0;
    }
    FUN_10081e1a0(param_1);
    return;
  }
  return;
}

