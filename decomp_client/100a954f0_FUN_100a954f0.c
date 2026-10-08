
undefined8 FUN_100a954f0(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  QArrayData *pQVar3;
  char cVar4;
  undefined8 uVar5;
  QArrayData *local_70;
  QString local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  undefined1 local_49;
  undefined1 local_48 [16];
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar2;
  if (*(int *)(param_1 + 0x30) == 2) {
    uVar5 = 0;
    if (*(long *)(param_1 + 0x38) != 0) {
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x10);
    }
    cVar4 = FUN_100a78d70(uVar5,20000);
    if (cVar4 != '\0') {
      uVar5 = 0;
      if (*(long *)(param_1 + 0x38) != 0) {
        uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x10);
      }
      if (lVar2 == local_38) {
        uVar5 = FUN_100a77420(uVar5);
        return uVar5;
      }
      goto LAB_100a95857;
    }
    local_60 = *(QArrayData **)(param_1 + 0x20);
    if (1 < *(int *)local_60 + 1U) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + 1;
      local_49 = *(int *)local_60 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_100df99c0("","IOCommunication",0,"%sCan\'t start proxy management client.",
                  local_58 + *(long *)(local_58 + 0x10));
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_49 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_100a95649;
      }
      QArrayData::deallocate(local_58,1,8);
    }
LAB_100a95649:
    uVar5 = 0;
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_49 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_100a9583d;
      }
      QArrayData::deallocate(local_60,2,8);
    }
  }
  else {
    QMutex::lock();
    uVar1 = param_1 + 0x58;
    QMutex::lock();
    uVar5 = 1;
    if (*(int *)(param_1 + 0x68) == 3) {
LAB_100a95825:
      QMutex::unlock();
    }
    else {
      if (*(int *)(param_1 + 0x68) == 1) {
        QWaitCondition::wait((QMutex *)(param_1 + 0x60),uVar1);
        QThread::wait(param_1);
      }
      else if (*(int *)(param_1 + 0x68) == 0) {
        QThread::wait(param_1);
      }
      FUN_100dda3c0(local_48);
      FUN_100dda260(&local_68,local_48);
      QString::operator=((QString *)(param_1 + 0x48),&local_68);
      if (*(int *)local_68.field0_0x0 != -1) {
        if (*(int *)local_68.field0_0x0 != 0) {
          LOCK();
          *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
          local_49 = *(int *)local_68.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_100a956f1;
        }
        QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
      }
LAB_100a956f1:
      *(undefined4 *)(param_1 + 0x68) = 2;
      QThread::start(param_1,7);
      cVar4 = QThread::isRunning();
      if (cVar4 == '\0') {
        pQVar3 = *(QArrayData **)(param_1 + 0x20);
        if (1 < *(int *)pQVar3 + 1U) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + 1;
          local_49 = *(int *)pQVar3 != 0;
          UNLOCK();
        }
        QString::toLocal8Bit();
        FUN_100df99c0("","IOCommunication",0,"%sERROR: thread has not been started!",
                      local_70 + *(long *)(local_70 + 0x10));
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_49 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_100a957eb;
          }
          QArrayData::deallocate(local_70,1,8);
        }
LAB_100a957eb:
        if (*(int *)pQVar3 != -1) {
          if (*(int *)pQVar3 != 0) {
            LOCK();
            *(int *)pQVar3 = *(int *)pQVar3 + -1;
            local_49 = *(int *)pQVar3 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_100a9581b;
          }
          QArrayData::deallocate(pQVar3,2,8);
        }
LAB_100a9581b:
        *(undefined4 *)(param_1 + 0x68) = 0;
        uVar5 = 0;
        goto LAB_100a95825;
      }
      QWaitCondition::wait((QMutex *)(param_1 + 0x60),uVar1);
      if (*(int *)(param_1 + 0x68) == 3) goto LAB_100a95825;
      QMutex::unlock();
      QThread::wait(param_1);
      uVar5 = 0;
      if ((uVar1 & 0xfffffffffffffffe) != 0) {
        uVar5 = 0;
        QMutex::lock();
        goto LAB_100a95825;
      }
    }
    QMutex::unlock();
  }
LAB_100a9583d:
  if (lVar2 == local_38) {
    return uVar5;
  }
LAB_100a95857:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

