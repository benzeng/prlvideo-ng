
void FUN_100399eb0(long param_1)

{
  char cVar1;
  char cVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  
  QObject::connect(&local_30,*(undefined8 *)(param_1 + 0x18),"2clicked()",param_1,"1onTwitterPage()"
                   ,0);
  if (local_30 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect((Connection *)&local_38,*(undefined8 *)(param_1 + 0x20),"2clicked()",param_1,
                     "1onFacebookPage()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
LAB_10039a0a1:
    QObject::connect((Connection *)&local_40,uVar4,"2clicked()",param_1,"1onSendFeedback()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
LAB_10039a0c9:
    QObject::connect((Connection *)&local_48,uVar4,"2clicked()",param_1,"1onBuyNow()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect(&local_38,*(undefined8 *)(param_1 + 0x20),"2clicked()",param_1,
                     "1onFacebookPage()",0);
    if ((cVar1 == '\0') || (local_38 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_38);
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      goto LAB_10039a0a1;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    QObject::connect(&local_40,*(undefined8 *)(param_1 + 0x28),"2clicked()",param_1,
                     "1onSendFeedback()",0);
    if ((cVar1 == '\0') || (local_40 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_40);
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      goto LAB_10039a0c9;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    QObject::connect(&local_48,*(undefined8 *)(param_1 + 0x30),"2clicked()",param_1,"1onBuyNow()",0)
    ;
    if ((cVar1 != '\0') && (local_48 != 0)) {
      cVar2 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_48);
      cVar1 = '\0';
      QObject::connect(&local_50,*(undefined8 *)(param_1 + 0x40),"2clicked()",param_1,
                       "1onLearnMore()",0);
      if (cVar2 != '\0') {
        if (local_50 == 0) {
          cVar1 = '\0';
        }
        else {
          cVar1 = QMetaObject::Connection::isConnected_helper();
        }
      }
      goto LAB_10039a0ff;
    }
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
  }
  cVar1 = '\0';
  QObject::connect(&local_50,uVar4,"2clicked()",param_1,"1onLearnMore()",0);
LAB_10039a0ff:
  QMetaObject::Connection::~Connection((Connection *)&local_50);
  if (DAT_102310958 == (void *)0x0) {
    pvVar3 = operator_new(0x18);
    FUN_100612710(pvVar3);
    DAT_102271170 = 1;
    DAT_102310958 = pvVar3;
  }
  cVar2 = '\0';
  QObject::connect(&local_58,DAT_102310958,"2licenseChanged(const CLicenseWrap&)",param_1,
                   "1onLicenseChanged()",0);
  if (cVar1 != '\0') {
    if (local_58 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_58);
  uVar4 = FUN_1006915d0();
  uVar5 = FUN_100152280();
  uVar5 = FUN_1001554a0(uVar5);
  lVar6 = FUN_100691620(uVar4,0x4f,uVar5);
  if ((lVar6 != 0) && (cVar1 = FUN_100d80630(1), cVar1 == '\0')) {
    QObject::connect(&local_60,*(undefined8 *)(param_1 + 0x38),"2clicked()",lVar6,"1trigger()",0);
    if ((cVar2 == '\0') || (local_60 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_60);
      QObject::connect(&local_68,lVar6,"2changed()",param_1,"1updateActivateProductButton()",0);
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_60);
      QObject::connect(&local_68,lVar6,"2changed()",param_1,"1updateActivateProductButton()",0);
      if ((cVar1 != '\0') && (local_68 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
    }
    QMetaObject::Connection::~Connection((Connection *)&local_68);
    return;
  }
  (**(code **)(**(long **)(param_1 + 0x38) + 0x68))(*(long **)(param_1 + 0x38),0);
  return;
}

