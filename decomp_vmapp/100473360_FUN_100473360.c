
void FUN_100473360(QObject *param_1)

{
  QObject::disconnect(*(QObject **)(param_1 + 0x10),
                      "2sigRecordChanged(const CTISBase::Record, const CTISBase::RecordFields)",
                      param_1,
                      "1slotRecordChanged(const CTISBase::Record, const CTISBase::RecordFields)");
  QObject::disconnect(*(QObject **)(param_1 + 0x10),
                      "2sigRecordsRemoved(const QStringList, const bool)",param_1,
                      "1slotRecordsRemoved(const QStringList, const bool)");
  QObject::disconnect(*(QObject **)(param_1 + 0x10),"2sigParamChanged(const QString, const QString)"
                      ,param_1,"1slotParamChanged(const QString, const QString)");
  QObject::disconnect(*(QObject **)(param_1 + 0x10),"2sigAfterLocked()",param_1,"1slotAfterLocked()"
                     );
  QObject::disconnect(*(QObject **)(param_1 + 0x10),"2sigBeforeUnlocked()",param_1,
                      "1slotBeforeUnlocked()");
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}

