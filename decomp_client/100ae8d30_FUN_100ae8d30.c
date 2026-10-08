
void FUN_100ae8d30(long param_1)

{
  long lVar1;
  uint uVar2;
  
  if (((*(long *)(param_1 + 0x18) != 0) && (*(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) &&
     (lVar1 = *(long *)(param_1 + 0x20), lVar1 != 0)) {
    uVar2 = QWidget::windowState();
    QWidget::setWindowState(lVar1,uVar2 & 0xfffffffe);
    QWidget::raise();
    QWidget::activateWindow();
    return;
  }
  return;
}

