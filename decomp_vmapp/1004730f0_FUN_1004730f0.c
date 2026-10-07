
void FUN_1004730f0(long param_1,undefined8 param_2)

{
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  *(undefined8 *)(param_1 + 0x10) = param_2;
  QObject::connect(&local_18,param_2,
                   "2sigRecordChanged(const CTISBase::Record, const CTISBase::RecordFields)",param_1
                   ,"1slotRecordChanged(const CTISBase::Record, const CTISBase::RecordFields)",1);
  if (local_18 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_18);
  QObject::connect(&local_20,*(undefined8 *)(param_1 + 0x10),
                   "2sigRecordsRemoved(const QStringList, const bool)",param_1,
                   "1slotRecordsRemoved(const QStringList, const bool)",1);
  if (local_20 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_20);
  QObject::connect(&local_28,*(undefined8 *)(param_1 + 0x10),
                   "2sigParamChanged(const QString, const QString)",param_1,
                   "1slotParamChanged(const QString, const QString)",1);
  if (local_28 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_28);
  QObject::connect(&local_30,*(undefined8 *)(param_1 + 0x10),"2sigAfterLocked()",param_1,
                   "1slotAfterLocked()",1);
  if (local_30 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  QObject::connect(&local_38,*(undefined8 *)(param_1 + 0x10),"2sigBeforeUnlocked()",param_1,
                   "1slotBeforeUnlocked()",1);
  if (local_38 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  return;
}

