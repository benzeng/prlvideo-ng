
undefined1 FUN_100d229b0(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  undefined1 uVar2;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  (**(code **)(*param_2 + 0x20))(&local_38,param_2,param_1);
  if (*(int *)(local_38 + 4) == 0) {
    uVar2 = 0;
    goto LAB_100d22abf;
  }
  lVar1 = (**(code **)(*param_2 + 0x10))(param_2,&local_38);
  *param_3 = lVar1;
  uVar2 = 1;
  if (lVar1 != 0) goto LAB_100d22abf;
  QString::toUtf8();
  lVar1 = *(long *)(local_40 + 0x10);
  QString::toUtf8();
  FUN_100df99c0("","VBoxVmModel",0,
                "Failed to get disk descriptor: can\'t construct descriptor for %s:\'%s\'",
                local_40 + lVar1,local_48 + *(long *)(local_48 + 0x10));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d22a82;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_100d22a82:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d22abf;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100d22abf:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return uVar2;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return uVar2;
}

