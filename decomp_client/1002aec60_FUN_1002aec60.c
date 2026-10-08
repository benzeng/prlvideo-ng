
void FUN_1002aec60(long param_1)

{
  int *piVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  pvVar2 = operator_new(0x48);
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  uVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fceb0);
  FUN_100293680(pvVar2,uVar3);
  CAbstractTask::execute();
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      operator_delete(piVar1);
    }
  }
  return;
}

