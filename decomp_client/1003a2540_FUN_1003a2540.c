
void FUN_1003a2540(long param_1)

{
  int iVar1;
  QPoint *pQVar2;
  
  FUN_1003b0ad0(param_1 + 0x20);
  iVar1 = CMappingModel::getSubmitPolicy();
  if (iVar1 == 0) {
    QWidget::setParent(*(QWidget **)(param_1 + 0x40));
    pQVar2 = *(QPoint **)(param_1 + 0x40);
  }
  else {
    QWidget::setParent(*(QWidget **)(param_1 + 0x40));
    pQVar2 = *(QPoint **)(param_1 + 0x40);
  }
  QWidget::move(pQVar2);
  QWidget::raise();
  return;
}

