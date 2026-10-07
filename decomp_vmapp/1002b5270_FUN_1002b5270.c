
undefined4 FUN_1002b5270(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  char local_39;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  local_38 = (QArrayData *)QString::fromAscii_helper(":",1);
  QString::section(&local_30,param_1,&local_38,param_2,param_2,0);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002b52e2;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1002b52e2:
  if ((*(int *)(local_30 + 4) != 0) &&
     (uVar1 = QString::toUInt((bool *)&local_30,(int)&local_39), local_39 != '\0')) {
    param_3 = uVar1;
  }
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return param_3;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return param_3;
}

