
void FUN_1001be350(QObject *param_1,QObject *param_2)

{
  undefined *puVar1;
  char cVar2;
  CProxyAuthenticator *this;
  undefined8 uVar3;
  long local_38;
  long local_30 [2];
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_1021eecd0;
  *(QObject **)(param_1 + 0x10) = param_2;
  *(undefined **)(param_1 + 0x18) = PTR_shared_null_1021e15d0;
  puVar1 = PTR_m_instance_1021e1418;
  this = *(CProxyAuthenticator **)PTR_m_instance_1021e1418;
  if (this == (CProxyAuthenticator *)0x0) {
    this = operator_new(0x18);
    CProxyAuthenticator::CProxyAuthenticator(this);
    *(CProxyAuthenticator **)puVar1 = this;
    DAT_1022728e8 = 1;
  }
  QObject::connect(local_30,this,"2validCredentialsEntered(QUrl,QNetworkProxy)",param_1,
                   "1onValidCredentialsEntered(QUrl,QNetworkProxy)",0);
  if (local_30[0] == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)local_30);
  uVar3 = CMessageManager::instance();
  QObject::connect(&local_38,uVar3,"2notificationClicked(PRL_RESULT)",param_1,
                   "1onNotificationClicked(PRL_RESULT)",0);
  if ((cVar2 != '\0') && (local_38 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  return;
}

