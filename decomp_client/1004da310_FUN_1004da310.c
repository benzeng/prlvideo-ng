
void FUN_1004da310(long *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long local_28;
  long local_20;
  
  iVar2 = (**(code **)(*param_1 + 0x228))();
  QWidget::setFixedWidth(iVar2);
  FUN_1004da460(param_1);
  (**(code **)(*param_1 + 0x1d8))(param_1);
  (**(code **)(*param_1 + 0x228))(param_1);
  uVar3 = QListWidget::currentRow();
  FUN_1004da970(param_1,uVar3);
  uVar4 = (**(code **)(*param_1 + 0x228))(param_1);
  QObject::connect(&local_20,uVar4,"2currentRowChanged(int)",param_1,"1changePage(int)",0);
  if (local_20 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_20);
    uVar4 = FUN_1003b0ad0(param_1[8]);
    QObject::connect(&local_28,uVar4,"2itemsChanged()",param_1,"1updateListItems()",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_20);
    uVar4 = FUN_1003b0ad0(param_1[8]);
    QObject::connect(&local_28,uVar4,"2itemsChanged()",param_1,"1updateListItems()",0);
    if ((cVar1 != '\0') && (local_28 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_28);
  return;
}

