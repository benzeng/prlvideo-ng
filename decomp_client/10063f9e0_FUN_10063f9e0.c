
void FUN_10063f9e0(long param_1)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  uVar3 = FUN_10063f730();
  QObject::connect(&local_38,uVar3,"2licenseUpdateStarted()",param_1,"1disableSourcePage()",0);
  if (local_38 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    uVar3 = FUN_10063f730(param_1);
    QObject::connect((Connection *)&local_40,uVar3,"2licenseUpdateFinished(PRL_RESULT)",param_1,
                     "1enableSourcePage()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    uVar3 = FUN_10063f730(param_1);
    QObject::connect((Connection *)&local_48,uVar3,"2licenseUpdateFinished(PRL_RESULT)",param_1,
                     "1onUpadteLicenseFinished(PRL_RESULT)",0);
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    uVar3 = FUN_10063f730(param_1);
    QObject::connect((Connection *)&local_50,uVar3,"2checkKeyFinished(PRL_RESULT)",param_1,
                     "1onCheckKeyFinished(PRL_RESULT)",0);
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    uVar3 = FUN_10063f730(param_1);
    QObject::connect((Connection *)&local_58,uVar3,"2onlineActivationStarted()",param_1,
                     "1disableSourcePage()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_58);
    uVar3 = FUN_10063f730(param_1);
    QObject::connect((Connection *)&local_60,uVar3,"2onlineActivationFinished(PRL_RESULT)",param_1,
                     "1onOnlineActivationFinished(PRL_RESULT)",0);
    QMetaObject::Connection::~Connection((Connection *)&local_60);
    uVar3 = FUN_10063f730(param_1);
LAB_10063fe7a:
    cVar1 = '\0';
    QObject::connect(&local_68,uVar3,"2onlineActivationFinished(PRL_RESULT)",param_1,
                     "1enableSourcePage()",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    uVar3 = FUN_10063f730(param_1);
    QObject::connect(&local_40,uVar3,"2licenseUpdateFinished(PRL_RESULT)",param_1,
                     "1enableSourcePage()",0);
    if ((cVar1 == '\0') || (local_40 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_40);
      uVar3 = FUN_10063f730(param_1);
      QObject::connect((Connection *)&local_48,uVar3,"2licenseUpdateFinished(PRL_RESULT)",param_1,
                       "1onUpadteLicenseFinished(PRL_RESULT)",0);
      QMetaObject::Connection::~Connection((Connection *)&local_48);
      uVar3 = FUN_10063f730(param_1);
LAB_10063fdd9:
      QObject::connect((Connection *)&local_50,uVar3,"2checkKeyFinished(PRL_RESULT)",param_1,
                       "1onCheckKeyFinished(PRL_RESULT)",0);
      QMetaObject::Connection::~Connection((Connection *)&local_50);
      uVar3 = FUN_10063f730(param_1);
LAB_10063fe0c:
      QObject::connect((Connection *)&local_58,uVar3,"2onlineActivationStarted()",param_1,
                       "1disableSourcePage()",0);
      QMetaObject::Connection::~Connection((Connection *)&local_58);
      uVar3 = FUN_10063f730(param_1);
LAB_10063fe3f:
      QObject::connect((Connection *)&local_60,uVar3,"2onlineActivationFinished(PRL_RESULT)",param_1
                       ,"1onOnlineActivationFinished(PRL_RESULT)",0);
      QMetaObject::Connection::~Connection((Connection *)&local_60);
      uVar3 = FUN_10063f730(param_1);
      goto LAB_10063fe7a;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    uVar3 = FUN_10063f730(param_1);
    QObject::connect(&local_48,uVar3,"2licenseUpdateFinished(PRL_RESULT)",param_1,
                     "1onUpadteLicenseFinished(PRL_RESULT)",0);
    if ((cVar1 == '\0') || (local_48 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_48);
      uVar3 = FUN_10063f730(param_1);
      goto LAB_10063fdd9;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    uVar3 = FUN_10063f730(param_1);
    QObject::connect(&local_50,uVar3,"2checkKeyFinished(PRL_RESULT)",param_1,
                     "1onCheckKeyFinished(PRL_RESULT)",0);
    if ((cVar1 == '\0') || (local_50 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_50);
      uVar3 = FUN_10063f730(param_1);
      goto LAB_10063fe0c;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    uVar3 = FUN_10063f730(param_1);
    QObject::connect(&local_58,uVar3,"2onlineActivationStarted()",param_1,"1disableSourcePage()",0);
    if ((cVar1 == '\0') || (local_58 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_58);
      uVar3 = FUN_10063f730(param_1);
      goto LAB_10063fe3f;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_58);
    uVar3 = FUN_10063f730(param_1);
    QObject::connect(&local_60,uVar3,"2onlineActivationFinished(PRL_RESULT)",param_1,
                     "1onOnlineActivationFinished(PRL_RESULT)",0);
    if ((cVar1 == '\0') || (local_60 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_60);
      uVar3 = FUN_10063f730(param_1);
      goto LAB_10063fe7a;
    }
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_60);
    uVar3 = FUN_10063f730(param_1);
    cVar1 = '\0';
    QObject::connect(&local_68,uVar3,"2onlineActivationFinished(PRL_RESULT)",param_1,
                     "1enableSourcePage()",0);
    if (cVar2 != '\0') {
      if (local_68 == 0) {
        cVar1 = '\0';
      }
      else {
        cVar1 = QMetaObject::Connection::isConnected_helper();
      }
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_68);
  QObject::connect(&local_70,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x88),
                   "2editPrimaryKeyFinished()",param_1,"1onPrimaryKeyEditFinished()",0);
  if ((cVar1 == '\0') || (local_70 == 0)) {
    QMetaObject::Connection::~Connection((Connection *)&local_70);
    QObject::connect(&local_78,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x88),
                     "2primaryKeyChanged(QString)",param_1,"1onPrimaryKeyChanged()",0);
LAB_100640012:
    QMetaObject::Connection::~Connection((Connection *)&local_78);
    QObject::connect(&local_80,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x88),
                     "2editSecondaryKeyFinished()",param_1,"1onSecondaryKeyEditFinished()",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_70);
    QObject::connect(&local_78,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x88),
                     "2primaryKeyChanged(QString)",param_1,"1onPrimaryKeyChanged()",0);
    if ((cVar1 == '\0') || (local_78 == 0)) goto LAB_100640012;
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_78);
    QObject::connect(&local_80,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x88),
                     "2editSecondaryKeyFinished()",param_1,"1onSecondaryKeyEditFinished()",0);
    if ((cVar1 != '\0') && (local_80 != 0)) {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_80);
      QObject::connect(&local_88,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x88),
                       "2secondaryKeyChanged(QString)",param_1,"1onSecondaryKeyChanged()",0);
      if ((cVar1 != '\0') && (local_88 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      goto LAB_100640074;
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_80);
  QObject::connect(&local_88,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x88),
                   "2secondaryKeyChanged(QString)",param_1,"1onSecondaryKeyChanged()",0);
LAB_100640074:
  QMetaObject::Connection::~Connection((Connection *)&local_88);
  return;
}

