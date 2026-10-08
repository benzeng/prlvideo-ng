
void FUN_1002003f0(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  QStringList *pQVar3;
  undefined1 local_98 [40];
  QArrayData *local_70;
  int *local_68 [4];
  QVariant local_48 [2];
  undefined1 local_29;
  
  if (-1 < param_2) {
    if (*(long *)(param_1 + 0x28) == 0) {
      return;
    }
    if (*(int *)(*(long *)(param_1 + 0x28) + 4) == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x30) == 0) {
      return;
    }
    FUN_10018ff40();
    return;
  }
  FUN_10080da90(param_1,100);
  if (((*(long *)(param_1 + 0xa0) != 0) && (*(int *)(*(long *)(param_1 + 0xa0) + 4) != 0)) &&
     (*(long *)(param_1 + 0xa8) != 0)) {
    QWidget::hide();
  }
  local_70 = (QArrayData *)
             QString::fromAscii_helper
                       ("1onErrorMessageClosed(PRL_RESULT, Messaging::ButtonID, const QVariant&)",
                        0x47);
  QVariant::QVariant((QVariant *)(local_98 + 0x18),param_2);
  FUN_100a1c600(local_68,param_1,&local_70,local_98 + 0x18);
  QVariant::~QVariant((QVariant *)(local_98 + 0x18));
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002004e4;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1002004e4:
  iVar1 = CMessageManager::instance();
  uVar2 = FUN_100370280();
  if (((*(long *)(param_1 + 0x28) == 0) || (*(int *)(*(long *)(param_1 + 0x28) + 4) == 0)) ||
     (*(long *)(param_1 + 0x30) == 0)) {
    local_98._16_8_ = QString::fromAscii_helper("",0);
  }
  else {
    FUN_100188480(local_98 + 0x10);
  }
  pQVar3 = (QStringList *)FUN_1003704b0(uVar2,local_98 + 0x10,DAT_100e152b8);
  local_98._8_8_ = PTR_shared_null_1021e15e8;
  local_98._0_8_ = PTR_shared_null_1021e15e8;
  CMessageManager::showMessageBox
            (iVar1,(QWidget *)0x80015218,pQVar3,(QStringList *)(local_98 + 8),(CSlotInfo *)local_98,
             SUB81(local_68,0));
  FUN_100039a80(local_98);
  FUN_100039a80(local_98 + 8);
  if (*(int *)local_98._16_8_ != -1) {
    if (*(int *)local_98._16_8_ != 0) {
      LOCK();
      *(int *)local_98._16_8_ = *(int *)local_98._16_8_ + -1;
      local_29 = *(int *)local_98._16_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002005c6;
    }
    QArrayData::deallocate((QArrayData *)local_98._16_8_,2,8);
  }
LAB_1002005c6:
  QVariant::~QVariant(local_48);
  if (local_68[0] != (int *)0x0) {
    LOCK();
    *local_68[0] = *local_68[0] + -1;
    local_29 = *local_68[0] != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_68[0] != (int *)0x0)) {
      operator_delete(local_68[0]);
    }
  }
  return;
}

