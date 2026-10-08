
void FUN_1000e6090(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  
  auVar1._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar1._0_8_ = PTR_shared_null_1021e1288;
  auVar1._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *param_1 = auVar1;
  param_1[1] = auVar1;
  param_1[2] = auVar1;
  FUN_100ab71b0(param_1 + 3);
  *(undefined **)param_1[5] = PTR_shared_null_1021e1288;
  return;
}

