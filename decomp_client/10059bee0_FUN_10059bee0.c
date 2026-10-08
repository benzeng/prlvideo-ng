
void FUN_10059bee0(long param_1)

{
  QString *pQVar1;
  Data_conflict local_30;
  undefined4 local_28;
  QString local_20;
  undefined1 local_11;
  
  local_20.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  pQVar1 = (QString *)QString::operator=((QString *)(param_1 + 0x20),&local_20);
  QString::operator=((QString *)(param_1 + 0x18),pQVar1);
  if (*(int *)local_20.field0_0x0 != -1) {
    if (*(int *)local_20.field0_0x0 != 0) {
      LOCK();
      *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
      local_11 = *(int *)local_20.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10059bf40;
    }
    QArrayData::deallocate((QArrayData *)local_20.field0_0x0,2,8);
  }
LAB_10059bf40:
  local_28 = 0x80000000;
  local_30.field7 = 0;
  QVariant::operator=((QVariant *)(param_1 + 0x28),(QVariant *)&local_30);
  QVariant::~QVariant((QVariant *)&local_30);
  return;
}

