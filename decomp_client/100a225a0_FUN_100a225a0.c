
void FUN_100a225a0(QObject *param_1)

{
  int iVar1;
  QSslCertificate *this;
  long lVar2;
  Data *local_40;
  undefined1 local_32;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_102237b90;
  QSslSocket::defaultCaCertificates();
  FUN_100a226f0();
  QSslSocket::setDefaultCaCertificates((QList *)&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_32 = 0;
    }
    iVar1 = *(int *)(local_40 + 0xc);
    if (iVar1 != *(int *)(local_40 + 8)) {
      lVar2 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar1 * -8;
      this = (QSslCertificate *)(local_40 + (long)iVar1 * 8 + 8);
      do {
        QSslCertificate::~QSslCertificate(this);
        this = this + -8;
        lVar2 = lVar2 + 8;
      } while (lVar2 != 0);
    }
    QListData::dispose(local_40);
  }
  return;
}

