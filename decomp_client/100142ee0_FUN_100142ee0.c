
void FUN_100142ee0(QMouseEvent *param_1)

{
  char cVar1;
  
  cVar1 = FUN_100142d70();
  if (cVar1 != '\0') {
    QWidget::mouseReleaseEvent(param_1);
    return;
  }
  return;
}

