
void FUN_1005f8c20(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  
  FUN_1005f6050();
  *param_1 = &PTR_FUN_100bc7980;
  auVar1._8_4_ = (int)PTR_shared_null_100ba20d0;
  auVar1._0_8_ = PTR_shared_null_100ba20d0;
  auVar1._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0xd) = auVar1;
  *(undefined1 *)(param_1 + 0xc) = 0;
  return;
}

