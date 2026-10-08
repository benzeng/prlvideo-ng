
void FUN_100a79030(long param_1)

{
  QArrayData *pQVar1;
  ssize_t sVar2;
  QArrayData *local_20;
  undefined1 local_12;
  undefined1 local_11;
  
  *(undefined4 *)(param_1 + 0xa8) = 1;
  local_12 = 0;
  sVar2 = _write(*(int *)(param_1 + 0x2ec),&local_12,1);
  if (-1 < sVar2) {
    return;
  }
  pQVar1 = *(QArrayData **)(param_1 + 0x18);
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_11 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  QString::toLocal8Bit();
  FUN_100df99c0("","IOCommunication",0,"%sWrite failed while thread finalization!",
                local_20 + *(long *)(local_20 + 0x10));
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      local_11 = *(int *)local_20 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100a790e3;
    }
    QArrayData::deallocate(local_20,1,8);
  }
LAB_100a790e3:
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) {
        return;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
  return;
}

