
void FUN_100136990(QWidget *param_1,QWidget param_2)

{
  if (param_2 == (QWidget)0x0) {
    FontUtils::setSmallFont(param_1,false);
  }
  else {
    FontUtils::setNormalFont(param_1,false);
  }
  param_1[0x38] = param_2;
  QWidget::update();
  return;
}

