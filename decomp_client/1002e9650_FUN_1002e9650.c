
/* WARNING: Removing unreachable block (ram,0x0001002e9794) */
/* WARNING: Removing unreachable block (ram,0x0001002e97a2) */
/* WARNING: Removing unreachable block (ram,0x0001002e97ae) */

undefined8 FUN_1002e9650(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  Data *pDVar4;
  QString *pQVar5;
  QArrayData *pQVar6;
  long lVar7;
  uint in_stack_ffffffffffffff1c;
  Data_conflict local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined1 local_90 [40];
  int *local_68 [4];
  QVariant local_48 [2];
  undefined1 local_29;
  
  CAbstractTask::setWaitForSubTaskCompletion();
  local_90._32_8_ =
       QString::fromAscii_helper("1onUserAnswered(PRL_RESULT, Messaging::ButtonID)",0x30);
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
      if ((bool)local_29) goto LAB_1002e96db;
    }
    QArrayData::deallocate((QArrayData *)local_90._32_8_,2,8);
  }
LAB_1002e96db:
  iVar1 = *(int *)(param_1 + 0x20);
  iVar3 = CMessageManager::instance();
  pQVar5 = (QString *)0x36ea;
  if (iVar1 != 0) {
    pQVar5 = (QString *)0x36eb;
  }
  local_90._8_8_ = PTR_shared_null_1021e15e8;
  local_90._0_8_ = PTR_shared_null_1021e15e8;
  local_a0 = 0x80000000;
  local_a8.field7 = 0;
  local_98 = 1;
  CMessageManager::showMessageBox
            (iVar3,pQVar5,(QStringList *)(param_1 + 0x18),(QStringList *)(local_90 + 8),
             (CSlotInfo *)local_90,SUB81(local_68,0),
             (QWidget *)((ulong)in_stack_ffffffffffffff1c << 0x20),(CSlotInfo *)0x0);
  QVariant::~QVariant((QVariant *)&local_a8);
  uVar2 = local_90._0_8_;
  if (*(int *)local_90._0_8_ != -1) {
    if (*(int *)local_90._0_8_ != 0) {
      LOCK();
      *(int *)local_90._0_8_ = *(int *)local_90._0_8_ + -1;
      local_29 = *(int *)local_90._0_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002e9841;
    }
    iVar1 = *(int *)(local_90._0_8_ + 0xc);
    if (iVar1 != *(int *)(local_90._0_8_ + 8)) {
      lVar7 = (long)*(int *)(local_90._0_8_ + 8) * 8 + (long)iVar1 * -8;
      pDVar4 = (Data *)(local_90._0_8_ + (long)iVar1 * 8 + 8);
      do {
        pQVar6 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar6 == 0) {
LAB_1002e9820:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_29 = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar6 = *(QArrayData **)pDVar4;
            goto LAB_1002e9820;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose((Data *)uVar2);
  }
LAB_1002e9841:
  uVar2 = local_90._8_8_;
  if (*(int *)local_90._8_8_ != -1) {
    if (*(int *)local_90._8_8_ != 0) {
      LOCK();
      *(int *)local_90._8_8_ = *(int *)local_90._8_8_ + -1;
      local_29 = *(int *)local_90._8_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002e98d1;
    }
    iVar1 = *(int *)(local_90._8_8_ + 0xc);
    if (iVar1 != *(int *)(local_90._8_8_ + 8)) {
      lVar7 = (long)*(int *)(local_90._8_8_ + 8) * 8 + (long)iVar1 * -8;
      pDVar4 = (Data *)(local_90._8_8_ + (long)iVar1 * 8 + 8);
      do {
        pQVar6 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar6 == 0) {
LAB_1002e98b0:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_29 = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar6 = *(QArrayData **)pDVar4;
            goto LAB_1002e98b0;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose((Data *)uVar2);
  }
LAB_1002e98d1:
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

