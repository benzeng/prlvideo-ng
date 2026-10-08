
void FUN_1003a6cd0(long param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  long lVar3;
  QVariant local_40;
  QArrayData *local_30;
  undefined1 local_21;
  
  QObject::sender();
  QObject::property((char *)&local_40);
  QVariant::toString();
  QVariant::~QVariant(&local_40);
  puVar2 = (undefined8 *)FUN_1003ae230(param_1 + 0x30,&local_30);
  piVar1 = (int *)*puVar2;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    local_21 = *piVar1 != 0;
    UNLOCK();
    if ((!(bool)local_21) && ((void *)*puVar2 != (void *)0x0)) {
      operator_delete((void *)*puVar2);
    }
    puVar2[1] = 0;
    *puVar2 = 0;
  }
  FUN_100836970(*(undefined8 *)(param_1 + 0x10),&local_30);
  if (-1 < param_2) {
    QObject::sender();
    lVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102200110);
    FUN_100836830(*(undefined8 *)(param_1 + 0x10),&local_30,*(undefined4 *)(lVar3 + 0x68));
  }
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return;
}

