
undefined4 FUN_10077fd70(void)

{
  undefined4 uVar1;
  QVariant local_50;
  QArrayData *local_40;
  QVariant local_38;
  QVariant local_28;
  undefined1 local_11;
  
  QSettings::QSettings((QSettings *)&local_38,(QObject *)0x0);
  local_40 = (QArrayData *)
             QString::fromAscii_helper("ProductPromo/UpgradePromo/PromotedProductVersion",0x30);
  QVariant::QVariant(&local_50,0);
  QSettings::value((QString *)&local_28,&local_38);
  uVar1 = QVariant::toInt((bool *)&local_28);
  QVariant::~QVariant(&local_28);
  QVariant::~QVariant(&local_50);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_11 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10077fe08;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10077fe08:
  QSettings::~QSettings((QSettings *)&local_38);
  return uVar1;
}

