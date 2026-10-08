
void FUN_1006a93d0(QObject *param_1,long param_2,QObject *param_3)

{
  char cVar1;
  Connection local_28 [8];
  
  if (param_3 != (QObject *)0x0) {
    cVar1 = FUN_1006a9460(param_3);
    if (cVar1 != '\0') {
      QObject::disconnect(param_3,"2requestActionUpdate(QAction*)",param_1,"1updateAction(QAction*)"
                         );
    }
  }
  if (param_2 != 0) {
    cVar1 = FUN_1006a9460(param_2);
    if (cVar1 != '\0') {
      QObject::connect(local_28,param_2,"2requestActionUpdate(QAction*)",param_1,
                       "1updateAction(QAction*)",0x80);
      QMetaObject::Connection::~Connection(local_28);
    }
  }
  return;
}

