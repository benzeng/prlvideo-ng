
void FUN_100378c20(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  QWidget *pQVar3;
  undefined8 uVar4;
  
  *(undefined1 *)(param_1 + 100) = 1;
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100326190(uVar4);
  lVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10220dfb0);
  if (lVar2 != 0) {
    FUN_10036d2b0(lVar2);
  }
  pQVar3 = (QWidget *)QApplication::desktop();
  uVar1 = QDesktopWidget::screenNumber(pQVar3);
  FUN_100377f30(param_1,uVar1);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100325c60(uVar4);
  return;
}

