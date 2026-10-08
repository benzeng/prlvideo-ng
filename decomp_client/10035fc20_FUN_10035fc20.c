
void FUN_10035fc20(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("[CURSOR_CTL]","prl_client_app",3,"Restoring widget cursor...");
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x18);
  lVar2 = *(long *)(lVar1 + 0x48);
  if (((lVar2 != 0) && (*(int *)(lVar2 + 4) != 0)) && (*(long *)(lVar1 + 0x50) != 0)) {
    QWidget::unsetCursor();
  }
  QGuiApplication::restoreOverrideCursor();
  return;
}

