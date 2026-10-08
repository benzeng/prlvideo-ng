
void FUN_100425260(QShowEvent *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x60) + 0x20);
  lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x60) + 0x38) + 0x28);
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((*(int *)(lVar3 + 0x1c) + 1) - *(int *)(lVar3 + 0x14) <
      (*(int *)(lVar2 + 0x1c) + 1) - *(int *)(lVar2 + 0x14)) {
    QWidget::setMinimumWidth((int)lVar1);
  }
  QDialog::showEvent(param_1);
  return;
}

