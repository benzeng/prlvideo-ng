
void FUN_100cd8b80(long param_1)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  QVariant local_68;
  QArrayData *local_58;
  QVariant local_50;
  QVariant local_40;
  undefined1 local_29;
  
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("","hid",3,"[CMDFLT] Input source swith timeout");
  }
  QSettings::QSettings((QSettings *)&local_50,(QObject *)0x0);
  local_58 = (QArrayData *)QString::fromAscii_helper("HID Host Hook/DelayedCmd Timeout",0x20);
  QVariant::QVariant(&local_68,700);
  QSettings::value((QString *)&local_40,&local_50);
  uVar3 = QVariant::toUInt((bool *)&local_40);
  iVar2 = *(int *)(param_1 + 0x4c);
  QVariant::~QVariant(&local_40);
  QVariant::~QVariant(&local_68);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100cd8c57;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100cd8c57:
  QSettings::~QSettings((QSettings *)&local_50);
  FUN_100ddd900(*(undefined8 *)(param_1 + 0x58),0);
  uVar4 = FUN_100ddd920();
  if (((uVar4 < (long)iVar2 + (ulong)uVar3) && (*(long *)(param_1 + 0x28) != 0)) &&
     (*(long *)(param_1 + 0x30) != 0)) {
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("","hid",3,"[CMDFLT] Dispatch stored CMD press+release events");
    }
    lVar5 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      lVar5 = *(long *)(param_1 + 0x20);
    }
    plVar1 = (long *)(*(long *)(lVar5 + 0x390) + 0xf0);
    *plVar1 = *plVar1 + 1;
    FUN_100cdc6c0();
    lVar5 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      lVar5 = *(long *)(param_1 + 0x20);
    }
    plVar1 = (long *)(*(long *)(lVar5 + 0x390) + 0xf0);
    *plVar1 = *plVar1 + 1;
    FUN_100cdc6c0();
  }
  FUN_100cd8310(param_1,0);
  return;
}

