
undefined8 FUN_1003ee860(long param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  QArrayData *local_68;
  QVariant local_60;
  QArrayData *local_50;
  QVariant local_48;
  undefined1 local_31;
  
  bVar1 = QVariant::toBool();
  lVar6 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
  if (lVar6 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Server instance is null.");
    return 0;
  }
  uVar7 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
  FUN_10015a340(uVar7);
  CHostHardwareInfoBase::getMemorySettings();
  uVar3 = CHwMemorySettings::getHostRamSize();
  uVar7 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  local_50 = (QArrayData *)QString::fromAscii_helper("Settings.General.OsType",0x17);
  FUN_1003e1800(&local_48,uVar7,&local_50,0);
  iVar4 = QVariant::toUInt((bool *)&local_48);
  QVariant::~QVariant(&local_48);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003ee930;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1003ee930:
  uVar7 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  local_68 = (QArrayData *)QString::fromAscii_helper("Settings.General.OsNumber",0x19);
  FUN_1003e1800(&local_60,uVar7,&local_68,0);
  uVar5 = QVariant::toUInt((bool *)&local_60);
  QVariant::~QVariant(&local_60);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003ee9ad;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1003ee9ad:
  if (iVar4 == 8) {
    uVar7 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
    bVar2 = FUN_10015ab00(uVar7);
    if ((bVar1 & 0x400 < uVar3 & bVar2) == 1) {
      if ((0x800 < uVar3) && (0x805 < uVar5)) {
        return 0;
      }
      uVar7 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
      uVar8 = FUN_1003b0a90(*(undefined8 *)(param_1 + 0x18));
      FUN_100177620(uVar7,uVar8);
      return 0;
    }
  }
  FUN_10010ec10(uVar3);
  return 0;
}

