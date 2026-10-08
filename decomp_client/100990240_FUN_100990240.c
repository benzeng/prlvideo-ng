
void FUN_100990240(long param_1)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  long local_28;
  long local_20;
  
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  plVar2 = (long *)FUN_10098fba0(*(undefined4 *)(param_1 + 0x10),uVar3);
  QObject::connect(&local_20,plVar2,"2completed(err_status_t, BatteryState)",param_1,
                   "1onBatteryCheckRequestFinished(err_status_t, BatteryState)",0);
  if (local_20 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_20);
    QObject::connect(&local_28,plVar2,"2completed(err_status_t, BatteryState)",plVar2,
                     "1deleteLater()",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_20);
    QObject::connect(&local_28,plVar2,"2completed(err_status_t, BatteryState)",plVar2,
                     "1deleteLater()",0);
    if ((cVar1 != '\0') && (local_28 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_28);
  (**(code **)(*plVar2 + 0x60))(plVar2);
  return;
}

