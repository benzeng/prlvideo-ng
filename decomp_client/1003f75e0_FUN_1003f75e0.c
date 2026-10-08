
undefined8 FUN_1003f75e0(long param_1)

{
  char cVar1;
  int iVar2;
  QStringList *pQVar3;
  undefined1 local_80 [40];
  int *local_58 [4];
  QVariant local_38 [2];
  undefined1 local_19;
  
  cVar1 = QVariant::toBool();
  if (cVar1 != '\0') {
    return 0;
  }
  local_80._32_8_ =
       QString::fromAscii_helper
                 ("1onDisableApplicationSharingQuestionClosed(PRL_RESULT, Messaging::ButtonID)",0x4b
                 );
  local_80._24_4_ = 0x80000000;
  local_80._16_8_ = (QMetaObject *)0x0;
  FUN_100a1c600(local_58,param_1,local_80 + 0x20,local_80 + 0x10);
  QVariant::~QVariant((QVariant *)(local_80 + 0x10));
  if (*(int *)local_80._32_8_ != -1) {
    if (*(int *)local_80._32_8_ != 0) {
      LOCK();
      *(int *)local_80._32_8_ = *(int *)local_80._32_8_ + -1;
      local_19 = *(int *)local_80._32_8_ != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003f7673;
    }
    QArrayData::deallocate((QArrayData *)local_80._32_8_,2,8);
  }
LAB_1003f7673:
  iVar2 = CMessageManager::instance();
  pQVar3 = (QStringList *)FUN_1003b0b20(*(undefined8 *)(param_1 + 0x18));
  local_80._8_8_ = PTR_shared_null_1021e15e8;
  local_80._0_8_ = PTR_shared_null_1021e15e8;
  CMessageManager::showMessageBox
            (iVar2,(QWidget *)0x36e3,pQVar3,(QStringList *)(local_80 + 8),(CSlotInfo *)local_80,
             SUB81(local_58,0));
  FUN_100039a80(local_80);
  FUN_100039a80(local_80 + 8);
  QVariant::~QVariant(local_38);
  if (local_58[0] != (int *)0x0) {
    LOCK();
    *local_58[0] = *local_58[0] + -1;
    local_19 = *local_58[0] != 0;
    UNLOCK();
    if ((!(bool)local_19) && (local_58[0] != (int *)0x0)) {
      operator_delete(local_58[0]);
    }
  }
  return 1;
}

