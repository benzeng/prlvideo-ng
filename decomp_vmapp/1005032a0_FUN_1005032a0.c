
void FUN_1005032a0(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  param_1[1] = param_2;
  puVar1 = PTR_shared_null_100ba20d0;
  auVar2._8_4_ = (int)PTR_shared_null_100ba20d0;
  auVar2._0_8_ = PTR_shared_null_100ba20d0;
  auVar2._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 2) = auVar2;
  param_1[9] = puVar1;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 10) = 0x10000;
  param_1[0xb] = puVar1;
  *param_1 = &PTR_FUN_100bc4180;
  *(undefined1 (*) [16])(param_1 + 0xc) = auVar2;
  return;
}

