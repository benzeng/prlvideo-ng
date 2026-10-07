
void FUN_100047cc0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100ba82c8;
  param_1[5] = &PTR_FUN_100ba8330;
  param_1[0xd] = &PTR_FUN_100ba8360;
  FUN_10004dd60(&DAT_1011c35f0,0);
  QMutex::lock();
  *(undefined4 *)(param_1 + 0x24) = 0xf0000000;
  QMutex::unlock();
  FUN_100040d30(param_1 + 0xd);
  FUN_100519360(param_1[0x22] + 0x10f0,7);
  FUN_10004dfb0(param_1 + 0x25);
  QMutex::~QMutex((QMutex *)(param_1 + 0x23));
  FUN_1000411a0(param_1 + 0xd);
  FUN_1005192c0(param_1 + 5);
  FUN_1004c0680(param_1);
  return;
}

