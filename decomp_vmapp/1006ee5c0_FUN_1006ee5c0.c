
void FUN_1006ee5c0(undefined1 (*param_1) [16])

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = PTR_shared_null_100ba20d0;
  auVar2._8_4_ = (int)PTR_shared_null_100ba20d0;
  auVar2._0_8_ = PTR_shared_null_100ba20d0;
  auVar2._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
  *param_1 = auVar2;
  *(undefined **)param_1[1] = puVar1;
  return;
}

