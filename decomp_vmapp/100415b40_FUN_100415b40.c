
void FUN_100415b40(long param_1)

{
  bool bVar1;
  int iVar2;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  local_30 = (QArrayData *)PTR_shared_null_100ba20d0;
  iVar2 = (int)param_1 + 0x28;
  QSemaphore::acquire(iVar2);
  if (*(int *)(*(long *)(param_1 + 0x30) + 0x14) == 0) {
    bVar1 = false;
  }
  else {
    FUN_10041ee90(&local_38,param_1 + 0x30);
    QByteArray::operator=((QByteArray *)&local_30,(QByteArray *)&local_38);
    bVar1 = true;
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_21 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100415bc8;
      }
      QArrayData::deallocate(local_38,1,8);
    }
  }
LAB_100415bc8:
  QSemaphore::release(iVar2);
  if (bVar1) {
    QIODevice::write((char *)(param_1 + 0x18),(longlong)(local_30 + *(long *)(local_30 + 0x10)));
  }
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,1,8);
  }
  return;
}

