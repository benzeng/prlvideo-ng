
undefined8 FUN_1003f6810(long param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  QStringList *pQVar5;
  undefined1 local_d8 [40];
  int *local_b0 [4];
  QVariant local_90 [2];
  QArrayData *local_78;
  QString local_70;
  QVariant local_68;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QVariant local_40;
  QString local_30;
  undefined1 local_21;
  
  cVar2 = QVariant::toBool();
  if (cVar2 == '\0') {
    return 0;
  }
  MappingHelpers::getParentObjectPath(&local_30);
  uVar4 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  local_50 = (QArrayData *)QString::fromAscii_helper(".EmulatedType",0xd);
  local_48.field0_0x0 = local_30.field0_0x0;
  if (1 < *(int *)local_30.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + 1;
    local_21 = *(int *)local_30.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_48);
  FUN_1003e1800(&local_40,uVar4,&local_48,0);
  iVar3 = QVariant::toInt((bool *)&local_40);
  QVariant::~QVariant(&local_40);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_21 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003f68e1;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1003f68e1:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003f6911;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1003f6911:
  uVar4 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  local_78 = (QArrayData *)QString::fromAscii_helper(".UserFriendlyName",0x11);
  local_70.field0_0x0 = local_30.field0_0x0;
  if (1 < *(int *)local_30.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + 1;
    local_21 = *(int *)local_30.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_70);
  FUN_1003e1800(&local_68,uVar4,&local_70,0);
  QVariant::toString();
  QVariant::~QVariant(&local_68);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_21 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003f69b0;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_1003f69b0:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003f69e0;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1003f69e0:
  if (iVar3 == 1) {
    cVar2 = FUN_100da2a10(&local_58);
    bVar1 = false;
    if (cVar2 == '\0') goto LAB_1003f69f9;
  }
  else {
LAB_1003f69f9:
    local_d8._32_8_ =
         QString::fromAscii_helper
                   ("1onSimpleQuestionClosed( PRL_RESULT, Messaging::ButtonID )",0x3a);
    local_d8._24_4_ = 0x80000000;
    local_d8._16_8_ = (QMetaObject *)0x0;
    FUN_100a1c600(local_b0,param_1,local_d8 + 0x20,local_d8 + 0x10);
    QVariant::~QVariant((QVariant *)(local_d8 + 0x10));
    if (*(int *)local_d8._32_8_ != -1) {
      if (*(int *)local_d8._32_8_ != 0) {
        LOCK();
        *(int *)local_d8._32_8_ = *(int *)local_d8._32_8_ + -1;
        local_21 = *(int *)local_d8._32_8_ != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1003f6a85;
      }
      QArrayData::deallocate((QArrayData *)local_d8._32_8_,2,8);
    }
LAB_1003f6a85:
    iVar3 = CMessageManager::instance();
    pQVar5 = (QStringList *)FUN_1003b0b20(*(undefined8 *)(param_1 + 0x18));
    local_d8._8_8_ = PTR_shared_null_1021e15e8;
    local_d8._0_8_ = PTR_shared_null_1021e15e8;
    CMessageManager::showMessageBox
              (iVar3,(QWidget *)0x36e1,pQVar5,(QStringList *)(local_d8 + 8),(CSlotInfo *)local_d8,
               SUB81(local_b0,0));
    FUN_100039a80(local_d8);
    FUN_100039a80(local_d8 + 8);
    QVariant::~QVariant(local_90);
    if (local_b0[0] != (int *)0x0) {
      LOCK();
      *local_b0[0] = *local_b0[0] + -1;
      local_21 = *local_b0[0] != 0;
      UNLOCK();
      if ((!(bool)local_21) && (local_b0[0] != (int *)0x0)) {
        operator_delete(local_b0[0]);
      }
    }
    bVar1 = true;
  }
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003f6b5b;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1003f6b5b:
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) goto LAB_1003f6b8b;
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_1003f6b8b:
  if (!bVar1) {
    return 0;
  }
  return 1;
}

