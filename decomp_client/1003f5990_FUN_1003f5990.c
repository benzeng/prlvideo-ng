
undefined8 FUN_1003f5990(long param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  QStringList *pQVar5;
  undefined1 local_a8 [24];
  QVariant local_90;
  QArrayData *local_80;
  Data_conflict local_78;
  undefined4 local_70;
  QArrayData *local_68;
  int *local_60 [4];
  QVariant local_40 [2];
  undefined1 local_21;
  
  cVar2 = QVariant::toBool();
  if (cVar2 == '\0') {
    return 0;
  }
  uVar4 = FUN_1003b0b10(*(undefined8 *)(param_1 + 0x18));
  cVar2 = FUN_1003bec80(uVar4);
  if (cVar2 == '\0') {
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
      if ((bool)local_21) goto LAB_1003f5a3e;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1003f5a3e:
  uVar4 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  local_a8._16_8_ = QString::fromAscii_helper("Settings.General.OsType",0x17);
  FUN_1003e1800(local_a8 + 0x18,uVar4,local_a8 + 0x10,0);
  QVariant::toUInt((bool *)(local_a8 + 0x18));
  EnumUtils::OsTypeToString((uint)&local_80);
  QVariant::~QVariant((QVariant *)(local_a8 + 0x18));
  if (*(int *)local_a8._16_8_ != -1) {
    if (*(int *)local_a8._16_8_ != 0) {
      LOCK();
      *(int *)local_a8._16_8_ = *(int *)local_a8._16_8_ + -1;
      local_21 = *(int *)local_a8._16_8_ != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003f5ad5;
    }
    QArrayData::deallocate((QArrayData *)local_a8._16_8_,2,8);
  }
LAB_1003f5ad5:
  iVar3 = CMessageManager::instance();
  pQVar5 = (QStringList *)FUN_1003b0b20(*(undefined8 *)(param_1 + 0x18));
  puVar1 = PTR_shared_null_1021e15e8;
  local_a8._8_8_ = PTR_shared_null_1021e15e8;
  FUN_1000341d0(local_a8 + 8,&local_80);
  FUN_1000341d0(local_a8 + 8,&local_80);
  local_a8._0_8_ = puVar1;
  CMessageManager::showMessageBox
            (iVar3,(QWidget *)0x36d2,pQVar5,(QStringList *)(local_a8 + 8),(CSlotInfo *)local_a8,
             SUB81(local_60,0));
  FUN_100039a80(local_a8);
  FUN_100039a80(local_a8 + 8);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_21 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003f5b8f;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1003f5b8f:
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

