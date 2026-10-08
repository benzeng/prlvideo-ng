
void FUN_100772f20(undefined8 param_1,bool param_2)

{
  long lVar1;
  QSettings *this;
  QVariant local_90;
  Data_conflict local_80;
  QString local_78 [2];
  QVariant local_68;
  Data_conflict local_58;
  QString local_50 [2];
  QVariant local_40;
  Data_conflict local_30;
  QString local_28 [2];
  undefined1 local_11;
  
  lVar1 = CAbstractWizardPage::wizardModel();
  if (*(int *)(lVar1 + 0x24) == 0) {
    if (*(int *)(lVar1 + 0x20) != 1) {
      QSettings::QSettings((QSettings *)local_50,(QObject *)0x0);
      local_58.field7 =
           QString::fromAscii_helper("AcronisOnlineStore/AcronisOnlineStorePromoOff",0x2d);
      QVariant::QVariant(&local_68,param_2);
      QSettings::setValue(local_50,(QVariant *)&local_58);
      QVariant::~QVariant(&local_68);
      if (*(int *)local_58.field15 != -1) {
        if (*(int *)local_58.field15 != 0) {
          LOCK();
          *(int *)local_58.field15 = *(int *)local_58.field15 + -1;
          local_11 = *(int *)local_58.field15 != 0;
          UNLOCK();
          if ((bool)local_11) goto LAB_1007730bd;
        }
        QArrayData::deallocate((QArrayData *)local_58.field15,2,8);
      }
LAB_1007730bd:
      this = (QSettings *)local_50;
      goto LAB_1007730c1;
    }
    QSettings::QSettings((QSettings *)local_28,(QObject *)0x0);
    local_30.field7 =
         QString::fromAscii_helper
                   ("AcronisOnlineStore/AcronisOnlineStoreAcronisBackupOnlineTakenOffer",0x42);
    QVariant::QVariant(&local_40,param_2);
    QSettings::setValue(local_28,(QVariant *)&local_30);
    QVariant::~QVariant(&local_40);
    if (*(int *)local_30.field15 != -1) {
      if (*(int *)local_30.field15 != 0) {
        LOCK();
        *(int *)local_30.field15 = *(int *)local_30.field15 + -1;
        local_11 = *(int *)local_30.field15 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_100773041;
      }
      QArrayData::deallocate((QArrayData *)local_30.field15,2,8);
    }
LAB_100773041:
    this = (QSettings *)local_28;
    goto LAB_1007730c1;
  }
  QSettings::QSettings((QSettings *)local_78,(QObject *)0x0);
  local_80.field7 = QString::fromAscii_helper("AcronisTrueImage/AcronisTrueImagePromoOff",0x29);
  QVariant::QVariant(&local_90,param_2);
  QSettings::setValue(local_78,(QVariant *)&local_80);
  QVariant::~QVariant(&local_90);
  if (*(int *)local_80.field15 != -1) {
    if (*(int *)local_80.field15 != 0) {
      LOCK();
      *(int *)local_80.field15 = *(int *)local_80.field15 + -1;
      local_11 = *(int *)local_80.field15 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100772fbc;
    }
    QArrayData::deallocate((QArrayData *)local_80.field15,2,8);
  }
LAB_100772fbc:
  this = (QSettings *)local_78;
LAB_1007730c1:
  QSettings::~QSettings(this);
  return;
}

