
void FUN_100374690(undefined8 *param_1,undefined8 *param_2)

{
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  FUN_10038e870(param_1 + 0x13,param_1 + 3,0x80);
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  FUN_10038e870(param_1 + 0x2b,param_1 + 0x1b,0x80);
  FUN_10038e870(param_1 + 0x40,param_1 + 0x30,0x80);
  if (param_1 != param_2) {
    FUN_100374320(param_1,*param_2,param_2[1]);
    FUN_100374320(param_1 + 0x18,param_2[0x18],param_2[0x19]);
  }
  return;
}

