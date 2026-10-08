
void FUN_1003a24d0(long param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_1001d50a0();
  cVar1 = FUN_1001d5140(uVar4,0);
  if (cVar1 == '\0') {
    FUN_1003b0ad0(param_1 + 0x20);
    iVar3 = CMappingModel::getSubmitPolicy();
    if (iVar3 == 1) {
      CProgressIndicator::hide();
      bVar2 = (bool)QDialogButtonBox::button
                              (*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x50),0x400);
      QWidget::setEnabled(bVar2);
      return;
    }
  }
  return;
}

