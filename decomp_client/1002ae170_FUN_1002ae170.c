
undefined8 FUN_1002ae170(long param_1)

{
  int *piVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = FUN_1001d50a0();
  uVar2 = FUN_1001d50d0(uVar2);
  lVar3 = FUN_1001e1c90(uVar2);
  if (lVar3 != 0) {
    uVar2 = FUN_1001d50a0();
    uVar2 = FUN_1001d50d0(uVar2);
    FUN_1001e1c90(uVar2);
    QWidget::close();
  }
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
  FUN_100060bb0();
  uVar4 = QMetaObject::className();
  FUN_100060e80(uVar4,uVar2);
  lVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10221d230);
  if (lVar3 != 0) {
    QWidget::close();
  }
  return 0;
}

