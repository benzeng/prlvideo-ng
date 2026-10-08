
undefined4 FUN_1001d4ba0(void)

{
  char cVar1;
  undefined4 uVar2;
  QVariant local_50;
  QArrayData *local_40;
  QVariant local_38;
  QVariant local_28;
  undefined1 local_11;
  
  cVar1 = FUN_100d80630(1);
  if (cVar1 != '\0') {
    return 2;
  }
  QSettings::QSettings((QSettings *)&local_38,(QObject *)0x0);
  local_40 = (QArrayData *)QString::fromAscii_helper("Application preferences/Dock icon",0x21);
  QVariant::QVariant(&local_50,0);
  QSettings::value((QString *)&local_28,&local_38);
  uVar2 = QVariant::toInt((bool *)&local_28);
  QVariant::~QVariant(&local_28);
  QVariant::~QVariant(&local_50);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_11 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1001d4c4f;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1001d4c4f:
  QSettings::~QSettings((QSettings *)&local_38);
  return uVar2;
}

