
void FUN_100ab66b0(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  
  *param_1 = &PTR_FUN_102239e60;
  auVar1._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar1._0_8_ = PTR_shared_null_1021e1288;
  auVar1._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x34) = auVar1;
  ___bzero(param_1 + 1,0x198);
  return;
}

