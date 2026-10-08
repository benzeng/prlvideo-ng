
void FUN_10027b740(long *param_1,char param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  QString *pQVar3;
  QStringList *pQVar4;
  Data *pDVar5;
  QArrayData *pQVar6;
  long lVar7;
  undefined1 local_90 [40];
  int *local_68 [4];
  QVariant local_48 [2];
  undefined1 local_29;
  
  if (param_2 == '\0') {
    *(undefined1 *)(param_1 + 0xe) = 0;
    FUN_10081b8b0(param_1,0);
  }
  else {
    iVar2 = QString::compare(param_1 + 6,param_3,0);
    *(undefined1 *)(param_1 + 0xe) = 0;
    FUN_10081b8b0(param_1,iVar2 == 0);
    if (iVar2 == 0) {
      *(undefined1 *)((long)param_1 + 0x71) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010027b7a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x98))(param_1,0);
      return;
    }
  }
  if ((*(byte *)((long)param_1 + 0x74) & 1) != 0) {
    FUN_1002794b0(param_1);
    return;
  }
  local_90._32_8_ =
       QString::fromAscii_helper
                 ("1onRetryDownloadExistingImageAnswered(PRL_RESULT,Messaging::ButtonID)",0x45);
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
      if ((bool)local_29) goto LAB_10027b830;
    }
    QArrayData::deallocate((QArrayData *)local_90._32_8_,2,8);
  }
LAB_10027b830:
  iVar2 = CMessageManager::instance();
  pQVar3 = (QString *)CSearchParentHelper::instance();
  pQVar4 = (QStringList *)
           CSearchParentHelper::getParentForMessage
                     (pQVar3,(bool)((char)param_1 + 'h'),(QWidget *)0x0);
  local_90._8_8_ = PTR_shared_null_1021e15e8;
  local_90._0_8_ = PTR_shared_null_1021e15e8;
  CMessageManager::showMessageBox
            (iVar2,(QWidget *)0x3be4,pQVar4,(QStringList *)(local_90 + 8),(CSlotInfo *)local_90,
             SUB81(local_68,0));
  uVar1 = local_90._0_8_;
  if (*(int *)local_90._0_8_ != -1) {
    if (*(int *)local_90._0_8_ != 0) {
      LOCK();
      *(int *)local_90._0_8_ = *(int *)local_90._0_8_ + -1;
      local_29 = *(int *)local_90._0_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10027b921;
    }
    iVar2 = *(int *)(local_90._0_8_ + 0xc);
    if (iVar2 != *(int *)(local_90._0_8_ + 8)) {
      lVar7 = (long)*(int *)(local_90._0_8_ + 8) * 8 + (long)iVar2 * -8;
      pDVar5 = (Data *)(local_90._0_8_ + (long)iVar2 * 8 + 8);
      do {
        pQVar6 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar6 == 0) {
LAB_10027b900:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_29 = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar6 = *(QArrayData **)pDVar5;
            goto LAB_10027b900;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose((Data *)uVar1);
  }
LAB_10027b921:
  uVar1 = local_90._8_8_;
  if (*(int *)local_90._8_8_ != -1) {
    if (*(int *)local_90._8_8_ != 0) {
      LOCK();
      *(int *)local_90._8_8_ = *(int *)local_90._8_8_ + -1;
      local_29 = *(int *)local_90._8_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10027b9b1;
    }
    iVar2 = *(int *)(local_90._8_8_ + 0xc);
    if (iVar2 != *(int *)(local_90._8_8_ + 8)) {
      lVar7 = (long)*(int *)(local_90._8_8_ + 8) * 8 + (long)iVar2 * -8;
      pDVar5 = (Data *)(local_90._8_8_ + (long)iVar2 * 8 + 8);
      do {
        pQVar6 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar6 == 0) {
LAB_10027b990:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_29 = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar6 = *(QArrayData **)pDVar5;
            goto LAB_10027b990;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose((Data *)uVar1);
  }
LAB_10027b9b1:
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

