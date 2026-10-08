
void FUN_1001427d0(QMouseEvent *param_1)

{
  QWidget::mouseReleaseEvent(param_1);
  QWidget::repaint();
  if (param_1[0xf9] == (QMouseEvent)0x0) {
    FUN_1007fc260(param_1,*(undefined4 *)(param_1 + 0xf0));
    if (param_1[0xf9] == (QMouseEvent)0x0) {
      return;
    }
  }
  FUN_100142830(param_1);
  return;
}

