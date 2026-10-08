
void FUN_1005b29e0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  QStringList *pQVar3;
  undefined1 local_80 [40];
  int *local_58 [4];
  QVariant local_38 [2];
  undefined1 local_19;
  
  local_80._32_8_ =
       QString::fromAscii_helper("1onRemoveVmAnswerReceived(PRL_RESULT,Messaging::ButtonID)",0x39);
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
      if ((bool)local_19) goto LAB_1005b2a5f;
    }
    QArrayData::deallocate((QArrayData *)local_80._32_8_,2,8);
  }
LAB_1005b2a5f:
  CAbstractWizardModel::wizardCtrl();
  lVar2 = CWizardController::parentWidget();
  pQVar3 = (QStringList *)0x0;
  if (lVar2 != 0) {
    CAbstractWizardModel::wizardCtrl();
    CWizardController::parentWidget();
    pQVar3 = (QStringList *)QWidget::window();
  }
  iVar1 = CMessageManager::instance();
  local_80._8_8_ = PTR_shared_null_1021e15e8;
  local_80._0_8_ = PTR_shared_null_1021e15e8;
  CMessageManager::showMessageBox
            (iVar1,(QWidget *)0x3bd5,pQVar3,(QStringList *)(local_80 + 8),(CSlotInfo *)local_80,
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
  return;
}

