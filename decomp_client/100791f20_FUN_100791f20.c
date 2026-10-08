
void FUN_100791f20(undefined8 *param_1,QObject *param_2)

{
  char cVar1;
  undefined8 uVar2;
  long local_40;
  long local_38;
  long local_30 [2];
  
  FUN_100790360();
  *param_1 = &PTR_FUN_10222bff0;
  uVar2 = 0;
  if (param_2 != (QObject *)0x0) {
    uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  param_1[3] = uVar2;
  param_1[4] = param_2;
  FUN_100790b60(param_1);
  uVar2 = 0;
  if ((param_1[3] != 0) && (uVar2 = 0, *(int *)(param_1[3] + 4) != 0)) {
    uVar2 = param_1[4];
  }
  QObject::connect(local_30,uVar2,"2vmStateChanged(VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE)",
                   param_1,"1updateAllActionsAvailability()",0);
  if (local_30[0] == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)local_30);
  uVar2 = 0;
  if ((param_1[3] != 0) && (uVar2 = 0, *(int *)(param_1[3] + 4) != 0)) {
    uVar2 = param_1[4];
  }
  QObject::connect(&local_38,uVar2,"2vmConfigurationChanged(const CVmConfiguration&)",param_1,
                   "1updateSpecialCharactersAvailability()",0);
  if (cVar1 == '\0') {
    cVar1 = '\0';
  }
  else if (local_38 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  uVar2 = 0;
  if ((param_1[3] != 0) && (uVar2 = 0, *(int *)(param_1[3] + 4) != 0)) {
    uVar2 = param_1[4];
  }
  uVar2 = FUN_10018c280(uVar2);
  uVar2 = FUN_100319cd0(uVar2);
  QObject::connect(&local_40,uVar2,"2textInputAvailabilityChanged(bool)",param_1,
                   "1updateSpecialCharactersAvailability()",0);
  if ((cVar1 != '\0') && (local_40 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  return;
}

