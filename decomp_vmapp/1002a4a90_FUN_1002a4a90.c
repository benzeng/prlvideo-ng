
void FUN_1002a4a90(QThread *param_1,undefined4 param_2)

{
  long lVar1;
  
  QThread::QThread(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_metaObject_100bb2a70;
  param_1[0x10] = (QThread)0x0;
  QMutex::QMutex((QMutex *)(param_1 + 0x18),0);
  QMutex::QMutex((QMutex *)(param_1 + 0xc28),0);
  QWaitCondition::QWaitCondition((QWaitCondition *)(param_1 + 0xc30));
  *(undefined4 *)(param_1 + 0xc38) = param_2;
  *(undefined4 *)(param_1 + 0xc20) = 0;
  lVar1 = 0x35;
  do {
    *(undefined4 *)(param_1 + lVar1 + -0x15) = 0x17;
    *(undefined4 *)(param_1 + lVar1 + -0x11) = 0;
    param_1[lVar1 + -0xc] = (QThread)0x0;
    param_1[lVar1 + -0xd] = (QThread)0x0;
    *(undefined4 *)(param_1 + lVar1 + -9) = 0x17;
    *(undefined4 *)(param_1 + lVar1 + -5) = 0;
    param_1[lVar1] = (QThread)0x0;
    param_1[lVar1 + -1] = (QThread)0x0;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0xc35);
  return;
}

