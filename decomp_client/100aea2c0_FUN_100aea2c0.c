
bool FUN_100aea2c0(long param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  QArrayData *local_80;
  QDataStream local_78 [32];
  QArrayData *local_58;
  timespec local_50;
  QLocalSocket local_40 [23];
  undefined1 local_29;
  
  cVar1 = FUN_100ae9df0();
  if (cVar1 == '\0') {
    return false;
  }
  QLocalSocket::QLocalSocket(local_40,(QObject *)0x0);
  QLocalSocket::connectToServer(local_40,param_1 + 0x18,3);
  cVar1 = QLocalSocket::waitForConnected((int)local_40);
  if (cVar1 == '\0') {
    local_50.tv_sec = 0;
    local_50.tv_nsec = 250000000;
    _nanosleep(&local_50,(timespec *)0x0);
    QLocalSocket::connectToServer(local_40,param_1 + 0x18,3);
    cVar1 = QLocalSocket::waitForConnected((int)local_40);
    if (cVar1 == '\0') {
      bVar3 = false;
      goto LAB_100aea47a;
    }
  }
  QString::toUtf8();
  QDataStream::QDataStream(local_78,(QIODevice *)local_40);
  QDataStream::writeBytes((char *)local_78,(int)*(undefined8 *)(local_58 + 0x10) + (int)local_58);
  cVar1 = QLocalSocket::waitForBytesWritten((int)local_40);
  bVar3 = false;
  if (cVar1 != '\0') {
    cVar1 = QLocalSocket::waitForReadyRead((int)local_40);
    bVar3 = false;
    if (cVar1 != '\0') {
      if (PTR_s_ack_1022829a8 != (undefined *)0x0) {
        _strlen(PTR_s_ack_1022829a8);
      }
      QIODevice::read((longlong)&local_80);
      if (PTR_s_ack_1022829a8 == (undefined *)0x0) {
        iVar2 = *(int *)(local_80 + 4);
      }
      else {
        iVar2 = qstrcmp((QByteArray *)&local_80,PTR_s_ack_1022829a8);
      }
      bVar3 = iVar2 == 0;
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_29 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100aea43c;
        }
        QArrayData::deallocate(local_80,1,8);
      }
    }
  }
LAB_100aea43c:
  QDataStream::~QDataStream(local_78);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100aea47a;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_100aea47a:
  QLocalSocket::~QLocalSocket(local_40);
  return bVar3;
}

