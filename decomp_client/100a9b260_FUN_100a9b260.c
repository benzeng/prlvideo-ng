
void FUN_100a9b260(long param_1)

{
  QArrayData *pQVar1;
  ssize_t sVar2;
  QArrayData *local_30;
  undefined1 local_22;
  undefined1 local_21;
  
  QMutex::lock();
  if (*(int *)(param_1 + 0x30) == 0) {
    QWaitCondition::wakeOne();
    goto LAB_100a9b36a;
  }
  if (*(int *)(param_1 + 0x30) != 1) goto LAB_100a9b36a;
  local_22 = 0;
  sVar2 = _write(*(int *)(param_1 + 0x78),&local_22,1);
  if (-1 < sVar2) goto LAB_100a9b36a;
  pQVar1 = *(QArrayData **)(param_1 + 0x20);
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_21 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  QString::toLocal8Bit();
  FUN_100df99c0("","IOCommunication",0,"%sWrite failed while waking up cleaner!",
                local_30 + *(long *)(local_30 + 0x10));
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100a9b33a;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_100a9b33a:
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_21 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100a9b36a;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100a9b36a:
  QMutex::unlock();
  return;
}

