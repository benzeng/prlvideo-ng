
void FUN_10038b610(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  FUN_100387490();
  *param_1 = &PTR_FUN_100bbd158;
  param_1[0x1a] = param_6;
  param_1[0x1b] = param_8;
  *(undefined4 *)((long)param_1 + 0xe4) = 0;
  param_1[0x1d] = param_5;
  param_1[0x1e] = param_4;
  (*DAT_1011c5e38)(1,param_1 + 0x1c);
  return;
}

