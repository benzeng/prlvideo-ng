
undefined1 FUN_1006f3f70(long param_1)

{
  QStringList *pQVar1;
  int *piVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  Data *pDVar6;
  QArrayData *pQVar7;
  long lVar8;
  undefined1 local_98 [72];
  QVariant local_50 [2];
  QString local_38;
  undefined1 local_29;
  
  iVar5 = QDialog::result();
  if (iVar5 != -1) {
    return 0;
  }
  cVar4 = FUN_10073dd70(param_1 + 0x48);
  if (cVar4 == '\0') {
    return 0;
  }
  CProductUpdateInfo::getMajorVersionFromFileName(&local_38);
  local_98._32_8_ =
       QString::fromAscii_helper
                 ("1onCloseConfirmationAnswered(PRL_RESULT, Messaging::ButtonID)",0x3d);
  local_98._24_4_ = 0x80000000;
  local_98._16_8_ = (QMetaObject *)0x0;
  FUN_100a1c600(local_98 + 0x28,param_1,local_98 + 0x20,local_98 + 0x10);
  QVariant::~QVariant((QVariant *)(local_98 + 0x10));
  if (*(int *)local_98._32_8_ != -1) {
    if (*(int *)local_98._32_8_ != 0) {
      LOCK();
      *(int *)local_98._32_8_ = *(int *)local_98._32_8_ + -1;
      local_29 = *(int *)local_98._32_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006f402c;
    }
    QArrayData::deallocate((QArrayData *)local_98._32_8_,2,8);
  }
LAB_1006f402c:
  iVar5 = CMessageManager::instance();
  pQVar1 = *(QStringList **)(param_1 + 0x10);
  local_98._8_8_ = PTR_shared_null_1021e15e8;
  local_98._0_8_ = PTR_shared_null_1021e15e8;
  FUN_1000341d0(local_98,&local_38);
  CMessageManager::showMessageBox
            (iVar5,(QWidget *)0x3c02,pQVar1,(QStringList *)(local_98 + 8),(CSlotInfo *)local_98,
             (bool)((char)local_98 + '('));
  uVar3 = local_98._0_8_;
  if (*(int *)local_98._0_8_ != -1) {
    if (*(int *)local_98._0_8_ != 0) {
      LOCK();
      *(int *)local_98._0_8_ = *(int *)local_98._0_8_ + -1;
      local_29 = *(int *)local_98._0_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006f4121;
    }
    iVar5 = *(int *)(local_98._0_8_ + 0xc);
    if (iVar5 != *(int *)(local_98._0_8_ + 8)) {
      lVar8 = (long)*(int *)(local_98._0_8_ + 8) * 8 + (long)iVar5 * -8;
      pDVar6 = (Data *)(local_98._0_8_ + (long)iVar5 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1006f4100:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_29 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1006f4100;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)uVar3);
  }
LAB_1006f4121:
  uVar3 = local_98._8_8_;
  if (*(int *)local_98._8_8_ != -1) {
    if (*(int *)local_98._8_8_ != 0) {
      LOCK();
      *(int *)local_98._8_8_ = *(int *)local_98._8_8_ + -1;
      local_29 = *(int *)local_98._8_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006f41b1;
    }
    iVar5 = *(int *)(local_98._8_8_ + 0xc);
    if (iVar5 != *(int *)(local_98._8_8_ + 8)) {
      lVar8 = (long)*(int *)(local_98._8_8_ + 8) * 8 + (long)iVar5 * -8;
      pDVar6 = (Data *)(local_98._8_8_ + (long)iVar5 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1006f4190:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_29 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1006f4190;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)uVar3);
  }
LAB_1006f41b1:
  QVariant::~QVariant(local_50);
  piVar2 = (int *)CONCAT71(local_98._41_7_,local_98[0x28]);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    local_29 = *piVar2 != 0;
    UNLOCK();
    if ((!(bool)local_29) && ((void *)CONCAT71(local_98._41_7_,local_98[0x28]) != (void *)0x0)) {
      operator_delete((void *)CONCAT71(local_98._41_7_,local_98[0x28]));
    }
  }
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return 1;
      }
      local_98[0x28] = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return 1;
}

