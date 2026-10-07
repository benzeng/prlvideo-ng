
undefined1 FUN_100762da0(undefined8 param_1,undefined4 param_2,long *param_3)

{
  char cVar1;
  undefined1 uVar2;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_11;
  
  local_28 = param_1;
  local_20 = param_2;
  cVar1 = (**(code **)(*param_3 + 0x68))(param_3,10);
  if (cVar1 != '\0') {
    uVar2 = FUN_100767d40(&local_28,param_3);
    return uVar2;
  }
  (**(code **)(*param_3 + 0xe0))(&local_38,param_3);
  QString::toUtf8();
  FUN_1008e3970("","etrace",0,"Failed to open %s to dump eTrace buffer",
                local_30 + *(long *)(local_30 + 0x10));
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_11 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100762e51;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_100762e51:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return 0;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return 0;
}

