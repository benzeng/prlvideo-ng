
void FUN_10004e780(undefined8 *param_1)

{
  FUN_1004c0650();
  FUN_100519220(param_1 + 5);
  *param_1 = &PTR_FUN_100ba83f8;
  param_1[5] = &PTR_FUN_100ba8450;
  param_1[0xd] = DAT_1011c3698;
  QMutex::QMutex((QMutex *)(param_1 + 0xe),0);
  param_1[0xf] = PTR_shared_null_100ba2188;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  FUN_1004c0790(param_1,0x8340,0x8347);
  FUN_10051a6b0(param_1[0xd] + 0x10f0,8,param_1 + 5);
  FUN_100050610(&DAT_1011c3610,param_1);
  return;
}

