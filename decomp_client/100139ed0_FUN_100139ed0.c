
void FUN_100139ed0(QAbstractButton *param_1,QObject *param_2)

{
  if (param_2 != (QObject *)0x0) {
    QObject::disconnect(param_2,"2clicked(bool)",(QObject *)param_1,"1onButtonClicked()");
    QObject::removeEventFilter(param_2);
    QButtonGroup::removeButton(param_1);
    return;
  }
  return;
}

