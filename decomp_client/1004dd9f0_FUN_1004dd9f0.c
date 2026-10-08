
void FUN_1004dd9f0(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  uVar2 = FUN_1003b0ae0(*(undefined8 *)(param_1 + 0x40));
  QObject::connect(&local_28,uVar2,"2initWidgetsFinished()",param_1,"1updateUiProperties()",0);
  if (local_28 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    uVar2 = FUN_1003b0ad0(*(undefined8 *)(param_1 + 0x40));
    QObject::connect((Connection *)&local_30,uVar2,"2submitStarted()",param_1,
                     "1updateUiProperties()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    uVar2 = FUN_1003b0ad0(*(undefined8 *)(param_1 + 0x40));
LAB_1004ddc4c:
    QObject::connect((Connection *)&local_38,uVar2,"2submitFinished(PRL_RESULT)",param_1,
                     "1updateUiProperties()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    uVar2 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x40));
LAB_1004ddc7c:
    QObject::connect((Connection *)&local_40,uVar2,"2dataChanged()",param_1,"1updateUiProperties()",
                     0);
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    uVar2 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x40));
LAB_1004ddcbc:
    QObject::connect(&local_48,uVar2,"2vmStateChanged(VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE)"
                     ,param_1,"1updateUiProperties()",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    uVar2 = FUN_1003b0ad0(*(undefined8 *)(param_1 + 0x40));
    QObject::connect(&local_30,uVar2,"2submitStarted()",param_1,"1updateUiProperties()",0);
    if ((cVar1 == '\0') || (local_30 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_30);
      uVar2 = FUN_1003b0ad0(*(undefined8 *)(param_1 + 0x40));
      goto LAB_1004ddc4c;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    uVar2 = FUN_1003b0ad0(*(undefined8 *)(param_1 + 0x40));
    QObject::connect(&local_38,uVar2,"2submitFinished(PRL_RESULT)",param_1,"1updateUiProperties()",0
                    );
    if ((cVar1 == '\0') || (local_38 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_38);
      uVar2 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x40));
      goto LAB_1004ddc7c;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    uVar2 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x40));
    QObject::connect(&local_40,uVar2,"2dataChanged()",param_1,"1updateUiProperties()",0);
    if ((cVar1 == '\0') || (local_40 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_40);
      uVar2 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x40));
      goto LAB_1004ddcbc;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    uVar2 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x40));
    QObject::connect(&local_48,uVar2,"2vmStateChanged(VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE)"
                     ,param_1,"1updateUiProperties()",0);
    if ((cVar1 != '\0') && (local_48 != 0)) {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_48);
      QObject::connect(&local_50,param_1,"2currentItemChanged(VmEditorTypes::VmEditorItems,uint)",
                       param_1,"1onCurrentItemChanged(VmEditorTypes::VmEditorItems,uint)",0);
      if ((cVar1 != '\0') && (local_50 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      goto LAB_1004ddcec;
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  QObject::connect(&local_50,param_1,"2currentItemChanged(VmEditorTypes::VmEditorItems,uint)",
                   param_1,"1onCurrentItemChanged(VmEditorTypes::VmEditorItems,uint)",0);
LAB_1004ddcec:
  QMetaObject::Connection::~Connection((Connection *)&local_50);
  return;
}

