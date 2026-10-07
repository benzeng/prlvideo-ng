
void FUN_1004c7b60(undefined8 param_1,long *param_2)

{
  int iVar1;
  QArrayData *pQVar2;
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  if (*(int *)(*param_2 + 0x58) != 1) {
    local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
    QMutex::lock();
    QString::operator=((QString *)&DAT_1011bc068,&local_38);
    QMutex::unlock();
    if (*(int *)local_38.field0_0x0 == -1) {
      return;
    }
    local_30.field0_0x0 = local_38.field0_0x0;
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return;
      }
      local_21 = 0;
    }
    goto LAB_1004c7c9c;
  }
  QMutex::lock();
  pQVar2 = DAT_1011bc068;
  if (1 < *(int *)DAT_1011bc068 + 1U) {
    LOCK();
    *(int *)DAT_1011bc068 = *(int *)DAT_1011bc068 + 1;
    local_21 = *(int *)pQVar2 != 0;
    UNLOCK();
  }
  QMutex::unlock();
  iVar1 = *(int *)(pQVar2 + 4);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_21 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004c7be3;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1004c7be3:
  if (iVar1 != 0) {
    return;
  }
  FUN_1004c74e0(&local_30,param_2);
  QMutex::lock();
  QString::operator=((QString *)&DAT_1011bc068,&local_30);
  QMutex::unlock();
  if (*(int *)local_30.field0_0x0 == -1) {
    return;
  }
  if (*(int *)local_30.field0_0x0 != 0) {
    LOCK();
    *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
    UNLOCK();
    if (*(int *)local_30.field0_0x0 != 0) {
      return;
    }
    local_21 = 0;
  }
LAB_1004c7c9c:
  QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  return;
}

