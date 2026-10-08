
void FUN_10002da60(undefined8 param_1)

{
  char cVar1;
  QVariant local_58;
  QArrayData *local_48;
  QVariant local_40;
  QVariant local_30;
  undefined1 local_19;
  
  QSettings::QSettings((QSettings *)&local_40,(QObject *)0x0);
  local_48 = (QArrayData *)QString::fromAscii_helper("Debug System UI",0xf);
  QVariant::QVariant(&local_58,false);
  QSettings::value((QString *)&local_30,&local_40);
  cVar1 = QVariant::toBool();
  QVariant::~QVariant(&local_30);
  QVariant::~QVariant(&local_58);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10002dafb;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10002dafb:
  QSettings::~QSettings((QSettings *)&local_40);
  if ((2 < DAT_10230ffd0) && (cVar1 == '\x01')) {
    FUN_100df99c0("[SYS_UI_CTRL]","prl_client_app",3,
                  "VM view mode switch finished. Update System UI visibility.");
  }
  FUN_10002dbc0(param_1,200);
  return;
}

