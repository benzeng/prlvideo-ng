
void FUN_100527120(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._8_4_ = (int)PTR_shared_null_100ba2180;
  auVar1._0_8_ = PTR_shared_null_100ba2180;
  auVar1._12_4_ = (int)((ulong)PTR_shared_null_100ba2180 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x105) = auVar1;
  *(undefined1 (*) [16])(param_1 + 0x107) = auVar1;
  *(undefined4 *)(param_1 + 0x109) = 0;
  *param_1 = param_2;
  ___bzero(param_1 + 1,0x804);
  param_1[0x103] = 0;
  param_1[0x102] = 0;
  return;
}

