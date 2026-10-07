
undefined1 FUN_10079e3e0(ulong param_1,undefined4 param_2)

{
  ulong uVar1;
  QArrayData *pQVar2;
  char cVar3;
  undefined1 uVar4;
  QArrayData *local_40;
  
  QMutex::lock();
  uVar1 = param_1 + 0x88;
  QMutex::lock();
  uVar4 = 1;
  if (*(int *)(param_1 + 0xa8) != 3) {
    if (*(int *)(param_1 + 0xa8) == 1) {
      QWaitCondition::wait((QMutex *)(param_1 + 0x90),uVar1);
      QThread::wait(param_1);
    }
    else if (*(int *)(param_1 + 0xa8) == 0) {
      QThread::wait(param_1);
    }
    *(undefined4 *)(param_1 + 0xac) = param_2;
    *(undefined4 *)(param_1 + 0xa4) = 0;
    *(undefined4 *)(param_1 + 0xa8) = 2;
    QThread::start(param_1,7);
    cVar3 = QThread::isRunning();
    if (cVar3 == '\0') {
      pQVar2 = *(QArrayData **)(param_1 + 0x18);
      if (1 < *(int *)pQVar2 + 1U) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + 1;
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
          if (*(int *)local_40 != 0) goto LAB_10079e58a;
        }
        QArrayData::deallocate(local_40,1,8);
      }
LAB_10079e58a:
      if (*(int *)pQVar2 != -1) {
        if (*(int *)pQVar2 != 0) {
          LOCK();
          *(int *)pQVar2 = *(int *)pQVar2 + -1;
          UNLOCK();
          if (*(int *)pQVar2 != 0) goto LAB_10079e5ba;
        }
        QArrayData::deallocate(pQVar2,2,8);
      }
LAB_10079e5ba:
      *(undefined4 *)(param_1 + 0xa8) = 0;
    }
    else {
      QWaitCondition::wait((QMutex *)(param_1 + 0x90),uVar1);
      if (*(int *)(param_1 + 0xa8) == 3) goto LAB_10079e5c7;
      QMutex::unlock();
      QThread::wait(param_1);
      if ((uVar1 & 0xfffffffffffffffe) == 0) {
        uVar4 = 0;
        goto LAB_10079e5d3;
      }
      QMutex::lock();
    }
    uVar4 = 0;
  }
LAB_10079e5c7:
  QMutex::unlock();
LAB_10079e5d3:
  QMutex::unlock();
  return uVar4;
}

