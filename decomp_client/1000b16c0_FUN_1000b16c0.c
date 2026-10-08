
void FUN_1000b16c0(undefined8 param_1,undefined8 *param_2,undefined1 param_3)

{
  long lVar1;
  long lVar2;
  QArrayData *pQVar3;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  lVar1 = QThread::currentThread();
  lVar2 = QObject::thread();
  if (lVar1 == lVar2) {
    local_38 = (QArrayData *)*param_2;
    if (1 < *(int *)local_38 + 1U) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + 1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
    }
    FUN_1000ace70();
    if (*(int *)local_38 == -1) {
      return;
    }
    pQVar3 = local_38;
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
  }
  else {
    local_40 = (QArrayData *)*param_2;
    if (1 < *(int *)local_40 + 1U) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
    }
    FUN_1007f6820(param_1,&local_40,param_3);
    if (*(int *)local_40 == -1) {
      return;
    }
    pQVar3 = local_40;
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_29 = 0;
    }
  }
  QArrayData::deallocate(pQVar3,2,8);
  return;
}

