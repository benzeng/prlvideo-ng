
undefined1 FUN_10077f890(undefined8 param_1,QString *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  QVariant local_c0;
  QArrayData *local_b0;
  QVariant local_a8;
  Data_conflict local_98;
  undefined4 local_90;
  QArrayData *local_88;
  QVariant local_80;
  QString local_70;
  Data_conflict local_68;
  undefined4 local_60;
  QArrayData *local_58;
  QVariant local_50;
  QArrayData *local_40;
  QArrayData *local_38;
  QVariant local_30;
  undefined1 local_19;
  
  QSettings::QSettings((QSettings *)&local_30,(QObject *)0x0);
  local_38 = (QArrayData *)QString::fromAscii_helper("ProductPromo/UpgradePromo",0x19);
  QSettings::beginGroup((QString *)&local_30);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10077f901;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10077f901:
  local_58 = (QArrayData *)QString::fromAscii_helper("PromotedProductVersion",0x16);
  local_60 = 0x80000000;
  local_68.field7 = 0;
  QSettings::value((QString *)&local_50,&local_30);
  QVariant::toString();
  QVariant::~QVariant(&local_50);
  QVariant::~QVariant((QVariant *)&local_68);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_19 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10077f989;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10077f989:
  if (*(int *)(local_40 + 4) == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = QString::toInt((bool *)&local_40,0);
    if (iVar1 < 0xd) {
      uVar3 = 0;
    }
    else {
      if (param_2 != (QString *)0x0) {
        local_88 = (QArrayData *)QString::fromAscii_helper("PromoId",7);
        local_90 = 0x80000000;
        local_98.field7 = 0;
        QSettings::value((QString *)&local_80,&local_30);
        QVariant::toString();
        QString::operator=(param_2,&local_70);
        if (*(int *)local_70.field0_0x0 != -1) {
          if (*(int *)local_70.field0_0x0 != 0) {
            LOCK();
            *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
            local_19 = *(int *)local_70.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_19) goto LAB_10077fa44;
          }
          QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
        }
LAB_10077fa44:
        QVariant::~QVariant(&local_80);
        QVariant::~QVariant((QVariant *)&local_98);
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_19 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_19) goto LAB_10077fa89;
          }
          QArrayData::deallocate(local_88,2,8);
        }
      }
LAB_10077fa89:
      uVar3 = 1;
      if (param_3 != (undefined4 *)0x0) {
        local_b0 = (QArrayData *)QString::fromAscii_helper("PromoType",9);
        QVariant::QVariant(&local_c0,0);
        QSettings::value((QString *)&local_a8,&local_30);
        uVar2 = QVariant::toInt((bool *)&local_a8);
        *param_3 = uVar2;
        QVariant::~QVariant(&local_a8);
        QVariant::~QVariant(&local_c0);
        if (*(int *)local_b0 != -1) {
          if (*(int *)local_b0 != 0) {
            LOCK();
            *(int *)local_b0 = *(int *)local_b0 + -1;
            local_19 = *(int *)local_b0 != 0;
            UNLOCK();
            if ((bool)local_19) goto LAB_10077fb47;
          }
          QArrayData::deallocate(local_b0,2,8);
        }
      }
    }
  }
LAB_10077fb47:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10077fb77;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10077fb77:
  QSettings::~QSettings((QSettings *)&local_30);
  return uVar3;
}

