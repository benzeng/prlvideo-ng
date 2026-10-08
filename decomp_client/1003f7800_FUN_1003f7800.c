
undefined8 FUN_1003f7800(long param_1)

{
  char cVar1;
  int iVar2;
  QStringList *pQVar3;
  undefined1 local_88 [40];
  int *local_60 [4];
  QVariant local_40 [2];
  undefined1 local_21;
  
  local_88._32_8_ =
       QString::fromAscii_helper("1onSimpleQuestionClosed( PRL_RESULT, Messaging::ButtonID )",0x3a);
  local_88._24_4_ = 0x80000000;
  local_88._16_8_ = (QMetaObject *)0x0;
  FUN_100a1c600(local_60,param_1,local_88 + 0x20,local_88 + 0x10);
  QVariant::~QVariant((QVariant *)(local_88 + 0x10));
  if (*(int *)local_88._32_8_ != -1) {
    if (*(int *)local_88._32_8_ != 0) {
      LOCK();
      *(int *)local_88._32_8_ = *(int *)local_88._32_8_ + -1;
      local_21 = *(int *)local_88._32_8_ != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003f7881;
    }
    QArrayData::deallocate((QArrayData *)local_88._32_8_,2,8);
  }
LAB_1003f7881:
  iVar2 = CMessageManager::instance();
  cVar1 = QVariant::toBool();
  pQVar3 = (QStringList *)FUN_1003b0b20(*(undefined8 *)(param_1 + 0x18));
  local_88._8_8_ = PTR_shared_null_1021e15e8;
  local_88._0_8_ = PTR_shared_null_1021e15e8;
  CMessageManager::showMessageBox
            (iVar2,(QWidget *)(ulong)((cVar1 == '\0') + 0x3c9b),pQVar3,(QStringList *)(local_88 + 8)
             ,(CSlotInfo *)local_88,SUB81(local_60,0));
  FUN_100039a80(local_88);
  FUN_100039a80(local_88 + 8);
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

