
QString * FUN_1006e2b70(QString *param_1)

{
  char *pcVar1;
  size_t sVar2;
  int iVar3;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QString local_30;
  undefined1 local_21;
  
  FUN_1006da0c0();
  if (*(int *)(param_1->field0_0x0 + 4) == 0) {
    return param_1;
  }
  local_40 = (QArrayData *)QString::fromAscii_helper("%1/Library/Logs/%2",0x12);
  QString::arg(&local_38,&local_40,param_1,0,0x20);
  pcVar1 = (char *)FUN_1008e4510();
  iVar3 = -1;
  if (pcVar1 != (char *)0x0) {
    sVar2 = _strlen(pcVar1);
    iVar3 = (int)sVar2;
  }
  local_48 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar3);
  QString::arg(&local_30,&local_38,&local_48,0,0x20);
  QString::operator=(param_1,&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_21 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006e2c3d;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_1006e2c3d:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006e2c6d;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1006e2c6d:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006e2c9d;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1006e2c9d:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return param_1;
}

