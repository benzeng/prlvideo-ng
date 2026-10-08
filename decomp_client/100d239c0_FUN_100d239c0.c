
char FUN_100d239c0(undefined8 param_1)

{
  int iVar1;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  local_28 = (QArrayData *)QString::fromAscii_helper("IDE",3);
  iVar1 = QString::compare(param_1,&local_28,0);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100d23a23;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_100d23a23:
  if (iVar1 == 0) {
    return '\x01';
  }
  local_30 = (QArrayData *)QString::fromAscii_helper("SCSI",4);
  iVar1 = QString::compare(param_1,&local_30,0);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100d23a85;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100d23a85:
  if (iVar1 == 0) {
    return '\x02';
  }
  local_38 = (QArrayData *)QString::fromAscii_helper("SATA",4);
  iVar1 = QString::compare(param_1,&local_38,0);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) goto LAB_100d23ae3;
      local_19 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100d23ae3:
  return (iVar1 == 0) * '\x03';
}

