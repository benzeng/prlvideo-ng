
void FUN_1005b6730(undefined4 *param_1)

{
  undefined1 auVar1 [16];
  
  *param_1 = 0;
  auVar1._8_4_ = (int)PTR_shared_null_100ba20d0;
  auVar1._0_8_ = PTR_shared_null_100ba20d0;
  auVar1._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 2) = auVar1;
  FUN_1007d6870(param_1 + 6);
  *(undefined8 *)(param_1 + 10) = 0;
  return;
}

