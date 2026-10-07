
void FUN_100518100(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  
  FUN_1004c0650();
  FUN_100519220(param_1 + 5);
  *param_1 = &PTR_FUN_100bc4938;
  param_1[5] = &PTR_FUN_100bc4990;
  *(undefined1 *)(param_1 + 0xd) = 0;
  auVar1._8_4_ = (int)PTR_shared_null_100ba2188;
  auVar1._0_8_ = PTR_shared_null_100ba2188;
  auVar1._12_4_ = (int)((ulong)PTR_shared_null_100ba2188 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0xe) = auVar1;
  QMutex::QMutex((QMutex *)(param_1 + 0x10),0);
  param_1[0x11] = PTR_shared_null_100ba2188;
  QMutex::QMutex((QMutex *)(param_1 + 0x12),0);
  FUN_1004c0790(param_1,0x9020,0x9021);
  FUN_10051a6b0(DAT_1011c3698 + 0x10f0,0xe,param_1 + 5);
  return;
}

