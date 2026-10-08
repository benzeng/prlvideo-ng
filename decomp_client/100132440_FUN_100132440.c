
void FUN_100132440(QAction *param_1,QIcon *param_2,QString *param_3,QObject *param_4)

{
  Connection local_20 [8];
  
  QAction::QAction(param_1,param_2,param_3,param_4);
  *(undefined ***)param_1 = &PTR_FUN_1021f9830;
  *(undefined4 *)(param_1 + 0x10) = 0;
  QObject::connect(local_20,param_1,"2triggered(bool)",param_1,"1onActionTriggered()",0);
  QMetaObject::Connection::~Connection(local_20);
  return;
}

