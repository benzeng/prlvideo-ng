
bool FUN_100075300(void)

{
  char cVar1;
  int iVar2;
  Data_conflict local_50;
  undefined4 local_48;
  QArrayData *local_40;
  QVariant local_38;
  QVariant local_28;
  undefined1 local_11;
  
  if ((DAT_102311e18 != '\0') || (iVar2 = ___cxa_guard_acquire(&DAT_102311e18), iVar2 == 0))
  goto LAB_1000753d7;
  QSettings::QSettings((QSettings *)&local_38,(QObject *)0x0);
  local_40 = (QArrayData *)QString::fromAscii_helper("AppResumeDisabled",0x11);
  local_48 = 0x80000000;
  local_50.field7 = 0;
  QSettings::value((QString *)&local_28,&local_38);
  cVar1 = QVariant::toBool();
  QVariant::~QVariant(&local_28);
  QVariant::~QVariant((QVariant *)&local_50);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_11 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1000753bc;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1000753bc:
  QSettings::~QSettings((QSettings *)&local_38);
  DAT_102311e10 = cVar1;
  ___cxa_guard_release(&DAT_102311e18);
LAB_1000753d7:
  return DAT_102311e10 == '\0';
}

