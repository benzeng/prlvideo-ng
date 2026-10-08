
void FUN_1006034f0(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  QStringList *pQVar4;
  Data *pDVar5;
  QArrayData *pQVar6;
  QStringList *pQVar7;
  undefined1 local_90 [40];
  int *local_68 [4];
  QVariant local_48 [2];
  undefined1 local_29;
  
  CAbstractWizardActionHandler::wizardModel();
  CAbstractWizardModel::wizardCtrl();
  lVar3 = CWizardController::parentWidget();
  pQVar7 = (QStringList *)0x0;
  if (lVar3 != 0) {
    CAbstractWizardActionHandler::wizardModel();
    CAbstractWizardModel::wizardCtrl();
    CWizardController::parentWidget();
    pQVar4 = (QStringList *)QWidget::window();
    pQVar7 = (QStringList *)0x0;
    if ((pQVar4 != (QStringList *)0x0) &&
       (pQVar7 = (QStringList *)0x0, (*(byte *)((long)pQVar4[1].field0_0x0.field1 + 0x20) & 1) != 0)
       ) {
      pQVar7 = pQVar4;
    }
  }
  local_90._32_8_ =
       QString::fromAscii_helper("1onCloseWarningClosed(PRL_RESULT, Messaging::ButtonID)",0x36);
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
      if ((bool)local_29) goto LAB_1006035c7;
    }
    QArrayData::deallocate((QArrayData *)local_90._32_8_,2,8);
  }
LAB_1006035c7:
  iVar2 = CMessageManager::instance();
  local_90._8_8_ = PTR_shared_null_1021e15e8;
  local_90._0_8_ = PTR_shared_null_1021e15e8;
  CMessageManager::showMessageBox
            (iVar2,(QWidget *)0x36e5,pQVar7,(QStringList *)(local_90 + 8),(CSlotInfo *)local_90,
             SUB81(local_68,0));
  uVar1 = local_90._0_8_;
  if (*(int *)local_90._0_8_ != -1) {
    if (*(int *)local_90._0_8_ != 0) {
      LOCK();
      *(int *)local_90._0_8_ = *(int *)local_90._0_8_ + -1;
      local_29 = *(int *)local_90._0_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100603691;
    }
    iVar2 = *(int *)(local_90._0_8_ + 0xc);
    if (iVar2 != *(int *)(local_90._0_8_ + 8)) {
      lVar3 = (long)*(int *)(local_90._0_8_ + 8) * 8 + (long)iVar2 * -8;
      pDVar5 = (Data *)(local_90._0_8_ + (long)iVar2 * 8 + 8);
      do {
        pQVar6 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar6 == 0) {
LAB_100603670:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_29 = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar6 = *(QArrayData **)pDVar5;
            goto LAB_100603670;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose((Data *)uVar1);
  }
LAB_100603691:
  uVar1 = local_90._8_8_;
  if (*(int *)local_90._8_8_ != -1) {
    if (*(int *)local_90._8_8_ != 0) {
      LOCK();
      *(int *)local_90._8_8_ = *(int *)local_90._8_8_ + -1;
      local_29 = *(int *)local_90._8_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100603721;
    }
    iVar2 = *(int *)(local_90._8_8_ + 0xc);
    if (iVar2 != *(int *)(local_90._8_8_ + 8)) {
      lVar3 = (long)*(int *)(local_90._8_8_ + 8) * 8 + (long)iVar2 * -8;
      pDVar5 = (Data *)(local_90._8_8_ + (long)iVar2 * 8 + 8);
      do {
        pQVar6 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar6 == 0) {
LAB_100603700:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_29 = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar6 = *(QArrayData **)pDVar5;
            goto LAB_100603700;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose((Data *)uVar1);
  }
LAB_100603721:
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

