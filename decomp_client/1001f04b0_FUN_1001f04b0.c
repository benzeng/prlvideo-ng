
undefined8 FUN_1001f04b0(long param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  QString *pQVar4;
  QStringList *pQVar5;
  Data *pDVar6;
  undefined8 uVar7;
  QArrayData *pQVar8;
  long lVar9;
  undefined1 local_b0 [24];
  undefined1 local_98 [40];
  int *local_70 [4];
  QVariant local_50 [2];
  QArrayData *local_38;
  undefined1 local_29;
  
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_10018c2b0(uVar7);
  uVar2 = CVmConfiguration::getValidRc();
  if ((uVar2 & 0xfffffffe) != 0x80000584) {
    uVar7 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x20);
    }
    cVar1 = FUN_10018ecf0(uVar7);
    if (cVar1 != '\0') {
      return 0;
    }
    CAbstractTask::appendSubTask((int)param_1);
    return 0;
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  if (((*(long *)(param_1 + 0x28) == 0) || (*(int *)(*(long *)(param_1 + 0x28) + 4) == 0)) ||
     (pQVar5 = *(QStringList **)(param_1 + 0x30), pQVar5 == (QStringList *)0x0)) {
    pQVar4 = (QString *)CSearchParentHelper::instance();
    uVar7 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_100188480(&local_38,uVar7);
    pQVar5 = (QStringList *)
             CSearchParentHelper::getParentForMessage(pQVar4,SUB81(&local_38,0),(QWidget *)0x0);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_29 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1001f0587;
      }
      QArrayData::deallocate(local_38,2,8);
    }
  }
LAB_1001f0587:
  local_98._32_8_ =
       QString::fromAscii_helper
                 ("1onInvalidOriginalVmQuestionMsgClosed( PRL_RESULT, Messaging::ButtonID )",0x48);
  local_98._24_4_ = 0x80000000;
  local_98._16_8_ = (QMetaObject *)0x0;
  FUN_100a1c600(local_70,param_1,local_98 + 0x20,local_98 + 0x10);
  QVariant::~QVariant((QVariant *)(local_98 + 0x10));
  if (*(int *)local_98._32_8_ != -1) {
    if (*(int *)local_98._32_8_ != 0) {
      LOCK();
      *(int *)local_98._32_8_ = *(int *)local_98._32_8_ + -1;
      local_29 = *(int *)local_98._32_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001f05f8;
    }
    QArrayData::deallocate((QArrayData *)local_98._32_8_,2,8);
  }
LAB_1001f05f8:
  if (uVar2 != 0x80000584) {
    if (uVar2 != 0x80000585) goto LAB_1001f0991;
    iVar3 = CMessageManager::instance();
    local_98._8_8_ = PTR_shared_null_1021e15e8;
    local_98._0_8_ = PTR_shared_null_1021e15e8;
    CMessageManager::showMessageBox
              (iVar3,(QWidget *)0x36df,pQVar5,(QStringList *)(local_98 + 8),(CSlotInfo *)local_98,
               SUB81(local_70,0));
    uVar7 = local_98._0_8_;
    if (*(int *)local_98._0_8_ != -1) {
      if (*(int *)local_98._0_8_ != 0) {
        LOCK();
        *(int *)local_98._0_8_ = *(int *)local_98._0_8_ + -1;
        local_29 = *(int *)local_98._0_8_ != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1001f0901;
      }
      iVar3 = *(int *)(local_98._0_8_ + 0xc);
      if (iVar3 != *(int *)(local_98._0_8_ + 8)) {
        lVar9 = (long)*(int *)(local_98._0_8_ + 8) * 8 + (long)iVar3 * -8;
        pDVar6 = (Data *)(local_98._0_8_ + (long)iVar3 * 8 + 8);
        do {
          pQVar8 = *(QArrayData **)pDVar6;
          if (*(int *)pQVar8 == 0) {
LAB_1001f08e0:
            QArrayData::deallocate(pQVar8,2,8);
          }
          else if (*(int *)pQVar8 != -1) {
            LOCK();
            *(int *)pQVar8 = *(int *)pQVar8 + -1;
            local_29 = *(int *)pQVar8 != 0;
            UNLOCK();
            if (!(bool)local_29) {
              pQVar8 = *(QArrayData **)pDVar6;
              goto LAB_1001f08e0;
            }
          }
          pDVar6 = pDVar6 + -8;
          lVar9 = lVar9 + 8;
        } while (lVar9 != 0);
      }
      QListData::dispose((Data *)uVar7);
    }
LAB_1001f0901:
    uVar7 = local_98._8_8_;
    if (*(int *)local_98._8_8_ != -1) {
      if (*(int *)local_98._8_8_ != 0) {
        LOCK();
        *(int *)local_98._8_8_ = *(int *)local_98._8_8_ + -1;
        local_29 = *(int *)local_98._8_8_ != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1001f0991;
      }
      iVar3 = *(int *)(local_98._8_8_ + 0xc);
      if (iVar3 != *(int *)(local_98._8_8_ + 8)) {
        lVar9 = (long)*(int *)(local_98._8_8_ + 8) * 8 + (long)iVar3 * -8;
        pDVar6 = (Data *)(local_98._8_8_ + (long)iVar3 * 8 + 8);
        do {
          pQVar8 = *(QArrayData **)pDVar6;
          if (*(int *)pQVar8 == 0) {
LAB_1001f0970:
            QArrayData::deallocate(pQVar8,2,8);
          }
          else if (*(int *)pQVar8 != -1) {
            LOCK();
            *(int *)pQVar8 = *(int *)pQVar8 + -1;
            local_29 = *(int *)pQVar8 != 0;
            UNLOCK();
            if (!(bool)local_29) {
              pQVar8 = *(QArrayData **)pDVar6;
              goto LAB_1001f0970;
            }
          }
          pDVar6 = pDVar6 + -8;
          lVar9 = lVar9 + 8;
        } while (lVar9 != 0);
      }
      QListData::dispose((Data *)uVar7);
    }
    goto LAB_1001f0991;
  }
  iVar3 = CMessageManager::instance();
  local_b0._0_8_ = PTR_shared_null_1021e15e8;
  local_b0._16_8_ = PTR_shared_null_1021e15e8;
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_10018d830(local_b0 + 8,uVar7);
  FUN_1000341d0(local_b0 + 0x10,local_b0 + 8);
  CMessageManager::showMessageBox
            (iVar3,(QWidget *)0x80015467,pQVar5,(QStringList *)(local_b0 + 0x10),
             (CSlotInfo *)local_b0,SUB81(local_70,0));
  uVar7 = local_b0._0_8_;
  if (*(int *)local_b0._0_8_ != -1) {
    if (*(int *)local_b0._0_8_ != 0) {
      LOCK();
      *(int *)local_b0._0_8_ = *(int *)local_b0._0_8_ + -1;
      local_29 = *(int *)local_b0._0_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001f0711;
    }
    iVar3 = *(int *)(local_b0._0_8_ + 0xc);
    if (iVar3 != *(int *)(local_b0._0_8_ + 8)) {
      lVar9 = (long)*(int *)(local_b0._0_8_ + 8) * 8 + (long)iVar3 * -8;
      pDVar6 = (Data *)(local_b0._0_8_ + (long)iVar3 * 8 + 8);
      do {
        pQVar8 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar8 == 0) {
LAB_1001f06f0:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_29 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar8 = *(QArrayData **)pDVar6;
            goto LAB_1001f06f0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose((Data *)uVar7);
  }
LAB_1001f0711:
  if (*(int *)local_b0._8_8_ != -1) {
    if (*(int *)local_b0._8_8_ != 0) {
      LOCK();
      *(int *)local_b0._8_8_ = *(int *)local_b0._8_8_ + -1;
      local_29 = *(int *)local_b0._8_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001f0747;
    }
    QArrayData::deallocate((QArrayData *)local_b0._8_8_,2,8);
  }
LAB_1001f0747:
  uVar7 = local_b0._16_8_;
  if (*(int *)local_b0._16_8_ != -1) {
    if (*(int *)local_b0._16_8_ != 0) {
      LOCK();
      *(int *)local_b0._16_8_ = *(int *)local_b0._16_8_ + -1;
      local_29 = *(int *)local_b0._16_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001f0991;
    }
    iVar3 = *(int *)(local_b0._16_8_ + 0xc);
    if (iVar3 != *(int *)(local_b0._16_8_ + 8)) {
      lVar9 = (long)*(int *)(local_b0._16_8_ + 8) * 8 + (long)iVar3 * -8;
      pDVar6 = (Data *)(local_b0._16_8_ + (long)iVar3 * 8 + 8);
      do {
        pQVar8 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar8 == 0) {
LAB_1001f07c0:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_29 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar8 = *(QArrayData **)pDVar6;
            goto LAB_1001f07c0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose((Data *)uVar7);
  }
LAB_1001f0991:
  QVariant::~QVariant(local_50);
  if (local_70[0] != (int *)0x0) {
    LOCK();
    *local_70[0] = *local_70[0] + -1;
    local_29 = *local_70[0] != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_70[0] != (int *)0x0)) {
      operator_delete(local_70[0]);
    }
  }
  return 0;
}

