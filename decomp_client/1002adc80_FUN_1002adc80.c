
undefined8 FUN_1002adc80(long param_1)

{
  int *piVar1;
  QObject *pQVar2;
  undefined8 uVar3;
  int *local_40;
  QObject *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_21 = *piVar1 != 0;
    UNLOCK();
  }
  pQVar2 = (QObject *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    local_21 = *piVar1 != 0;
    UNLOCK();
    if (!(bool)local_21) {
      operator_delete(piVar1);
    }
  }
  FUN_1002adb00(param_1);
  uVar3 = FUN_100152280();
  FUN_100188480(&local_30,pQVar2);
  uVar3 = FUN_1001547d0(uVar3,&local_30);
  local_40 = (int *)0x0;
  if (pQVar2 != (QObject *)0x0) {
    local_40 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
  }
  local_38 = pQVar2;
  FUN_10015b540(uVar3,&local_40);
  if (local_40 != (int *)0x0) {
    LOCK();
    *local_40 = *local_40 + -1;
    local_21 = *local_40 != 0;
    UNLOCK();
    if ((!(bool)local_21) && (local_40 != (int *)0x0)) {
      operator_delete(local_40);
    }
  }
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return 0;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return 0;
}

