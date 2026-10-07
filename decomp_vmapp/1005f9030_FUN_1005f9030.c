
void FUN_1005f9030(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  
  FUN_1005f6050();
  *param_1 = &PTR_FUN_100bc74a0;
  FUN_1007d6870((long)param_1 + 0x62);
  param_1[0xf] = PTR_shared_null_100ba20d0;
  *param_1 = &PTR_FUN_100bc7d28;
  param_1[0x10] = 0;
  FUN_1007d6870(param_1 + 0x11);
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)((long)param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0xffffffff;
  param_1[0x16] = 0xff;
  auVar1._8_4_ = (int)PTR_shared_null_100ba2188;
  auVar1._0_8_ = PTR_shared_null_100ba2188;
  auVar1._12_4_ = (int)((ulong)PTR_shared_null_100ba2188 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x17) = auVar1;
  *(undefined1 (*) [16])(param_1 + 0x19) = auVar1;
  return;
}

