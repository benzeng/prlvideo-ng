
bool FUN_10007acd0(long param_1)

{
  char cVar1;
  bool bVar2;
  Data_conflict local_60;
  undefined4 local_58;
  QArrayData *local_50;
  QVariant local_48;
  QVariant local_38;
  undefined1 local_21;
  
  bVar2 = true;
  cVar1 = FUN_100075300();
  if (cVar1 == '\0') {
    return true;
  }
  QSettings::QSettings((QSettings *)&local_48,(QObject *)0x0);
  local_50 = (QArrayData *)
             QString::fromAscii_helper("Application preferences/Close Windows On Quit",0x2d);
  local_58 = 0x80000000;
  local_60.field7 = 0;
  QSettings::value((QString *)&local_38,&local_48);
  cVar1 = QVariant::toBool();
  QVariant::~QVariant(&local_38);
  QVariant::~QVariant((QVariant *)&local_60);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10007ad81;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10007ad81:
  QSettings::~QSettings((QSettings *)&local_48);
  if (cVar1 == '\0') {
    bVar2 = *(char *)(*(long *)(param_1 + 0x10) + 0x38) != '\0';
  }
  return bVar2;
}

