
void FUN_100590960(long param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = CMappingModel::getSubmitPolicy();
  if (iVar2 == 1) {
    QWidget::setDisabled(SUB81(*(undefined8 *)(param_1 + 0xb0),0));
    QWidget::setDisabled
              (SUB81(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x58),0));
    QWidget::setDisabled
              (SUB81(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x30),0));
    CProgressIndicator::show();
    CProgressIndicator::toggleAnimation
              (SUB81(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x68),0));
    bVar1 = (bool)QDialogButtonBox::button
                            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x88),
                             0x400);
    QWidget::setEnabled(bVar1);
    return;
  }
  return;
}

