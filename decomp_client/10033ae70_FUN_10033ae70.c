
void FUN_10033ae70(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Connection local_50 [8];
  Connection local_48 [8];
  Connection local_40 [8];
  Connection local_38 [8];
  Connection local_30 [8];
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar1 = FUN_100319c00(uVar2);
  uVar2 = 0;
  QObject::connect(local_30,uVar1,"2coherenceStarted()",param_1,"1onCoherenceStarted()",0);
  QMetaObject::Connection::~Connection(local_30);
  QObject::connect(local_38,uVar1,"2coherenceStopped( bool, unsigned int )",param_1,
                   "1onCoherenceStopped()",0);
  QMetaObject::Connection::~Connection(local_38);
  QObject::connect(local_40,uVar1,"2coherenceWndDeactivated( const QString& )",param_1,
                   "1onCoherenceWndDeactivated( const QString& )",0);
  QMetaObject::Connection::~Connection(local_40);
  QObject::connect(local_48,uVar1,"2coherenceWndActivated( const QString& )",param_1,
                   "1onCoherenceWndActivated( const QString& )",0);
  QMetaObject::Connection::~Connection(local_48);
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar2 = FUN_100319d40(uVar2);
  QObject::connect(local_50,uVar2,
                   "2keyboardGrabStateChanged( QString, bool, GUI::InputStateChangeReason )",param_1
                   ,"1onKeyboardGrabStateChanged( QString, bool, GUI::InputStateChangeReason )",0);
  QMetaObject::Connection::~Connection(local_50);
  return;
}

