
void FUN_1007763e0(undefined8 *param_1,undefined8 param_2)

{
  QTimer *this;
  char cVar1;
  QArrayData *pQVar2;
  void *pvVar3;
  long local_c0;
  long local_b8;
  QDateTime local_b0;
  QArrayData *local_a8;
  Data_conflict local_a0;
  undefined4 local_98;
  QString local_90;
  QString local_88;
  QString local_80;
  QVariant local_78;
  QVariant local_68;
  QString local_58;
  QDateTime local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  pQVar2 = (QArrayData *)QString::fromAscii_helper("ParallelsToolbox",0x10);
  local_48 = pQVar2;
  FUN_100773750(param_1,&local_48,param_2);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10077644c;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_10077644c:
  *param_1 = &PTR_FUN_1021f6ba8;
  this = (QTimer *)(param_1 + 4);
  QTimer::QTimer(this,(QObject *)0x0);
  QSettings::QSettings((QSettings *)&local_78,(QObject *)0x0);
  local_90.field0_0x0 = (QTypedArrayData<unsigned_short> *)param_1[2];
  if (1 < *(int *)local_90.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + 1;
    local_29 = *(int *)local_90.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0x1e2468c);
  QString::append(&local_90);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007764e3;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1007764e3:
  local_88.field0_0x0 = local_90.field0_0x0;
  if (1 < *(int *)local_90.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + 1;
    local_29 = *(int *)local_90.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_88);
  local_80.field0_0x0 = local_88.field0_0x0;
  if (1 < *(int *)local_88.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + 1;
    local_29 = *(int *)local_88.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_38,0x1e16082);
  QString::append(&local_80);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100776578;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100776578:
  local_98 = 0x80000000;
  local_a0.field7 = 0;
  QSettings::value((QString *)&local_68,&local_78);
  QVariant::toString();
  local_a8 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss",0x13);
  QDateTime::fromString((QString *)&local_50,&local_58);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_29 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100776614;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100776614:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_29 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100776644;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100776644:
  QVariant::~QVariant(&local_68);
  QVariant::~QVariant((QVariant *)&local_a0);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_29 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100776689;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_100776689:
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_29 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007766b9;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_1007766b9:
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_29 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007766ef;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_1007766ef:
  QSettings::~QSettings((QSettings *)&local_78);
  FUN_1007752e0(&local_b0,param_1);
  cVar1 = QDateTime::operator==(&local_50,&local_b0);
  if (cVar1 != '\0') {
    *(byte *)((long)param_1 + 0x3c) = *(byte *)((long)param_1 + 0x3c) | 1;
    QTimer::setInterval((int)this);
    if (DAT_1023108e0 == (void *)0x0) {
      pvVar3 = operator_new(0x18);
      FUN_1001a61d0(pvVar3);
      DAT_10226c110 = 1;
      DAT_1023108e0 = pvVar3;
    }
    QObject::connect(&local_b8,DAT_1023108e0,
                     "2vmStateChanged ( const GUI::VmId&, VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE )"
                     ,param_1,
                     "1onVmStateChanged ( const GUI::VmId&, VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE )"
                     ,0);
    if (local_b8 == 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_b8);
    QObject::connect(&local_c0,this,"2timeout()",param_1,"1onStartVmTimeout()",0);
    if ((cVar1 != '\0') && (local_c0 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_c0);
  }
  QDateTime::~QDateTime(&local_b0);
  QDateTime::~QDateTime(&local_50);
  return;
}

