
void FUN_1000ab5d0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    for (lVar1 = 0xd; lVar1 != 0; lVar1 = lVar1 + -1) {
      *param_1 = *param_2;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
    return;
  }
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  return;
}

