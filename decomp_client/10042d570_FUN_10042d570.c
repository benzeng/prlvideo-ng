
void FUN_10042d570(long param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x14c) == param_2) {
    return;
  }
  if (param_2 == 4) {
    QProgressBar::setRange((int)*(undefined8 *)(param_1 + 0xd0),0);
    uVar1 = 4;
  }
  else {
    if (param_2 != 3) {
      *(int *)(param_1 + 0x14c) = param_2;
      QDialogButtonBox::button(*(undefined8 *)(param_1 + 0xe0),0x400000);
      QWidget::hide();
      uVar3 = *(undefined8 *)(param_1 + 0xe0);
      uVar2 = 0x200000;
      goto LAB_10042d626;
    }
    QProgressBar::setRange((int)*(undefined8 *)(param_1 + 0xd0),0);
    QProgressBar::setValue((int)*(undefined8 *)(param_1 + 0xd0));
    uVar1 = 3;
  }
  *(undefined4 *)(param_1 + 0x14c) = uVar1;
  QDialogButtonBox::button(*(undefined8 *)(param_1 + 0xe0),0x200000);
  QWidget::hide();
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  uVar2 = 0x400000;
LAB_10042d626:
  QDialogButtonBox::button(uVar3,uVar2);
  QWidget::show();
  (**(code **)(**(long **)(param_1 + 0xd0) + 0x68))
            (*(long **)(param_1 + 0xd0),-(*(int *)(param_1 + 0x14c) - 3U < 2) & 1);
  QStackedWidget::setCurrentIndex((int)*(undefined8 *)(param_1 + 0x20));
  CProgressIndicator::toggleAnimation(SUB81(*(undefined8 *)(param_1 + 0xb8),0));
  FUN_10042da70(param_1);
  return;
}

