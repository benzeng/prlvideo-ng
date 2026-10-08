
undefined8 FUN_100cdb850(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  QVariant local_50;
  QArrayData *local_40;
  QVariant local_38;
  QVariant local_28;
  undefined1 local_11;
  
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("","hid",2,"[HIDMacHook] Grab mouse in pure qt-mode");
  }
  *(undefined1 *)(param_1 + 0x3e0) = 1;
  QSettings::QSettings((QSettings *)&local_28,(QObject *)0x0);
  local_40 = (QArrayData *)QString::fromAscii_helper("HID Host Hook/Scroll Points",0x1b);
  QVariant::QVariant(&local_50,0x78);
  QSettings::value((QString *)&local_38,&local_28);
  uVar2 = QVariant::toInt((bool *)&local_38);
  *(undefined4 *)(param_1 + 0x514) = uVar2;
  QVariant::~QVariant(&local_38);
  QVariant::~QVariant(&local_50);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_11 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100cdb926;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100cdb926:
  cVar1 = FUN_100d80630(1);
  if (cVar1 == '\0') {
    FUN_100cdb9c0(param_1);
  }
  QSettings::~QSettings((QSettings *)&local_28);
  return 1;
}

