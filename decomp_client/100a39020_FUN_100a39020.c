
undefined1 FUN_100a39020(undefined8 param_1,undefined8 param_2,QString *param_3,QString *param_4)

{
  int iVar1;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  iVar1 = QString::indexOf(param_1,param_2,0,1);
  if (iVar1 < 0) {
    return 0;
  }
  QString::left((int)&local_40);
  QString::operator=(param_3,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a3909f;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100a3909f:
  QString::right((int)&local_48);
  QString::operator=(param_4,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return 1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return 1;
}

