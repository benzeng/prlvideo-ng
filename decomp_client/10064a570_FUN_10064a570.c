
void FUN_10064a570(long param_1)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  long local_b0;
  Data *local_a8;
  Data *local_a0;
  Data *local_98;
  undefined4 local_90;
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
  undefined1 local_31;
  
  QObject::connect(&local_40,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x70),
                   "2textChanged(const QString&)",param_1,"1updateLoginButton()",0);
  if (local_40 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    QObject::connect((Connection *)&local_48,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x70),
                     "2textChanged(const QString&)",param_1,"1onEmailChanged(const QString&)",0);
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    QObject::connect((Connection *)&local_50,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x88),
                     "2textChanged(const QString&)",param_1,"1updateLoginButton()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x48);
LAB_10064aa19:
    QObject::connect(&local_58,uVar3,"2toggled(bool)",param_1,"1updateLoginButton()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_58);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x48);
LAB_10064aa46:
    QObject::connect((Connection *)&local_60,uVar3,"2toggled(bool)",param_1,
                     "1onHavePasswordToggled(bool)",0);
    QMetaObject::Connection::~Connection((Connection *)&local_60);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x60);
LAB_10064aa71:
    QObject::connect((Connection *)&local_68,uVar3,"2clicked()",param_1,"1onSignInButtonClicked()",0
                    );
    QMetaObject::Connection::~Connection((Connection *)&local_68);
    QObject::connect((Connection *)&local_70,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x90),
                     "2linkActivated(const QString&)",param_1,"1onForgotPassClicked()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_70);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 200);
LAB_10064aad5:
    QObject::connect((Connection *)&local_78,uVar3,"2clicked()",param_1,"1onFacebookButtonClicked()"
                     ,0);
    QMetaObject::Connection::~Connection((Connection *)&local_78);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0xd0);
LAB_10064ab0e:
    QObject::connect((Connection *)&local_80,uVar3,"2clicked()",param_1,"1onGoogleButtonClicked()",0
                    );
    QMetaObject::Connection::~Connection((Connection *)&local_80);
    uVar3 = FUN_10063f730(param_1);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    QObject::connect(&local_48,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x70),
                     "2textChanged(const QString&)",param_1,"1onEmailChanged(const QString&)",0);
    if ((cVar1 == '\0') || (local_48 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_48);
      QObject::connect((Connection *)&local_50,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x88),
                       "2textChanged(const QString&)",param_1,"1updateLoginButton()",0);
      QMetaObject::Connection::~Connection((Connection *)&local_50);
      QObject::connect((Connection *)&local_58,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x48),
                       "2toggled(bool)",param_1,"1updateLoginButton()",0);
      QMetaObject::Connection::~Connection((Connection *)&local_58);
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x48);
      goto LAB_10064aa46;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    QObject::connect(&local_50,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x88),
                     "2textChanged(const QString&)",param_1,"1updateLoginButton()",0);
    if ((cVar1 == '\0') || (local_50 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_50);
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x48);
      goto LAB_10064aa19;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    QObject::connect(&local_58,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x48),"2toggled(bool)",
                     param_1,"1updateLoginButton()",0);
    if ((cVar1 == '\0') || (local_58 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_58);
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x48);
      goto LAB_10064aa46;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_58);
    QObject::connect(&local_60,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x48),"2toggled(bool)",
                     param_1,"1onHavePasswordToggled(bool)",0);
    if ((cVar1 == '\0') || (local_60 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_60);
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x60);
      goto LAB_10064aa71;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_60);
    QObject::connect(&local_68,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x60),"2clicked()",
                     param_1,"1onSignInButtonClicked()",0);
    if ((cVar1 == '\0') || (local_68 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_68);
      QObject::connect((Connection *)&local_70,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x90),
                       "2linkActivated(const QString&)",param_1,"1onForgotPassClicked()",0);
      QMetaObject::Connection::~Connection((Connection *)&local_70);
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 200);
      goto LAB_10064aad5;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_68);
    QObject::connect(&local_70,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x90),
                     "2linkActivated(const QString&)",param_1,"1onForgotPassClicked()",0);
    if ((cVar1 == '\0') || (local_70 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_70);
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 200);
      goto LAB_10064aad5;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_70);
    QObject::connect(&local_78,*(undefined8 *)(*(long *)(param_1 + 0x48) + 200),"2clicked()",param_1
                     ,"1onFacebookButtonClicked()",0);
    if ((cVar1 == '\0') || (local_78 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_78);
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0xd0);
      goto LAB_10064ab0e;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_78);
    QObject::connect(&local_80,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0xd0),"2clicked()",
                     param_1,"1onGoogleButtonClicked()",0);
    if ((cVar1 != '\0') && (local_80 != 0)) {
      cVar2 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_80);
      uVar3 = FUN_10063f730(param_1);
      cVar1 = '\0';
      QObject::connect(&local_88,uVar3,"2busyChanged(bool)",param_1,"1onBusyChanged(bool)",0);
      if (cVar2 != '\0') {
        if (local_88 == 0) {
          cVar1 = '\0';
        }
        else {
          cVar1 = QMetaObject::Connection::isConnected_helper();
        }
      }
      goto LAB_10064ab46;
    }
    QMetaObject::Connection::~Connection((Connection *)&local_80);
    uVar3 = FUN_10063f730(param_1);
  }
  cVar1 = '\0';
  QObject::connect(&local_88,uVar3,"2busyChanged(bool)",param_1,"1onBusyChanged(bool)",0);
LAB_10064ab46:
  QMetaObject::Connection::~Connection((Connection *)&local_88);
  local_a8 = *(Data **)(param_1 + 0x50);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 == 0) {
      QListData::detach((int)&local_a8);
      lVar6 = (long)*(int *)(local_a8 + 8);
      lVar5 = *(long *)(param_1 + 0x50);
      if (((Data *)(lVar5 + (long)*(int *)(lVar5 + 8) * 8) != local_a8 + lVar6 * 8) &&
         (lVar7 = *(int *)(local_a8 + 0xc) - lVar6, lVar7 != 0 && lVar6 <= *(int *)(local_a8 + 0xc))
         ) {
        _memcpy(local_a8 + lVar6 * 8 + 0x10,(void *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8),
                lVar7 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + 1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
    }
  }
  local_a0 = local_a8 + (long)*(int *)(local_a8 + 8) * 8 + 0x10;
  local_98 = local_a8 + (long)*(int *)(local_a8 + 0xc) * 8 + 0x10;
  if (*(int *)(local_a8 + 8) != *(int *)(local_a8 + 0xc)) {
    do {
      local_90 = 1;
      plVar4 = (long *)QLabel::buddy();
      if ((plVar4 != (long *)0x0) &&
         (lVar5 = (**(code **)(*plVar4 + 8))(plVar4,"QLineEdit"), lVar5 != 0)) {
        QObject::connect((Connection *)&local_b0,plVar4,"2textChanged(const QString&)",param_1,
                         "1clearWarnings()",0);
        bVar8 = cVar1 != '\0';
        cVar1 = '\0';
        if ((bVar8) && (local_b0 != 0)) {
          cVar1 = QMetaObject::Connection::isConnected_helper();
        }
        QMetaObject::Connection::~Connection((Connection *)&local_b0);
      }
      local_a0 = local_a0 + 8;
    } while (local_a0 != local_98);
  }
  local_90 = 1;
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      UNLOCK();
      if (*(int *)local_a8 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_a8);
  }
  return;
}

