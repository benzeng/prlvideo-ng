
void FUN_1002ae270(long param_1)

{
  int *piVar1;
  undefined8 uVar2;
  
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  uVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fceb0);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      operator_delete(piVar1);
    }
  }
  FUN_10015d330(uVar2,0);
  return;
}

