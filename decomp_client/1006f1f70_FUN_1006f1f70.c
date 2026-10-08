
void FUN_1006f1f70(long param_1)

{
  QStringList *pQVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  Data *pDVar5;
  QArrayData *pQVar6;
  long lVar7;
  undefined1 local_98 [72];
  QVariant local_50 [2];
  QArrayData *local_38;
  undefined1 local_29;
  
  CProductUpdateInfo::getMajorVersion();
  local_98._32_8_ =
       QString::fromAscii_helper
                 ("1onInstallLaterConfirmationAnswered( PRL_RESULT, Messaging::ButtonID)",0x45);
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
      if ((bool)local_29) goto LAB_1006f2006;
    }
    QArrayData::deallocate((QArrayData *)local_98._32_8_,2,8);
  }
LAB_1006f2006:
  iVar4 = CMessageManager::instance();
  pQVar1 = *(QStringList **)(param_1 + 0x10);
  local_98._8_8_ = PTR_shared_null_1021e15e8;
  local_98._0_8_ = PTR_shared_null_1021e15e8;
  FUN_1000341d0(local_98,&local_38);
  CMessageManager::showMessageBox
            (iVar4,(QWidget *)0x3c04,pQVar1,(QStringList *)(local_98 + 8),(CSlotInfo *)local_98,
             (bool)((char)local_98 + '('));
  uVar3 = local_98._0_8_;
  if (*(int *)local_98._0_8_ != -1) {
    if (*(int *)local_98._0_8_ != 0) {
      LOCK();
      *(int *)local_98._0_8_ = *(int *)local_98._0_8_ + -1;
      local_29 = *(int *)local_98._0_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006f20f1;
    }
    iVar4 = *(int *)(local_98._0_8_ + 0xc);
    if (iVar4 != *(int *)(local_98._0_8_ + 8)) {
      lVar7 = (long)*(int *)(local_98._0_8_ + 8) * 8 + (long)iVar4 * -8;
      pDVar5 = (Data *)(local_98._0_8_ + (long)iVar4 * 8 + 8);
      do {
        pQVar6 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar6 == 0) {
LAB_1006f20d0:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_29 = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar6 = *(QArrayData **)pDVar5;
            goto LAB_1006f20d0;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose((Data *)uVar3);
  }
LAB_1006f20f1:
  uVar3 = local_98._8_8_;
  if (*(int *)local_98._8_8_ != -1) {
    if (*(int *)local_98._8_8_ != 0) {
      LOCK();
      *(int *)local_98._8_8_ = *(int *)local_98._8_8_ + -1;
      local_29 = *(int *)local_98._8_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006f2181;
    }
    iVar4 = *(int *)(local_98._8_8_ + 0xc);
    if (iVar4 != *(int *)(local_98._8_8_ + 8)) {
      lVar7 = (long)*(int *)(local_98._8_8_ + 8) * 8 + (long)iVar4 * -8;
      pDVar5 = (Data *)(local_98._8_8_ + (long)iVar4 * 8 + 8);
      do {
        pQVar6 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar6 == 0) {
LAB_1006f2160:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_29 = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar6 = *(QArrayData **)pDVar5;
            goto LAB_1006f2160;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose((Data *)uVar3);
  }
LAB_1006f2181:
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
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_98[0x28] = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}

