
void FUN_1000e5b70(undefined1 (*param_1) [16])

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = PTR_shared_null_1021e1288;
  auVar2._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar2._0_8_ = PTR_shared_null_1021e1288;
  auVar2._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *param_1 = auVar2;
  *(undefined1 (*) [16])(param_1[1] + 8) = auVar2;
  *(undefined **)(param_1[2] + 8) = puVar1;
  FUN_100d72f10(param_1 + 3);
  *(undefined ***)param_1[3] = &PTR_FUN_10226cda0;
  *(undefined8 *)param_1[4] = 0;
  return;
}

