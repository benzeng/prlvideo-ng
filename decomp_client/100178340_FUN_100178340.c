
void FUN_100178340(long param_1,int param_2)

{
  int iVar1;
  QArrayData *local_28;
  undefined1 local_1a;
  
  if (param_2 < 0) {
    return;
  }
  QObject::sender();
  QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e12a0);
  CSdkRequest::getResultAsString((int)&local_28);
  iVar1 = QString::toInt((bool *)&local_28,0);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_1a = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_1a) goto LAB_1001783c0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1001783c0:
  if ((bool)*(char *)(param_1 + 0x13b) != (iVar1 != 0)) {
    *(bool *)(param_1 + 0x13b) = iVar1 != 0;
    FUN_1008016f0(param_1,iVar1 != 0);
  }
  return;
}

