
void FUN_10043f910(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  QVariant local_48;
  QVariant local_38;
  
  CVmConfiguration::getVmSettings();
  uVar5 = CVmSettings::getVmAutoprotect();
  cVar1 = QAbstractButton::isChecked();
  CVmAutoprotect::setSchema(uVar5,(cVar1 == '\0') + '\x01');
  CVmConfiguration::getVmSettings();
  bVar2 = (bool)CVmSettings::getVmAutoprotect();
  QAbstractButton::isChecked();
  CVmAutoprotect::setNotifyBeforeCreation(bVar2);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmAutoprotect();
  iVar3 = CVmAutoprotect::getSchema();
  CVmConfiguration::getVmSettings();
  uVar4 = CVmSettings::getVmAutoprotect();
  if (iVar3 == 2) {
    QObject::property((char *)&local_38);
    QVariant::toUInt((bool *)&local_38);
    CVmAutoprotect::setPeriod(uVar4);
    QVariant::~QVariant(&local_38);
    CVmConfiguration::getVmSettings();
    uVar4 = CVmSettings::getVmAutoprotect();
    QObject::property((char *)&local_48);
    QVariant::toUInt((bool *)&local_48);
    CVmAutoprotect::setTotalSnapshots(uVar4);
    QVariant::~QVariant(&local_48);
  }
  else {
    iVar3 = CVmAutoprotect::getSchema();
    if (iVar3 == 1) {
      CVmConfiguration::getVmSettings();
      uVar4 = CVmSettings::getVmAutoprotect();
      CVmAutoprotect::setPeriod(uVar4);
      CVmConfiguration::getVmSettings();
      uVar4 = CVmSettings::getVmAutoprotect();
      CVmAutoprotect::setTotalSnapshots(uVar4);
      return;
    }
  }
  return;
}

