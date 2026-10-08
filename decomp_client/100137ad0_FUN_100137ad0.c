
void FUN_100137ad0(QObject *param_1,QObject *param_2,undefined8 param_3)

{
  QObject::QObject(param_1,param_2);
  *(undefined **)param_1 = PTR_DAT_1021e1798 + 0x10;
  FUN_100137dc0(param_1 + 0x10,param_3);
  QObject::installEventFilter(param_2);
  return;
}

