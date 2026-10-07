
undefined8 FUN_1003f0150(long param_1,undefined8 param_2)

{
  long lVar1;
  QString local_50;
  QTextStream local_48 [20];
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  undefined1 local_21;
  
  local_28 = 0;
  QTextStream::QTextStream(local_48,param_2,1);
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  QTextStream::skipWhiteSpace();
  QTextStream::operator>>(local_48,&local_50);
  QTextStream::operator>>(local_48,&local_28);
  QTextStream::operator>>(local_48,(int *)&local_2c);
  QTextStream::operator>>(local_48,(int *)&local_30);
  QTextStream::operator>>(local_48,(int *)&local_34);
  lVar1 = *(long *)(param_1 + 0x1fe0);
  *(uint *)(lVar1 + 0x18) = local_28;
  *(char *)(lVar1 + 10) = (char)local_2c;
  *(char *)(lVar1 + 0xb) = (char)local_30;
  *(char *)(lVar1 + 0xc) = (char)local_34;
  if (((char)local_2c == '\0' && (char)local_30 == '\0') && (char)local_34 == '\0') {
    *(undefined4 *)(lVar1 + 0x10) = 0;
    *(undefined1 *)(lVar1 + 0xb) = 2;
  }
  else {
    *(uint *)(lVar1 + 0x10) =
         ((local_34 & 0xff) - 0x96) + (local_30 & 0xff) * 0x4b + (local_2c & 0xff) * 0x1194;
  }
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_21 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003f024f;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1003f024f:
  QTextStream::~QTextStream(local_48);
  return 0;
}

