
void FUN_100a35170(undefined8 *param_1)

{
  int iVar1;
  QString local_28;
  undefined1 local_1a;
  
  *param_1 = &PTR_FUN_102237ef8;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    iVar1 = (int)param_1 + 0x12;
  }
  else {
    iVar1 = (int)param_1[4];
  }
  QString::fromRawData((QChar *)&local_28,iVar1);
  QFile::remove(&local_28);
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      local_1a = *(int *)local_28.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_1a) goto LAB_100a351e8;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
LAB_100a351e8:
  *param_1 = &PTR_FUN_1022810a8;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  return;
}

