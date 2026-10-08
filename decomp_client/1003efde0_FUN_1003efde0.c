
undefined8 FUN_1003efde0(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  QStringList *pQVar4;
  undefined1 local_d0 [40];
  int *local_a8 [4];
  QVariant local_88 [2];
  QArrayData *local_70;
  QVariant local_68;
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
      if ((bool)local_21) goto LAB_1003efe6c;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1003efe6c:
  if (iVar2 != 8) {
    return 0;
  }
  uVar3 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  local_58 = (QArrayData *)
             QString::fromAscii_helper("Settings.Tools.SharedFolders.HostSharing.Enabled",0x30);
  FUN_1003e1800(&local_50,uVar3,&local_58,0);
  cVar1 = QVariant::toBool();
  QVariant::~QVariant(&local_50);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003efeec;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1003efeec:
  if (cVar1 != '\0') {
    return 0;
  }
  uVar3 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  local_70 = (QArrayData *)
             QString::fromAscii_helper("Settings.Tools.SharedFolders.GuestSharing.Enabled",0x31);
  FUN_1003e1800(&local_68,uVar3,&local_70,0);
  cVar1 = QVariant::toBool();
  QVariant::~QVariant(&local_68);
  if (*(int *)local_70 == -1) {
LAB_1003eff63:
    if (cVar1 == '\0') {
      return 0;
    }
  }
  else {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003eff63;
    }
    QArrayData::deallocate(local_70,2,8);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  local_d0._32_8_ =
       QString::fromAscii_helper("1onSimpleQuestionClosed(PRL_RESULT,Messaging::ButtonID)",0x37);
  local_d0._24_4_ = 0x80000000;
  local_d0._16_8_ = (QMetaObject *)0x0;
  FUN_100a1c600(local_a8,param_1,local_d0 + 0x20,local_d0 + 0x10);
  QVariant::~QVariant((QVariant *)(local_d0 + 0x10));
  if (*(int *)local_d0._32_8_ != -1) {
    if (*(int *)local_d0._32_8_ != 0) {
      LOCK();
      *(int *)local_d0._32_8_ = *(int *)local_d0._32_8_ + -1;
      local_21 = *(int *)local_d0._32_8_ != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003f0017;
    }
    QArrayData::deallocate((QArrayData *)local_d0._32_8_,2,8);
  }
LAB_1003f0017:
  iVar2 = CMessageManager::instance();
  pQVar4 = (QStringList *)FUN_1003b0b20(*(undefined8 *)(param_1 + 0x18));
  local_d0._8_8_ = PTR_shared_null_1021e15e8;
  local_d0._0_8_ = PTR_shared_null_1021e15e8;
  CMessageManager::showMessageBox
            (iVar2,(QWidget *)0x36d4,pQVar4,(QStringList *)(local_d0 + 8),(CSlotInfo *)local_d0,
             SUB81(local_a8,0));
  FUN_100039a80(local_d0);
  FUN_100039a80(local_d0 + 8);
  QVariant::~QVariant(local_88);
  if (local_a8[0] != (int *)0x0) {
    LOCK();
    *local_a8[0] = *local_a8[0] + -1;
    local_21 = *local_a8[0] != 0;
    UNLOCK();
    if ((!(bool)local_21) && (local_a8[0] != (int *)0x0)) {
      operator_delete(local_a8[0]);
    }
  }
  return 1;
}

