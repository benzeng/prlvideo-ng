
void FUN_100657b80(long param_1)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  long local_b8;
  Data *local_b0;
  Data *local_a8;
  Data *local_a0;
  Data *local_98;
  int local_90;
  long local_88;
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
  
  QObject::connect(&local_40,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x98),
                   "2currentIndexChanged(int, int)",param_1,"1onForUseChanged()",0);
  if (local_40 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    cVar2 = '\0';
    QObject::connect(&local_48,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x70),
                     "2currentIndexChanged(int, int)",param_1,"1onCountryChanged()",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    cVar2 = '\0';
    QObject::connect(&local_48,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x70),
                     "2currentIndexChanged(int, int)",param_1,"1onCountryChanged()",0);
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
  uVar3 = FUN_10063f730(param_1);
  uVar3 = FUN_1006760c0(uVar3);
  QObject::connect(&local_50,uVar3,"2updateAccountInfoStarted()",param_1,
                   "1onUpdateAccountInfoStarted()",0);
  if ((cVar2 == '\0') || (local_50 == 0)) {
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    uVar3 = FUN_10063f730(param_1);
    uVar3 = FUN_1006760c0(uVar3);
    cVar2 = '\0';
    QObject::connect(&local_58,uVar3,"2updateAccountInfoFinished(PRL_RESULT, int)",param_1,
                     "1onUpdateAccountInfoFinished()",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    uVar3 = FUN_10063f730(param_1);
    uVar3 = FUN_1006760c0(uVar3);
    cVar2 = '\0';
    QObject::connect(&local_58,uVar3,"2updateAccountInfoFinished(PRL_RESULT, int)",param_1,
                     "1onUpdateAccountInfoFinished()",0);
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
  local_78 = *(Data **)(param_1 + 0x108);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 == 0) {
      QListData::detach((int)&local_78);
      lVar6 = (long)*(int *)(local_78 + 8);
      lVar5 = *(long *)(param_1 + 0x108);
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
      if (plVar4 != (long *)0x0) {
        lVar5 = (**(code **)(*plVar4 + 8))(plVar4,"QLineEdit");
        if (lVar5 == 0) {
          lVar5 = (**(code **)(*plVar4 + 8))(plVar4,"QComboBox");
          if (lVar5 != 0) {
            QObject::connect(&local_88,plVar4,"2currentIndexChanged(int)",param_1,"1clearWarnings()"
                             ,0);
            bVar8 = cVar2 != '\0';
            cVar2 = '\0';
            if ((bVar8) && (local_88 != 0)) {
              cVar2 = QMetaObject::Connection::isConnected_helper();
            }
            QMetaObject::Connection::~Connection((Connection *)&local_88);
          }
        }
        else {
          QObject::connect((Connection *)&local_80,plVar4,"2textChanged(const QString&)",param_1,
                           "1clearWarnings()",0);
          bVar8 = cVar2 != '\0';
          cVar2 = '\0';
          if ((bVar8) && (local_80 != 0)) {
            cVar2 = QMetaObject::Connection::isConnected_helper();
          }
          QMetaObject::Connection::~Connection((Connection *)&local_80);
        }
      }
      local_70 = local_70 + 8;
    } while (local_70 != local_68);
  }
  local_60 = 1;
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100657f23;
    }
    QListData::dispose(local_78);
  }
LAB_100657f23:
  FUN_10065e120(&local_b0,param_1 + 0x110);
  local_a8 = local_b0;
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 == 0) {
      QListData::detach((int)&local_a8);
      lVar5 = (long)*(int *)(local_a8 + 8);
      if ((local_b0 + (long)*(int *)(local_b0 + 8) * 8 != local_a8 + lVar5 * 8) &&
         (lVar6 = *(int *)(local_a8 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(local_a8 + 0xc))
         ) {
        _memcpy(local_a8 + lVar5 * 8 + 0x10,local_b0 + (long)*(int *)(local_b0 + 8) * 8 + 0x10,
                lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + 1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
    }
  }
  local_a0 = local_a8 + (long)*(int *)(local_a8 + 8) * 8 + 0x10;
  local_98 = local_a8 + (long)*(int *)(local_a8 + 0xc) * 8 + 0x10;
  local_90 = 1;
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 == 0) {
LAB_100657fff:
      QListData::dispose(local_b0);
    }
    else {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_100657fff;
    }
    if (local_90 == 0) goto LAB_1006580a6;
  }
  if (local_a0 != local_98) {
    do {
      QObject::connect((Connection *)&local_b8,*(undefined8 *)local_a0,
                       "2currentIndexChanged(int, int)",param_1,"1onComboIndexChanged()",0);
      bVar8 = cVar2 != '\0';
      cVar2 = '\0';
      if ((bVar8) && (local_b8 != 0)) {
        cVar2 = QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_b8);
      local_a0 = local_a0 + 8;
      local_90 = 1;
    } while (local_a0 != local_98);
  }
LAB_1006580a6:
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

