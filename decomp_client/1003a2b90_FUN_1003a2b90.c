
void FUN_1003a2b90(long param_1)

{
  bool bVar1;
  int iVar2;
  
  FUN_1003b0ad0(param_1 + 0x20);
  iVar2 = CMappingModel::getSubmitPolicy();
  if (iVar2 == 1) {
    CProgressIndicator::show();
    bVar1 = (bool)QDialogButtonBox::button(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x50),0x400);
    QWidget::setEnabled(bVar1);
    return;
  }
  return;
}

