
undefined1 FUN_100777c20(void)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  QVariant local_60;
  QArrayData *local_50;
  QVariant local_48;
  QVariant local_38;
  undefined1 local_21;
  
  cVar1 = FUN_100774d90();
  uVar2 = 1;
  if (cVar1 != '\0') {
    return 1;
  }
  uVar3 = FUN_100152280();
  uVar3 = FUN_1001554a0(uVar3);
  cVar1 = FUN_10076d9d0();
  if ((cVar1 == '\0') || (cVar1 = FUN_10076d9e0(), cVar1 == '\0')) goto LAB_100777d02;
  QSettings::QSettings((QSettings *)&local_48,(QObject *)0x0);
  local_50 = (QArrayData *)
             QString::fromAscii_helper("AcronisOnlineStore/AcronisOnlineStorePromoOff",0x2d);
  QVariant::QVariant(&local_60,false);
  QSettings::value((QString *)&local_38,&local_48);
  cVar1 = QVariant::toBool();
  QVariant::~QVariant(&local_38);
  QVariant::~QVariant(&local_60);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100777cf4;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100777cf4:
  QSettings::~QSettings((QSettings *)&local_48);
  if (cVar1 == '\0') {
    return 1;
  }
LAB_100777d02:
  cVar1 = FUN_10076d810(uVar3);
  if ((cVar1 != '\0') && (cVar1 = FUN_10076d820(uVar3), cVar1 != '\0')) {
    uVar2 = FUN_10076d460();
  }
  return uVar2;
}

