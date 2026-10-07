
void FUN_100542110(undefined8 *param_1)

{
  FUN_1004c0650();
  FUN_100519220(param_1 + 5);
  *param_1 = &PTR_FUN_100bc5378;
  param_1[5] = &PTR_FUN_100bc53d0;
  param_1[0xd] = PTR_shared_null_100ba2188;
  QMutex::QMutex((QMutex *)(param_1 + 0xe),0);
  *(undefined4 *)(param_1 + 0xf) = 0;
  FUN_1004c0790(param_1,0x9030,0x9030);
  FUN_10051a6b0(DAT_1011c3698 + 0x10f0,0x12,param_1 + 5);
  return;
}

