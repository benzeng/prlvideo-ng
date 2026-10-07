
void FUN_100416480(long param_1)

{
  long *plVar1;
  char cVar2;
  QHostAddress *pQVar3;
  undefined8 uVar4;
  QHostAddress local_28 [8];
  
  pQVar3 = operator_new(0x40,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (pQVar3 == (QHostAddress *)0x0) {
    *(undefined8 *)(param_1 + 0x660) = 0;
  }
  else {
    FUN_10041f140(pQVar3,param_1);
    *(QHostAddress **)(param_1 + 0x660) = pQVar3;
    uVar4 = 2;
    if (*(int *)(param_1 + 0x608) == 0) {
      uVar4 = 4;
    }
    QHostAddress::QHostAddress(local_28,uVar4);
    cVar2 = QTcpServer::listen(pQVar3,(ushort)local_28);
    QHostAddress::~QHostAddress(local_28);
    if (cVar2 != '\0') {
      QMutex::lock();
      QWaitCondition::wakeOne();
      QMutex::unlock();
      QThread::exec();
      goto LAB_100416574;
    }
  }
  *(undefined4 *)(param_1 + 0x610) = 1;
  QMutex::lock();
  QWaitCondition::wakeOne();
  QMutex::unlock();
LAB_100416574:
  if (*(long *)(param_1 + 0x660) != 0) {
    QTcpServer::close();
    plVar1 = *(long **)(param_1 + 0x660);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))();
    }
  }
  return;
}

