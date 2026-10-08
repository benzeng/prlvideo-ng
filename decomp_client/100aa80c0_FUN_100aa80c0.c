
undefined1 FUN_100aa80c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  QArrayData *pQVar1;
  undefined1 uVar2;
  QArrayData *local_50;
  QArrayData *local_40;
  
  QMutex::lock();
  if ((*(int *)(param_1 + 0xf0) != 3) || (*(char *)(param_1 + 0x128) != '\0')) {
    if ((*(int *)(param_1 + 0xf0) == 3) || (*(int *)(param_1 + 0xf0) == 0)) {
      *(undefined8 *)(param_1 + 0x130) = param_2;
      *(undefined8 *)(param_1 + 0x138) = param_3;
      *(undefined8 *)(param_1 + 0x140) = param_4;
      uVar2 = 1;
      goto LAB_100aa81d0;
    }
    pQVar1 = *(QArrayData **)(param_1 + 0x10);
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_100df99c0("","IOCommunication",0,"%sCan\'t init SSL. Thread state is %d!",
                  local_50 + *(long *)(local_50 + 0x10),*(undefined4 *)(param_1 + 0xf0));
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        UNLOCK();
        if (*(int *)local_50 != 0) goto LAB_100aa81a6;
      }
      QArrayData::deallocate(local_50,1,8);
    }
LAB_100aa81a6:
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
          goto LAB_100aa81d0;
        }
      }
      QArrayData::deallocate(pQVar1,2,8);
      uVar2 = 0;
    }
    goto LAB_100aa81d0;
  }
  pQVar1 = *(QArrayData **)(param_1 + 0x10);
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    UNLOCK();
  }
  QString::toLocal8Bit();
  FUN_100df99c0("","IOCommunication",0,"%sCan\'t init SSL. Write thread is started but not paused!",
                local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_100aa8269;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100aa8269:
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
        goto LAB_100aa81d0;
      }
    }
    QArrayData::deallocate(pQVar1,2,8);
    uVar2 = 0;
  }
LAB_100aa81d0:
  QMutex::unlock();
  return uVar2;
}

