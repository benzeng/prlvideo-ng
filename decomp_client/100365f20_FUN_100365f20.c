
undefined8 FUN_100365f20(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_10035da40(*(undefined8 *)(param_1 + 8));
  FUN_100358f80(uVar2);
  if (*(int *)(param_3 + 0x50) == 2) {
    cVar1 = MacUtils::isFrontProcess();
    if (cVar1 == '\0') {
      lVar3 = QWidget::window();
      if (lVar3 != 0) {
        MacUtils::bringProcessToFront();
        QWidget::raise();
        QWidget::activateWindow();
      }
    }
  }
  return 0;
}

