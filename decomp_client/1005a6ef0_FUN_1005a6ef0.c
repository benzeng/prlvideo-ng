
void FUN_1005a6ef0(void)

{
  bool bVar1;
  char cVar2;
  char *pcVar3;
  QVariant local_40;
  Data_conflict local_30;
  QString local_28 [2];
  undefined1 local_11;
  
  QSettings::QSettings((QSettings *)local_28,(QObject *)0x0);
  local_30.field7 = QString::fromAscii_helper("Antivirus/HavPromoOff",0x15);
  bVar1 = (bool)QAbstractButton::isChecked();
  QVariant::QVariant(&local_40,bVar1);
  QSettings::setValue(local_28,(QVariant *)&local_30);
  QVariant::~QVariant(&local_40);
  if (*(int *)local_30.field15 != -1) {
    if (*(int *)local_30.field15 != 0) {
      LOCK();
      *(int *)local_30.field15 = *(int *)local_30.field15 + -1;
      local_11 = *(int *)local_30.field15 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1005a6f7f;
    }
    QArrayData::deallocate((QArrayData *)local_30.field15,2,8);
  }
LAB_1005a6f7f:
  cVar2 = QAbstractButton::isChecked();
  pcVar3 = "enabled";
  if (cVar2 != '\0') {
    pcVar3 = "disabled";
  }
  FUN_100df99c0("[APP_HAV_PROMO]","prl_client_app",0,"Antivirus promotion %s.",pcVar3);
  QSettings::~QSettings((QSettings *)local_28);
  return;
}

