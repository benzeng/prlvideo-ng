
void FUN_10041fff0(QTcpServer *param_1)

{
  int *piVar1;
  long lVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_100bc0690;
  lVar2 = *(long *)(param_1 + 0x30);
  if (*(int *)(lVar2 + 0x10) != -1) {
    if (*(int *)(lVar2 + 0x10) != 0) {
      LOCK();
      piVar1 = (int *)(lVar2 + 0x10);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) goto LAB_100420033;
      lVar2 = *(long *)(param_1 + 0x30);
    }
    FUN_10041f220(param_1 + 0x30,lVar2);
  }
LAB_100420033:
  QSemaphore::~QSemaphore((QSemaphore *)(param_1 + 0x28));
  QTcpSocket::~QTcpSocket((QTcpSocket *)(param_1 + 0x18));
  QTcpServer::~QTcpServer(param_1);
  return;
}

