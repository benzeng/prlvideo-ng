
void FUN_1001eb470(long param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  QStringList *pQVar3;
  Data *pDVar4;
  QArrayData *pQVar5;
  long lVar6;
  undefined1 local_90 [40];
  int *local_68 [4];
  QVariant local_48 [2];
  undefined1 local_29;
  
  if (-1 < param_2) {
    FUN_10080b160(param_1,param_2);
    return;
  }
  local_90._32_8_ =
       QString::fromAscii_helper
                 ("1onErrorMessageClosed( PRL_RESULT, Messaging::ButtonID, const QVariant& )",0x49);
  QVariant::QVariant((QVariant *)(local_90 + 0x10),param_2);
  FUN_100a1c600(local_68,param_1,local_90 + 0x20,local_90 + 0x10);
  QVariant::~QVariant((QVariant *)(local_90 + 0x10));
  if (*(int *)local_90._32_8_ != -1) {
    if (*(int *)local_90._32_8_ != 0) {
      LOCK();
      *(int *)local_90._32_8_ = *(int *)local_90._32_8_ + -1;
      local_29 = *(int *)local_90._32_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001eb50b;
    }
    QArrayData::deallocate((QArrayData *)local_90._32_8_,2,8);
  }
LAB_1001eb50b:
  iVar2 = CMessageManager::instance();
  pQVar3 = (QStringList *)0x0;
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (pQVar3 = (QStringList *)0x0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
    pQVar3 = *(QStringList **)(param_1 + 0x28);
  }
  local_90._8_8_ = PTR_shared_null_1021e15e8;
  local_90._0_8_ = PTR_shared_null_1021e15e8;
  CMessageManager::showMessageBox
            (iVar2,(QWidget *)0x80015292,pQVar3,(QStringList *)(local_90 + 8),(CSlotInfo *)local_90,
             SUB81(local_68,0));
  uVar1 = local_90._0_8_;
  if (*(int *)local_90._0_8_ != -1) {
    if (*(int *)local_90._0_8_ != 0) {
      LOCK();
      *(int *)local_90._0_8_ = *(int *)local_90._0_8_ + -1;
      local_29 = *(int *)local_90._0_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001eb5f1;
    }
    iVar2 = *(int *)(local_90._0_8_ + 0xc);
    if (iVar2 != *(int *)(local_90._0_8_ + 8)) {
      lVar6 = (long)*(int *)(local_90._0_8_ + 8) * 8 + (long)iVar2 * -8;
      pDVar4 = (Data *)(local_90._0_8_ + (long)iVar2 * 8 + 8);
      do {
        pQVar5 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar5 == 0) {
LAB_1001eb5d0:
          QArrayData::deallocate(pQVar5,2,8);
        }
        else if (*(int *)pQVar5 != -1) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_29 = *(int *)pQVar5 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar5 = *(QArrayData **)pDVar4;
            goto LAB_1001eb5d0;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose((Data *)uVar1);
  }
LAB_1001eb5f1:
  uVar1 = local_90._8_8_;
  if (*(int *)local_90._8_8_ != -1) {
    if (*(int *)local_90._8_8_ != 0) {
      LOCK();
      *(int *)local_90._8_8_ = *(int *)local_90._8_8_ + -1;
      local_29 = *(int *)local_90._8_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001eb681;
    }
    iVar2 = *(int *)(local_90._8_8_ + 0xc);
    if (iVar2 != *(int *)(local_90._8_8_ + 8)) {
      lVar6 = (long)*(int *)(local_90._8_8_ + 8) * 8 + (long)iVar2 * -8;
      pDVar4 = (Data *)(local_90._8_8_ + (long)iVar2 * 8 + 8);
      do {
        pQVar5 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar5 == 0) {
LAB_1001eb660:
          QArrayData::deallocate(pQVar5,2,8);
        }
        else if (*(int *)pQVar5 != -1) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_29 = *(int *)pQVar5 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar5 = *(QArrayData **)pDVar4;
            goto LAB_1001eb660;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose((Data *)uVar1);
  }
LAB_1001eb681:
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

