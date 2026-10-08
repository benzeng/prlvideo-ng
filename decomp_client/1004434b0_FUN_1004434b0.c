
void FUN_1004434b0(void)

{
  bool bVar1;
  uint uVar2;
  QDateTime QVar3;
  QString QVar4;
  undefined8 uVar5;
  QArrayData *local_58;
  QUrl local_50 [8];
  QArrayData *local_48;
  QDateTime local_40;
  QDateTime local_38;
  undefined1 local_29;
  
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmProtection();
  bVar1 = (bool)CVmProtection::getExpirationInfo();
  QAbstractButton::isChecked();
  CVmExpiration::setEnabled(bVar1);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmProtection();
  QVar3.field0_0x0.field0_0x0 =
       (QSharedDataPointer<QDateTimePrivate>)CVmProtection::getExpirationInfo();
  QDateTimeEdit::dateTime();
  QDateTime::toTimeSpec(&local_38,&local_40,1);
  CVmExpiration::setExpirationDate(QVar3);
  QDateTime::~QDateTime(&local_38);
  QDateTime::~QDateTime(&local_40);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmProtection();
  QVar4.field0_0x0 = (QTypedArrayData<unsigned_short> *)CVmProtection::getExpirationInfo();
  QTextEdit::toPlainText();
  CVmExpiration::setNote(QVar4);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004435c6;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1004435c6:
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmProtection();
  uVar5 = CVmProtection::getExpirationInfo();
  QLineEdit::text();
  QUrl::QUrl(local_50,&local_58,0);
  CVmExpiration::setTrustedTimeServerUrl(uVar5,local_50);
  QUrl::~QUrl(local_50);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100443648;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100443648:
  QSpinBox::value();
  QComboBox::currentIndex();
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmProtection();
  uVar2 = CVmProtection::getExpirationInfo();
  CVmExpiration::setTimeCheckIntervalSeconds(uVar2);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmProtection();
  uVar2 = CVmProtection::getExpirationInfo();
  QSpinBox::value();
  CVmExpiration::setOfflineTimeToLiveSeconds(uVar2);
  return;
}

