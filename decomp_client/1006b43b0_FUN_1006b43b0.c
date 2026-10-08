
void FUN_1006b43b0(undefined8 param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined8 uVar7;
  void *pvVar8;
  long local_40;
  long local_38;
  
  uVar7 = FUN_100060bb0();
  QObject::connect(&local_38,uVar7,"2contextChanged(QPointer<QObject>, QPointer<QObject>)",param_1,
                   "1onContextChanged(QPointer<QObject>, QPointer<QObject>)",0);
  if (local_38 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    uVar7 = FUN_1001d50a0();
    bVar2 = 0;
    QObject::connect(&local_40,uVar7,"2activeWindowChanged(QWidget*, QWidget*)",param_1,
                     "1onActiveWindowChanged(QWidget*,QWidget*)",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    uVar7 = FUN_1001d50a0();
    bVar2 = 0;
    QObject::connect(&local_40,uVar7,"2activeWindowChanged(QWidget*, QWidget*)",param_1,
                     "1onActiveWindowChanged(QWidget*,QWidget*)",0);
    if (cVar1 != '\0') {
      if (local_40 == 0) {
        bVar2 = 0;
      }
      else {
        bVar2 = QMetaObject::Connection::isConnected_helper();
      }
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar8 = operator_new(0x18);
    FUN_1001a61d0(pvVar8);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar8;
  }
  bVar3 = FUN_1001a6390(DAT_1023108e0,param_1,"2macMenuShownPrivate()","2menuShown()",2);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar8 = operator_new(0x18);
    FUN_1001a61d0(pvVar8);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar8;
  }
  bVar4 = FUN_1001a6390(DAT_1023108e0,param_1,"2macMenuHiddenPrivate()","2menuHidden()",2);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar8 = operator_new(0x18);
    FUN_1001a61d0(pvVar8);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar8;
  }
  bVar5 = FUN_1001a6390(DAT_1023108e0,param_1,"2menuShown(QMenu*)","2menuShown(QMenu*)",0);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar8 = operator_new(0x18);
    FUN_1001a61d0(pvVar8);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar8;
  }
  bVar6 = FUN_1001a6390(DAT_1023108e0,param_1,"2menuHidden(QMenu*)","2menuHidden(QMenu*)",0);
  if ((bVar6 & bVar2 & bVar3 & bVar4 & bVar5) == 0) {
    FUN_100df99c0("[MENU_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","res",
                  "MenuManager/CMenuManager.cpp",0x56,"setupSignals");
  }
  return;
}

