
void FUN_10027c5a0(long *param_1,char param_2,undefined8 param_3)

{
  int iVar1;
  QString *pQVar2;
  QStringList *pQVar3;
  code *UNRECOVERED_JUMPTABLE;
  Data *pDVar4;
  undefined8 uVar5;
  QArrayData *pQVar6;
  long lVar7;
  undefined1 local_a0 [40];
  int *local_78 [4];
  QVariant local_58 [2];
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  if (param_2 == '\0') {
    *(undefined1 *)(param_1 + 0xe) = 0;
    FUN_10081b8b0(param_1,0);
    FUN_100df99c0("","prl_client_app",0,"Failed to calculate MD5 checksum");
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
    uVar5 = 0x80015413;
LAB_10027c966:
                    /* WARNING: Could not recover jumptable at 0x00010027c978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,uVar5);
    return;
  }
  iVar1 = QString::compare(param_1 + 6,param_3,0);
  *(undefined1 *)(param_1 + 0xe) = 0;
  FUN_10081b8b0(param_1,iVar1 == 0);
  iVar1 = QString::compare(param_1 + 6,param_3,0);
  if (iVar1 == 0) {
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("","prl_client_app",2,"Checksum validation completed successfully.");
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
    uVar5 = 0;
    goto LAB_10027c966;
  }
  QString::toUtf8();
  pQVar6 = local_38;
  lVar7 = *(long *)(local_38 + 0x10);
  QString::toUtf8();
  FUN_100df99c0("","prl_client_app",0,"MD5 checksum [%s] doesn\'t match to expected one [%s]",
                pQVar6 + lVar7,local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10027c67b;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_10027c67b:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10027c6ab;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_10027c6ab:
  local_a0._32_8_ =
       QString::fromAscii_helper("1onRetryDownloadAnswered(PRL_RESULT, Messaging::ButtonID)",0x39);
  local_a0._24_4_ = 0x80000000;
  local_a0._16_8_ = (QMetaObject *)0x0;
  FUN_100a1c600(local_78,param_1,local_a0 + 0x20,local_a0 + 0x10);
  QVariant::~QVariant((QVariant *)(local_a0 + 0x10));
  if (*(int *)local_a0._32_8_ != -1) {
    if (*(int *)local_a0._32_8_ != 0) {
      LOCK();
      *(int *)local_a0._32_8_ = *(int *)local_a0._32_8_ + -1;
      local_29 = *(int *)local_a0._32_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10027c725;
    }
    QArrayData::deallocate((QArrayData *)local_a0._32_8_,2,8);
  }
LAB_10027c725:
  iVar1 = CMessageManager::instance();
  pQVar2 = (QString *)CSearchParentHelper::instance();
  pQVar3 = (QStringList *)
           CSearchParentHelper::getParentForMessage
                     (pQVar2,(bool)((char)param_1 + 'h'),(QWidget *)0x0);
  local_a0._8_8_ = PTR_shared_null_1021e15e8;
  local_a0._0_8_ = PTR_shared_null_1021e15e8;
  CMessageManager::showMessageBox
            (iVar1,(QWidget *)0x3be4,pQVar3,(QStringList *)(local_a0 + 8),(CSlotInfo *)local_a0,
             SUB81(local_78,0));
  uVar5 = local_a0._0_8_;
  if (*(int *)local_a0._0_8_ != -1) {
    if (*(int *)local_a0._0_8_ != 0) {
      LOCK();
      *(int *)local_a0._0_8_ = *(int *)local_a0._0_8_ + -1;
      local_29 = *(int *)local_a0._0_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10027c821;
    }
    iVar1 = *(int *)(local_a0._0_8_ + 0xc);
    if (iVar1 != *(int *)(local_a0._0_8_ + 8)) {
      lVar7 = (long)*(int *)(local_a0._0_8_ + 8) * 8 + (long)iVar1 * -8;
      pDVar4 = (Data *)(local_a0._0_8_ + (long)iVar1 * 8 + 8);
      do {
        pQVar6 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar6 == 0) {
LAB_10027c800:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_29 = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar6 = *(QArrayData **)pDVar4;
            goto LAB_10027c800;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose((Data *)uVar5);
  }
LAB_10027c821:
  uVar5 = local_a0._8_8_;
  if (*(int *)local_a0._8_8_ != -1) {
    if (*(int *)local_a0._8_8_ != 0) {
      LOCK();
      *(int *)local_a0._8_8_ = *(int *)local_a0._8_8_ + -1;
      local_29 = *(int *)local_a0._8_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10027c8b1;
    }
    iVar1 = *(int *)(local_a0._8_8_ + 0xc);
    if (iVar1 != *(int *)(local_a0._8_8_ + 8)) {
      lVar7 = (long)*(int *)(local_a0._8_8_ + 8) * 8 + (long)iVar1 * -8;
      pDVar4 = (Data *)(local_a0._8_8_ + (long)iVar1 * 8 + 8);
      do {
        pQVar6 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar6 == 0) {
LAB_10027c890:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_29 = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar6 = *(QArrayData **)pDVar4;
            goto LAB_10027c890;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose((Data *)uVar5);
  }
LAB_10027c8b1:
  QVariant::~QVariant(local_58);
  if (local_78[0] != (int *)0x0) {
    LOCK();
    *local_78[0] = *local_78[0] + -1;
    local_29 = *local_78[0] != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_78[0] != (int *)0x0)) {
      operator_delete(local_78[0]);
    }
  }
  return;
}

