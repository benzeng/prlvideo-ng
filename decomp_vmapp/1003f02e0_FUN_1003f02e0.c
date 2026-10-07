
undefined8 FUN_1003f02e0(long param_1,undefined8 param_2)

{
  long lVar1;
  QString local_48;
  QTextStream local_40 [16];
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 local_28 [7];
  undefined1 local_21;
  
  QTextStream::QTextStream(local_40,param_2,1);
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  QTextStream::skipWhiteSpace();
  QTextStream::operator>>(local_40,&local_48);
  QTextStream::operator>>(local_40,(int *)local_28);
  QTextStream::operator>>(local_40,(int *)local_2c);
  QTextStream::operator>>(local_40,(int *)local_30);
  lVar1 = *(long *)(param_1 + 0x1fe0);
  *(undefined1 *)(lVar1 + 2) = local_28[0];
  *(undefined1 *)(lVar1 + 3) = local_2c[0];
  *(undefined1 *)(lVar1 + 4) = local_30[0];
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_21 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003f038f;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1003f038f:
  QTextStream::~QTextStream(local_40);
  return 0;
}

