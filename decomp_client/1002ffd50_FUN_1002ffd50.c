
void FUN_1002ffd50(undefined4 *param_1)

{
  undefined1 auVar1 [16];
  
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined **)(param_1 + 4) = PTR_shared_null_1021e1288;
  QPixmap::QPixmap((QPixmap *)(param_1 + 6));
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xf) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x13) = 0;
  *(undefined8 *)(param_1 + 0x11) = 0;
  param_1[0x15] = 0xffffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x18) = 0;
  auVar1._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar1._0_8_ = PTR_shared_null_1021e1288;
  auVar1._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x1a) = auVar1;
  *(undefined1 (*) [16])(param_1 + 0x1e) = auVar1;
  return;
}

