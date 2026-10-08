
void FUN_10036d830(QHideEvent *param_1)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  
  lVar1 = *(long *)(param_1 + 0x40);
  cVar3 = MacUtils::isWindowInNativeFullScreen(*(QWidget **)(lVar1 + 0x10));
  if (cVar3 == '\0') {
    uVar2 = FUN_100370280();
    FUN_100372fc0(uVar2,*(undefined8 *)(lVar1 + 0x10));
  }
  QWidget::hideEvent(param_1);
  return;
}

