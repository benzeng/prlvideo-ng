
undefined1 FUN_100774d90(long param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  QVariant local_a0;
  QArrayData *local_90;
  QVariant local_88;
  QVariant local_78;
  QString local_68;
  QString local_60;
  QString local_58;
  QVariant local_50;
  QVariant local_40;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  uVar3 = FUN_100152280();
  lVar4 = FUN_1001554a0(uVar3);
  if (lVar4 == 0) {
    return 1;
  }
  if (*(char *)(param_1 + 0x18) == '\0') {
    return 1;
  }
  QSettings::QSettings((QSettings *)&local_40,(QObject *)0x0);
  local_68.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x10);
  if (1 < *(int *)local_68.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + 1;
    local_19 = *(int *)local_68.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_30,0x1e2468c);
  QString::append(&local_68);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100774e3a;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100774e3a:
  local_60.field0_0x0 = local_68.field0_0x0;
  if (1 < *(int *)local_68.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + 1;
    local_19 = *(int *)local_68.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_60);
  local_58.field0_0x0 = local_60.field0_0x0;
  if (1 < *(int *)local_60.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
    local_19 = *(int *)local_60.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_28,0x1dc363e);
  QString::append(&local_58);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100774ece;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_100774ece:
  QVariant::QVariant(&local_78,false);
  QSettings::value((QString *)&local_50,&local_40);
  cVar1 = QVariant::toBool();
  uVar2 = 1;
  if (cVar1 == '\0') {
    local_90 = (QArrayData *)QString::fromAscii_helper("ProductPromo/ForcePromoOff",0x1a);
    QVariant::QVariant(&local_a0,false);
    QSettings::value((QString *)&local_88,&local_40);
    uVar2 = QVariant::toBool();
    QVariant::~QVariant(&local_88);
    QVariant::~QVariant(&local_a0);
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_19 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100774f9a;
      }
      QArrayData::deallocate(local_90,2,8);
    }
  }
LAB_100774f9a:
  QVariant::~QVariant(&local_50);
  QVariant::~QVariant(&local_78);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_19 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100774fdc;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100774fdc:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_19 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10077500c;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_10077500c:
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_19 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10077503c;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_10077503c:
  QSettings::~QSettings((QSettings *)&local_40);
  return uVar2;
}

