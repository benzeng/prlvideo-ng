
void FUN_100669d40(undefined8 param_1,long param_2)

{
  char cVar1;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  FUN_10066a020();
  CAbstractWizardPage::wizardModel();
  QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
  CAbstractWizardModel::wizardCtrl();
  CWizardController::updateWizardActions();
  if (param_2 == 0) {
    return;
  }
  QObject::connect(&local_28,param_2,"2currentIndexChanged(int)",param_1,"1onSelectionChanged(int)",
                   0x80);
  if (local_28 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    QObject::connect(&local_30,param_2,"2itemDoubleClicked(int)",param_1,"1onItemDoubleClicked(int)"
                     ,0x80);
LAB_100669f35:
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect(&local_38,param_2,"2renewClicked(int)",param_1,"1onRenewClicked(int)",0x80);
LAB_100669f63:
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    QObject::connect(&local_40,param_2,"2upgradeToProClicked(int)",param_1,
                     "1onUpgradeToProClicked(int)",0x80);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    QObject::connect(&local_30,param_2,"2itemDoubleClicked(int)",param_1,"1onItemDoubleClicked(int)"
                     ,0x80);
    if ((cVar1 == '\0') || (local_30 == 0)) goto LAB_100669f35;
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect(&local_38,param_2,"2renewClicked(int)",param_1,"1onRenewClicked(int)",0x80);
    if ((cVar1 == '\0') || (local_38 == 0)) goto LAB_100669f63;
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    QObject::connect(&local_40,param_2,"2upgradeToProClicked(int)",param_1,
                     "1onUpgradeToProClicked(int)",0x80);
    if ((cVar1 != '\0') && (local_40 != 0)) {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_40);
      QObject::connect(&local_48,param_2,"2itemRightClicked(int)",param_1,"1onItemRightClicked(int)"
                       ,0x80);
      if ((cVar1 != '\0') && (local_48 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      goto LAB_100669fb9;
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  QObject::connect(&local_48,param_2,"2itemRightClicked(int)",param_1,"1onItemRightClicked(int)",
                   0x80);
LAB_100669fb9:
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  return;
}

