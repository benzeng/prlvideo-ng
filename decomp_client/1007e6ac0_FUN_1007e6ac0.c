
void FUN_1007e6ac0(QEvent *param_1,long param_2)

{
  if (*(ushort *)(param_2 + 0x10) - 0x12 < 2) {
    QTimeLine::stop();
  }
  else if (*(ushort *)(param_2 + 0x10) == 0x11) {
    FUN_1007e56a0(*(undefined8 *)(param_1 + 0x30));
    QTimeLine::start();
  }
  QWidget::event(param_1);
  return;
}

