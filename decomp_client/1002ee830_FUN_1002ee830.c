
void FUN_1002ee830(long *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  Data *pDVar3;
  QArrayData *pQVar4;
  long lVar5;
  undefined1 local_90 [40];
  int *local_68 [4];
  QVariant local_48 [2];
  undefined1 local_29;
  
  if (param_2 != 7) {
    return;
  }
  iVar2 = CAbstractTask::getCurrentSubTask();
  if (iVar2 != 0) {
    return;
  }
  if (-1 < param_3) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x98);
    param_3 = 0x3bfa;
LAB_1002ee873:
                    /* WARNING: Could not recover jumptable at 0x0001002ee87f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,param_3);
    return;
  }
  if (param_3 != -0x7ffeab79) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
    if (param_3 == -0x7ffeac9a) {
      param_3 = 0;
    }
    goto LAB_1002ee873;
  }
  local_90._32_8_ =
       QString::fromAscii_helper
                 ("1onRestartToCompleteIstallMessageClosed(PRL_RESULT, Messaging::ButtonID)",0x48);
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
      if ((bool)local_29) goto LAB_1002ee8fe;
    }
    QArrayData::deallocate((QArrayData *)local_90._32_8_,2,8);
  }
LAB_1002ee8fe:
  iVar2 = CMessageManager::instance();
  local_90._8_8_ = PTR_shared_null_1021e15e8;
  local_90._0_8_ = PTR_shared_null_1021e15e8;
  CMessageManager::showMessageBox
            (iVar2,(QWidget *)0x80015487,(QStringList *)0x0,(QStringList *)(local_90 + 8),
             (CSlotInfo *)local_90,SUB81(local_68,0));
  uVar1 = local_90._0_8_;
  if (*(int *)local_90._0_8_ != -1) {
    if (*(int *)local_90._0_8_ != 0) {
      LOCK();
      *(int *)local_90._0_8_ = *(int *)local_90._0_8_ + -1;
      local_29 = *(int *)local_90._0_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002ee9c4;
    }
    iVar2 = *(int *)(local_90._0_8_ + 0xc);
    if (iVar2 != *(int *)(local_90._0_8_ + 8)) {
      lVar5 = (long)*(int *)(local_90._0_8_ + 8) * 8 + (long)iVar2 * -8;
      pDVar3 = (Data *)(local_90._0_8_ + (long)iVar2 * 8 + 8);
      do {
        pQVar4 = *(QArrayData **)pDVar3;
        if (*(int *)pQVar4 == 0) {
LAB_1002ee9a3:
          QArrayData::deallocate(pQVar4,2,8);
        }
        else if (*(int *)pQVar4 != -1) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_29 = *(int *)pQVar4 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar4 = *(QArrayData **)pDVar3;
            goto LAB_1002ee9a3;
          }
        }
        pDVar3 = pDVar3 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose((Data *)uVar1);
  }
LAB_1002ee9c4:
  uVar1 = local_90._8_8_;
  if (*(int *)local_90._8_8_ != -1) {
    if (*(int *)local_90._8_8_ != 0) {
      LOCK();
      *(int *)local_90._8_8_ = *(int *)local_90._8_8_ + -1;
      local_29 = *(int *)local_90._8_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002eea48;
    }
    iVar2 = *(int *)(local_90._8_8_ + 0xc);
    if (iVar2 != *(int *)(local_90._8_8_ + 8)) {
      lVar5 = (long)*(int *)(local_90._8_8_ + 8) * 8 + (long)iVar2 * -8;
      pDVar3 = (Data *)(local_90._8_8_ + (long)iVar2 * 8 + 8);
      do {
        pQVar4 = *(QArrayData **)pDVar3;
        if (*(int *)pQVar4 == 0) {
LAB_1002eea27:
          QArrayData::deallocate(pQVar4,2,8);
        }
        else if (*(int *)pQVar4 != -1) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_29 = *(int *)pQVar4 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar4 = *(QArrayData **)pDVar3;
            goto LAB_1002eea27;
          }
        }
        pDVar3 = pDVar3 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose((Data *)uVar1);
  }
LAB_1002eea48:
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

