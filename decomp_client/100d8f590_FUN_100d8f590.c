
QString * FUN_100d8f590(QString *param_1)

{
  char cVar1;
  ulong uVar2;
  QString local_30;
  QString local_28;
  undefined1 local_19;
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  cVar1 = FUN_100d80520();
  if ((cVar1 == '\0') && (uVar2 = FUN_100d7e9f0(), (uVar2 & 2) == 0)) {
    local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("/var/run",8)
    ;
    QString::operator=(param_1,&local_30);
    if (*(int *)local_30.field0_0x0 == -1) {
      return param_1;
    }
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    return param_1;
  }
  FUN_100d82500(&local_28);
  QString::operator=(param_1,&local_28);
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
  return param_1;
}

