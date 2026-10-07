
undefined8 FUN_100563bb0(long *param_1)

{
  undefined8 uVar1;
  undefined4 local_38;
  undefined1 local_34;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  if (param_1 == (long *)0x0) {
    return 0x80000003;
  }
  if (DAT_1011b55f8 < 2) goto LAB_100563c84;
  (**(code **)(*param_1 + 0x178))(&local_30,param_1);
  QString::toUtf8();
  FUN_1008e3970("","StatesUtils",2,"Setting disk \'%s\' BC suspend state",
                local_28 + *(long *)(local_28 + 0x10));
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100563c54;
    }
    QArrayData::deallocate(local_28,1,8);
  }
LAB_100563c54:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100563c84;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100563c84:
  local_38 = 0;
  local_34 = 0;
  uVar1 = FUN_100563d30(param_1,1,&local_38);
  return uVar1;
}

