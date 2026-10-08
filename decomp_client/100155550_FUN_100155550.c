
void FUN_100155550(undefined8 param_1,long param_2)

{
  QString local_30;
  QString local_28;
  QString local_20;
  undefined1 local_11;
  
  local_20.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if (param_2 == 0) goto LAB_10015560e;
  FUN_10015a1a0(&local_28,param_2);
  if (*(int *)(local_28.field0_0x0 + 4) == 0) {
    FUN_10015a060(&local_30,param_2);
    QString::operator=(&local_20,&local_30);
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        local_11 = *(int *)local_30.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_1001555de;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
  }
  else {
    QString::operator=(&local_20,&local_28);
  }
LAB_1001555de:
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      local_11 = *(int *)local_28.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10015560e;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
LAB_10015560e:
  FUN_1001551f0();
  if (*(int *)local_20.field0_0x0 != -1) {
    if (*(int *)local_20.field0_0x0 != 0) {
      LOCK();
      *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_20.field0_0x0 != 0) {
        return;
      }
      local_11 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_20.field0_0x0,2,8);
  }
  return;
}

