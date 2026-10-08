
void FUN_1006822a0(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_30 [2];
  QArrayData *local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  if (param_2 != 1) {
    return;
  }
  QObject::sender();
  lVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102222c80);
  if (lVar1 == 0) {
    return;
  }
  local_20 = *(QArrayData **)(lVar1 + 0x1f8);
  if (1 < *(int *)local_20 + 1U) {
    LOCK();
    *(int *)local_20 = *(int *)local_20 + 1;
    local_11 = *(int *)local_20 != 0;
    UNLOCK();
  }
  local_28 = *(QArrayData **)(lVar1 + 0x200);
  if (1 < *(int *)local_28 + 1U) {
    LOCK();
    *(int *)local_28 = *(int *)local_28 + 1;
    local_11 = *(int *)local_28 != 0;
    UNLOCK();
  }
  if (*(int *)(local_28 + 4) == 0) {
    local_30[0] = 0;
    FUN_10067e380(param_1,&local_20,local_30);
  }
  else {
    CContentModel::setBusy(SUB81(param_1,0));
    FUN_10084a8e0(param_1);
    uVar2 = 0;
    if ((*(long *)(param_1 + 0x58) != 0) &&
       (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x60);
    }
    FUN_10068cae0(*(undefined8 *)(param_1 + 0x20),uVar2,&local_20,&local_28);
  }
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10068239d;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_10068239d:
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_20,2,8);
  }
  return;
}

