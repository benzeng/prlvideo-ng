
undefined8 FUN_100274d20(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  FUN_100060bb0();
  uVar1 = QMetaObject::className();
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  lVar2 = FUN_100060e80(uVar1,uVar3);
  if (lVar2 != 0) {
    CAbstractTask::clearSubTaskList();
    QWidget::raise();
    QWidget::activateWindow();
    QWidget::showNormal();
  }
  return 0;
}

