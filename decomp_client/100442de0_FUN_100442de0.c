
void FUN_100442de0(long param_1)

{
  QDateTime *pQVar1;
  QString *pQVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  QUrl local_80 [8];
  QArrayData *local_78;
  QArrayData *local_70;
  QDateTime local_68;
  QDateTime local_60;
  QDateTime local_58;
  QArrayData *local_50;
  QDateTime local_48;
  QString local_40;
  QDateTime local_38;
  undefined1 local_29;
  
  QAbstractButton::setChecked(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x88),0));
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmProtection();
  CVmProtection::getExpirationInfo();
  CVmExpiration::getExpirationDate();
  QDateTime::toTimeSpec(&local_48,&local_38,1);
  local_50 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss",0x13);
  QDateTime::toString(&local_40);
  iVar4 = QString::compare_helper
                    ((QArrayData *)(local_40.field0_0x0 + *(long *)(local_40.field0_0x0 + 0x10)),
                     *(undefined4 *)(local_40.field0_0x0 + 4),"1752-01-01 00:00:00",0xffffffff,1);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100442ebf;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100442ebf:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100442eef;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100442eef:
  QDateTime::~QDateTime(&local_48);
  if (iVar4 == 0) {
    QDateTime::currentDateTime();
    QDateTime::operator=(&local_38,&local_58);
    QDateTime::~QDateTime(&local_58);
    QDateTime::addMonths((int)&local_60);
    QDateTime::operator=(&local_38,&local_60);
    QDateTime::~QDateTime(&local_60);
  }
  pQVar1 = *(QDateTime **)(*(long *)(param_1 + 0x18) + 0x90);
  QDateTime::toTimeSpec(&local_68,&local_38,0);
  QDateTimeEdit::setDateTime(pQVar1);
  QDateTime::~QDateTime(&local_68);
  pQVar2 = *(QString **)(*(long *)(param_1 + 0x18) + 0x68);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmProtection();
  CVmProtection::getExpirationInfo();
  CVmExpiration::getNote();
  QTextEdit::setText(pQVar2);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100442fda;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100442fda:
  pQVar2 = *(QString **)(*(long *)(param_1 + 0x18) + 0x18);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmProtection();
  CVmProtection::getExpirationInfo();
  CVmExpiration::getTrustedTimeServerUrl();
  QUrl::toString(&local_78,local_80,0);
  QLineEdit::setText(pQVar2);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100443051;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100443051:
  QUrl::~QUrl(local_80);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmProtection();
  CVmProtection::getExpirationInfo();
  uVar5 = CVmExpiration::getTimeCheckIntervalSeconds();
  if ((uVar5 < 0x15180) && (uVar5 / 0x3c == (uVar5 / 0xe10) * 0x3c)) {
    QComboBox::setCurrentIndex((int)*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x50));
  }
  else if ((uVar5 < 0x15180) || (uVar5 / 0x3c != (uVar5 / 0x15180) * 0x5a0)) {
    QComboBox::setCurrentIndex((int)*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x50));
  }
  else {
    QComboBox::setCurrentIndex((int)*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x50));
  }
  QSpinBox::setValue((int)*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x40));
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x48);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmProtection();
  CVmProtection::getExpirationInfo();
  CVmExpiration::getOfflineTimeToLiveSeconds();
  QSpinBox::setValue((int)uVar3);
  QDateTime::~QDateTime(&local_38);
  return;
}

