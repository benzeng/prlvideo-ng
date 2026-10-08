
void FUN_1005f2810(long param_1,char *param_2)

{
  undefined8 uVar1;
  char cVar2;
  long local_40;
  long local_38;
  QVariant local_30;
  
  if (param_2 != (char *)0x0) {
    QVariant::QVariant(&local_30,*(bool *)(param_1 + 0x40));
    QObject::setProperty(param_2,(QVariant *)"agreed");
    QVariant::~QVariant(&local_30);
    QObject::connect(&local_38,param_2,"2agreedChanged()",param_1,"1onAgreedChanged()",0);
    if (local_38 == 0) {
      QMetaObject::Connection::~Connection((Connection *)&local_38);
      FUN_1005ec970(param_1 + 0x38);
      uVar1 = CAbstractWizardModel::wizardCtrl();
      QObject::connect(&local_40,param_2,"2helpRequested()",uVar1,"1requestHelp()",0);
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_38);
      FUN_1005ec970(param_1 + 0x38);
      uVar1 = CAbstractWizardModel::wizardCtrl();
      QObject::connect(&local_40,param_2,"2helpRequested()",uVar1,"1requestHelp()",0);
      if ((cVar2 != '\0') && (local_40 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
    }
    QMetaObject::Connection::~Connection((Connection *)&local_40);
  }
  return;
}

