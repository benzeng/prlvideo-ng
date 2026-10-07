
undefined1 FUN_1007cdc00(long param_1)

{
  QArrayData *pQVar1;
  undefined1 uVar2;
  QArrayData *local_40;
  QArrayData *local_30;
  
  QMutex::lock();
  if ((*(int *)(param_1 + 0xf0) != 3) || (*(char *)(param_1 + 0x128) != '\0')) {
    if ((*(int *)(param_1 + 0xf0) == 3) || (*(int *)(param_1 + 0xf0) == 0)) {
      *(undefined8 *)(param_1 + 0x140) = 0;
      *(undefined8 *)(param_1 + 0x138) = 0;
      *(undefined8 *)(param_1 + 0x130) = 0;
      uVar2 = 1;
      goto LAB_1007cdd0f;
    }
    pQVar1 = *(QArrayData **)(param_1 + 0x10);
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_1008e3970("","IOCommunication",0,"%sCan\'t deinit SSL. Thread state is %d!",
                  local_40 + *(long *)(local_40 + 0x10),*(undefined4 *)(param_1 + 0xf0));
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        if (*(int *)local_40 != 0) goto LAB_1007cdcd9;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_1007cdcd9:
    if (*(int *)pQVar1 == -1) {
      uVar2 = 0;
    }
    else {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        UNLOCK();
        if (*(int *)pQVar1 != 0) {
          uVar2 = 0;
          goto LAB_1007cdd0f;
        }
      }
      QArrayData::deallocate(pQVar1,2,8);
      uVar2 = 0;
    }
    goto LAB_1007cdd0f;
  }
  pQVar1 = *(QArrayData **)(param_1 + 0x10);
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    UNLOCK();
  }
  QString::toLocal8Bit();
  FUN_1008e3970("","IOCommunication",0,
                "%sCan\'t deinit SSL. Write thread is started but not paused!",
                local_30 + *(long *)(local_30 + 0x10));
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) goto LAB_1007cdda4;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_1007cdda4:
  if (*(int *)pQVar1 == -1) {
    uVar2 = 0;
  }
  else {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) {
        uVar2 = 0;
        goto LAB_1007cdd0f;
      }
    }
    QArrayData::deallocate(pQVar1,2,8);
    uVar2 = 0;
  }
LAB_1007cdd0f:
  QMutex::unlock();
  return uVar2;
}

