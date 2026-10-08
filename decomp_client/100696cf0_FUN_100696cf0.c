
void FUN_100696cf0(void)

{
  char cVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  
  if (DAT_102310928 == (void *)0x0) {
    pvVar2 = operator_new(0x18);
    FUN_1001d4a60(pvVar2);
    DAT_102273638 = 1;
    DAT_102310928 = pvVar2;
  }
  uVar3 = FUN_1001d4b90(DAT_102310928);
  if ((uVar3 & 2) == 0) {
    if (DAT_1023109a0 == (void *)0x0) {
      pvVar2 = operator_new(0x18);
      FUN_1007251b0(pvVar2);
      DAT_102274b04 = 1;
      DAT_1023109a0 = pvVar2;
    }
    cVar1 = FUN_100725b40(DAT_1023109a0,0x5b);
    if (cVar1 != '\0') {
      return;
    }
  }
  lVar4 = QApplication::activeWindow();
  if (lVar4 == 0) {
    FUN_100df99c0("[ACTION_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "0 != activeWindow","ActionManager/ActionHandler/CAppActionHandler.cpp",0xa5,
                  "onMinimizeWindow");
    return;
  }
  QWidget::showMinimized();
  return;
}

