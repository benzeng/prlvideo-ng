
void FUN_10033a920(long param_1)

{
  undefined8 uVar1;
  Connection local_30 [8];
  Connection local_28 [8];
  
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar1 = FUN_100319c00(uVar1);
  QObject::connect(local_28,uVar1,"2coherenceStarted()",param_1,"1onCoherenceStarted()",0);
  QMetaObject::Connection::~Connection(local_28);
  QObject::connect(local_30,uVar1,"2coherenceStopped( bool, unsigned int )",param_1,
                   "1onCoherenceStopped()",0);
  QMetaObject::Connection::~Connection(local_30);
  return;
}

