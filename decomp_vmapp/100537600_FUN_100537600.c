
bool FUN_100537600(long param_1,undefined8 param_2,QString *param_3)

{
  bool bVar1;
  QString local_20;
  undefined1 local_12;
  
  FUN_1005376c0(&local_20,*(long *)(param_1 + 0x40) + 0x30,param_2);
  bVar1 = *(int *)(local_20.field0_0x0 + 4) != 0;
  if (bVar1) {
    QString::operator=(param_3,&local_20);
  }
  if (*(int *)local_20.field0_0x0 != -1) {
    if (*(int *)local_20.field0_0x0 != 0) {
      LOCK();
      *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_20.field0_0x0 != 0) {
        return bVar1;
      }
      local_12 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_20.field0_0x0,2,8);
  }
  return bVar1;
}

