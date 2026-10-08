
undefined8 FUN_1003ef9b0(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  QStringList *pQVar4;
  undefined1 local_b8 [40];
  int *local_90 [4];
  QVariant local_70 [2];
  QArrayData *local_58;
  QVariant local_50;
  QArrayData *local_40;
  QVariant local_38;
  undefined1 local_21;
  
  uVar3 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  local_40 = (QArrayData *)QString::fromAscii_helper("Settings.General.OsType",0x17);
  FUN_1003e1800(&local_38,uVar3,&local_40,0);
  iVar2 = QVariant::toUInt((bool *)&local_38);
  QVariant::~QVariant(&local_38);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003efa3c;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1003efa3c:
  if (iVar2 != 8) {
    return 0;
  }
  cVar1 = QVariant::toBool();
  if (cVar1 != '\0') {
    return 0;
  }
  uVar3 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  local_58 = (QArrayData *)
             QString::fromAscii_helper("Settings.Tools.SharedFolders.HostSharing.Enabled",0x30);
  FUN_1003e1800(&local_50,uVar3,&local_58,0);
  cVar1 = QVariant::toBool();
  QVariant::~QVariant(&local_50);
  if (*(int *)local_58 == -1) {
LAB_1003efac1:
    if (cVar1 == '\0') {
      return 0;
    }
  }
  else {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003efac1;
    }
    QArrayData::deallocate(local_58,2,8);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  local_b8._32_8_ =
       QString::fromAscii_helper("1onSimpleQuestionClosed(PRL_RESULT,Messaging::ButtonID)",0x37);
  local_b8._24_4_ = 0x80000000;
  local_b8._16_8_ = (QMetaObject *)0x0;
  FUN_100a1c600(local_90,param_1,local_b8 + 0x20,local_b8 + 0x10);
  QVariant::~QVariant((QVariant *)(local_b8 + 0x10));
  if (*(int *)local_b8._32_8_ != -1) {
    if (*(int *)local_b8._32_8_ != 0) {
      LOCK();
      *(int *)local_b8._32_8_ = *(int *)local_b8._32_8_ + -1;
      local_21 = *(int *)local_b8._32_8_ != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003efb75;
    }
    QArrayData::deallocate((QArrayData *)local_b8._32_8_,2,8);
  }
LAB_1003efb75:
  iVar2 = CMessageManager::instance();
  pQVar4 = (QStringList *)FUN_1003b0b20(*(undefined8 *)(param_1 + 0x18));
  local_b8._8_8_ = PTR_shared_null_1021e15e8;
  local_b8._0_8_ = PTR_shared_null_1021e15e8;
  CMessageManager::showMessageBox
            (iVar2,(QWidget *)0x36d4,pQVar4,(QStringList *)(local_b8 + 8),(CSlotInfo *)local_b8,
             SUB81(local_90,0));
  FUN_100039a80(local_b8);
  FUN_100039a80(local_b8 + 8);
  QVariant::~QVariant(local_70);
  if (local_90[0] != (int *)0x0) {
    LOCK();
    *local_90[0] = *local_90[0] + -1;
    local_21 = *local_90[0] != 0;
    UNLOCK();
    if ((!(bool)local_21) && (local_90[0] != (int *)0x0)) {
      operator_delete(local_90[0]);
    }
  }
  return 1;
}

