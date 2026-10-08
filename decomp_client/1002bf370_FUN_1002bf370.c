
void FUN_1002bf370(undefined8 param_1,undefined8 param_2,int param_3)

{
  QDateTime QVar1;
  undefined8 uVar2;
  QDateTime local_38;
  QDateTime local_30;
  QDateTime local_28;
  QDateTime local_20;
  
  if (param_3 == 0) {
    QDateTime::currentDateTime();
    QDateTime::toTimeSpec(&local_20,&local_28,1);
    QDateTime::~QDateTime(&local_28);
    QDateTime::addMonths((int)&local_30);
    QDateTime::operator=(&local_20,&local_30);
    QDateTime::~QDateTime(&local_30);
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmProtection();
    QVar1.field0_0x0.field0_0x0 =
         (QSharedDataPointer<QDateTimePrivate>)CVmProtection::getExpirationInfo();
    QDateTime::QDateTime(&local_38,&local_20);
    CVmExpiration::setExpirationDate(QVar1);
    QDateTime::~QDateTime(&local_38);
    QDateTime::~QDateTime(&local_20);
  }
  else if (param_3 == 1) {
    uVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102212610);
    FUN_100443970(uVar2,param_2);
    return;
  }
  return;
}

