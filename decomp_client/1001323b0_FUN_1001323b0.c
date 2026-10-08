
void FUN_1001323b0(QAction *param_1,QString *param_2,QObject *param_3)

{
  Connection local_20 [8];
  
  QAction::QAction(param_1,param_2,param_3);
  *(undefined ***)param_1 = &PTR_FUN_1021f9830;
  *(undefined4 *)(param_1 + 0x10) = 0;
  QObject::connect(local_20,param_1,"2triggered(bool)",param_1,"1onActionTriggered()",0);
  QMetaObject::Connection::~Connection(local_20);
  return;
}

