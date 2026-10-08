
void FUN_100030ed0(undefined8 param_1,undefined8 *param_2,char param_3,uint param_4)

{
  char cVar1;
  QArrayData *pQVar2;
  undefined8 uVar3;
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
      if ((bool)local_31) goto LAB_100030f7a;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100030f7a:
  QSettings::~QSettings((QSettings *)&local_58);
  if ((2 < DAT_10230ffd0) && (cVar1 == '\x01')) {
    local_80 = (QArrayData *)*param_2;
    if (1 < *(int *)local_80 + 1U) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + 1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    pQVar2 = local_78 + *(long *)(local_78 + 0x10);
    EnumUtils::enumToString(&local_90,param_4);
    QString::toLocal8Bit();
    FUN_100df99c0("[SYS_UI_CTRL]","prl_client_app",3,
                  "Processing keyboard input state change. VM=%s, grabbed=%d, reason=%s",pQVar2,
                  param_3,local_88 + *(long *)(local_88 + 0x10));
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10003104d;
      }
      QArrayData::deallocate(local_88,1,8);
    }
LAB_10003104d:
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100031083;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_100031083:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000310b3;
      }
      QArrayData::deallocate(local_78,1,8);
    }
LAB_1000310b3:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000310e3;
      }
      QArrayData::deallocate(local_80,2,8);
    }
  }
LAB_1000310e3:
  cVar1 = FUN_100030d30();
  if ((cVar1 == '\0') && (param_3 == '\0')) {
    if ((param_4 < 0x1c) && ((0xd021802U >> (param_4 & 0x1f) & 1) != 0)) {
LAB_10003111b:
      uVar3 = 0;
      goto LAB_10003111d;
    }
  }
  else if (cVar1 == '\0') goto LAB_10003111b;
  uVar3 = 200;
  if (param_4 == 0x15) {
    uVar3 = 700;
  }
LAB_10003111d:
  FUN_10002dbc0(param_1,uVar3);
  return;
}

