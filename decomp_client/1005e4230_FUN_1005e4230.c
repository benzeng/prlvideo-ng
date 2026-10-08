
void FUN_1005e4230(long param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  QStringList *pQVar7;
  Data *pDVar8;
  QArrayData *pQVar9;
  undefined1 local_c0 [24];
  QVariant local_a8;
  QArrayData *local_98;
  int *local_90 [4];
  QVariant local_70 [2];
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QVariant local_40;
  bool local_29;
  
  lVar4 = CDeclarativeWizardPage::pageContentItem();
  if (lVar4 != 0) {
    pcVar5 = (char *)CDeclarativeWizardPage::pageContentItem();
    uVar6 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x38);
    local_50 = (QArrayData *)QString::fromAscii_helper("os_win10",8);
    uVar6 = FUN_1005b8a40(uVar6,&local_50);
    uVar1 = FUN_100746a60(uVar6);
    FUN_100746110(&local_48,uVar1);
    QVariant::QVariant(&local_40,&local_48);
    QObject::setProperty(pcVar5,(QVariant *)"state");
    QVariant::~QVariant(&local_40);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_29 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if (local_29) goto LAB_1005e4303;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
LAB_1005e4303:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
        if (local_29) goto LAB_1005e4333;
      }
      QArrayData::deallocate(local_50,2,8);
    }
  }
LAB_1005e4333:
  if (param_2 != 0) {
    if (param_2 == 2) {
      FUN_1005e4a80(param_1);
      return;
    }
    if (param_2 != 3) {
      return;
    }
  }
  uVar6 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x38);
  local_58 = (QArrayData *)QString::fromAscii_helper("os_win10",8);
  uVar6 = FUN_1005b8a40(uVar6,&local_58);
  iVar2 = FUN_100746ad0(uVar6);
  if (iVar2 == -0x7ffffd8b) {
    if (*(int *)local_58 == -1) {
      return;
    }
    if (*(int *)local_58 == 0) goto LAB_1005e46fe;
    LOCK();
    *(int *)local_58 = *(int *)local_58 + -1;
    iVar2 = *(int *)local_58;
    UNLOCK();
  }
  else {
    lVar4 = CAbstractWizardPage::wizardModel();
    if (lVar4 != 0) {
      CAbstractWizardPage::wizardModel();
      iVar2 = CAbstractWizardModel::currentPageId();
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_29 = *(int *)local_58 != 0;
          UNLOCK();
          if (local_29) goto LAB_1005e440e;
        }
        QArrayData::deallocate(local_58,2,8);
      }
LAB_1005e440e:
      if (iVar2 != 0xb) {
        return;
      }
      uVar6 = CAbstractWizardPage::wizardCtrl();
      local_98 = (QArrayData *)QString::fromAscii_helper("1goBack()",9);
      local_a8.field0_0x0.field1_0x8.bitField0_30 = 0x80000000;
      local_a8.field0_0x0.field0_0x0.field7 = 0;
      FUN_100a1c600(local_90,uVar6,&local_98,&local_a8);
      QVariant::~QVariant(&local_a8);
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_29 = *(int *)local_98 != 0;
          UNLOCK();
          if (local_29) goto LAB_1005e44af;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_1005e44af:
      iVar2 = CMessageManager::instance();
      uVar6 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x38);
      local_c0._16_8_ = QString::fromAscii_helper("os_win10",8);
      uVar6 = FUN_1005b8a40(uVar6,local_c0 + 0x10);
      uVar3 = FUN_100746ad0(uVar6);
      CAbstractWizardPage::wizardCtrl();
      pQVar7 = (QStringList *)CWizardController::parentWidget();
      local_c0._8_8_ = PTR_shared_null_1021e15e8;
      local_c0._0_8_ = PTR_shared_null_1021e15e8;
      CMessageManager::showMessageBox
                (iVar2,(QWidget *)(ulong)uVar3,pQVar7,(QStringList *)(local_c0 + 8),
                 (CSlotInfo *)local_c0,SUB81(local_90,0));
      uVar6 = local_c0._0_8_;
      if (*(int *)local_c0._0_8_ != -1) {
        if (*(int *)local_c0._0_8_ != 0) {
          LOCK();
          *(int *)local_c0._0_8_ = *(int *)local_c0._0_8_ + -1;
          local_29 = *(int *)local_c0._0_8_ != 0;
          UNLOCK();
          if (local_29) goto LAB_1005e45e0;
        }
        iVar2 = *(int *)(local_c0._0_8_ + 0xc);
        if (iVar2 != *(int *)(local_c0._0_8_ + 8)) {
          lVar4 = (long)*(int *)(local_c0._0_8_ + 8) * 8 + (long)iVar2 * -8;
          pDVar8 = (Data *)(local_c0._0_8_ + (long)iVar2 * 8 + 8);
          do {
            pQVar9 = *(QArrayData **)pDVar8;
            if (*(int *)pQVar9 == 0) {
LAB_1005e45bf:
              QArrayData::deallocate(pQVar9,2,8);
            }
            else if (*(int *)pQVar9 != -1) {
              LOCK();
              *(int *)pQVar9 = *(int *)pQVar9 + -1;
              local_29 = *(int *)pQVar9 != 0;
              UNLOCK();
              if (!local_29) {
                pQVar9 = *(QArrayData **)pDVar8;
                goto LAB_1005e45bf;
              }
            }
            pDVar8 = pDVar8 + -8;
            lVar4 = lVar4 + 8;
          } while (lVar4 != 0);
        }
        QListData::dispose((Data *)uVar6);
      }
LAB_1005e45e0:
      uVar6 = local_c0._8_8_;
      if (*(int *)local_c0._8_8_ != -1) {
        if (*(int *)local_c0._8_8_ != 0) {
          LOCK();
          *(int *)local_c0._8_8_ = *(int *)local_c0._8_8_ + -1;
          local_29 = *(int *)local_c0._8_8_ != 0;
          UNLOCK();
          if (local_29) goto LAB_1005e4671;
        }
        iVar2 = *(int *)(local_c0._8_8_ + 0xc);
        if (iVar2 != *(int *)(local_c0._8_8_ + 8)) {
          lVar4 = (long)*(int *)(local_c0._8_8_ + 8) * 8 + (long)iVar2 * -8;
          pDVar8 = (Data *)(local_c0._8_8_ + (long)iVar2 * 8 + 8);
          do {
            pQVar9 = *(QArrayData **)pDVar8;
            if (*(int *)pQVar9 == 0) {
LAB_1005e4650:
              QArrayData::deallocate(pQVar9,2,8);
            }
            else if (*(int *)pQVar9 != -1) {
              LOCK();
              *(int *)pQVar9 = *(int *)pQVar9 + -1;
              local_29 = *(int *)pQVar9 != 0;
              UNLOCK();
              if (!local_29) {
                pQVar9 = *(QArrayData **)pDVar8;
                goto LAB_1005e4650;
              }
            }
            pDVar8 = pDVar8 + -8;
            lVar4 = lVar4 + 8;
          } while (lVar4 != 0);
        }
        QListData::dispose((Data *)uVar6);
      }
LAB_1005e4671:
      if (*(int *)local_c0._16_8_ != -1) {
        if (*(int *)local_c0._16_8_ != 0) {
          LOCK();
          *(int *)local_c0._16_8_ = *(int *)local_c0._16_8_ + -1;
          local_29 = *(int *)local_c0._16_8_ != 0;
          UNLOCK();
          if (local_29) goto LAB_1005e46a7;
        }
        QArrayData::deallocate((QArrayData *)local_c0._16_8_,2,8);
      }
LAB_1005e46a7:
      QVariant::~QVariant(local_70);
      if (local_90[0] == (int *)0x0) {
        return;
      }
      LOCK();
      *local_90[0] = *local_90[0] + -1;
      local_29 = *local_90[0] != 0;
      UNLOCK();
      if (local_29) {
        return;
      }
      if (local_90[0] == (int *)0x0) {
        return;
      }
      operator_delete(local_90[0]);
      return;
    }
    if (*(int *)local_58 == -1) {
      return;
    }
    if (*(int *)local_58 == 0) goto LAB_1005e46fe;
    LOCK();
    *(int *)local_58 = *(int *)local_58 + -1;
    iVar2 = *(int *)local_58;
    UNLOCK();
  }
  local_29 = iVar2 != 0;
  if (local_29) {
    return;
  }
LAB_1005e46fe:
  QArrayData::deallocate(local_58,2,8);
  return;
}

