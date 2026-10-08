
void FUN_1006260f0(undefined8 param_1)

{
  bool bVar1;
  char cVar2;
  QArrayData *local_80;
  QString local_78;
  QVariant local_70;
  Data_conflict local_60;
  QArrayData *local_58;
  QString local_50 [2];
  QVariant local_40;
  QString local_30;
  QString local_28;
  undefined1 local_19;
  
  local_28.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  cVar2 = FUN_10061b4d0();
  if (((cVar2 != '\0') && (cVar2 = FUN_10061b500(param_1), cVar2 != '\0')) &&
     (cVar2 = FUN_10061c680(param_1), cVar2 == '\0')) {
    FUN_10061abe0(&local_40,param_1,3);
    QVariant::toString();
    QString::operator=(&local_28,&local_30);
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        local_19 = *(int *)local_30.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100626193;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
LAB_100626193:
    QVariant::~QVariant(&local_40);
  }
  QSettings::QSettings((QSettings *)local_50,(QObject *)0x0);
  local_58 = (QArrayData *)QString::fromAscii_helper("ProductUpdate",0xd);
  QSettings::beginGroup(local_50);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_19 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006261f9;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1006261f9:
  local_60.field7 = QString::fromAscii_helper("RegisteredLicenseKey",0x14);
  if (*(int *)(local_28.field0_0x0 + 4) == 0) {
    local_78.field0_0x0 = local_28.field0_0x0;
    if (1 < *(int *)local_28.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + 1;
      local_19 = *(int *)local_28.field0_0x0 != 0;
      UNLOCK();
    }
    bVar1 = false;
  }
  else {
    local_80 = (QArrayData *)QString::fromAscii_helper("",0);
    bVar1 = true;
    FUN_1009dfc00(&local_78,&local_80,&local_28);
  }
  QVariant::QVariant(&local_70,&local_78);
  QSettings::setValue(local_50,(QVariant *)&local_60);
  QVariant::~QVariant(&local_70);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_19 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006262b5;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_1006262b5:
  if ((bVar1) && (*(int *)local_80 != -1)) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_19 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006262e9;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1006262e9:
  if (*(int *)local_60.field15 != -1) {
    if (*(int *)local_60.field15 != 0) {
      LOCK();
      *(int *)local_60.field15 = *(int *)local_60.field15 + -1;
      local_19 = *(int *)local_60.field15 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100626319;
    }
    QArrayData::deallocate((QArrayData *)local_60.field15,2,8);
  }
LAB_100626319:
  QSettings::endGroup();
  QSettings::~QSettings((QSettings *)local_50);
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
  return;
}

