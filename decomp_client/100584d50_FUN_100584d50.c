
void FUN_100584d50(long param_1)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  long local_b8;
  long local_b0;
  Data *local_a8;
  Data *local_a0;
  Data *local_98;
  Data *local_90;
  int local_88;
  long local_80;
  long local_78;
  long local_70;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  int local_48;
  long local_40;
  undefined1 local_31;
  
  uVar3 = *(uint *)(param_1 + 0x20);
  cVar1 = '\x01';
  if (uVar3 < 2) {
    cVar1 = '\0';
    QObject::connect(&local_40,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x50),
                     "2keyChanged(int, int)",param_1,"1fromKeyChanged(int, int)",0);
    if (local_40 != 0) {
      cVar1 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    FUN_1005896e0(&local_68,param_1 + 0x70);
    local_60 = local_68;
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 == 0) {
        QListData::detach((int)&local_60);
        lVar5 = (long)*(int *)(local_60 + 8);
        if ((local_68 + (long)*(int *)(local_68 + 8) * 8 != local_60 + lVar5 * 8) &&
           (lVar6 = *(int *)(local_60 + 0xc) - lVar5,
           lVar6 != 0 && lVar5 <= *(int *)(local_60 + 0xc))) {
          _memcpy(local_60 + lVar5 * 8 + 0x10,local_68 + (long)*(int *)(local_68 + 8) * 8 + 0x10,
                  lVar6 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + 1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
      }
    }
    local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
    local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
    local_48 = 1;
    if (*(int *)local_68 == -1) {
LAB_100584e7f:
      if (local_58 != local_50) {
        do {
          QObject::connect((Connection *)&local_70,*(undefined8 *)local_58,"2clicked()",param_1,
                           "1updateFromLabel()",0);
          bVar7 = cVar1 != '\0';
          cVar1 = '\0';
          if ((bVar7) && (local_70 != 0)) {
            cVar1 = QMetaObject::Connection::isConnected_helper();
          }
          QMetaObject::Connection::~Connection((Connection *)&local_70);
          local_58 = local_58 + 8;
          local_48 = 1;
        } while (local_58 != local_50);
      }
    }
    else {
      if (*(int *)local_68 == 0) {
LAB_100584e70:
        QListData::dispose(local_68);
      }
      else {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if (!(bool)local_31) goto LAB_100584e70;
      }
      if (local_48 != 0) goto LAB_100584e7f;
    }
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100584f22;
      }
      QListData::dispose(local_60);
    }
LAB_100584f22:
    uVar3 = *(uint *)(param_1 + 0x20);
  }
  if ((uVar3 | 2) != 2) goto LAB_1005851d3;
  uVar4 = QComboBox::lineEdit();
  QObject::connect(&local_78,uVar4,"2keyChanged(int, int)",param_1,"1toKeyChanged(int, int)",0);
  if ((cVar1 == '\0') || (local_78 == 0)) {
    QMetaObject::Connection::~Connection((Connection *)&local_78);
    cVar1 = '\0';
    QObject::connect(&local_80,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x98),"2activated(int)",
                     param_1,"1updateToLabel()",0);
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_78);
    cVar1 = '\0';
    QObject::connect(&local_80,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x98),"2activated(int)",
                     param_1,"1updateToLabel()",0);
    if (cVar2 != '\0') {
      if (local_80 == 0) {
        cVar1 = '\0';
      }
      else {
        cVar1 = QMetaObject::Connection::isConnected_helper();
      }
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_80);
  FUN_1005896e0(&local_a8,param_1 + 0x78);
  local_a0 = local_a8;
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 == 0) {
      QListData::detach((int)&local_a0);
      lVar5 = (long)*(int *)(local_a0 + 8);
      if ((local_a8 + (long)*(int *)(local_a8 + 8) * 8 != local_a0 + lVar5 * 8) &&
         (lVar6 = *(int *)(local_a0 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(local_a0 + 0xc))
         ) {
        _memcpy(local_a0 + lVar5 * 8 + 0x10,local_a8 + (long)*(int *)(local_a8 + 8) * 8 + 0x10,
                lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + 1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
    }
  }
  local_98 = local_a0 + (long)*(int *)(local_a0 + 8) * 8 + 0x10;
  local_90 = local_a0 + (long)*(int *)(local_a0 + 0xc) * 8 + 0x10;
  local_88 = 1;
  if (*(int *)local_a8 == -1) {
LAB_10058510c:
    if (local_98 != local_90) {
      do {
        QObject::connect((Connection *)&local_b0,*(undefined8 *)local_98,"2clicked()",param_1,
                         "1updateToLabel()",0);
        bVar7 = cVar1 != '\0';
        cVar1 = '\0';
        if ((bVar7) && (local_b0 != 0)) {
          cVar1 = QMetaObject::Connection::isConnected_helper();
        }
        QMetaObject::Connection::~Connection((Connection *)&local_b0);
        local_98 = local_98 + 8;
        local_88 = 1;
      } while (local_98 != local_90);
    }
  }
  else {
    if (*(int *)local_a8 == 0) {
LAB_1005850fd:
      QListData::dispose(local_a8);
    }
    else {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1005850fd;
    }
    if (local_88 != 0) goto LAB_10058510c;
  }
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005851d3;
    }
    QListData::dispose(local_a0);
  }
LAB_1005851d3:
  QObject::connect(&local_b8,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xb0),"2clicked()",param_1,
                   "1onClear()",0);
  if ((cVar1 != '\0') && (local_b8 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_b8);
  return;
}

