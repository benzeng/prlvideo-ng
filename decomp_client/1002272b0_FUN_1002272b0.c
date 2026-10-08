
undefined8 FUN_1002272b0(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  FUN_100060bb0();
  uVar2 = QMetaObject::className();
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100060e80(uVar2,uVar4);
  lVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022101c0);
  if (lVar3 != 0) {
    CAbstractTask::clearSubTaskList();
    if (*(int *)(param_1 + 0x38) != 0) {
      FUN_1003a3a70(lVar3,*(int *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
    }
    uVar1 = QWidget::windowState();
    QWidget::setWindowState(lVar3,uVar1 & 0xfffffffe);
    QWidget::raise();
    QWidget::activateWindow();
  }
  return 0;
}

