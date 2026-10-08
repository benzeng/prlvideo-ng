
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1002bb640(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  QStringList *pQVar3;
  Data *pDVar4;
  QArrayData *pQVar5;
  long lVar6;
  undefined1 auVar7 [16];
  QArrayData *local_98;
  undefined1 local_90 [40];
  int *local_68 [4];
  QVariant local_48 [2];
  undefined1 local_29;
  
  local_90._32_8_ =
       QString::fromAscii_helper("1onRepackAnswered(PRL_RESULT, Messaging::ButtonID)",0x32);
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
      if ((bool)local_29) goto LAB_1002bb6c6;
    }
    QArrayData::deallocate((QArrayData *)local_90._32_8_,2,8);
  }
LAB_1002bb6c6:
  iVar2 = CMessageManager::instance();
  pQVar3 = (QStringList *)0x0;
  if ((*(long *)(param_1 + 0x40) != 0) &&
     (pQVar3 = (QStringList *)0x0, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) {
    pQVar3 = *(QStringList **)(param_1 + 0x48);
  }
  local_90._8_8_ = PTR_shared_null_1021e15e8;
  local_90._0_8_ = PTR_shared_null_1021e15e8;
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  auVar7._8_4_ = (int)((ulong)uVar1 >> 0x20);
  auVar7._0_8_ = uVar1;
  auVar7._12_4_ = _UNK_100e11114;
  QString::number((((double)CONCAT44(_DAT_100e11110,(int)uVar1) - _DAT_100e11120) +
                  (auVar7._8_8_ - _UNK_100e11128)) * DAT_100e14d10,(char)&local_98,0x67);
  FUN_1000341d0(local_90,&local_98);
  CMessageManager::showMessageBox
            (iVar2,(QWidget *)0x36db,pQVar3,(QStringList *)(local_90 + 8),(CSlotInfo *)local_90,
             SUB81(local_68,0));
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_29 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002bb7a1;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1002bb7a1:
  uVar1 = local_90._0_8_;
  if (*(int *)local_90._0_8_ != -1) {
    if (*(int *)local_90._0_8_ != 0) {
      LOCK();
      *(int *)local_90._0_8_ = *(int *)local_90._0_8_ + -1;
      local_29 = *(int *)local_90._0_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002bb831;
    }
    iVar2 = *(int *)(local_90._0_8_ + 0xc);
    if (iVar2 != *(int *)(local_90._0_8_ + 8)) {
      lVar6 = (long)*(int *)(local_90._0_8_ + 8) * 8 + (long)iVar2 * -8;
      pDVar4 = (Data *)(local_90._0_8_ + (long)iVar2 * 8 + 8);
      do {
        pQVar5 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar5 == 0) {
LAB_1002bb810:
          QArrayData::deallocate(pQVar5,2,8);
        }
        else if (*(int *)pQVar5 != -1) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_29 = *(int *)pQVar5 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar5 = *(QArrayData **)pDVar4;
            goto LAB_1002bb810;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose((Data *)uVar1);
  }
LAB_1002bb831:
  uVar1 = local_90._8_8_;
  if (*(int *)local_90._8_8_ != -1) {
    if (*(int *)local_90._8_8_ != 0) {
      LOCK();
      *(int *)local_90._8_8_ = *(int *)local_90._8_8_ + -1;
      local_29 = *(int *)local_90._8_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002bb8c1;
    }
    iVar2 = *(int *)(local_90._8_8_ + 0xc);
    if (iVar2 != *(int *)(local_90._8_8_ + 8)) {
      lVar6 = (long)*(int *)(local_90._8_8_ + 8) * 8 + (long)iVar2 * -8;
      pDVar4 = (Data *)(local_90._8_8_ + (long)iVar2 * 8 + 8);
      do {
        pQVar5 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar5 == 0) {
LAB_1002bb8a0:
          QArrayData::deallocate(pQVar5,2,8);
        }
        else if (*(int *)pQVar5 != -1) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_29 = *(int *)pQVar5 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar5 = *(QArrayData **)pDVar4;
            goto LAB_1002bb8a0;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose((Data *)uVar1);
  }
LAB_1002bb8c1:
  CAbstractTask::setWaitForSubTaskCompletion();
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
  return 0;
}

