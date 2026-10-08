
undefined8 FUN_100cdab80(long *param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  bool bVar7;
  QVariant local_d8;
  QArrayData *local_c8;
  QVariant local_c0;
  undefined1 local_b0;
  undefined1 local_af;
  uint local_ae;
  QVariant local_88;
  QArrayData *local_78;
  QVariant local_70;
  QVariant local_60;
  QArrayData *local_50;
  QVariant local_48;
  QVariant local_38;
  undefined1 local_21;
  
  QSettings::QSettings((QSettings *)&local_38,(QObject *)0x0);
  local_50 = (QArrayData *)QString::fromAscii_helper("HID Host Hook/CAPSLOCK Sync",0x1b);
  QVariant::QVariant(&local_60,true);
  QSettings::value((QString *)&local_48,&local_38);
  cVar1 = QVariant::toBool();
  if (cVar1 == '\0') {
    bVar7 = false;
  }
  else {
    bVar7 = *(int *)((long)param_1 + 0x34) != 2;
  }
  *(bool *)(param_1 + 0x90) = bVar7;
  QVariant::~QVariant(&local_48);
  QVariant::~QVariant(&local_60);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cdac38;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100cdac38:
  *(undefined1 *)((long)param_1 + 0x44c) = 0;
  FUN_100cd9d90(param_1);
  local_78 = (QArrayData *)QString::fromAscii_helper("HID Host Hook/NumLock",0x15);
  QVariant::QVariant(&local_88,1);
  QSettings::value((QString *)&local_70,&local_38);
  uVar2 = QVariant::toInt((bool *)&local_70);
  *(undefined4 *)(param_1 + 0xa1) = uVar2;
  QVariant::~QVariant(&local_70);
  QVariant::~QVariant(&local_88);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cdacd4;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100cdacd4:
  if (((char)param_1[6] == '\0') || (cVar1 = FUN_100cd9c80(param_1), cVar1 == '\0')) {
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("","hid",2,"[HIDMacHook] Grab keyboard in pure qt-mode");
    }
  }
  else {
    local_af = 0;
    local_ae = (uint)*(byte *)(param_1 + 6);
    if ((char)param_1[0x90] != '\0') {
      local_ae = local_ae | 2;
    }
    cVar1 = FUN_100cd90a0(&local_b0);
    if (cVar1 == '\0') {
      if (1 < DAT_10230ffd0) {
        FUN_100df99c0("","hid",2,
                      "[HIDMacHook] Grab keyboard in remote mode failed. Switched to pure qt-mode");
      }
    }
    else {
      if (DAT_102311940 != 0) {
        QMutex::lock();
        *(code **)(DAT_102311940 + 0x58) = FUN_100cdb190;
        *(long **)(DAT_102311940 + 0x50) = param_1;
        QMutex::unlock();
      }
      if (1 < DAT_10230ffd0) {
        FUN_100df99c0("","hid",2,"[HIDMacHook] Grab keyboard in remote hook mode");
      }
    }
  }
  if (((char)param_1[0x90] == '\0') || ((*(byte *)(param_1 + 0x89) & 4) != 0)) {
    uVar3 = _CGEventSourceFlagsState(0);
    *(uint *)(param_1 + 0x7f) = uVar3 & 0x10000 | *(uint *)(param_1 + 0x7f) & 0xfffeffff;
  }
  ___bzero(param_1 + 7,0x304);
  if ((char)param_1[6] == '\0') {
    FUN_100cdb2a0(param_1);
  }
  else {
    lVar4 = _PushSymbolicHotKeyMode(1);
    param_1[0x81] = lVar4;
  }
  local_c8 = (QArrayData *)QString::fromAscii_helper("HID Host Hook/LED Sync",0x16);
  iVar6 = 1;
  if ((*(uint *)(param_1 + 0x76) & 0xffffff00) == 0x700) {
    if ((char)param_1[0x90] == '\0') {
      bVar7 = false;
    }
    else {
      bVar7 = (*(byte *)(param_1 + 0x89) & 4) == 0;
    }
    iVar6 = (uint)bVar7 + (uint)bVar7 * 2;
  }
  QVariant::QVariant(&local_d8,iVar6);
  QSettings::value((QString *)&local_c0,&local_38);
  uVar3 = QVariant::toUInt((bool *)&local_c0);
  QVariant::~QVariant(&local_c0);
  QVariant::~QVariant(&local_d8);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_21 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cdaf31;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_100cdaf31:
  if (uVar3 < 4) {
    param_1[0x80] = 0;
    if (uVar3 != 0) {
      uVar2 = *(undefined4 *)(&DAT_101daf290 + (ulong)uVar3 * 4);
      if (1 < DAT_10230ffd0) {
        uVar5 = FUN_100cdf380(uVar2);
        FUN_100df99c0("","hid",2,"[HIDMacHook] Sync LEDs by %s",uVar5);
      }
      (**(code **)(*param_1 + 200))(param_1,uVar2,1);
      (**(code **)(*param_1 + 200))(param_1,uVar2,0);
      (**(code **)(*param_1 + 200))(param_1,uVar2,1);
      (**(code **)(*param_1 + 200))(param_1,uVar2,0);
    }
  }
  else {
    if (0 < DAT_10230ffd0) {
      FUN_100df99c0("","hid",1,"[HIDMacHook] Invalid sync LEDs option value");
    }
    param_1[0x80] = 0;
  }
  *(undefined4 *)(param_1 + 0x89) = 0;
  *(undefined1 *)((long)param_1 + 0x44c) = 1;
  QSettings::~QSettings((QSettings *)&local_38);
  return 1;
}

