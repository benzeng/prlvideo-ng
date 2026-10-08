
void FUN_1005b16c0(long param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  QStringList *pQVar4;
  QArrayData *local_a0;
  char local_91;
  undefined1 local_90 [40];
  int *local_68 [4];
  QVariant local_48 [2];
  undefined1 local_29;
  
  if ((int)param_2 < 0) {
    local_90._32_8_ =
         QString::fromAscii_helper
                   ("1onRequestThirdPartyVmMessageClosed(PRL_RESULT,Messaging::ButtonID)",0x43);
    local_90._24_4_ = 0x80000000;
    local_90._16_8_ = (QMetaObject *)0x0;
    FUN_100a1c600(local_68,param_1,local_90 + 0x20,local_90 + 0x10);
    QVariant::~QVariant((QVariant *)(local_90 + 0x10));
    if (*(int *)local_90._32_8_ != -1) {
      if (*(int *)local_90._32_8_ != 0) {
        LOCK();
        *(int *)local_90._32_8_ = *(int *)local_90._32_8_ + -1;
        local_29 = *(int *)local_90._32_8_ != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005b1805;
      }
      QArrayData::deallocate((QArrayData *)local_90._32_8_,2,8);
    }
LAB_1005b1805:
    CAbstractWizardModel::wizardCtrl();
    lVar3 = CWizardController::parentWidget();
    pQVar4 = (QStringList *)0x0;
    if (lVar3 != 0) {
      CAbstractWizardModel::wizardCtrl();
      CWizardController::parentWidget();
      pQVar4 = (QStringList *)QWidget::window();
    }
    iVar1 = CMessageManager::instance();
    local_90._8_8_ = PTR_shared_null_1021e15e8;
    local_90._0_8_ = PTR_shared_null_1021e15e8;
    CMessageManager::showMessageBox
              (iVar1,(QWidget *)(ulong)param_2,pQVar4,(QStringList *)(local_90 + 8),
               (CSlotInfo *)local_90,SUB81(local_68,0));
    FUN_100039a80(local_90);
    FUN_100039a80(local_90 + 8);
    QVariant::~QVariant(local_48);
    if (local_68[0] == (int *)0x0) {
      return;
    }
    LOCK();
    *local_68[0] = *local_68[0] + -1;
    local_29 = *local_68[0] != 0;
    UNLOCK();
    if ((bool)local_29) {
      return;
    }
    if (local_68[0] == (int *)0x0) {
      return;
    }
    operator_delete(local_68[0]);
    return;
  }
  local_91 = '\0';
  CSdkRequest::getResultAsString((int)&local_a0);
  uVar2 = QString::toULongLong((bool *)&local_a0,(int)&local_91);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_29 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005b175f;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1005b175f:
  if (local_91 != '\0') {
    lVar3 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
    *(undefined8 *)(lVar3 + 0x188) = uVar2;
    CAbstractWizardModel::wizardCtrl();
    CWizardController::goNext();
  }
  return;
}

