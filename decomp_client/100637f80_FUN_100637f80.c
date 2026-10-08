
void FUN_100637f80(long param_1)

{
  long lVar1;
  
  FUN_1006382d0(param_1 + 0x60,param_1);
  lVar1 = QWidget::layout();
  if (lVar1 != 0) {
    QLayout::setContentsMargins((int)lVar1,0xe,9,0xe);
  }
  QWidget::setFixedSize((int)param_1,500);
  FontUtils::setSmallFont(*(QWidget **)(param_1 + 0x78),false);
  QWidget::setFocus(*(undefined8 *)(param_1 + 0xa0),7);
  return;
}

