
undefined1 FUN_100626bf0(void)

{
  char cVar1;
  undefined1 uVar2;
  Data_conflict local_50;
  undefined4 local_48;
  QArrayData *local_40;
  QVariant local_38;
  QVariant local_28;
  undefined1 local_11;
  
  cVar1 = FUN_100d80630(1);
  if (cVar1 == '\0') {
    return 1;
  }
  QSettings::QSettings((QSettings *)&local_38,(QObject *)0x0);
  local_40 = (QArrayData *)QString::fromAscii_helper("PDL/InitialAppStoreLicenseScreenShown",0x25);
  local_48 = 0x80000000;
  local_50.field7 = 0;
  QSettings::value((QString *)&local_28,&local_38);
  uVar2 = QVariant::toBool();
  QVariant::~QVariant(&local_28);
  QVariant::~QVariant((QVariant *)&local_50);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_11 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100626c9e;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100626c9e:
  QSettings::~QSettings((QSettings *)&local_38);
  return uVar2;
}

