
undefined1 FUN_1006ef2a0(long param_1)

{
  QStringList *pQVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  Data *pDVar5;
  QArrayData *pQVar6;
  long lVar7;
  undefined1 local_f8 [40];
  int *local_d0 [4];
  QVariant local_b0 [2];
  QArrayData *local_98;
  undefined1 local_90 [40];
  int *local_68 [4];
  QVariant local_48 [2];
  undefined1 local_29;
  
  if (*(int *)(param_1 + 0x150) != 3) {
    iVar4 = QDialog::result();
    if (iVar4 != 0) {
      return 0;
    }
    cVar3 = FUN_10073dd70(param_1 + 0xd0);
    if (cVar3 == '\0') {
      return 0;
    }
    CProductUpdateInfo::getMajorVersion();
    local_f8._32_8_ =
         QString::fromAscii_helper
                   ("1onCloseConfirmationAnswered(PRL_RESULT, Messaging::ButtonID)",0x3d);
    local_f8._24_4_ = 0x80000000;
    local_f8._16_8_ = (QMetaObject *)0x0;
    FUN_100a1c600(local_d0,param_1,local_f8 + 0x20,local_f8 + 0x10);
    QVariant::~QVariant((QVariant *)(local_f8 + 0x10));
    if (*(int *)local_f8._32_8_ != -1) {
      if (*(int *)local_f8._32_8_ != 0) {
        LOCK();
        *(int *)local_f8._32_8_ = *(int *)local_f8._32_8_ + -1;
        local_29 = *(int *)local_f8._32_8_ != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1006ef58d;
      }
      QArrayData::deallocate((QArrayData *)local_f8._32_8_,2,8);
    }
LAB_1006ef58d:
    iVar4 = CMessageManager::instance();
    pQVar1 = *(QStringList **)(param_1 + 0x10);
    local_f8._8_8_ = PTR_shared_null_1021e15e8;
    local_f8._0_8_ = PTR_shared_null_1021e15e8;
    FUN_1000341d0(local_f8,&local_98);
    CMessageManager::showMessageBox
              (iVar4,(QWidget *)0x3c02,pQVar1,(QStringList *)(local_f8 + 8),(CSlotInfo *)local_f8,
               SUB81(local_d0,0));
    uVar2 = local_f8._0_8_;
    if (*(int *)local_f8._0_8_ != -1) {
      if (*(int *)local_f8._0_8_ != 0) {
        LOCK();
        *(int *)local_f8._0_8_ = *(int *)local_f8._0_8_ + -1;
        local_29 = *(int *)local_f8._0_8_ != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1006ef680;
      }
      iVar4 = *(int *)(local_f8._0_8_ + 0xc);
      if (iVar4 != *(int *)(local_f8._0_8_ + 8)) {
        lVar7 = (long)*(int *)(local_f8._0_8_ + 8) * 8 + (long)iVar4 * -8;
        pDVar5 = (Data *)(local_f8._0_8_ + (long)iVar4 * 8 + 8);
        do {
          pQVar6 = *(QArrayData **)pDVar5;
          if (*(int *)pQVar6 == 0) {
LAB_1006ef65f:
            QArrayData::deallocate(pQVar6,2,8);
          }
          else if (*(int *)pQVar6 != -1) {
            LOCK();
            *(int *)pQVar6 = *(int *)pQVar6 + -1;
            local_29 = *(int *)pQVar6 != 0;
            UNLOCK();
            if (!(bool)local_29) {
              pQVar6 = *(QArrayData **)pDVar5;
              goto LAB_1006ef65f;
            }
          }
          pDVar5 = pDVar5 + -8;
          lVar7 = lVar7 + 8;
        } while (lVar7 != 0);
      }
      QListData::dispose((Data *)uVar2);
    }
LAB_1006ef680:
    uVar2 = local_f8._8_8_;
    if (*(int *)local_f8._8_8_ != -1) {
      if (*(int *)local_f8._8_8_ != 0) {
        LOCK();
        *(int *)local_f8._8_8_ = *(int *)local_f8._8_8_ + -1;
        local_29 = *(int *)local_f8._8_8_ != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1006ef711;
      }
      iVar4 = *(int *)(local_f8._8_8_ + 0xc);
      if (iVar4 != *(int *)(local_f8._8_8_ + 8)) {
        lVar7 = (long)*(int *)(local_f8._8_8_ + 8) * 8 + (long)iVar4 * -8;
        pDVar5 = (Data *)(local_f8._8_8_ + (long)iVar4 * 8 + 8);
        do {
          pQVar6 = *(QArrayData **)pDVar5;
          if (*(int *)pQVar6 == 0) {
LAB_1006ef6f0:
            QArrayData::deallocate(pQVar6,2,8);
          }
          else if (*(int *)pQVar6 != -1) {
            LOCK();
            *(int *)pQVar6 = *(int *)pQVar6 + -1;
            local_29 = *(int *)pQVar6 != 0;
            UNLOCK();
            if (!(bool)local_29) {
              pQVar6 = *(QArrayData **)pDVar5;
              goto LAB_1006ef6f0;
            }
          }
          pDVar5 = pDVar5 + -8;
          lVar7 = lVar7 + 8;
        } while (lVar7 != 0);
      }
      QListData::dispose((Data *)uVar2);
    }
LAB_1006ef711:
    QVariant::~QVariant(local_b0);
    if (local_d0[0] != (int *)0x0) {
      LOCK();
      *local_d0[0] = *local_d0[0] + -1;
      local_29 = *local_d0[0] != 0;
      UNLOCK();
      if ((!(bool)local_29) && (local_d0[0] != (int *)0x0)) {
        operator_delete(local_d0[0]);
      }
    }
    if (*(int *)local_98 == -1) {
      return 1;
    }
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      UNLOCK();
      if (*(int *)local_98 != 0) {
        return 1;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_98,2,8);
    return 1;
  }
  local_90._32_8_ =
       QString::fromAscii_helper
                 ("1onCloseWhileProcessingPurchaseAnswered(PRL_RESULT, Messaging::ButtonID)",0x48);
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
      if ((bool)local_29) goto LAB_1006ef333;
    }
    QArrayData::deallocate((QArrayData *)local_90._32_8_,2,8);
  }
LAB_1006ef333:
  iVar4 = CMessageManager::instance();
  local_90._8_8_ = PTR_shared_null_1021e15e8;
  local_90._0_8_ = PTR_shared_null_1021e15e8;
  CMessageManager::showMessageBox
            (iVar4,(QWidget *)0x3c03,*(QStringList **)(param_1 + 0x10),(QStringList *)(local_90 + 8)
             ,(CSlotInfo *)local_90,SUB81(local_68,0));
  uVar2 = local_90._0_8_;
  if (*(int *)local_90._0_8_ != -1) {
    if (*(int *)local_90._0_8_ != 0) {
      LOCK();
      *(int *)local_90._0_8_ = *(int *)local_90._0_8_ + -1;
      local_29 = *(int *)local_90._0_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006ef401;
    }
    iVar4 = *(int *)(local_90._0_8_ + 0xc);
    if (iVar4 != *(int *)(local_90._0_8_ + 8)) {
      lVar7 = (long)*(int *)(local_90._0_8_ + 8) * 8 + (long)iVar4 * -8;
      pDVar5 = (Data *)(local_90._0_8_ + (long)iVar4 * 8 + 8);
      do {
        pQVar6 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar6 == 0) {
LAB_1006ef3e0:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_29 = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar6 = *(QArrayData **)pDVar5;
            goto LAB_1006ef3e0;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose((Data *)uVar2);
  }
LAB_1006ef401:
  uVar2 = local_90._8_8_;
  if (*(int *)local_90._8_8_ != -1) {
    if (*(int *)local_90._8_8_ != 0) {
      LOCK();
      *(int *)local_90._8_8_ = *(int *)local_90._8_8_ + -1;
      local_29 = *(int *)local_90._8_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006ef491;
    }
    iVar4 = *(int *)(local_90._8_8_ + 0xc);
    if (iVar4 != *(int *)(local_90._8_8_ + 8)) {
      lVar7 = (long)*(int *)(local_90._8_8_ + 8) * 8 + (long)iVar4 * -8;
      pDVar5 = (Data *)(local_90._8_8_ + (long)iVar4 * 8 + 8);
      do {
        pQVar6 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar6 == 0) {
LAB_1006ef470:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_29 = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar6 = *(QArrayData **)pDVar5;
            goto LAB_1006ef470;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose((Data *)uVar2);
  }
LAB_1006ef491:
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
  return 1;
}

