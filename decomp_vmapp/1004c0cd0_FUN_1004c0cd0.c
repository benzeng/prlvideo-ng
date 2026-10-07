
void FUN_1004c0cd0(undefined8 *param_1)

{
  FUN_1004c0650();
  FUN_100519220(param_1 + 5);
  *param_1 = &PTR_FUN_100bc2d58;
  param_1[5] = &PTR_FUN_100bc2db0;
  if (DAT_1011c3698 != 0) {
    FUN_10051a6b0(DAT_1011c3698 + 0x10f0,5,param_1 + 5);
  }
  return;
}

