
void FUN_10057d400(long param_1,int param_2)

{
  long lVar1;
  QString local_50;
  QArrayData *local_48;
  QString local_40 [3];
  undefined1 local_21;
  
  QObject::sender();
  lVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10221c990);
  if (param_2 != 1) {
    return;
  }
  if (lVar1 == 0) {
    return;
  }
  FUN_100582370(&local_48,lVar1);
  FUN_100710060(local_40,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10057d486;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10057d486:
  FUN_1005823f0(&local_50,lVar1);
  QString::operator=(local_40,&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_21 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10057d4cf;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_10057d4cf:
  FUN_100581a70(param_1 + 0x28,local_40);
  FUN_10057c480(param_1,local_40);
  FUN_1000fec30(local_40);
  return;
}

