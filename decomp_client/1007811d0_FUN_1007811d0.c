
void FUN_1007811d0(long param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  QArrayData *pQVar4;
  long *plVar5;
  undefined8 *puVar6;
  QArrayData *local_90;
  QVariant local_88;
  QString local_78;
  QString local_70;
  QVariant local_68;
  QVariant local_58;
  QDateTime local_48;
  QDateTime local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  uVar2 = FUN_100152280();
  lVar3 = FUN_1001554a0(uVar2);
  if (lVar3 == 0) {
    return;
  }
  uVar2 = FUN_10016f500(lVar3);
  cVar1 = FUN_10061b4d0(uVar2);
  if (param_2 == 4) {
    plVar5 = (long *)(param_1 + 0x20);
  }
  else if (param_2 == 3) {
    plVar5 = (long *)(param_1 + 0x18);
  }
  else {
    plVar5 = (long *)(param_1 + 0x10);
  }
  if (cVar1 == '\0') {
    QTimer::stop();
    return;
  }
  if (-1 < *(int *)(*plVar5 + 0x10)) {
    return;
  }
  QDateTime::currentDateTime();
  QSettings::QSettings((QSettings *)&local_68,(QObject *)0x0);
  if (param_2 == 3) {
    pQVar4 = (QArrayData *)QString::fromAscii_helper("UrgentPromo",0xb);
  }
  else if (param_2 == 4) {
    pQVar4 = (QArrayData *)QString::fromAscii_helper("NotificationPromo",0x11);
  }
  else if (param_2 == 100) {
    pQVar4 = (QArrayData *)QString::fromAscii_helper("WelcomeScreenPromo",0x12);
  }
  else {
    pQVar4 = (QArrayData *)QString::fromAscii_helper("ProductPromo",0xc);
  }
  if (1 < *(int *)pQVar4 + 1U) {
    LOCK();
    *(int *)pQVar4 = *(int *)pQVar4 + 1;
    local_21 = *(int *)pQVar4 != 0;
    UNLOCK();
  }
  local_78.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar4;
  QString::fromUtf8_helper((char *)&local_38,0x1e2468c);
  QString::append(&local_78);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100781329;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100781329:
  local_70.field0_0x0 = local_78.field0_0x0;
  if (1 < *(int *)local_78.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
    local_21 = *(int *)local_78.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_30,0x1e1644c);
  QString::append(&local_70);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100781394;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100781394:
  QVariant::QVariant(&local_88,&local_40);
  QSettings::value((QString *)&local_58,&local_68);
  QVariant::toDateTime();
  QVariant::~QVariant(&local_58);
  QVariant::~QVariant(&local_88);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_21 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100781405;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_100781405:
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_21 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100781435;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_100781435:
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_21 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100781462;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100781462:
  QSettings::~QSettings((QSettings *)&local_68);
  cVar1 = QDateTime::operator<(&local_40,&local_48);
  if (cVar1 == '\0') {
    local_90 = (QArrayData *)PTR_shared_null_1021e1288;
    FUN_10077fe90(param_1,&local_90,param_2);
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_21 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100781514;
      }
      QArrayData::deallocate(local_90,2,8);
    }
  }
  else {
    if (param_2 == 4) {
      puVar6 = (undefined8 *)(param_1 + 0x20);
    }
    else if (param_2 == 3) {
      puVar6 = (undefined8 *)(param_1 + 0x18);
    }
    else {
      puVar6 = (undefined8 *)(param_1 + 0x10);
    }
    uVar2 = *puVar6;
    QDateTime::toTime_t();
    QDateTime::toTime_t();
    QTimer::start((int)uVar2);
  }
LAB_100781514:
  QDateTime::~QDateTime(&local_48);
  QDateTime::~QDateTime(&local_40);
  return;
}

