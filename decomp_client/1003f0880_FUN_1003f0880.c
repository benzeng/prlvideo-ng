
undefined8 FUN_1003f0880(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  QStringList *pQVar4;
  QArrayData *local_b0;
  undefined1 local_a8 [40];
  int *local_80 [4];
  QVariant local_60 [2];
  QArrayData *local_48;
  QVariant local_40;
  undefined1 local_29;
  
  cVar1 = QVariant::toBool();
  if (cVar1 != '\0') {
    return 0;
  }
  uVar3 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  local_48 = (QArrayData *)QString::fromAscii_helper("Settings.Tools.SharedProfile.Enabled",0x24);
  FUN_1003e1800(&local_40,uVar3,&local_48,0);
  cVar1 = QVariant::toBool();
  QVariant::~QVariant(&local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003f0923;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1003f0923:
  if (cVar1 == '\0') {
    return 0;
  }
  local_a8._32_8_ =
       QString::fromAscii_helper("1onSimpleQuestionClosed(PRL_RESULT,Messaging::ButtonID)",0x37);
  local_a8._24_4_ = 0x80000000;
  local_a8._16_8_ = (QMetaObject *)0x0;
  FUN_100a1c600(local_80,param_1,local_a8 + 0x20,local_a8 + 0x10);
  QVariant::~QVariant((QVariant *)(local_a8 + 0x10));
  if (*(int *)local_a8._32_8_ != -1) {
    if (*(int *)local_a8._32_8_ != 0) {
      LOCK();
      *(int *)local_a8._32_8_ = *(int *)local_a8._32_8_ + -1;
      local_29 = *(int *)local_a8._32_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003f09a9;
    }
    QArrayData::deallocate((QArrayData *)local_a8._32_8_,2,8);
  }
LAB_1003f09a9:
  iVar2 = CMessageManager::instance();
  pQVar4 = (QStringList *)FUN_1003b0b20(*(undefined8 *)(param_1 + 0x18));
  local_a8._8_8_ = PTR_shared_null_1021e15e8;
  local_a8._0_8_ = PTR_shared_null_1021e15e8;
  uVar3 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
  FUN_10018f860(uVar3);
  EnumUtils::OsTypeToString((uint)&local_b0);
  FUN_1000341d0(local_a8,&local_b0);
  CMessageManager::showMessageBox
            (iVar2,(QWidget *)0x36c2,pQVar4,(QStringList *)(local_a8 + 8),(CSlotInfo *)local_a8,
             SUB81(local_80,0));
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_29 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003f0a68;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1003f0a68:
  FUN_100039a80(local_a8);
  FUN_100039a80(local_a8 + 8);
  QVariant::~QVariant(local_60);
  if (local_80[0] != (int *)0x0) {
    LOCK();
    *local_80[0] = *local_80[0] + -1;
    local_29 = *local_80[0] != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_80[0] != (int *)0x0)) {
      operator_delete(local_80[0]);
    }
  }
  return 1;
}

