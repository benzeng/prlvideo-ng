
undefined8 FUN_100a07a20(QString *param_1)

{
  undefined8 uVar1;
  QString local_28;
  QString local_20;
  undefined1 local_11;
  
  local_28.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if (*(int *)(param_1->field0_0x0 + 4) == 0) {
    QString::fromUtf8_helper((char *)&local_20,0x1e3acce);
    QString::operator=(&local_28,&local_20);
    if (*(int *)local_20.field0_0x0 != -1) {
      if (*(int *)local_20.field0_0x0 != 0) {
        LOCK();
        *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
        local_11 = *(int *)local_20.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_100a07aa0;
      }
      QArrayData::deallocate((QArrayData *)local_20.field0_0x0,2,8);
    }
  }
  else {
    QString::operator=(&local_28,param_1);
  }
LAB_100a07aa0:
  uVar1 = FUN_100deef90(&local_28);
  uVar1 = _MDQueryCreate(*(undefined8 *)PTR__kCFAllocatorDefault_1021e18d0,uVar1,0,0);
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return uVar1;
      }
      local_11 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
  return uVar1;
}

