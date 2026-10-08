
undefined8 FUN_10020ac00(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  QStringList *pQVar4;
  Data *pDVar5;
  QArrayData *pQVar6;
  long lVar7;
  undefined1 local_90 [40];
  int *local_68 [4];
  QVariant local_48 [2];
  int local_30;
  undefined1 local_29;
  
  iVar3 = _PrlEvent_GetErrCode(*param_2,&local_30);
  if (iVar3 < 0) {
    return 0;
  }
  if (local_30 != 0x32cd) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x150) & 4) != 0) {
    return 0;
  }
  plVar1 = (long *)(param_1 + 0x158);
  if (plVar1 != param_2) {
    if (*plVar1 != 0) {
      _PrlHandle_Free();
    }
    lVar7 = *param_2;
    *plVar1 = lVar7;
    if (lVar7 != 0) {
      _PrlHandle_AddRef();
    }
  }
  local_90._32_8_ =
       QString::fromAscii_helper("1onLowHddQuestionFinished(PRL_RESULT, Messaging::ButtonID)",0x3a);
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
      if ((bool)local_29) goto LAB_10020ace2;
    }
    QArrayData::deallocate((QArrayData *)local_90._32_8_,2,8);
  }
LAB_10020ace2:
  iVar3 = CMessageManager::instance();
  pQVar4 = (QStringList *)0x0;
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (pQVar4 = (QStringList *)0x0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
    pQVar4 = *(QStringList **)(param_1 + 0x40);
  }
  local_90._8_8_ = PTR_shared_null_1021e15e8;
  local_90._0_8_ = PTR_shared_null_1021e15e8;
  CMessageManager::showMessageBox
            (iVar3,(QWidget *)0x3c1b,pQVar4,(QStringList *)(local_90 + 8),(CSlotInfo *)local_90,
             SUB81(local_68,0));
  uVar2 = local_90._0_8_;
  if (*(int *)local_90._0_8_ != -1) {
    if (*(int *)local_90._0_8_ != 0) {
      LOCK();
      *(int *)local_90._0_8_ = *(int *)local_90._0_8_ + -1;
      local_29 = *(int *)local_90._0_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10020add1;
    }
    iVar3 = *(int *)(local_90._0_8_ + 0xc);
    if (iVar3 != *(int *)(local_90._0_8_ + 8)) {
      lVar7 = (long)*(int *)(local_90._0_8_ + 8) * 8 + (long)iVar3 * -8;
      pDVar5 = (Data *)(local_90._0_8_ + (long)iVar3 * 8 + 8);
      do {
        pQVar6 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar6 == 0) {
LAB_10020adb0:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_29 = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar6 = *(QArrayData **)pDVar5;
            goto LAB_10020adb0;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose((Data *)uVar2);
  }
LAB_10020add1:
  uVar2 = local_90._8_8_;
  if (*(int *)local_90._8_8_ != -1) {
    if (*(int *)local_90._8_8_ != 0) {
      LOCK();
      *(int *)local_90._8_8_ = *(int *)local_90._8_8_ + -1;
      local_29 = *(int *)local_90._8_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10020ae61;
    }
    iVar3 = *(int *)(local_90._8_8_ + 0xc);
    if (iVar3 != *(int *)(local_90._8_8_ + 8)) {
      lVar7 = (long)*(int *)(local_90._8_8_ + 8) * 8 + (long)iVar3 * -8;
      pDVar5 = (Data *)(local_90._8_8_ + (long)iVar3 * 8 + 8);
      do {
        pQVar6 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar6 == 0) {
LAB_10020ae40:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_29 = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar6 = *(QArrayData **)pDVar5;
            goto LAB_10020ae40;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose((Data *)uVar2);
  }
LAB_10020ae61:
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
  return 1;
}

