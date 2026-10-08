
void FUN_10041fb10(QSize *param_1)

{
  FUN_10041ff70(param_1[0xc]);
  FontUtils::setSmallFont(*(QWidget **)((long)param_1[0xc] + 8),false);
  (**(code **)((long)*param_1 + 0x78))(param_1);
  QWidget::setFixedSize(param_1);
  return;
}

