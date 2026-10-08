
void FUN_10002dbc0(long param_1,int param_2)

{
  long lVar1;
  char cVar2;
  QVariant local_60;
  QArrayData *local_50;
  QVariant local_48;
  QVariant local_38;
  undefined1 local_21;
  
  QSettings::QSettings((QSettings *)&local_48,(QObject *)0x0);
  local_50 = (QArrayData *)QString::fromAscii_helper("Debug System UI",0xf);
  QVariant::QVariant(&local_60,false);
  QSettings::value((QString *)&local_38,&local_48);
  cVar2 = QVariant::toBool();
  QVariant::~QVariant(&local_38);
  QVariant::~QVariant(&local_60);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10002dc60;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10002dc60:
  QSettings::~QSettings((QSettings *)&local_48);
  if ((2 < DAT_10230ffd0) && (cVar2 == '\x01')) {
    FUN_100df99c0("[SYS_UI_CTRL]","prl_client_app",3,
                  "Initiate deferred update of system UI with %d delay",param_2);
  }
  lVar1 = *(long *)(param_1 + 0x18);
  if ((*(int *)(lVar1 + 0x10) < 0) || (*(int *)(lVar1 + 0x14) < param_2)) {
    QTimer::start((int)lVar1);
  }
  return;
}

