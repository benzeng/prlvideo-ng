
void FUN_1004db3e0(undefined8 *param_1,undefined8 param_2)

{
  FUN_1004e5bf0();
  *param_1 = &PTR_FUN_100bc3280;
  param_1[8] = PTR_shared_null_100ba20d0;
  *(undefined1 *)((long)param_1 + 0x49) = 0;
  FUN_1004f8740(param_2,param_1 + 8);
  FUN_1004f6be0(param_2,param_1 + 9);
  return;
}

