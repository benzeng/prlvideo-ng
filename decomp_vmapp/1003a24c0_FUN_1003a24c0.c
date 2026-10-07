
void FUN_1003a24c0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_10038e870(param_1 + 4,(long)param_1 + 0xc,0x10);
  FUN_10038e870(param_1 + 0xb,param_1 + 9,0x10);
  param_1[0x10] = param_2;
  FUN_10038e870(param_1 + 0x19,param_1 + 0x11,0x40);
  FUN_10038e870(param_1 + 0x26,param_1 + 0x1e,0x40);
  FUN_10038e870(param_1 + 0x33,param_1 + 0x2b,0x40);
  return;
}

