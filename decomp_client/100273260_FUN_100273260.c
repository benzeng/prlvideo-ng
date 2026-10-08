
undefined8 FUN_100273260(long param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 local_c0;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_7c;
  QVariant local_78;
  QArrayData *local_68;
  QString local_60;
  QSettings local_58 [16];
  QVariant local_48;
  undefined1 local_31;
  
  iVar6 = 0;
  local_c0 = 0;
  do {
    uVar7 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x20);
    }
    iVar2 = FUN_10015d3a0(uVar7);
    if (iVar2 <= iVar6) {
      return local_c0;
    }
    uVar7 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar7 = FUN_10015d330(uVar7);
    QSettings::QSettings(local_58,(QObject *)0x0);
    FUN_100188480(&local_68,uVar7);
    QString::fromUtf8_helper((char *)&local_60,0x1dddd24);
    QString::append(&local_60);
    QVariant::QVariant(&local_78,-1);
    QSettings::value((QString *)&local_48,(QVariant *)local_58);
    uVar3 = QVariant::toInt((bool *)&local_48);
    QVariant::~QVariant(&local_48);
    QVariant::~QVariant(&local_78);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_31 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002733b6;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
LAB_1002733b6:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002733e6;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_1002733e6:
    QSettings::~QSettings(local_58);
    iVar2 = FUN_10018a9d0(uVar7);
    if ((iVar2 == 0x30000004) || (iVar2 = FUN_10018a9d0(uVar7), iVar2 == 0x30000005)) {
      iVar2 = FUN_100358ab0(uVar7);
      iVar4 = FUN_10018a9d0(uVar7);
      if (iVar4 == 0x30000005) {
        FUN_100192d10(uVar7,0x27f,0,0);
      }
      else {
        if (iVar2 == 0) goto LAB_1002732a0;
        uVar7 = FUN_10018c280(uVar7);
        local_90 = 3;
        local_88 = 0;
        local_8c = 0;
        local_84 = 0xffff;
        local_80 = 0;
        local_7c = 0;
        FUN_10031bef0(uVar7,iVar2,&local_90);
      }
LAB_1002735a0:
      local_c0 = 1;
    }
    else if ((uVar3 & 0xfffffffe) == 0x30000004) {
      uVar5 = FUN_10018d490(uVar7);
      cVar1 = FUN_1001754c0(uVar5,0x10);
      if (cVar1 != '\0') {
        FUN_10018c2b0(uVar7);
        CVmConfiguration::getVmSettings();
        CVmSettings::getVmStartupOptions();
        iVar2 = CVmStartupOptionsBase::getWindowMode();
        if (iVar2 == 5) goto LAB_1002732a0;
      }
      if (2 < DAT_10230ffd0) {
        FUN_100df99c0("","prl_client_app",3,
                      "VM should be resumed to restore the previous state: %.8X",uVar3);
      }
      uVar7 = FUN_10018c280(uVar7);
      FUN_10031a440(uVar7,1);
      goto LAB_1002735a0;
    }
LAB_1002732a0:
    iVar6 = iVar6 + 1;
  } while( true );
}

