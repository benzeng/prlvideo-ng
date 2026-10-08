
undefined8 FUN_10025c250(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QVariant local_58;
  QArrayData *local_48;
  QVariant local_40;
  QVariant local_30;
  undefined1 local_19;
  
  QSettings::QSettings((QSettings *)&local_30,(QObject *)0x0);
  local_48 = (QArrayData *)QString::fromAscii_helper("DisableWindowsPurchase",0x16);
  QVariant::QVariant(&local_58,false);
  QSettings::value((QString *)&local_40,&local_30);
  cVar1 = QVariant::toBool();
  QVariant::~QVariant(&local_40);
  QVariant::~QVariant(&local_58);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10025c2eb;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10025c2eb:
  if (cVar1 == '\0') {
    uVar2 = FUN_100748240();
    local_60 = (QArrayData *)QString::fromAscii_helper("os.win.preview",0xe);
    uVar2 = FUN_100748290(uVar2,&local_60);
    FUN_1007469d0(uVar2,0);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_19 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10025c388;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_10025c388:
    uVar2 = FUN_100748240();
    local_68 = (QArrayData *)QString::fromAscii_helper("os_win10",8);
    uVar2 = FUN_100748290(uVar2,&local_68);
    FUN_1007469d0(uVar2,0);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_19 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10025c3eb;
      }
      QArrayData::deallocate(local_68,2,8);
    }
  }
  else if (1 < DAT_10230ffd0) {
    FUN_100df99c0("","prl_client_app",2,"Windows purchase has been disabled!");
  }
LAB_10025c3eb:
  if (((*(long *)(param_1 + 0x18) != 0) && (*(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) &&
     (*(long *)(param_1 + 0x20) != 0)) {
    uVar2 = FUN_10016f500();
    cVar1 = FUN_10061c2b0(uVar2,0x10080);
    if (cVar1 != '\0') {
      uVar2 = FUN_100748240();
      local_70 = (QArrayData *)QString::fromAscii_helper("modern.ie",9);
      uVar2 = FUN_100748290(uVar2,&local_70);
      FUN_1007469d0(uVar2,0);
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_19 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_10025c484;
        }
        QArrayData::deallocate(local_70,2,8);
      }
    }
  }
LAB_10025c484:
  uVar2 = FUN_100748240();
  local_78 = (QArrayData *)QString::fromAscii_helper("trial.windows",0xd);
  uVar2 = FUN_100748290(uVar2,&local_78);
  FUN_1007469d0(uVar2,0);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_19 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10025c4e7;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10025c4e7:
  uVar2 = FUN_100748240();
  local_80 = (QArrayData *)QString::fromAscii_helper("win7.purchased",0xe);
  uVar2 = FUN_100748290(uVar2,&local_80);
  FUN_1007469d0(uVar2,0);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_19 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10025c54a;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10025c54a:
  uVar2 = FUN_100748240();
  local_88 = (QArrayData *)QString::fromAscii_helper("Windows10Development",0x14);
  uVar2 = FUN_100748290(uVar2,&local_88);
  FUN_1007469d0(uVar2,0);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_19 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10025c5ad;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10025c5ad:
  QSettings::~QSettings((QSettings *)&local_30);
  return 0;
}

