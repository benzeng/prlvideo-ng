
void FUN_10077e4d0(QObject *param_1)

{
  char cVar1;
  QTimer *pQVar2;
  void *pvVar3;
  QArrayData *pQVar4;
  undefined8 uVar5;
  undefined **local_118 [3];
  Data_conflict local_100;
  undefined4 local_f8;
  QArrayData *local_f0;
  int *local_e8 [4];
  QVariant local_c8 [2];
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  QVariant local_90;
  QString local_80;
  Data_conflict local_78;
  QString local_70;
  QString local_68;
  QString local_60 [2];
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10222a520;
  pQVar2 = operator_new(0x20);
  QTimer::QTimer(pQVar2,param_1);
  *(QTimer **)(param_1 + 0x10) = pQVar2;
  pQVar2 = operator_new(0x20);
  QTimer::QTimer(pQVar2,param_1);
  *(QTimer **)(param_1 + 0x18) = pQVar2;
  pQVar2 = operator_new(0x20);
  QTimer::QTimer(pQVar2,param_1);
  *(QTimer **)(param_1 + 0x20) = pQVar2;
  param_1[0x28] = (QObject)0x0;
  pvVar3 = operator_new(0x18);
  FUN_100781dc0(pvVar3);
  *(void **)(param_1 + 0x30) = pvVar3;
  *(undefined **)(param_1 + 0x38) = PTR_shared_null_1021e15d0;
  QSettings::QSettings((QSettings *)local_60,(QObject *)0x0);
  pQVar4 = (QArrayData *)QString::fromAscii_helper("ProductPromo",0xc);
  if (1 < *(int *)pQVar4 + 1U) {
    LOCK();
    *(int *)pQVar4 = *(int *)pQVar4 + 1;
    local_29 = *(int *)pQVar4 != 0;
    UNLOCK();
  }
  local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar4;
  QString::fromUtf8_helper((char *)&local_50,0x1e2468c);
  QString::append(&local_70);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10077e609;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10077e609:
  local_68.field0_0x0 = local_70.field0_0x0;
  if (1 < *(int *)local_70.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + 1;
    local_29 = *(int *)local_70.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_48,0x1db96e7);
  QString::append(&local_68);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10077e674;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10077e674:
  cVar1 = QSettings::contains(local_60);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_29 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10077e6b3;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_10077e6b3:
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_29 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10077e6e3;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_10077e6e3:
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_29 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10077e710;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_10077e710:
  if (cVar1 == '\0') {
    pQVar4 = (QArrayData *)QString::fromAscii_helper("ProductPromo",0xc);
    if (1 < *(int *)pQVar4 + 1U) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + 1;
      local_29 = *(int *)pQVar4 != 0;
      UNLOCK();
    }
    local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar4;
    QString::fromUtf8_helper((char *)&local_40,0x1e2468c);
    QString::append(&local_80);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_29 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10077e795;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_10077e795:
    local_78.field15 = (QObject *)local_80.field0_0x0;
    if (1 < *(int *)local_80.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + 1;
      local_29 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_38,0x1db96e7);
    QString::append((QString *)&local_78);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_29 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10077e800;
      }
      QArrayData::deallocate(local_38,2,8);
    }
LAB_10077e800:
    QVariant::QVariant(&local_90,false);
    QSettings::setValue(local_60,(QVariant *)&local_78);
    QVariant::~QVariant(&local_90);
    if (*(int *)local_78.field15 != -1) {
      if (*(int *)local_78.field15 != 0) {
        LOCK();
        *(int *)local_78.field15 = *(int *)local_78.field15 + -1;
        local_29 = *(int *)local_78.field15 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10077e85e;
      }
      QArrayData::deallocate((QArrayData *)local_78.field15,2,8);
    }
LAB_10077e85e:
    if (*(int *)local_80.field0_0x0 != -1) {
      if (*(int *)local_80.field0_0x0 != 0) {
        LOCK();
        *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
        local_29 = *(int *)local_80.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10077e88e;
      }
      QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
    }
LAB_10077e88e:
    if (*(int *)pQVar4 != -1) {
      if (*(int *)pQVar4 != 0) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        local_29 = *(int *)pQVar4 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10077e8bb;
      }
      QArrayData::deallocate(pQVar4,2,8);
    }
  }
LAB_10077e8bb:
  QObject::connect(&local_98,*(undefined8 *)(param_1 + 0x10),"2timeout()",param_1,"1showPromo()",0);
  if (local_98 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_98);
  QObject::connect(&local_a0,*(undefined8 *)(param_1 + 0x18),"2timeout()",param_1,
                   "1showUrgentPromo()",0);
  if (cVar1 == '\0') {
    cVar1 = '\0';
  }
  else if (local_a0 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_a0);
  QObject::connect(&local_a8,*(undefined8 *)(param_1 + 0x20),"2timeout()",param_1,
                   "1showNotificationPromo()",0);
  if (cVar1 == '\0') {
    cVar1 = '\0';
  }
  else if (local_a8 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_a8);
  uVar5 = FUN_100152280();
  QObject::connect(&local_b0,uVar5,"2afterServerAdded(CServerWrap&)",param_1,
                   "1onServerAdded(CServerWrap&)",0);
  if ((cVar1 != '\0') && (local_b0 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_b0);
  local_f0 = (QArrayData *)QString::fromAscii_helper("1checkPromo()",0xd);
  local_f8 = 0x80000000;
  local_100.field7 = 0;
  FUN_100a1c600(local_e8,param_1,&local_f0,&local_100);
  QVariant::~QVariant((QVariant *)&local_100);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_29 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10077eac8;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_10077eac8:
  uVar5 = CTaskManager::instance();
  CTaskGenericId::CTaskGenericId((CTaskGenericId *)local_118,0x53);
  local_118[0] = &PTR_FUN_10226c710;
  CTaskManager::addTaskWatcher(uVar5,local_e8,local_118,4);
  CTaskGenericId::~CTaskGenericId((CTaskGenericId *)local_118);
  QVariant::~QVariant(local_c8);
  if (local_e8[0] != (int *)0x0) {
    LOCK();
    *local_e8[0] = *local_e8[0] + -1;
    local_29 = *local_e8[0] != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_e8[0] != (int *)0x0)) {
      operator_delete(local_e8[0]);
    }
  }
  QSettings::~QSettings((QSettings *)local_60);
  return;
}

