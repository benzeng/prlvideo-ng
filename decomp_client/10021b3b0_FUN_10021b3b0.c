
undefined8 FUN_10021b3b0(long param_1)

{
  char cVar1;
  int iVar2;
  QStringList *pQVar3;
  Data *pDVar4;
  undefined8 uVar5;
  QArrayData *pQVar6;
  uint uVar7;
  long lVar8;
  undefined1 local_90 [40];
  int *local_68 [4];
  QVariant local_48 [2];
  undefined1 local_29;
  
  CAbstractTask::setWaitForSubTaskCompletion();
  local_90._32_8_ =
       QString::fromAscii_helper("1onAnswerReceived(PRL_RESULT,Messaging::ButtonID)",0x31);
  local_90._24_4_ = 0x80000000;
  local_90._16_8_ = (QMetaObject *)0x0;
  FUN_100a1c600(local_68,param_1,local_90 + 0x20);
  QVariant::~QVariant((QVariant *)(local_90 + 0x10));
  if (*(int *)local_90._32_8_ != -1) {
    if (*(int *)local_90._32_8_ != 0) {
      LOCK();
      *(int *)local_90._32_8_ = *(int *)local_90._32_8_ + -1;
      local_29 = *(int *)local_90._32_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10021b438;
    }
    QArrayData::deallocate((QArrayData *)local_90._32_8_,2,8);
  }
LAB_10021b438:
  iVar2 = *(int *)(param_1 + 0x38);
  uVar7 = 0x3bd1;
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      uVar5 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar5 = *(undefined8 *)(param_1 + 0x20);
      }
      cVar1 = FUN_1001b7ee0(uVar5);
      uVar7 = 0x3bd0;
      if (cVar1 != '\0') {
        uVar5 = 0;
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
          uVar5 = *(undefined8 *)(param_1 + 0x20);
        }
        iVar2 = FUN_10018f890(uVar5);
        uVar7 = 0x3c1f;
        if (iVar2 == 0x80b) {
          uVar7 = 0x3be6;
        }
      }
    }
    else {
      uVar7 = 0x3bd8;
      if (iVar2 != 2) {
        uVar7 = 0;
      }
    }
  }
  if (((*(long *)(param_1 + 0x28) != 0) && (*(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) &&
     (*(QObject **)(param_1 + 0x30) != (QObject *)0x0)) {
    QObject::installEventFilter(*(QObject **)(param_1 + 0x30));
  }
  iVar2 = CMessageManager::instance();
  pQVar3 = (QStringList *)0x0;
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (pQVar3 = (QStringList *)0x0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
    pQVar3 = *(QStringList **)(param_1 + 0x30);
  }
  local_90._8_8_ = PTR_shared_null_1021e15e8;
  local_90._0_8_ = PTR_shared_null_1021e15e8;
  CMessageManager::showMessageBox
            (iVar2,(QWidget *)(ulong)uVar7,pQVar3,(QStringList *)(local_90 + 8),
             (CSlotInfo *)local_90,SUB81(local_68,0));
  uVar5 = local_90._0_8_;
  if (*(int *)local_90._0_8_ != -1) {
    if (*(int *)local_90._0_8_ != 0) {
      LOCK();
      *(int *)local_90._0_8_ = *(int *)local_90._0_8_ + -1;
      local_29 = *(int *)local_90._0_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10021b5b1;
    }
    iVar2 = *(int *)(local_90._0_8_ + 0xc);
    if (iVar2 != *(int *)(local_90._0_8_ + 8)) {
      lVar8 = (long)*(int *)(local_90._0_8_ + 8) * 8 + (long)iVar2 * -8;
      pDVar4 = (Data *)(local_90._0_8_ + (long)iVar2 * 8 + 8);
      do {
        pQVar6 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar6 == 0) {
LAB_10021b590:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_29 = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar6 = *(QArrayData **)pDVar4;
            goto LAB_10021b590;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)uVar5);
  }
LAB_10021b5b1:
  uVar5 = local_90._8_8_;
  if (*(int *)local_90._8_8_ != -1) {
    if (*(int *)local_90._8_8_ != 0) {
      LOCK();
      *(int *)local_90._8_8_ = *(int *)local_90._8_8_ + -1;
      local_29 = *(int *)local_90._8_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10021b641;
    }
    iVar2 = *(int *)(local_90._8_8_ + 0xc);
    if (iVar2 != *(int *)(local_90._8_8_ + 8)) {
      lVar8 = (long)*(int *)(local_90._8_8_ + 8) * 8 + (long)iVar2 * -8;
      pDVar4 = (Data *)(local_90._8_8_ + (long)iVar2 * 8 + 8);
      do {
        pQVar6 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar6 == 0) {
LAB_10021b620:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_29 = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar6 = *(QArrayData **)pDVar4;
            goto LAB_10021b620;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)uVar5);
  }
LAB_10021b641:
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

