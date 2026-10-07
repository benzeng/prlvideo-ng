
undefined8 * FUN_1006bb0c0(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (*(int *)(*param_2 + 4) == 0) {
    uVar1 = QString::fromAscii_helper("Default",7);
    *param_1 = uVar1;
    return param_1;
  }
  local_38 = (QArrayData *)QString::fromAscii_helper("%1 (%2)",7);
  QString::arg(&local_30,&local_38,param_2,0,0x20);
  QString::arg(param_1,&local_30,param_3,0,0x20);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006bb157;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1006bb157:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return param_1;
}

