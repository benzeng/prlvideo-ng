
undefined8 FUN_1003eeae0(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  long *plVar7;
  size_t sVar8;
  undefined8 uVar9;
  QStringList *pQVar10;
  Data_conflict local_d8;
  undefined4 local_d0;
  QArrayData *local_c8;
  int *local_c0 [4];
  QVariant local_a0 [2];
  undefined1 local_88 [24];
  QArrayData *local_70;
  QVariant local_68;
  QArrayData *local_58;
  QArrayData *local_50;
  QVariant local_48;
  undefined1 local_31;
  
  plVar7 = (long *)FUN_1003b0ad0(*(undefined8 *)(param_1 + 0x18));
  puVar2 = PTR_s_VmConfig_1021f1e00;
  pcVar1 = *(code **)(*plVar7 + 0x60);
  iVar6 = -1;
  if (PTR_s_VmConfig_1021f1e00 != (undefined *)0x0) {
    sVar8 = _strlen(PTR_s_VmConfig_1021f1e00);
    iVar6 = (int)sVar8;
  }
  local_50 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar6);
  local_58 = (QArrayData *)QString::fromAscii_helper("Hardware.Video.UseHiResInGuest",0x1e);
  (*pcVar1)(&local_48,plVar7,&local_50,&local_58);
  bVar3 = QVariant::toBool();
  QVariant::~QVariant(&local_48);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003eeba1;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1003eeba1:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003eebd1;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1003eebd1:
  uVar9 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  local_70 = (QArrayData *)QString::fromAscii_helper("Hardware.Video.UseHiResInGuest",0x1e);
  FUN_1003e1800(&local_68,uVar9,&local_70,0);
  bVar4 = QVariant::toBool();
  QVariant::~QVariant(&local_68);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003eec48;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1003eec48:
  uVar9 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
  cVar5 = FUN_1001223d0(uVar9,bVar3 ^ bVar4);
  if (cVar5 == '\0') {
    return 0;
  }
  iVar6 = CMessageManager::instance();
  pQVar10 = (QStringList *)FUN_1003b0b20(*(undefined8 *)(param_1 + 0x18));
  puVar2 = PTR_shared_null_1021e15e8;
  local_88._16_8_ = PTR_shared_null_1021e15e8;
  uVar9 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
  FUN_10018f860(uVar9);
  EnumUtils::OsTypeToString((int)local_88 + 8);
  FUN_1000341d0(local_88 + 0x10,local_88 + 8);
  local_88._0_8_ = puVar2;
  local_c8 = (QArrayData *)
             QString::fromAscii_helper
                       ("1onGuestHiResOptionChangedQuestionClosed(PRL_RESULT, Messaging::ButtonID)",
                        0x49);
  local_d0 = 0x80000000;
  local_d8.field7 = 0;
  FUN_100a1c600(local_c0,param_1,&local_c8,&local_d8);
  CMessageManager::showMessageBox
            (iVar6,(QWidget *)0x3c7e,pQVar10,(QStringList *)(local_88 + 0x10),(CSlotInfo *)local_88,
             SUB81(local_c0,0));
  QVariant::~QVariant(local_a0);
  if (local_c0[0] != (int *)0x0) {
    LOCK();
    *local_c0[0] = *local_c0[0] + -1;
    local_31 = *local_c0[0] != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_c0[0] != (int *)0x0)) {
      operator_delete(local_c0[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_d8);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003eeda0;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_1003eeda0:
  FUN_100039a80(local_88);
  if (*(int *)local_88._8_8_ != -1) {
    if (*(int *)local_88._8_8_ != 0) {
      LOCK();
      *(int *)local_88._8_8_ = *(int *)local_88._8_8_ + -1;
      local_31 = *(int *)local_88._8_8_ != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003eedd9;
    }
    QArrayData::deallocate((QArrayData *)local_88._8_8_,2,8);
  }
LAB_1003eedd9:
  FUN_100039a80(local_88 + 0x10);
  return 1;
}

