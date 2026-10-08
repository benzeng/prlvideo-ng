
void FUN_100776c20(QObject *param_1)

{
  char cVar1;
  QObject *pQVar2;
  QDateTime local_a0;
  QArrayData *local_98;
  Data_conflict local_90;
  undefined4 local_88;
  QString local_80;
  QString local_78;
  QString local_70;
  QVariant local_68;
  QVariant local_58;
  QString local_48;
  QDateTime local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x60))();
  if (cVar1 != '\0') {
    return;
  }
  if (DAT_1023108e0 == (QObject *)0x0) {
    pQVar2 = operator_new(0x18);
    FUN_1001a61d0(pQVar2);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pQVar2;
  }
  QObject::disconnect(DAT_1023108e0,
                      "2vmStateChanged ( const GUI::VmId&, VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE )"
                      ,param_1,
                      "1onVmStateChanged ( const GUI::VmId&, VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE )"
                     );
  QSettings::QSettings((QSettings *)&local_68,(QObject *)0x0);
  local_80.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x10);
  if (1 < *(int *)local_80.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + 1;
    local_21 = *(int *)local_80.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_38,0x1e2468c);
  QString::append(&local_80);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100776cfe;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100776cfe:
  local_78.field0_0x0 = local_80.field0_0x0;
  if (1 < *(int *)local_80.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + 1;
    local_21 = *(int *)local_80.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_78);
  local_70.field0_0x0 = local_78.field0_0x0;
  if (1 < *(int *)local_78.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
    local_21 = *(int *)local_78.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_30,0x1e16082);
  QString::append(&local_70);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100776d8f;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100776d8f:
  local_88 = 0x80000000;
  local_90.field7 = 0;
  QSettings::value((QString *)&local_58,&local_68);
  QVariant::toString();
  local_98 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss",0x13);
  QDateTime::fromString((QString *)&local_40,&local_48);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_21 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100776e28;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100776e28:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_21 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100776e58;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100776e58:
  QVariant::~QVariant(&local_58);
  QVariant::~QVariant((QVariant *)&local_90);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_21 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100776e9d;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_100776e9d:
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_21 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100776ecd;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_100776ecd:
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_21 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100776efd;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_100776efd:
  QSettings::~QSettings((QSettings *)&local_68);
  FUN_1007752e0(&local_a0,param_1);
  cVar1 = QDateTime::operator==(&local_40,&local_a0);
  if (cVar1 != '\0') {
    (**(code **)(*(long *)param_1 + 0x80))(param_1);
  }
  QDateTime::~QDateTime(&local_a0);
  QDateTime::~QDateTime(&local_40);
  return;
}

