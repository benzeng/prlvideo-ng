
void FUN_100415610(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  Connection local_48 [8];
  Connection local_40 [8];
  Connection local_38 [8];
  long local_30 [2];
  
  LOCK();
  iVar2 = *(int *)(param_1 + 0x38);
  if (iVar2 == 0) {
    *(int *)(param_1 + 0x38) = 1;
    iVar2 = 0;
  }
  UNLOCK();
  if (iVar2 == 0) {
    lVar1 = param_1 + 0x18;
    (**(code **)(*(long *)(param_1 + 0x18) + 0x110))(lVar1,param_2,3,3);
    QObject::connect(local_38,lVar1,"2readyRead()",param_1,"1readPacketSlot()",0x80);
    QMetaObject::Connection::~Connection(local_38);
    QObject::connect(local_40,lVar1,"2disconnected()",param_1,"1disconnectedSlot()",0x80);
    QMetaObject::Connection::~Connection(local_40);
    QObject::connect(local_48,param_1,"2SendDataSignal()",param_1,"1SendDataSlot()",0x80);
    QMetaObject::Connection::~Connection(local_48);
    iVar2 = (int)param_1 + 0x28;
    QSemaphore::acquire(iVar2);
    FUN_10041edf0(param_1 + 0x30);
    QSemaphore::release(iVar2);
  }
  else {
    QTcpSocket::QTcpSocket((QTcpSocket *)local_30,(QObject *)0x0);
    (**(code **)(local_30[0] + 0x110))((QTcpSocket *)local_30,param_2,3,3);
    (**(code **)(local_30[0] + 0xf8))(local_30);
    QTcpSocket::~QTcpSocket((QTcpSocket *)local_30);
  }
  return;
}

