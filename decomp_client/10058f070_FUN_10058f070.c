
void FUN_10058f070(long param_1)

{
  long lVar1;
  char cVar2;
  char cVar3;
  QShortcut *pQVar4;
  undefined8 uVar5;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  QKeySequence local_30 [8];
  
  pQVar4 = operator_new(0x10);
  QKeySequence::QKeySequence(local_30,0x1000000,0,0,0);
  QShortcut::QShortcut(pQVar4,local_30,*(undefined8 *)(param_1 + 0x10),0,0,1);
  QKeySequence::~QKeySequence(local_30);
  QObject::connect(&local_38,pQVar4,"2activated()",param_1,"1reject()",0);
  if (local_38 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    QObject::connect((Connection *)&local_40,
                     *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x88),
                     "2accepted()",param_1,"1accept()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x88);
LAB_10058f247:
    cVar2 = '\0';
    QObject::connect(&local_48,uVar5,"2rejected()",param_1,"1reject()",0);
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    QObject::connect(&local_40,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x88),
                     "2accepted()",param_1,"1accept()",0);
    if ((cVar2 == '\0') || (local_40 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_40);
      uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x88);
      goto LAB_10058f247;
    }
    cVar3 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    cVar2 = '\0';
    QObject::connect(&local_48,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x88),
                     "2rejected()",param_1,"1reject()",0);
    if (cVar3 != '\0') {
      if (local_48 == 0) {
        cVar2 = '\0';
      }
      else {
        cVar2 = QMetaObject::Connection::isConnected_helper();
      }
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  lVar1 = param_1 + 0x18;
  QObject::connect(&local_50,lVar1,"2submitStarted()",param_1,"1onSubmitStarted()",0);
  if ((cVar2 == '\0') || (local_50 == 0)) {
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    QObject::connect(&local_58,lVar1,"2submitFinished( PRL_RESULT )",param_1,
                     "1onSubmitFinished( PRL_RESULT )",0);
LAB_10058f464:
    QMetaObject::Connection::~Connection((Connection *)&local_58);
    QObject::connect((Connection *)&local_60,
                     *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x30),
                     "2clicked()",param_1,"1onRestoreDefaults()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_60);
    uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x38);
LAB_10058f4ac:
    QObject::connect((Connection *)&local_68,uVar5,"2clicked()",param_1,"1onHelpRequested()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_68);
    uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x58);
LAB_10058f4f0:
    QObject::connect(&local_70,uVar5,"2clicked()",param_1,"1onLabelLockClicked()",0);
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    QObject::connect(&local_58,lVar1,"2submitFinished( PRL_RESULT )",param_1,
                     "1onSubmitFinished( PRL_RESULT )",0);
    if ((cVar2 == '\0') || (local_58 == 0)) goto LAB_10058f464;
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_58);
    QObject::connect(&local_60,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x30),
                     "2clicked()",param_1,"1onRestoreDefaults()",0);
    if ((cVar2 == '\0') || (local_60 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_60);
      uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x38);
      goto LAB_10058f4ac;
    }
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_60);
    QObject::connect(&local_68,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x38),
                     "2clicked()",param_1,"1onHelpRequested()",0);
    if ((cVar2 == '\0') || (local_68 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_68);
      uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x58);
      goto LAB_10058f4f0;
    }
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_68);
    QObject::connect(&local_70,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x58),
                     "2clicked()",param_1,"1onLabelLockClicked()",0);
    if ((cVar2 != '\0') && (local_70 != 0)) {
      cVar2 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_70);
      QObject::connect(&local_78,lVar1,"2lockedStateChanged()",param_1,"1onLockedStateChanged()",0);
      if ((cVar2 != '\0') && (local_78 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      goto LAB_10058f520;
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_70);
  QObject::connect(&local_78,lVar1,"2lockedStateChanged()",param_1,"1onLockedStateChanged()",0);
LAB_10058f520:
  QMetaObject::Connection::~Connection((Connection *)&local_78);
  return;
}

