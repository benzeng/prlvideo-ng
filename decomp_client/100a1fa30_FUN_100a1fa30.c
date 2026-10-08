
bool FUN_100a1fa30(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  char *pcVar2;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  if (param_1 == (undefined8 *)0x0) {
    return false;
  }
  pcVar2 = (char *)(**(code **)*param_1)(param_1);
  FUN_100a1f430(&local_40,param_1,param_2);
  QString::toLatin1();
  iVar1 = QMetaObject::indexOfMethod(pcVar2);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a1fab9;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_100a1fab9:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return iVar1 != -1;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return iVar1 != -1;
}

