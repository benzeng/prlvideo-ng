
void FUN_1002ea910(QObject *param_1)

{
  int iVar1;
  QVariant local_58;
  QArrayData *local_48;
  QVariant local_40;
  QVariant local_30;
  undefined1 local_19;
  
  QSettings::QSettings((QSettings *)&local_30,(QObject *)0x0);
  local_48 = (QArrayData *)QString::fromAscii_helper("Vm search timeout",0x11);
  QVariant::QVariant(&local_58,DAT_100e15324);
  QSettings::value((QString *)&local_40,&local_30);
  iVar1 = QVariant::toUInt((bool *)&local_40);
  QVariant::~QVariant(&local_40);
  QVariant::~QVariant(&local_58);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1002ea9b4;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1002ea9b4:
  QTimer::singleShot(iVar1,param_1,"1onTimeout()");
  QSettings::~QSettings((QSettings *)&local_30);
  return;
}

