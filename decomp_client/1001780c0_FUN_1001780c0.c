
void FUN_1001780c0(long param_1,int param_2)

{
  int iVar1;
  QArrayData *local_28;
  undefined1 local_1a;
  
  if (-1 < param_2) {
    QObject::sender();
    QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e12a0);
    CSdkRequest::getResultAsString((int)&local_28);
    iVar1 = QString::toInt((bool *)&local_28,0);
    if ((bool)*(char *)(param_1 + 0x13c) != (iVar1 != 0)) {
      *(bool *)(param_1 + 0x13c) = iVar1 != 0;
      FUN_100801690(param_1,iVar1 != 0);
    }
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        UNLOCK();
        if (*(int *)local_28 != 0) {
          return;
        }
        local_1a = 0;
      }
      QArrayData::deallocate(local_28,2,8);
    }
  }
  return;
}

