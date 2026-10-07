
void FUN_100473290(QObject *param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar1 + 0x60))(plVar1);
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
                    /* WARNING: Could not recover jumptable at 0x00010047333b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x68))(plVar1);
  return;
}

