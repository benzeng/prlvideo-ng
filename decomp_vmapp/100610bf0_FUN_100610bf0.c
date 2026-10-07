
int FUN_100610bf0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  iVar1 = FUN_1006140f0(param_1,param_3,param_4,param_5);
  if (iVar1 < 0) {
    FUN_1007d6a70(&local_40,param_3);
    QString::toLocal8Bit();
    FUN_1008e3970("","crypt",0,"Encryption engine (%s) initialization failed (0x%x)",
                  local_38 + *(long *)(local_38 + 0x10),iVar1);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_29 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100610d72;
      }
      QArrayData::deallocate(local_38,1,8);
    }
LAB_100610d72:
    if (*(int *)local_40 == -1) {
      return iVar1;
    }
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return iVar1;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
    return iVar1;
  }
  iVar1 = (**(code **)(*(long *)*param_1 + 0x58))((long *)*param_1,param_2);
  if (-1 < iVar1) {
    return 0;
  }
  FUN_1007d6a70(&local_50,param_3);
  QString::toLocal8Bit();
  FUN_1008e3970("","crypt",0,"Encryption engine (%s) information retrieve failure (0x%x)",
                local_48 + *(long *)(local_48 + 0x10),iVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100610cb7;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_100610cb7:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100610ce7;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100610ce7:
  (*(code *)**(undefined8 **)*param_1)();
  *param_1 = 0;
  return iVar1;
}

