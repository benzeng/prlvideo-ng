
void FUN_100d15490(long param_1)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = PTR_shared_null_1021e1288;
  auVar2._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar2._0_8_ = PTR_shared_null_1021e1288;
  auVar2._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x10) = auVar2;
  *(undefined1 (*) [16])(param_1 + 0x20) = auVar2;
  *(undefined **)(param_1 + 0x30) = puVar1;
  FUN_100d155d0();
  return;
}

