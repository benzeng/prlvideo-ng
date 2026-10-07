
bool FUN_10002e820(undefined8 param_1,QString *param_2)

{
  int iVar1;
  QString local_20;
  undefined1 local_11;
  
  if (param_2->field0_0x0 != (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0) {
    local_20.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
    QString::operator=(param_2,&local_20);
    if (*(int *)local_20.field0_0x0 != -1) {
      if (*(int *)local_20.field0_0x0 != 0) {
        LOCK();
        *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
        local_11 = *(int *)local_20.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_10002e87f;
      }
      QArrayData::deallocate((QArrayData *)local_20.field0_0x0,2,8);
    }
  }
LAB_10002e87f:
  iVar1 = FUN_1002592b0(FUN_10002e8e0,param_2);
  return iVar1 != 0;
}

