
QString * FUN_100a615b0(QString *param_1)

{
  QString local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QByteArray::QByteArray((QByteArray *)&local_30,"macln:",-1);
  QByteArray::append((char *)&local_30);
  FUN_100a60920(&local_38,local_30 + *(long *)(local_30 + 0x10));
  QString::operator=(param_1,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100a6163b;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_100a6163b:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,1,8);
  }
  return param_1;
}

