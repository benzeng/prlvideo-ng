
longlong FUN_100777230(longlong param_1,long param_2)

{
  char cVar1;
  QDateTime local_a8;
  QDateTime local_a0;
  QDateTime local_98;
  QArrayData *local_90;
  Data_conflict local_88;
  undefined4 local_80;
  QString local_78;
  QString local_70;
  QString local_68;
  QVariant local_60;
  QVariant local_50;
  QString local_40;
  QDateTime local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  QSettings::QSettings((QSettings *)&local_60,(QObject *)0x0);
  local_78.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_2 + 0x10);
  if (1 < *(int *)local_78.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
    local_19 = *(int *)local_78.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_30,0x1e2468c);
  QString::append(&local_78);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007772ba;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1007772ba:
  local_70.field0_0x0 = local_78.field0_0x0;
  if (1 < *(int *)local_78.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
    local_19 = *(int *)local_78.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_70);
  local_68.field0_0x0 = local_70.field0_0x0;
  if (1 < *(int *)local_70.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + 1;
    local_19 = *(int *)local_70.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_28,0x1e16082);
  QString::append(&local_68);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10077734b;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_10077734b:
  local_80 = 0x80000000;
  local_88.field7 = 0;
  QSettings::value((QString *)&local_50,&local_60);
  QVariant::toString();
  local_90 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss",0x13);
  QDateTime::fromString((QString *)&local_38,&local_40);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_19 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007773de;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1007773de:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_19 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10077740e;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_10077740e:
  QVariant::~QVariant(&local_50);
  QVariant::~QVariant((QVariant *)&local_88);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_19 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100777450;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_100777450:
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_19 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100777480;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_100777480:
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_19 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007774b0;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_1007774b0:
  QSettings::~QSettings((QSettings *)&local_60);
  FUN_1007752e0(&local_98,param_2);
  QDateTime::addDays((longlong)&local_a0);
  cVar1 = QDateTime::operator<(&local_98,&local_a0);
  QDateTime::~QDateTime(&local_a0);
  if (cVar1 == '\0') {
    QDateTime::addDays((longlong)&local_a8);
    cVar1 = QDateTime::operator<(&local_98,&local_a8);
    QDateTime::~QDateTime(&local_a8);
    if (cVar1 == '\0') {
      QDateTime::addDays(param_1);
    }
    else {
      QDateTime::addDays(param_1);
    }
  }
  else {
    QDateTime::addDays(param_1);
  }
  QDateTime::~QDateTime(&local_98);
  QDateTime::~QDateTime(&local_38);
  return param_1;
}

