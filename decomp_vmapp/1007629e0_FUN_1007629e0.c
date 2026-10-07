
undefined1 FUN_1007629e0(undefined8 param_1,long *param_2)

{
  char cVar1;
  undefined1 uVar2;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  cVar1 = (**(code **)(*param_2 + 0x68))(param_2,10);
  if (cVar1 != '\0') {
    uVar2 = FUN_100767b30(param_1,param_2);
    (**(code **)(*param_2 + 0x70))(param_2);
    return uVar2;
  }
  (**(code **)(*param_2 + 0xe0))(&local_30,param_2);
  QString::toUtf8();
  FUN_1008e3970("","etrace",0,"Failed to open %s to dump eTrace buffer",
                local_28 + *(long *)(local_28 + 0x10));
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100762a94;
    }
    QArrayData::deallocate(local_28,1,8);
  }
LAB_100762a94:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return 0;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return 0;
}

