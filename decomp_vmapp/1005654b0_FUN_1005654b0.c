
undefined8 FUN_1005654b0(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (param_1 == (long *)0x0) {
    return 0x80000003;
  }
  if (DAT_1011b55f8 < 2) goto LAB_100565589;
  (**(code **)(*param_1 + 0x178))(&local_38,param_1);
  QString::toUtf8();
  FUN_1008e3970("","StatesUtils",2,"Clearing disk \'%s\' BC suspend state",
                local_30 + *(long *)(local_30 + 0x10));
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100565559;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_100565559:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100565589;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100565589:
  uVar1 = FUN_100563d30(param_1,3,param_2);
  return uVar1;
}

