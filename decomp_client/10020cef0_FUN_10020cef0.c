
void FUN_10020cef0(long param_1,QString *param_2)

{
  long lVar1;
  undefined8 uVar2;
  Connection local_28 [8];
  
  QString::operator=((QString *)(param_1 + 0x80),param_2);
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  lVar1 = FUN_100197430(uVar2,param_2);
  QObject::connect(local_28,lVar1,"2jobCompleted(PRL_RESULT)",param_1,
                   "1onCheckPasswordCompleted(PRL_RESULT)",0);
  QMetaObject::Connection::~Connection(local_28);
  *(undefined1 *)(lVar1 + 0x60) = 1;
  return;
}

