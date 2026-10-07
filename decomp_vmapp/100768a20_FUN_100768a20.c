
byte FUN_100768a20(bool *param_1,char param_2)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  char local_22;
  undefined1 local_21;
  
  if (*(int *)(*(long *)param_1 + 4) != 0xc) {
    return 0;
  }
  local_22 = '\0';
  lVar3 = QString::toLongLong(param_1,(int)&local_22);
  if (lVar3 == 0) {
    return 0;
  }
  if (local_22 == '\0') {
    return 0;
  }
  QString::left((int)&local_30);
  uVar2 = QString::toInt((bool *)&local_30,0);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100768ac2;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100768ac2:
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  if (param_2 == '\0') {
    bVar1 = 0;
    goto LAB_100768b7b;
  }
  FUN_1007685c0(&local_40,1);
  QString::left((int)&local_38);
  bVar1 = QString::startsWith(param_1,&local_38,0);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100768b38;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100768b38:
  bVar1 = bVar1 ^ 1;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_100768b7b;
      local_21 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100768b7b:
  return bVar1 ^ 1;
}

