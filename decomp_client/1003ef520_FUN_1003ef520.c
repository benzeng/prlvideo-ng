
undefined8 FUN_1003ef520(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  QStringList *pQVar6;
  undefined1 local_c8 [24];
  AnonymousUnion0 local_b0;
  QArrayData *local_a8;
  QVariant local_a0;
  QArrayData *local_90;
  QVariant local_88;
  Data_conflict local_78;
  undefined4 local_70;
  QArrayData *local_68;
  int *local_60 [4];
  QVariant local_40 [2];
  undefined1 local_21;
  
  cVar1 = QVariant::toBool();
  if (cVar1 == '\0') {
    return 0;
  }
  local_68 = (QArrayData *)
             QString::fromAscii_helper
                       ("1onSimpleQuestionClosed(PRL_RESULT,Messaging::ButtonID)",0x37);
  local_70 = 0x80000000;
  local_78.field7 = 0;
  FUN_100a1c600(local_60,param_1,&local_68,&local_78);
  QVariant::~QVariant((QVariant *)&local_78);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003ef5b5;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1003ef5b5:
  uVar5 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  local_90 = (QArrayData *)QString::fromAscii_helper("Settings.General.OsType",0x17);
  FUN_1003e1800(&local_88,uVar5,&local_90,0);
  uVar2 = QVariant::toUInt((bool *)&local_88);
  uVar5 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  local_a8 = (QArrayData *)QString::fromAscii_helper("Settings.General.OsNumber",0x19);
  FUN_1003e1800(&local_a0,uVar5,&local_a8,0);
  uVar3 = QVariant::toUInt((bool *)&local_a0);
  cVar1 = FUN_100110a50(uVar2,uVar3);
  QVariant::~QVariant(&local_a0);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_21 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003ef695;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1003ef695:
  QVariant::~QVariant(&local_88);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_21 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003ef6d4;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1003ef6d4:
  if (cVar1 == '\0') {
    iVar4 = CMessageManager::instance();
    pQVar6 = (QStringList *)FUN_1003b0b20(*(undefined8 *)(param_1 + 0x18));
    local_c8._8_8_ = PTR_shared_null_1021e15e8;
    local_c8._0_8_ = PTR_shared_null_1021e15e8;
    CMessageManager::showMessageBox
              (iVar4,(QWidget *)0x3b3d,pQVar6,(QStringList *)(local_c8 + 8),(CSlotInfo *)local_c8,
               SUB81(local_60,0));
    FUN_100039a80(local_c8);
    FUN_100039a80(local_c8 + 8);
  }
  else {
    iVar4 = CMessageManager::instance();
    pQVar6 = (QStringList *)FUN_1003b0b20(*(undefined8 *)(param_1 + 0x18));
    local_b0.field1 = (Data *)PTR_shared_null_1021e15e8;
    local_c8._16_8_ = PTR_shared_null_1021e15e8;
    CMessageManager::showMessageBox
              (iVar4,(QWidget *)0x3bd7,pQVar6,(QStringList *)&local_b0.field0,
               (CSlotInfo *)(local_c8 + 0x10),SUB81(local_60,0));
    FUN_100039a80(local_c8 + 0x10);
    FUN_100039a80(&local_b0);
  }
  QVariant::~QVariant(local_40);
  if (local_60[0] != (int *)0x0) {
    LOCK();
    *local_60[0] = *local_60[0] + -1;
    local_21 = *local_60[0] != 0;
    UNLOCK();
    if ((!(bool)local_21) && (local_60[0] != (int *)0x0)) {
      operator_delete(local_60[0]);
    }
  }
  return 1;
}

