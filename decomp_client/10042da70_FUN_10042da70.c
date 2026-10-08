
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10042da70(long param_1)

{
  bool bVar1;
  uint uVar2;
  undefined1 uVar3;
  
  if (((*(long *)(param_1 + 0xf8) != 0) && (*(int *)(*(long *)(param_1 + 0xf8) + 4) != 0)) &&
     (*(long *)(param_1 + 0x100) != 0)) {
    CVmHardDisk::getSize();
    QDoubleSpinBox::value();
  }
  FUN_10042dc80(param_1);
  uVar2 = *(int *)(param_1 + 0x14c) - 1;
  if (uVar2 < 4) {
    uVar3 = (undefined1)*(undefined8 *)(param_1 + 0x50);
    if ((0xdU >> ((byte)uVar2 & 0xf) & 1) != 0) {
      QWidget::setEnabled((bool)uVar3);
      QWidget::setEnabled(SUB81(*(undefined8 *)(param_1 + 0x60),0));
      goto LAB_10042dbc5;
    }
  }
  else {
    uVar3 = (undefined1)*(undefined8 *)(param_1 + 0x50);
  }
  QWidget::setEnabled((bool)uVar3);
  QWidget::setEnabled(SUB81(*(undefined8 *)(param_1 + 0x60),0));
LAB_10042dbc5:
  QWidget::setEnabled(SUB81(*(undefined8 *)(param_1 + 0x70),0));
  QWidget::setEnabled(SUB81(*(undefined8 *)(param_1 + 0x78),0));
  QWidget::setEnabled(SUB81(*(undefined8 *)(param_1 + 0x80),0));
  bVar1 = (bool)QDialogButtonBox::button(*(undefined8 *)(param_1 + 0xe0),0x4000000);
  QWidget::setEnabled(bVar1);
  bVar1 = (bool)QDialogButtonBox::button(*(undefined8 *)(param_1 + 0xe0),0x2000000);
  QWidget::setEnabled(bVar1);
  bVar1 = (bool)QDialogButtonBox::button(*(undefined8 *)(param_1 + 0xe0),0x400000);
  QWidget::setEnabled(bVar1);
  return;
}

