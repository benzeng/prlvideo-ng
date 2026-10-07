
void FUN_10041f140(QTcpServer *param_1,undefined8 param_2)

{
  QTcpServer::QTcpServer(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_100bc0690;
  QTcpSocket::QTcpSocket((QTcpSocket *)(param_1 + 0x18),(QObject *)0x0);
  QSemaphore::QSemaphore((QSemaphore *)(param_1 + 0x28),0);
  *(undefined **)(param_1 + 0x30) = PTR_shared_null_100ba20f0;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  QSemaphore::release((int)(QSemaphore *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}

