
void FUN_100205710(long *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  QStringList *pQVar5;
  long lVar6;
  Data *pDVar7;
  QArrayData *pQVar8;
  undefined1 local_d8 [40];
  int *local_b0 [4];
  QVariant local_90 [2];
  undefined1 local_78 [48];
  QArrayData *local_48;
  QArrayData *local_38;
  undefined1 local_29;
  
  uVar4 = FUN_100370280();
  uVar1 = DAT_100e152b8;
  pQVar5 = (QStringList *)FUN_1003704b0(uVar4,param_1 + 7,DAT_100e152b8);
  uVar4 = FUN_100370280();
  if (((param_1[5] == 0) || (*(int *)(param_1[5] + 4) == 0)) || (param_1[6] == 0)) {
    local_38 = (QArrayData *)QString::fromAscii_helper("",0);
  }
  else {
    FUN_100188480(&local_38);
  }
  lVar6 = FUN_1003704b0(uVar4,&local_38,uVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002057c2;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1002057c2:
  if ((pQVar5 == (QStringList *)0x0) || (lVar6 == 0)) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get VM window.");
  }
  else {
    FUN_10036e360(local_78,lVar6);
    FUN_10036bfc0(pQVar5,local_78);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100205836;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_100205836:
  if (pQVar5 == (QStringList *)0x0) {
    (**(code **)(*param_1 + 0xb0))(param_1,0);
    return;
  }
  local_d8._32_8_ =
       QString::fromAscii_helper
                 ("1onStartVmOnImportCompletionAnswered(PRL_RESULT, Messaging::ButtonID)",0x45);
  local_d8._24_4_ = 0x80000000;
  local_d8._16_8_ = (QMetaObject *)0x0;
  FUN_100a1c600(local_b0,param_1,local_d8 + 0x20,local_d8 + 0x10);
  QVariant::~QVariant((QVariant *)(local_d8 + 0x10));
  if (*(int *)local_d8._32_8_ != -1) {
    if (*(int *)local_d8._32_8_ != 0) {
      LOCK();
      *(int *)local_d8._32_8_ = *(int *)local_d8._32_8_ + -1;
      local_29 = *(int *)local_d8._32_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002058cb;
    }
    QArrayData::deallocate((QArrayData *)local_d8._32_8_,2,8);
  }
LAB_1002058cb:
  cVar2 = FUN_100205d80(param_1);
  iVar3 = CMessageManager::instance();
  local_d8._8_8_ = PTR_shared_null_1021e15e8;
  local_d8._0_8_ = PTR_shared_null_1021e15e8;
  CMessageManager::showMessageBox
            (iVar3,(QWidget *)(ulong)(cVar2 == '\0' | 0x3b76),pQVar5,(QStringList *)(local_d8 + 8),
             (CSlotInfo *)local_d8,SUB81(local_b0,0));
  uVar4 = local_d8._0_8_;
  if (*(int *)local_d8._0_8_ != -1) {
    if (*(int *)local_d8._0_8_ != 0) {
      LOCK();
      *(int *)local_d8._0_8_ = *(int *)local_d8._0_8_ + -1;
      local_29 = *(int *)local_d8._0_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002059c1;
    }
    iVar3 = *(int *)(local_d8._0_8_ + 0xc);
    if (iVar3 != *(int *)(local_d8._0_8_ + 8)) {
      lVar6 = (long)*(int *)(local_d8._0_8_ + 8) * 8 + (long)iVar3 * -8;
      pDVar7 = (Data *)(local_d8._0_8_ + (long)iVar3 * 8 + 8);
      do {
        pQVar8 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar8 == 0) {
LAB_1002059a0:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_29 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar8 = *(QArrayData **)pDVar7;
            goto LAB_1002059a0;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose((Data *)uVar4);
  }
LAB_1002059c1:
  uVar4 = local_d8._8_8_;
  if (*(int *)local_d8._8_8_ != -1) {
    if (*(int *)local_d8._8_8_ != 0) {
      LOCK();
      *(int *)local_d8._8_8_ = *(int *)local_d8._8_8_ + -1;
      local_29 = *(int *)local_d8._8_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100205a51;
    }
    iVar3 = *(int *)(local_d8._8_8_ + 0xc);
    if (iVar3 != *(int *)(local_d8._8_8_ + 8)) {
      lVar6 = (long)*(int *)(local_d8._8_8_ + 8) * 8 + (long)iVar3 * -8;
      pDVar7 = (Data *)(local_d8._8_8_ + (long)iVar3 * 8 + 8);
      do {
        pQVar8 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar8 == 0) {
LAB_100205a30:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_29 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar8 = *(QArrayData **)pDVar7;
            goto LAB_100205a30;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose((Data *)uVar4);
  }
LAB_100205a51:
  QVariant::~QVariant(local_90);
  if (local_b0[0] != (int *)0x0) {
    LOCK();
    *local_b0[0] = *local_b0[0] + -1;
    local_29 = *local_b0[0] != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_b0[0] != (int *)0x0)) {
      operator_delete(local_b0[0]);
    }
  }
  return;
}

