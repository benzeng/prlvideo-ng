
void FUN_1001a6230(long param_1)

{
  Connection local_50 [8];
  Connection local_48 [8];
  Connection local_40 [8];
  Connection local_38 [8];
  Connection local_30 [8];
  Connection local_28 [8];
  Connection local_20 [8];
  
  QObject::connect(local_20,*(undefined8 *)(param_1 + 0x10),"2dashboardStateChangePrivate(bool)",
                   param_1,"2dashboardStateChanged(bool)",2);
  QMetaObject::Connection::~Connection(local_20);
  QObject::connect(local_28,*(undefined8 *)(param_1 + 0x10),"2exposeActivatedPrivate()",param_1,
                   "2exposeActivated()",2);
  QMetaObject::Connection::~Connection(local_28);
  QObject::connect(local_30,*(undefined8 *)(param_1 + 0x10),"2macLogoutInitiatedPrivate()",param_1,
                   "2macLogoutInitiated()",0);
  QMetaObject::Connection::~Connection(local_30);
  QObject::connect(local_38,*(undefined8 *)(param_1 + 0x10),"2macRestartInitiatedPrivate()",param_1,
                   "2macRestartInitiated()",0);
  QMetaObject::Connection::~Connection(local_38);
  QObject::connect(local_40,*(undefined8 *)(param_1 + 0x10),"2macShutdownInitiatedPrivate()",param_1
                   ,"2macShutdownInitiated()",0);
  QMetaObject::Connection::~Connection(local_40);
  QObject::connect(local_48,*(undefined8 *)(param_1 + 0x10),"2macLogoutContinuedPrivate()",param_1,
                   "2macLogoutContinued()",0);
  QMetaObject::Connection::~Connection(local_48);
  QObject::connect(local_50,*(undefined8 *)(param_1 + 0x10),"2macLogoutCancelledPrivate()",param_1,
                   "2macLogoutCancelled()",0);
  QMetaObject::Connection::~Connection(local_50);
  return;
}

