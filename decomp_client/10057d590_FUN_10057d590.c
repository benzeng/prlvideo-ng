
void FUN_10057d590(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  Data *pDVar6;
  long lVar7;
  long lVar8;
  Data *pDVar9;
  QArrayData *pQVar10;
  undefined1 local_b8 [40];
  int *local_90 [4];
  QVariant local_70 [2];
  Data *local_58;
  QArrayData *local_50;
  Data *local_48;
  QVariant local_40;
  undefined1 local_29;
  
  QTreeWidget::selectedItems();
  pDVar9 = local_48;
  uVar1 = *(uint *)(local_48 + 8);
  if (*(uint *)(local_48 + 0xc) == uVar1) goto LAB_10057d971;
  if (1 < *(uint *)local_48) {
    pDVar6 = (Data *)QListData::detach((int)&local_48);
    lVar7 = (long)(int)*(uint *)(local_48 + 8);
    if ((pDVar9 + (long)(int)uVar1 * 8 + 0x10 != local_48 + lVar7 * 8 + 0x10) &&
       (lVar8 = (int)*(uint *)(local_48 + 0xc) - lVar7,
       lVar8 != 0 && lVar7 <= (int)*(uint *)(local_48 + 0xc))) {
      _memcpy(local_48 + lVar7 * 8 + 0x10,pDVar9 + (long)(int)uVar1 * 8 + 0x10,lVar8 * 8);
    }
    if (*(int *)pDVar6 != -1) {
      if (*(int *)pDVar6 != 0) {
        LOCK();
        *(int *)pDVar6 = *(int *)pDVar6 + -1;
        local_29 = *(int *)pDVar6 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10057d628;
      }
      QListData::dispose(pDVar6);
    }
  }
LAB_10057d628:
  (**(code **)(**(long **)(local_48 + (long)(int)*(uint *)(local_48 + 8) * 8 + 0x10) + 0x18))
            (&local_40,*(long **)(local_48 + (long)(int)*(uint *)(local_48 + 8) * 8 + 0x10),0);
  QVariant::toString();
  QVariant::~QVariant(&local_40);
  puVar2 = PTR_shared_null_1021e15e8;
  local_58 = (Data *)PTR_shared_null_1021e15e8;
  cVar4 = FUN_100719f40(&local_50,&local_58);
  if (cVar4 == '\0') {
    FUN_10057dd40(param_1,&local_50);
  }
  else {
    local_b8._32_8_ =
         QString::fromAscii_helper
                   ("1onRemoveProfileAnswered(PRL_RESULT, Messaging::ButtonID, const QVariant&)",
                    0x4a);
    QVariant::QVariant((QVariant *)(local_b8 + 0x10),10,&local_50,0);
    FUN_100a1c600(local_90,param_1,local_b8 + 0x20,local_b8 + 0x10);
    QVariant::~QVariant((QVariant *)(local_b8 + 0x10));
    if (*(int *)local_b8._32_8_ != -1) {
      if (*(int *)local_b8._32_8_ != 0) {
        LOCK();
        *(int *)local_b8._32_8_ = *(int *)local_b8._32_8_ + -1;
        local_29 = *(int *)local_b8._32_8_ != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10057d70a;
      }
      QArrayData::deallocate((QArrayData *)local_b8._32_8_,2,8);
    }
LAB_10057d70a:
    iVar5 = CMessageManager::instance();
    local_b8._8_8_ = puVar2;
    local_b8._0_8_ = puVar2;
    CMessageManager::showMessageBox
              (iVar5,(QWidget *)0x3b93,*(QStringList **)(param_1 + 0x10),
               (QStringList *)(local_b8 + 8),(CSlotInfo *)local_b8,SUB81(local_90,0));
    uVar3 = local_b8._0_8_;
    if (*(int *)local_b8._0_8_ != -1) {
      if (*(int *)local_b8._0_8_ != 0) {
        LOCK();
        *(int *)local_b8._0_8_ = *(int *)local_b8._0_8_ + -1;
        local_29 = *(int *)local_b8._0_8_ != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10057d7e1;
      }
      iVar5 = *(int *)(local_b8._0_8_ + 0xc);
      if (iVar5 != *(int *)(local_b8._0_8_ + 8)) {
        lVar7 = (long)*(int *)(local_b8._0_8_ + 8) * 8 + (long)iVar5 * -8;
        pDVar9 = (Data *)(local_b8._0_8_ + (long)iVar5 * 8 + 8);
        do {
          pQVar10 = *(QArrayData **)pDVar9;
          if (*(int *)pQVar10 == 0) {
LAB_10057d7c0:
            QArrayData::deallocate(pQVar10,2,8);
          }
          else if (*(int *)pQVar10 != -1) {
            LOCK();
            *(int *)pQVar10 = *(int *)pQVar10 + -1;
            local_29 = *(int *)pQVar10 != 0;
            UNLOCK();
            if (!(bool)local_29) {
              pQVar10 = *(QArrayData **)pDVar9;
              goto LAB_10057d7c0;
            }
          }
          pDVar9 = pDVar9 + -8;
          lVar7 = lVar7 + 8;
        } while (lVar7 != 0);
      }
      QListData::dispose((Data *)uVar3);
    }
LAB_10057d7e1:
    uVar3 = local_b8._8_8_;
    if (*(int *)local_b8._8_8_ != -1) {
      if (*(int *)local_b8._8_8_ != 0) {
        LOCK();
        *(int *)local_b8._8_8_ = *(int *)local_b8._8_8_ + -1;
        local_29 = *(int *)local_b8._8_8_ != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10057d871;
      }
      iVar5 = *(int *)(local_b8._8_8_ + 0xc);
      if (iVar5 != *(int *)(local_b8._8_8_ + 8)) {
        lVar7 = (long)*(int *)(local_b8._8_8_ + 8) * 8 + (long)iVar5 * -8;
        pDVar9 = (Data *)(local_b8._8_8_ + (long)iVar5 * 8 + 8);
        do {
          pQVar10 = *(QArrayData **)pDVar9;
          if (*(int *)pQVar10 == 0) {
LAB_10057d850:
            QArrayData::deallocate(pQVar10,2,8);
          }
          else if (*(int *)pQVar10 != -1) {
            LOCK();
            *(int *)pQVar10 = *(int *)pQVar10 + -1;
            local_29 = *(int *)pQVar10 != 0;
            UNLOCK();
            if (!(bool)local_29) {
              pQVar10 = *(QArrayData **)pDVar9;
              goto LAB_10057d850;
            }
          }
          pDVar9 = pDVar9 + -8;
          lVar7 = lVar7 + 8;
        } while (lVar7 != 0);
      }
      QListData::dispose((Data *)uVar3);
    }
LAB_10057d871:
    QVariant::~QVariant(local_70);
    if (local_90[0] != (int *)0x0) {
      LOCK();
      *local_90[0] = *local_90[0] + -1;
      local_29 = *local_90[0] != 0;
      UNLOCK();
      if ((!(bool)local_29) && (local_90[0] != (int *)0x0)) {
        operator_delete(local_90[0]);
      }
    }
  }
  pDVar9 = local_58;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10057d941;
    }
    iVar5 = *(int *)(local_58 + 0xc);
    if (iVar5 != *(int *)(local_58 + 8)) {
      lVar7 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar5 * -8;
      pDVar6 = local_58 + (long)iVar5 * 8 + 8;
      do {
        pQVar10 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar10 == 0) {
LAB_10057d920:
          QArrayData::deallocate(pQVar10,2,8);
        }
        else if (*(int *)pQVar10 != -1) {
          LOCK();
          *(int *)pQVar10 = *(int *)pQVar10 + -1;
          local_29 = *(int *)pQVar10 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar10 = *(QArrayData **)pDVar6;
            goto LAB_10057d920;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose(pDVar9);
  }
LAB_10057d941:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10057d971;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10057d971:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return;
      }
      local_29 = 0;
    }
    QListData::dispose(local_48);
  }
  return;
}

