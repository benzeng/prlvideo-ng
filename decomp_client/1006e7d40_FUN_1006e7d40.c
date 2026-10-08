
void FUN_1006e7d40(QObject *param_1)

{
  QObject *pQVar1;
  undefined8 uVar2;
  Connection local_30 [8];
  
  CAppUpdateWorker::startInstallReminder();
  pQVar1 = (QObject *)FUN_10017cec0();
  QObject::disconnect(pQVar1,"2vmStateStatisticsChanged(const QString&, const CVmStatisticsInfo&)",
                      param_1,
                      "1onVmStateStatisticsChanged( const QString&, const CVmStatisticsInfo& )");
  uVar2 = FUN_10017cec0();
  QObject::connect(local_30,uVar2,
                   "2vmStateStatisticsChanged(const QString&, const CVmStatisticsInfo&)",param_1,
                   "1onVmStateStatisticsChanged( const QString&, const CVmStatisticsInfo& )",0);
  QMetaObject::Connection::~Connection(local_30);
  return;
}

