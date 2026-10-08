
void FUN_10060c950(long param_1,undefined4 param_2)

{
  int *local_58;
  long lStack_50;
  QString local_40;
  QVariant local_38;
  QString local_28;
  undefined1 local_19;
  
  local_28.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QObject::sender();
  QObject::property((char *)&local_38);
  if ((local_38.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) != 0) {
    QVariant::toString();
    QString::operator=(&local_28,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_19 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10060c9d7;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
LAB_10060c9d7:
  FUN_1006138a0(&local_58,param_1 + 0x20,&local_28);
  FUN_10060a040(param_1,7,&local_28,param_2);
  if (local_58 != (int *)0x0) {
    if ((local_58[1] == 0) || (lStack_50 == 0)) {
      LOCK();
      *local_58 = *local_58 + -1;
      local_19 = *local_58 != 0;
      UNLOCK();
      if (!(bool)local_19) {
        operator_delete(local_58);
      }
    }
    else {
      QObject::deleteLater();
      LOCK();
      *local_58 = *local_58 + -1;
      local_19 = *local_58 != 0;
      UNLOCK();
      if (!(bool)local_19) {
        operator_delete(local_58);
      }
      local_58 = (int *)0x0;
      lStack_50 = 0;
    }
  }
  QVariant::~QVariant(&local_38);
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
  return;
}

