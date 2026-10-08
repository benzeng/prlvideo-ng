
void FUN_1006a5020(long param_1)

{
  long lVar1;
  char cVar2;
  QObject *pQVar3;
  void *pvVar4;
  long local_68;
  long local_60;
  QObject *local_58;
  undefined4 local_4c;
  QObject *local_48;
  undefined4 local_3c;
  QObject *local_38;
  undefined4 local_2c;
  
  local_2c = 1;
  pQVar3 = operator_new(0x18);
  QObject::QObject(pQVar3,(QObject *)0x0);
  lVar1 = param_1 + 0x20;
  *(undefined ***)pQVar3 = &PTR_FUN_102225080;
  local_38 = pQVar3;
  FUN_1006a9b70(lVar1,&local_2c,&local_38);
  local_3c = 2;
  pQVar3 = operator_new(0x20);
  QObject::QObject(pQVar3,(QObject *)0x0);
  *(undefined ***)pQVar3 = &PTR_FUN_102225170;
  local_48 = pQVar3;
  FUN_1006a9b70(lVar1,&local_3c,&local_48);
  local_4c = 3;
  pQVar3 = operator_new(0x28);
  QObject::QObject(pQVar3,(QObject *)0x0);
  *(undefined ***)pQVar3 = &PTR_FUN_102225260;
  local_58 = pQVar3;
  FUN_1006a9b70(lVar1,&local_4c,&local_58);
  cVar2 = '\0';
  QObject::connect(&local_60,*(undefined8 *)PTR_self_1021e1388,
                   "2activeWindowChanged(QWidget*, QWidget*)",param_1,
                   "1onActiveWindowChanged(QWidget*,QWidget*)",0);
  if (local_60 != 0) {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_60);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar4 = operator_new(0x18);
    FUN_1001a61d0(pvVar4);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar4;
  }
  QObject::connect(&local_68,DAT_1023108e0,"2menuShown(QMenu*)",param_1,"1menuShown(QMenu*)",0);
  if ((cVar2 == '\0') || (local_68 == 0)) {
    QMetaObject::Connection::~Connection((Connection *)&local_68);
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_68);
    if (cVar2 != '\0') {
      return;
    }
  }
  FUN_100df99c0("[ACTION_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","connected",
                "ActionManager/ActionUpdater/CActionUpdater.cpp",0x44,"init");
  return;
}

