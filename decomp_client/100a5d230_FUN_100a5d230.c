
undefined8 * FUN_100a5d230(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  if ((*(int *)(*(long *)(param_2 + 8) + 4) == 0) || (*(int *)(*(long *)(param_2 + 0x10) + 4) == 0))
  {
    uVar1 = QString::fromAscii_helper("",0);
    *param_1 = uVar1;
    return param_1;
  }
  QString::arg(&local_48,&DAT_1023117c0,param_2 + 8,0,0x20);
  QString::arg(&local_40,&local_48,param_2 + 0x10,0,0x20);
  FUN_100a5cea0(&local_50,param_2);
  QString::arg(&local_38,&local_40,&local_50,0,0x20);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a5d2f0;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100a5d2f0:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a5d320;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100a5d320:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a5d350;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100a5d350:
  *param_1 = local_38;
  if (1 < *(int *)local_38 + 1U) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_29 = *(int *)local_38 != 0;
    UNLOCK();
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return param_1;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return param_1;
}

