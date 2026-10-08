
void FUN_100d14620(undefined1 (*param_1) [16])

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = PTR_shared_null_1021e1288;
  auVar2._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar2._0_8_ = PTR_shared_null_1021e1288;
  auVar2._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *param_1 = auVar2;
  *(undefined **)(param_1[8] + 8) = puVar1;
  FUN_100d14700();
  return;
}

