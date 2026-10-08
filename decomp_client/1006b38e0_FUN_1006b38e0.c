
void FUN_1006b38e0(QAction *param_1,undefined4 param_2,QObject *param_3,QHostAddress *param_4,
                  QObject *param_5)

{
  char cVar1;
  undefined8 uVar2;
  long local_50;
  long local_48;
  long local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  QAction::QAction(param_1,param_5);
  *(undefined ***)param_1 = &PTR_FUN_102225590;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  uVar2 = 0;
  if (param_3 != (QObject *)0x0) {
    uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_3);
  }
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(QObject **)(param_1 + 0x20) = param_3;
  QHostAddress::QHostAddress((QHostAddress *)(param_1 + 0x28),param_4);
  QHostAddress::toString();
  QAction::setText((QString *)param_1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006b3988;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1006b3988:
  QObject::connect(&local_40,param_1,"2triggered(bool)",param_1,"1onTriggered()",0);
  if (local_40 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  QObject::connect(&local_48,uVar2,"2vmStateChanged (VIRTUAL_MACHINE_STATE,VIRTUAL_MACHINE_STATE)",
                   param_1,"1updateEnabledState()",0);
  if (cVar1 == '\0') {
    cVar1 = '\0';
  }
  else if (local_48 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar2 = FUN_10018f5c0(uVar2);
  QObject::connect(&local_50,uVar2,"2execToolStateChanged ( CVmToolsWatcher::ToolState )",param_1,
                   "1updateEnabledState()",0);
  if ((cVar1 != '\0') && (local_50 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_50);
  FUN_1006b3b60(param_1);
  return;
}

