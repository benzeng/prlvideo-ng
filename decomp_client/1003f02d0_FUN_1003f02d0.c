
undefined8 FUN_1003f02d0(long param_1)

{
  undefined *puVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  QStringList *pQVar7;
  undefined1 local_e8 [24];
  QArrayData *local_d0;
  QVariant local_c8;
  Data_conflict local_b8;
  undefined4 local_b0;
  QArrayData *local_a8;
  int *local_a0 [4];
  QVariant local_80 [2];
  QArrayData *local_68;
  QVariant local_60;
  QArrayData *local_50;
  QVariant local_48;
  undefined1 local_31;
  
  cVar2 = QVariant::toBool();
  if (cVar2 == '\0') {
    return 0;
  }
  uVar6 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  local_50 = (QArrayData *)
             QString::fromAscii_helper("Settings.Tools.SharedFolders.HostSharing.Enabled",0x30);
  FUN_1003e1800(&local_48,uVar6,&local_50,0);
  bVar3 = QVariant::toBool();
  QVariant::~QVariant(&local_48);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003f0372;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1003f0372:
  uVar6 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  local_68 = (QArrayData *)
             QString::fromAscii_helper
                       ("Settings.Tools.SharedFolders.HostSharing.ShareUserHomeDir",0x39);
  FUN_1003e1800(&local_60,uVar6,&local_68,0);
  bVar4 = QVariant::toBool();
  QVariant::~QVariant(&local_60);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003f03ea;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1003f03ea:
  if ((bVar4 & bVar3) != 0) {
    uVar6 = FUN_1003f9070(param_1);
    return uVar6;
  }
  local_a8 = (QArrayData *)
             QString::fromAscii_helper
                       ("1onHandleSharedProfileEnableChangeFinished(PRL_RESULT, Messaging::ButtonID)"
                        ,0x4b);
  local_b0 = 0x80000000;
  local_b8.field7 = 0;
  FUN_100a1c600(local_a0,param_1,&local_a8,&local_b8);
  QVariant::~QVariant((QVariant *)&local_b8);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003f048f;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1003f048f:
  uVar6 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  local_d0 = (QArrayData *)QString::fromAscii_helper("Settings.General.OsType",0x17);
  FUN_1003e1800(&local_c8,uVar6,&local_d0,0);
  QVariant::toUInt((bool *)&local_c8);
  QVariant::~QVariant(&local_c8);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003f051f;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1003f051f:
  iVar5 = CMessageManager::instance();
  pQVar7 = (QStringList *)FUN_1003b0b20(*(undefined8 *)(param_1 + 0x18));
  puVar1 = PTR_shared_null_1021e15e8;
  local_e8._16_8_ = PTR_shared_null_1021e15e8;
  EnumUtils::OsTypeToString((int)local_e8 + 8);
  FUN_1000341d0(local_e8 + 0x10,local_e8 + 8);
  local_e8._0_8_ = puVar1;
  CMessageManager::showMessageBox
            (iVar5,(QWidget *)0x36c3,pQVar7,(QStringList *)(local_e8 + 0x10),(CSlotInfo *)local_e8,
             SUB81(local_a0,0));
  FUN_100039a80(local_e8);
  if (*(int *)local_e8._8_8_ != -1) {
    if (*(int *)local_e8._8_8_ != 0) {
      LOCK();
      *(int *)local_e8._8_8_ = *(int *)local_e8._8_8_ + -1;
      local_31 = *(int *)local_e8._8_8_ != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003f05dc;
    }
    QArrayData::deallocate((QArrayData *)local_e8._8_8_,2,8);
  }
LAB_1003f05dc:
  FUN_100039a80(local_e8 + 0x10);
  QVariant::~QVariant(local_80);
  if (local_a0[0] != (int *)0x0) {
    LOCK();
    *local_a0[0] = *local_a0[0] + -1;
    local_31 = *local_a0[0] != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_a0[0] != (int *)0x0)) {
      operator_delete(local_a0[0]);
    }
  }
  return 1;
}

