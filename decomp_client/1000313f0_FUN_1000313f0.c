
void FUN_1000313f0(undefined8 param_1,long param_2,long param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QVariant local_70;
  QArrayData *local_60;
  QVariant local_58;
  QVariant local_48;
  undefined1 local_31;
  
  QSettings::QSettings((QSettings *)&local_58,(QObject *)0x0);
  local_60 = (QArrayData *)QString::fromAscii_helper("Debug System UI",0xf);
  QVariant::QVariant(&local_70,false);
  QSettings::value((QString *)&local_48,&local_58);
  cVar1 = QVariant::toBool();
  QVariant::~QVariant(&local_48);
  QVariant::~QVariant(&local_70);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10003149a;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10003149a:
  QSettings::~QSettings((QSettings *)&local_58);
  if ((DAT_10230ffd0 < 3) || (cVar1 != '\x01')) goto LAB_10003164d;
  pcVar2 = "";
  if (param_3 == 0) {
    pcVar3 = "";
  }
  else {
    QWidget::windowTitle();
    QString::toUtf8();
    pcVar3 = (char *)(local_78 + *(long *)(local_78 + 0x10));
  }
  if (param_2 != 0) {
    QWidget::windowTitle();
    QString::toUtf8();
    pcVar2 = (char *)(local_88 + *(long *)(local_88 + 0x10));
  }
  FUN_100df99c0("[SYS_UI_CTRL]","prl_client_app",3,
                "Active window has changed from %p [%s] to %p [%s]. Update System UI visibility.",
                param_3,pcVar3,param_2,pcVar2);
  if (param_2 != 0) {
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000315ad;
      }
      QArrayData::deallocate(local_88,1,8);
    }
LAB_1000315ad:
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000315e3;
      }
      QArrayData::deallocate(local_90,2,8);
    }
  }
LAB_1000315e3:
  if (param_3 == 0) goto LAB_10003164d;
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10003161d;
    }
    QArrayData::deallocate(local_78,1,8);
  }
LAB_10003161d:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10003164d;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10003164d:
  FUN_10002dbc0(param_1,200);
  return;
}

