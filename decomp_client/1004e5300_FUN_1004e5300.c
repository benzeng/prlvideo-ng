
void FUN_1004e5300(QWidget *param_1)

{
  QVBoxLayout *this;
  
  this = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(this,param_1);
  QBoxLayout::addWidget(this,*(undefined8 *)(param_1 + 0x50),0,0);
  QLayout::contentsMargins();
  QLayout::setContentsMargins((QMargins *)this);
  QBoxLayout::setSpacing((int)this);
  return;
}

