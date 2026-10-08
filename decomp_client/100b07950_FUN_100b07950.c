
void FUN_100b07950(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  
  auVar1._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar1._0_8_ = PTR_shared_null_1021e1288;
  auVar1._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *param_1 = auVar1;
  *(undefined2 *)(param_1[1] + 4) = 0;
  param_1[2][8] = 0;
  *(undefined8 *)param_1[2] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0;
  *(undefined **)param_1[3] = PTR_shared_null_1021e15e8;
  return;
}

