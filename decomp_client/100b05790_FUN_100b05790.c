
QTypedArrayData<unsigned_short> * FUN_100b05790(undefined8 param_1,long param_2)

{
  QString QVar1;
  QString local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  QVar1.field0_0x0 = operator_new(0xe8,(nothrow_t *)PTR_nothrow_1021e1620);
  if (QVar1.field0_0x0 == (QTypedArrayData<unsigned_short> *)0x0) {
    return (QTypedArrayData<unsigned_short> *)0x0;
  }
  local_30 = (QArrayData *)QString::fromAscii_helper("",0);
  FUN_100b05980(QVar1.field0_0x0,&local_30,*(undefined8 *)(param_2 + 8),
                *(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x18),0,0,0);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b0582a;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100b0582a:
  QString::fromUtf8_helper((char *)&local_38,0x1efb3ab);
  QString::append(&local_38);
  CHwHddPartition::setSystemName(QVar1);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return QVar1.field0_0x0;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return QVar1.field0_0x0;
}

