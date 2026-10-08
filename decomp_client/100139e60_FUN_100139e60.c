
void FUN_100139e60(QAbstractButton *param_1,QObject *param_2)

{
  Connection local_30 [8];
  
  if (param_2 != (QObject *)0x0) {
    QObject::connect(local_30,param_2,"2clicked(bool)",param_1,"1onButtonClicked()",0);
    QMetaObject::Connection::~Connection(local_30);
    QObject::installEventFilter(param_2);
    QButtonGroup::addButton(param_1,(int)param_2);
  }
  return;
}

