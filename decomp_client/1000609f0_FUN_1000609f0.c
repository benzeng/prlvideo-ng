
void FUN_1000609f0(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = QObject::sender();
  if (lVar2 == 0) {
    FUN_100df99c0("[CONTEXT_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "0 != sender()","Application/CAppContextLogic.mm",0x146,
                  "onMainWindowCurrentContextChanged");
  }
  lVar2 = QObject::sender();
  if ((lVar2 != 0) && ((*(byte *)(*(long *)(lVar2 + 8) + 0x20) & 1) != 0)) {
    cVar1 = QWidget::isActiveWindow();
    if (cVar1 != '\0') {
      uVar3 = FUN_100060320(lVar2);
      FUN_10005f5d0(param_1,uVar3);
      return;
    }
  }
  return;
}

