
undefined8 FUN_100291ec0(long param_1)

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
  FUN_100060e80(uVar1,uVar3);
  lVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10221d230);
  if (lVar2 != 0) {
    CAbstractTask::clearSubTaskList();
    FUN_10058d480(lVar2,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                  param_1 + 0x50);
    QWidget::showNormal();
    QWidget::raise();
    QWidget::activateWindow();
  }
  return 0;
}

