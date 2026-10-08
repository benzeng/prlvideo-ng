
void FUN_100590a10(long param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = CMappingModel::getSubmitPolicy();
  if (iVar2 == 1) {
    QWidget::setEnabled(SUB81(*(undefined8 *)(param_1 + 0xb0),0));
    QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x58),0)
                       );
    QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x30),0)
                       );
    CProgressIndicator::toggleAnimation
              (SUB81(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x68),0));
    CProgressIndicator::hide();
    bVar1 = (bool)QDialogButtonBox::button
                            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x88),
                             0x400);
    QWidget::setEnabled(bVar1);
  }
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x10) + 0x28) + 10) & 1) != 0) {
    if (param_2 < 0) {
      QWidget::show();
      QWidget::raise();
      return;
    }
    QWidget::close();
    QObject::deleteLater();
    return;
  }
  if ((-1 < param_2) && (iVar2 = CMappingModel::getSubmitPolicy(), iVar2 == 1)) {
    WidgetUtils::reparentNonBlockingDialogsTo((QWidget *)0x0,*(QWidget **)(param_1 + 0x10));
    QWidget::close();
    return;
  }
  return;
}

