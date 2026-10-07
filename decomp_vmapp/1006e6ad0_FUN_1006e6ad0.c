
QString * FUN_1006e6ad0(QString *param_1)

{
  char cVar1;
  QTypedArrayData<unsigned_short> *pQVar2;
  ulong uVar3;
  QArrayData *local_30;
  QString local_28;
  undefined1 local_19;
  
  pQVar2 = (QTypedArrayData<unsigned_short> *)
           QString::fromAscii_helper("/Library/Logs/parallels_migration.log",0x25);
  param_1->field0_0x0 = pQVar2;
  cVar1 = FUN_1006d80e0();
  if ((cVar1 == '\0') && (uVar3 = FUN_1006d65b0(), (uVar3 & 2) == 0)) {
    return param_1;
  }
  FUN_1006da0c0(&local_30);
  local_28.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_30;
  if (1 < *(int *)local_30 + 1U) {
    LOCK();
    *(int *)local_30 = *(int *)local_30 + 1;
    local_19 = *(int *)local_30 != 0;
    UNLOCK();
  }
  QString::append(&local_28);
  QString::operator=(param_1,&local_28);
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      local_19 = *(int *)local_28.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006e6b72;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
LAB_1006e6b72:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return param_1;
}

