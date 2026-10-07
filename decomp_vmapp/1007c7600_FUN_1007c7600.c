
undefined1
FUN_1007c7600(ulong param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4,void *param_5
             ,undefined8 param_6,undefined4 *param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  QArrayData *pQVar3;
  char cVar4;
  undefined1 uVar5;
  QArrayData *local_40;
  
  QMutex::lock();
  uVar1 = param_1 + 0x110;
  QMutex::lock();
  if (*(int *)(param_1 + 0xf0) == 3) {
    uVar5 = 1;
  }
  else {
    if (*(int *)(param_1 + 0xf0) == 1) {
      QWaitCondition::wait((QMutex *)(param_1 + 0x108),uVar1);
      QThread::wait(param_1);
    }
    else if (*(int *)(param_1 + 0xf0) == 0) {
      QThread::wait(param_1);
    }
    *(undefined4 *)(param_1 + 0xf8) = param_2;
    uVar2 = *param_3;
    *(undefined8 *)(param_1 + 0x3c) = param_3[1];
    *(undefined8 *)(param_1 + 0x34) = uVar2;
    uVar2 = *param_4;
    *(undefined8 *)(param_1 + 0x4c) = param_4[1];
    *(undefined8 *)(param_1 + 0x44) = uVar2;
    _memcpy((void *)(param_1 + 0x54),param_5,0x48);
    FUN_100792f60(param_1 + 0xa0,param_6);
    *(undefined4 *)(param_1 + 0xd0) = *param_7;
    *(undefined4 *)(param_1 + 0xd4) = param_7[1];
    *(undefined4 *)(param_1 + 0xf0) = 2;
    *(undefined4 *)(param_1 + 0xf4) = 9;
    QThread::start(param_1,7);
    cVar4 = QThread::isRunning();
    if (cVar4 == '\0') {
      pQVar3 = *(QArrayData **)(param_1 + 0x10);
      if (1 < *(int *)pQVar3 + 1U) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + 1;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_1008e3970("","IOCommunication",0,"%sERROR: thread has not been started!",
                    local_40 + *(long *)(local_40 + 0x10));
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          UNLOCK();
          if (*(int *)local_40 != 0) goto LAB_1007c7813;
        }
        QArrayData::deallocate(local_40,1,8);
      }
LAB_1007c7813:
      if (*(int *)pQVar3 != -1) {
        if (*(int *)pQVar3 != 0) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          UNLOCK();
          if (*(int *)pQVar3 != 0) goto LAB_1007c7843;
        }
        QArrayData::deallocate(pQVar3,2,8);
      }
LAB_1007c7843:
      *(undefined4 *)(param_1 + 0xf0) = 0;
    }
    else {
      QWaitCondition::wait((QMutex *)(param_1 + 0x108),uVar1);
      uVar5 = 1;
      if (*(int *)(param_1 + 0xf0) == 3) goto LAB_1007c7850;
      QMutex::unlock();
      QThread::wait(param_1);
      if ((uVar1 & 0xfffffffffffffffe) == 0) {
        uVar5 = 0;
        goto LAB_1007c785c;
      }
      QMutex::lock();
    }
    uVar5 = 0;
  }
LAB_1007c7850:
  QMutex::unlock();
LAB_1007c785c:
  QMutex::unlock();
  return uVar5;
}

