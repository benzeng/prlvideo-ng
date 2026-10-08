
void FUN_100714cc0(QString *param_1)

{
  undefined *puVar1;
  QString local_30;
  QString local_28;
  undefined1 local_19;
  
  puVar1 = PTR_shared_null_1021e1288;
  local_28.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QString::operator=(param_1,&local_28);
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      local_19 = *(int *)local_28.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100714d12;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
LAB_100714d12:
  local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
  QString::operator=(param_1 + 1,&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_19 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100714d53;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_100714d53:
  FUN_100715490(param_1 + 2);
  return;
}

