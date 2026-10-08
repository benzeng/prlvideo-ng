
void FUN_1007adee0(QStringList *param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  Data *pDVar4;
  AnonymousUnion0 AVar5;
  QArrayData *pQVar6;
  long lVar7;
  undefined1 local_118 [40];
  int *local_f0 [4];
  QVariant local_d0 [2];
  undefined1 local_b8 [48];
  undefined1 local_88 [32];
  QArrayData *local_68;
  QString local_40;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_29;
  
  local_30 = 0;
  local_34 = 0;
  cVar2 = FUN_1007a7bb0(param_1[0x20].field0_0x0.field1,&local_30,&local_34);
  if (cVar2 == '\0') {
    return;
  }
  FUN_1007a7870(local_b8,param_1[0x20].field0_0x0.field1,local_30,local_34);
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_68;
  if (1 < *(int *)local_68 + 1U) {
    LOCK();
    *(int *)local_68 = *(int *)local_68 + 1;
    local_29 = *(int *)local_68 != 0;
    UNLOCK();
  }
  FUN_1007a1cf0(local_88);
  if ((((*(int *)(local_40.field0_0x0 + 4) == 0) || (param_1[0x23].field0_0x0.field1 == (Data *)0x0)
       ) || (*(int *)((long)param_1[0x23].field0_0x0.field1 + 4) == 0)) ||
     (param_1[0x24].field0_0x0.field1 == (Data *)0x0)) goto LAB_1007ae1da;
  cVar2 = FUN_10011a820();
  if (cVar2 != '\0') {
    AVar5.field1 = (Data *)0x0;
    if ((param_1[0x23].field0_0x0.field1 != (Data *)0x0) &&
       (AVar5.field1 = (Data *)0x0, *(int *)((long)param_1[0x23].field0_0x0.field1 + 4) != 0)) {
      AVar5 = (AnonymousUnion0)param_1[0x24].field0_0x0.field1;
    }
    FUN_10011a850(AVar5.field1);
    goto LAB_1007ae1da;
  }
  local_118._32_8_ =
       QString::fromAscii_helper
                 ("1onSwitchToSnapshotAnswered(PRL_RESULT, Messaging::ButtonID, const QVariant&)",
                  0x4d);
  QVariant::QVariant((QVariant *)(local_118 + 0x10),&local_40);
  FUN_100a1c600(local_f0,param_1,local_118 + 0x20,local_118 + 0x10);
  QVariant::~QVariant((QVariant *)(local_118 + 0x10));
  if (*(int *)local_118._32_8_ != -1) {
    if (*(int *)local_118._32_8_ != 0) {
      LOCK();
      *(int *)local_118._32_8_ = *(int *)local_118._32_8_ + -1;
      local_29 = *(int *)local_118._32_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007ae049;
    }
    QArrayData::deallocate((QArrayData *)local_118._32_8_,2,8);
  }
LAB_1007ae049:
  iVar3 = CMessageManager::instance();
  local_118._8_8_ = PTR_shared_null_1021e15e8;
  local_118._0_8_ = PTR_shared_null_1021e15e8;
  CMessageManager::showMessageBox
            (iVar3,(QWidget *)0x36bf,param_1,(QStringList *)(local_118 + 8),(CSlotInfo *)local_118,
             SUB81(local_f0,0));
  uVar1 = local_118._0_8_;
  if (*(int *)local_118._0_8_ != -1) {
    if (*(int *)local_118._0_8_ != 0) {
      LOCK();
      *(int *)local_118._0_8_ = *(int *)local_118._0_8_ + -1;
      local_29 = *(int *)local_118._0_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007ae119;
    }
    iVar3 = *(int *)(local_118._0_8_ + 0xc);
    if (iVar3 != *(int *)(local_118._0_8_ + 8)) {
      lVar7 = (long)*(int *)(local_118._0_8_ + 8) * 8 + (long)iVar3 * -8;
      pDVar4 = (Data *)(local_118._0_8_ + (long)iVar3 * 8 + 8);
      do {
        pQVar6 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar6 == 0) {
LAB_1007ae0f8:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_29 = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar6 = *(QArrayData **)pDVar4;
            goto LAB_1007ae0f8;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose((Data *)uVar1);
  }
LAB_1007ae119:
  uVar1 = local_118._8_8_;
  if (*(int *)local_118._8_8_ != -1) {
    if (*(int *)local_118._8_8_ != 0) {
      LOCK();
      *(int *)local_118._8_8_ = *(int *)local_118._8_8_ + -1;
      local_29 = *(int *)local_118._8_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007ae1a3;
    }
    iVar3 = *(int *)(local_118._8_8_ + 0xc);
    if (iVar3 != *(int *)(local_118._8_8_ + 8)) {
      lVar7 = (long)*(int *)(local_118._8_8_ + 8) * 8 + (long)iVar3 * -8;
      pDVar4 = (Data *)(local_118._8_8_ + (long)iVar3 * 8 + 8);
      do {
        pQVar6 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar6 == 0) {
LAB_1007ae182:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_29 = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar6 = *(QArrayData **)pDVar4;
            goto LAB_1007ae182;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose((Data *)uVar1);
  }
LAB_1007ae1a3:
  QVariant::~QVariant(local_d0);
  if (local_f0[0] != (int *)0x0) {
    LOCK();
    *local_f0[0] = *local_f0[0] + -1;
    local_29 = *local_f0[0] != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_f0[0] != (int *)0x0)) {
      operator_delete(local_f0[0]);
    }
  }
LAB_1007ae1da:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return;
}

