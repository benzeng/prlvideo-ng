
void FUN_10064ede0(long param_1)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  long local_80;
  Data *local_78;
  Data *local_70;
  Data *local_68;
  undefined4 local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  undefined1 local_31;
  
  uVar3 = FUN_10063f730();
  QObject::connect(&local_40,uVar3,"2busyChanged(bool)",param_1,"1onBusyChanged(bool)",0);
  if (local_40 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    uVar3 = FUN_10063f730(param_1);
    uVar3 = FUN_1006760c0(uVar3);
    cVar2 = '\0';
    QObject::connect(&local_48,uVar3,"2createAccountFinished(PRL_RESULT)",param_1,
                     "1onCreateAccountFinished()",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    uVar3 = FUN_10063f730(param_1);
    uVar3 = FUN_1006760c0(uVar3);
    cVar2 = '\0';
    QObject::connect(&local_48,uVar3,"2createAccountFinished(PRL_RESULT)",param_1,
                     "1onCreateAccountFinished()",0);
    if (cVar1 != '\0') {
      if (local_48 == 0) {
        cVar2 = '\0';
      }
      else {
        cVar2 = QMetaObject::Connection::isConnected_helper();
      }
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  QObject::connect(&local_50,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x70),
                   "2textChanged(const QString&)",param_1,"1onEmailChanged(const QString&)",0);
  if ((cVar2 == '\0') || (local_50 == 0)) {
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    cVar2 = '\0';
    QObject::connect(&local_58,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x50),"2clicked()",
                     param_1,"1onCreateAccountButtonClicked()",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    cVar2 = '\0';
    QObject::connect(&local_58,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x50),"2clicked()",
                     param_1,"1onCreateAccountButtonClicked()",0);
    if (cVar1 != '\0') {
      if (local_58 == 0) {
        cVar2 = '\0';
      }
      else {
        cVar2 = QMetaObject::Connection::isConnected_helper();
      }
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_58);
  local_78 = *(Data **)(param_1 + 0x50);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 == 0) {
      QListData::detach((int)&local_78);
      lVar6 = (long)*(int *)(local_78 + 8);
      lVar5 = *(long *)(param_1 + 0x50);
      if (((Data *)(lVar5 + (long)*(int *)(lVar5 + 8) * 8) != local_78 + lVar6 * 8) &&
         (lVar7 = *(int *)(local_78 + 0xc) - lVar6, lVar7 != 0 && lVar6 <= *(int *)(local_78 + 0xc))
         ) {
        _memcpy(local_78 + lVar6 * 8 + 0x10,(void *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8),
                lVar7 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + 1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
    }
  }
  local_70 = local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10;
  local_68 = local_78 + (long)*(int *)(local_78 + 0xc) * 8 + 0x10;
  if (*(int *)(local_78 + 8) != *(int *)(local_78 + 0xc)) {
    do {
      local_60 = 1;
      plVar4 = (long *)QLabel::buddy();
      if ((plVar4 != (long *)0x0) &&
         (lVar5 = (**(code **)(*plVar4 + 8))(plVar4,"QLineEdit"), lVar5 != 0)) {
        QObject::connect((Connection *)&local_80,plVar4,"2textChanged(const QString&)",param_1,
                         "1clearWarnings()",0);
        bVar8 = cVar2 != '\0';
        cVar2 = '\0';
        if ((bVar8) && (local_80 != 0)) {
          cVar2 = QMetaObject::Connection::isConnected_helper();
        }
        QMetaObject::Connection::~Connection((Connection *)&local_80);
      }
      local_70 = local_70 + 8;
    } while (local_70 != local_68);
  }
  local_60 = 1;
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      UNLOCK();
      if (*(int *)local_78 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_78);
  }
  return;
}

