
void FUN_100d379e0(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  
  auVar1._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar1._0_8_ = PTR_shared_null_1021e1288;
  auVar1._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *param_1 = auVar1;
  param_1[1] = auVar1;
  param_1[2] = auVar1;
  *(undefined8 *)param_1[4] = 0;
  *(undefined8 *)(param_1[3] + 8) = 0;
  FUN_100d37b60();
  return;
}

