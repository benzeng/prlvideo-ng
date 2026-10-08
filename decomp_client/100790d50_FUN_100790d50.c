
void FUN_100790d50(undefined8 *param_1,QObject *param_2)

{
  char cVar1;
  undefined8 uVar2;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_30 [2];
  
  FUN_100790360();
  *param_1 = &PTR_FUN_10222bd90;
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
  QObject::connect(local_30,uVar2,"2textChanged(const QString&)",param_1,
                   "1updateAllActionsAvailability()",0);
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
  QObject::connect(&local_38,uVar2,"2textEdited(const QString&)",param_1,
                   "1updateAllActionsAvailability()",0);
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
  QObject::connect(&local_40,uVar2,"2cursorPositionChanged(int, int)",param_1,
                   "1updateAllActionsAvailability()",0);
  if (cVar1 == '\0') {
    cVar1 = '\0';
  }
  else if (local_40 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  uVar2 = 0;
  if ((param_1[3] != 0) && (uVar2 = 0, *(int *)(param_1[3] + 4) != 0)) {
    uVar2 = param_1[4];
  }
  QObject::connect(&local_48,uVar2,"2returnPressed()",param_1,"1updateAllActionsAvailability()",0);
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
  if ((param_1[3] != 0) && (uVar2 = 0, *(int *)(param_1[3] + 4) != 0)) {
    uVar2 = param_1[4];
  }
  QObject::connect(&local_50,uVar2,"2editingFinished()",param_1,"1updateAllActionsAvailability()",0)
  ;
  if (cVar1 == '\0') {
    cVar1 = '\0';
  }
  else if (local_50 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_50);
  uVar2 = 0;
  if ((param_1[3] != 0) && (uVar2 = 0, *(int *)(param_1[3] + 4) != 0)) {
    uVar2 = param_1[4];
  }
  QObject::connect(&local_58,uVar2,"2selectionChanged()",param_1,"1updateAllActionsAvailability()",0
                  );
  if (cVar1 == '\0') {
    cVar1 = '\0';
  }
  else if (local_58 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_58);
  uVar2 = QGuiApplication::clipboard();
  QObject::connect(&local_60,uVar2,"2dataChanged()",param_1,"1updatePasteAvailability()",0);
  if ((cVar1 != '\0') && (local_60 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_60);
  return;
}

