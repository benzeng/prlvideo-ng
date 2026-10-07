
void FUN_1005565f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  *param_1 = &PTR_FUN_100bc57d0;
  param_1[4] = param_5;
  param_1[5] = param_6;
  QThread::QThread((QThread *)(param_1 + 6),(QObject *)0x0);
  *param_1 = &PTR_FUN_100bc5850;
  param_1[6] = &PTR_metaObject_100bc58d8;
  param_1[8] = &PTR_FUN_100bc5950;
  param_1[9] = &PTR_FUN_100bc59a8;
  QMutex::QMutex((QMutex *)(param_1 + 10),0);
  QWaitCondition::QWaitCondition((QWaitCondition *)(param_1 + 0xb));
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  QWaitCondition::QWaitCondition((QWaitCondition *)(param_1 + 0xe));
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0xfffffffdfffffffd;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  return;
}

