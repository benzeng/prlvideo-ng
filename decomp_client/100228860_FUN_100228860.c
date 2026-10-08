
undefined8 FUN_100228860(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  QStringList *pQVar3;
  Data *pDVar4;
  QArrayData *pQVar5;
  long lVar6;
  undefined1 local_a0 [24];
  QVariant local_88;
  QArrayData *local_78;
  int *local_70 [4];
  QVariant local_50 [2];
  QArrayData *local_38;
  undefined1 local_29;
  
  CAbstractTask::setWaitForSubTaskCompletion();
  local_78 = (QArrayData *)
             QString::fromAscii_helper("1onMessageClosed(PRL_RESULT, Messaging::ButtonID)",0x31);
  local_88.field0_0x0.field1_0x8.bitField0_30 = 0x80000000;
  local_88.field0_0x0.field0_0x0.field7 = 0;
  FUN_100a1c600(local_70,param_1,&local_78,&local_88);
  QVariant::~QVariant(&local_88);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002288eb;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1002288eb:
  AppHelpUtils::getHelpTopicFilePath(local_a0 + 0x10,0x25,0);
  QString::fromUtf8_helper((char *)&local_38,0x1e3c020);
  QString::insert((int)local_a0 + 0x10,(QChar *)0x0,
                  (int)*(undefined8 *)(local_38 + 0x10) + (int)local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10022895f;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10022895f:
  iVar2 = CMessageManager::instance();
  pQVar3 = (QStringList *)0x0;
  if ((*(long *)(param_1 + 0x50) != 0) &&
     (pQVar3 = (QStringList *)0x0, *(int *)(*(long *)(param_1 + 0x50) + 4) != 0)) {
    pQVar3 = *(QStringList **)(param_1 + 0x58);
  }
  local_a0._8_8_ = PTR_shared_null_1021e15e8;
  local_a0._0_8_ = PTR_shared_null_1021e15e8;
  FUN_1000341d0(local_a0,local_a0 + 0x10);
  CMessageManager::showMessageBox
            (iVar2,(QWidget *)0x80015432,pQVar3,(QStringList *)(local_a0 + 8),(CSlotInfo *)local_a0,
             SUB81(local_70,0));
  uVar1 = local_a0._0_8_;
  if (*(int *)local_a0._0_8_ != -1) {
    if (*(int *)local_a0._0_8_ != 0) {
      LOCK();
      *(int *)local_a0._0_8_ = *(int *)local_a0._0_8_ + -1;
      local_29 = *(int *)local_a0._0_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100228a61;
    }
    iVar2 = *(int *)(local_a0._0_8_ + 0xc);
    if (iVar2 != *(int *)(local_a0._0_8_ + 8)) {
      lVar6 = (long)*(int *)(local_a0._0_8_ + 8) * 8 + (long)iVar2 * -8;
      pDVar4 = (Data *)(local_a0._0_8_ + (long)iVar2 * 8 + 8);
      do {
        pQVar5 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar5 == 0) {
LAB_100228a40:
          QArrayData::deallocate(pQVar5,2,8);
        }
        else if (*(int *)pQVar5 != -1) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_29 = *(int *)pQVar5 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar5 = *(QArrayData **)pDVar4;
            goto LAB_100228a40;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose((Data *)uVar1);
  }
LAB_100228a61:
  uVar1 = local_a0._8_8_;
  if (*(int *)local_a0._8_8_ != -1) {
    if (*(int *)local_a0._8_8_ != 0) {
      LOCK();
      *(int *)local_a0._8_8_ = *(int *)local_a0._8_8_ + -1;
      local_29 = *(int *)local_a0._8_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100228af1;
    }
    iVar2 = *(int *)(local_a0._8_8_ + 0xc);
    if (iVar2 != *(int *)(local_a0._8_8_ + 8)) {
      lVar6 = (long)*(int *)(local_a0._8_8_ + 8) * 8 + (long)iVar2 * -8;
      pDVar4 = (Data *)(local_a0._8_8_ + (long)iVar2 * 8 + 8);
      do {
        pQVar5 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar5 == 0) {
LAB_100228ad0:
          QArrayData::deallocate(pQVar5,2,8);
        }
        else if (*(int *)pQVar5 != -1) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_29 = *(int *)pQVar5 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar5 = *(QArrayData **)pDVar4;
            goto LAB_100228ad0;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose((Data *)uVar1);
  }
LAB_100228af1:
  if (*(int *)local_a0._16_8_ != -1) {
    if (*(int *)local_a0._16_8_ != 0) {
      LOCK();
      *(int *)local_a0._16_8_ = *(int *)local_a0._16_8_ + -1;
      local_29 = *(int *)local_a0._16_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100228b27;
    }
    QArrayData::deallocate((QArrayData *)local_a0._16_8_,2,8);
  }
LAB_100228b27:
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

