
void FUN_100039f70(long param_1)

{
  QString local_20;
  undefined1 local_12;
  
  local_20.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QString::operator=((QString *)(param_1 + 0x50),&local_20);
  if (*(int *)local_20.field0_0x0 != -1) {
    if (*(int *)local_20.field0_0x0 != 0) {
      LOCK();
      *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_20.field0_0x0 != 0) goto LAB_100039fc4;
      local_12 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_20.field0_0x0,2,8);
  }
LAB_100039fc4:
  *(undefined1 *)(param_1 + 0x58) = 1;
  return;
}

