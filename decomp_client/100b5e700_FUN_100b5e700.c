
bool FUN_100b5e700(long param_1)

{
  int iVar1;
  QSocketNotifier *pQVar2;
  Connection local_28 [8];
  
  iVar1 = _socketpair(1,1,0,(int *)(param_1 + 0x1c));
  if (iVar1 == 0) {
    pQVar2 = operator_new(0x10);
    QSocketNotifier::QSocketNotifier(pQVar2,(long)*(int *)(param_1 + 0x20),0,param_1);
    *(QSocketNotifier **)(param_1 + 0x28) = pQVar2;
    QObject::connect(local_28,pQVar2,"2activated(int)",param_1,"1onSignal()",0);
    QMetaObject::Connection::~Connection(local_28);
  }
  return iVar1 == 0;
}

