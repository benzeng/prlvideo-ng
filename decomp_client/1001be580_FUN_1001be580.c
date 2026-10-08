
QObject * FUN_1001be580(QObject *param_1,QNetworkProxy *param_2)

{
  char cVar1;
  QObject *this;
  long local_40;
  long local_38;
  QObject *local_30;
  
  this = operator_new(0x30);
  QObject::QObject(this,param_1);
  *(undefined ***)this = &PTR_FUN_1021eec60;
  QNetworkProxy::QNetworkProxy((QNetworkProxy *)(this + 0x10),param_2);
  this[0x2a] = (QObject)0x0;
  *(undefined2 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  local_30 = this;
  QNetworkProxy::operator=((QNetworkProxy *)(this + 0x10),param_2);
  QObject::connect(&local_38,this,"2authDialogCancelled()",param_1,"1onAuthDialogCancelled()",0);
  if (local_38 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    QObject::connect(&local_40,this,"2commitCredentialsFinished(PRL_RESULT)",param_1,
                     "1onCommitCredentialsFinished(PRL_RESULT)",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    QObject::connect(&local_40,this,"2commitCredentialsFinished(PRL_RESULT)",param_1,
                     "1onCommitCredentialsFinished(PRL_RESULT)",0);
    if ((cVar1 != '\0') && (local_40 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  FUN_1001bfc70(param_1 + 0x18,param_2,&local_30);
  return this;
}

