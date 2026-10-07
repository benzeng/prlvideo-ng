
void FUN_10004e890(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_100ba83f8;
  param_1[5] = &PTR_FUN_100ba8450;
  FUN_100050610(&DAT_1011c3610,0);
  QMutex::lock();
  lVar1 = param_1[0x11];
  lVar2 = 0;
  if (lVar1 != 0) {
    param_1[0x11] = 0;
    lVar2 = lVar1;
  }
  FUN_100050750(param_1 + 0xf);
  *(undefined1 *)(param_1 + 0x10) = 0;
  QMutex::unlock();
  if (lVar2 != 0) {
    FUN_1004c07d0(param_1,lVar2,0xf0000000);
  }
  FUN_100519360(param_1[0xd] + 0x10f0,8);
  FUN_1000506b0(param_1 + 0xf);
  QMutex::~QMutex((QMutex *)(param_1 + 0xe));
  FUN_1005192c0(param_1 + 5);
  FUN_1004c0680(param_1);
  return;
}

