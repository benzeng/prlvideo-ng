
undefined8 FUN_1003f7310(long param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  QStringList *pQVar5;
  undefined1 local_90 [24];
  QVariant local_78;
  QArrayData *local_68;
  int *local_60 [4];
  QVariant local_40 [2];
  undefined1 local_21;
  
  cVar2 = QVariant::toBool();
  if (cVar2 != '\0') {
    return 0;
  }
  local_68 = (QArrayData *)
             QString::fromAscii_helper
                       ("1onDisableApplicationSharingQuestionClosed(PRL_RESULT, Messaging::ButtonID)"
                        ,0x4b);
  local_78.field0_0x0.field1_0x8.bitField0_30 = 0x80000000;
  local_78.field0_0x0.field0_0x0.field7 = 0;
  FUN_100a1c600(local_60,param_1,&local_68,&local_78);
  QVariant::~QVariant(&local_78);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003f73a5;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1003f73a5:
  uVar4 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
  FUN_10018f860(uVar4);
  EnumUtils::OsTypeToString((int)local_90 + 0x10);
  iVar3 = CMessageManager::instance();
  pQVar5 = (QStringList *)FUN_1003b0b20(*(undefined8 *)(param_1 + 0x18));
  puVar1 = PTR_shared_null_1021e15e8;
  local_90._8_8_ = PTR_shared_null_1021e15e8;
  FUN_1000341d0(local_90 + 8,local_90 + 0x10);
  local_90._0_8_ = puVar1;
  FUN_1000341d0(local_90,local_90 + 0x10);
  CMessageManager::showMessageBox
            (iVar3,(QWidget *)0x36e2,pQVar5,(QStringList *)(local_90 + 8),(CSlotInfo *)local_90,
             SUB81(local_60,0));
  FUN_100039a80(local_90);
  FUN_100039a80(local_90 + 8);
  if (*(int *)local_90._16_8_ != -1) {
    if (*(int *)local_90._16_8_ != 0) {
      LOCK();
      *(int *)local_90._16_8_ = *(int *)local_90._16_8_ + -1;
      local_21 = *(int *)local_90._16_8_ != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003f746f;
    }
    QArrayData::deallocate((QArrayData *)local_90._16_8_,2,8);
  }
LAB_1003f746f:
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

