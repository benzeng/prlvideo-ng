
void FUN_100ace120(QObject *param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  long lVar2;
  byte bVar3;
  char cVar4;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  undefined1 local_29;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10223a750;
  piVar1 = (int *)*param_2;
  *(int **)(param_1 + 0x10) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_29 = *piVar1 != 0;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x18) = param_3;
  QMutex::lock();
  lVar2 = DAT_1023108a8;
  if (DAT_1023108a8 != 0) {
    DAT_1023108b0 = DAT_1023108b0 + 1;
  }
  QMutex::unlock();
  *(long *)(param_1 + 0x20) = lVar2;
  QObject::connect(&local_38,lVar2,
                   "2sigCoherenceDataFromStub(const ProcessSerialNumber, const QString, const QByteArray)"
                   ,param_1,
                   "1OnStubDataReceived(const ProcessSerialNumber, const QString, const QByteArray)"
                   ,0);
  bVar3 = 1;
  if (local_38 != 0) {
    bVar3 = QMetaObject::Connection::isConnected_helper();
    bVar3 = bVar3 ^ 1;
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  QObject::connect(&local_40,*(undefined8 *)(param_1 + 0x20),
                   "2sigCoherenceEventsFromStub(const ProcessSerialNumber, const QString, const QByteArray)"
                   ,param_1,
                   "1OnStubEventsReceived(const ProcessSerialNumber, const QString, const QByteArray)"
                   ,0);
  if (bVar3 == 0) {
    if (local_40 == 0) {
      cVar4 = '\0';
    }
    else {
      cVar4 = QMetaObject::Connection::isConnected_helper();
    }
  }
  else {
    cVar4 = '\0';
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  QObject::connect(&local_48,*(undefined8 *)(param_1 + 0x20),
                   "2sigStubConnected(const QString, const QString, const ProcessSerialNumber, const hwndList_t)"
                   ,param_1,
                   "1OnStubConnected(const QString, const QString, const ProcessSerialNumber, const hwndList_t)"
                   ,0);
  if (cVar4 == '\0') {
    cVar4 = '\0';
  }
  else if (local_48 == 0) {
    cVar4 = '\0';
  }
  else {
    cVar4 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  QObject::connect(&local_50,*(undefined8 *)(param_1 + 0x20),
                   "2sigStubDisconnected(const QString, const QString, const ProcessSerialNumber)",
                   param_1,
                   "1OnStubDisconnected(const QString, const QString, const ProcessSerialNumber)",0)
  ;
  if (cVar4 == '\0') {
    cVar4 = '\0';
  }
  else if (local_50 == 0) {
    cVar4 = '\0';
  }
  else {
    cVar4 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_50);
  QObject::connect(&local_58,*(undefined8 *)(param_1 + 0x20),
                   "2sigGuestAppActivating(const QString, const ProcessSerialNumber, bool)",param_1,
                   "1OnGuestAppActivating(const QString, const ProcessSerialNumber, bool)",0);
  if (cVar4 == '\0') {
    cVar4 = '\0';
  }
  else if (local_58 == 0) {
    cVar4 = '\0';
  }
  else {
    cVar4 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_58);
  QObject::connect(&local_60,*(undefined8 *)(param_1 + 0x20),
                   "2sigMetroModeChanged(const QString, int)",param_1,
                   "1OnMetroModeChanged(const QString, int)",0);
  if (cVar4 == '\0') {
    cVar4 = '\0';
  }
  else if (local_60 == 0) {
    cVar4 = '\0';
  }
  else {
    cVar4 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_60);
  QObject::connect(&local_68,*(undefined8 *)(param_1 + 0x20),
                   "2sigStubWindowAdded(const QString, const QString, const ProcessSerialNumber, UINT64)"
                   ,param_1,
                   "1OnStubWindowAdded(const QString, const QString, const ProcessSerialNumber, UINT64)"
                   ,0);
  if ((cVar4 != '\0') && (local_68 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_68);
  if (lVar2 != 0) {
    FUN_100055290(&DAT_102310898);
  }
  return;
}

