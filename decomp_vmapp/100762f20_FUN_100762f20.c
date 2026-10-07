
undefined1 FUN_100762f20(long *param_1,long *param_2)

{
  char cVar1;
  undefined1 uVar2;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  cVar1 = (**(code **)(*param_1 + 0x68))(param_1,1);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0xe0))(&local_38,param_1);
    QString::toUtf8();
    FUN_1008e3970("","etrace",0,"Failed to open %s to dump eTrace buffer",
                  local_30 + *(long *)(local_30 + 0x10));
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_21 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100762ff2;
      }
      QArrayData::deallocate(local_30,1,8);
    }
LAB_100762ff2:
    if (*(int *)local_38 == -1) {
      return 0;
    }
    local_48 = local_38;
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return 0;
      }
      local_21 = 0;
    }
    goto LAB_1007630c6;
  }
  cVar1 = (**(code **)(*param_2 + 0x68))(param_2,10);
  if (cVar1 != '\0') {
    uVar2 = FUN_1007681d0(param_1,param_2);
    (**(code **)(*param_1 + 0x70))(param_1);
    (**(code **)(*param_2 + 0x70))(param_2);
    return uVar2;
  }
  (**(code **)(*param_2 + 0xe0))(&local_48,param_2);
  QString::toUtf8();
  FUN_1008e3970("","etrace",0,"Failed to open %s to dump eTrace buffer",
                local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076307e;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_10076307e:
  if (*(int *)local_48 == -1) {
    return 0;
  }
  if (*(int *)local_48 != 0) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + -1;
    UNLOCK();
    if (*(int *)local_48 != 0) {
      return 0;
    }
    local_21 = 0;
  }
LAB_1007630c6:
  QArrayData::deallocate(local_48,2,8);
  return 0;
}

