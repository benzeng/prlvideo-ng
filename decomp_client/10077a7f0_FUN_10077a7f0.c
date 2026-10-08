
/* WARNING: Removing unreachable block (ram,0x00010077ab80) */
/* WARNING: Removing unreachable block (ram,0x00010077ab8e) */
/* WARNING: Removing unreachable block (ram,0x00010077ab9a) */

void FUN_10077a7f0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  Data *pDVar6;
  QArrayData *pQVar7;
  uint in_stack_fffffffffffffebc;
  Data_conflict local_108;
  undefined4 local_100;
  undefined1 local_f8;
  undefined1 local_e8 [24];
  AnonymousUnion0 local_d0;
  Data_conflict local_c8;
  bool local_c0;
  QArrayData *local_b8;
  int *local_b0 [4];
  QVariant local_90 [2];
  QVariant local_78;
  QString local_68;
  QString local_60;
  Data_conflict local_58;
  QString local_50 [2];
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  FUN_100779070();
  lVar4 = FUN_10077a740();
  if (lVar4 == 0) {
    return;
  }
  lVar5 = FUN_10098ae20();
  if (*(int *)(lVar5 + 0x14) != 1) {
    return;
  }
  lVar5 = FUN_10098ae20();
  if (3000 < *(int *)(lVar5 + 0x18)) {
    return;
  }
  QSettings::QSettings((QSettings *)local_50,(QObject *)0x0);
  local_68.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x10);
  if (1 < *(int *)local_68.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + 1;
    local_29 = *(int *)local_68.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0x1e2468c);
  QString::append(&local_68);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10077a8b2;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10077a8b2:
  local_60.field0_0x0 = local_68.field0_0x0;
  if (1 < *(int *)local_68.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + 1;
    local_29 = *(int *)local_68.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_60);
  local_58.field15 = (QObject *)local_60.field0_0x0;
  if (1 < *(int *)local_60.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
    local_29 = *(int *)local_60.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_38,0x1dec7bd);
  QString::append((QString *)&local_58);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10077a943;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10077a943:
  QVariant::QVariant(&local_78,1);
  QSettings::setValue(local_50,(QVariant *)&local_58);
  QVariant::~QVariant(&local_78);
  if (*(int *)local_58.field15 != -1) {
    if (*(int *)local_58.field15 != 0) {
      LOCK();
      *(int *)local_58.field15 = *(int *)local_58.field15 + -1;
      local_29 = *(int *)local_58.field15 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10077a99b;
    }
    QArrayData::deallocate((QArrayData *)local_58.field15,2,8);
  }
LAB_10077a99b:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_29 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10077a9cb;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_10077a9cb:
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_29 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10077a9fb;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_10077a9fb:
  QSettings::~QSettings((QSettings *)local_50);
  FUN_100774880(param_1);
  local_b8 = (QArrayData *)QString::fromAscii_helper("1onAnswerReceived()",0x13);
  local_c0 = 0x80000000;
  local_c8.field7 = 0;
  FUN_100a1c600(local_b0,param_1,&local_b8,&local_c8);
  QVariant::~QVariant((QVariant *)&local_c8);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_29 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10077aa98;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_10077aa98:
  iVar3 = CMessageManager::instance();
  puVar1 = PTR_shared_null_1021e15e8;
  local_d0.field1 = (Data *)PTR_shared_null_1021e1288;
  local_e8._16_8_ = PTR_shared_null_1021e15e8;
  FUN_10018d830(local_e8 + 8,lVar4);
  FUN_1000341d0(local_e8 + 0x10,local_e8 + 8);
  local_e8._0_8_ = puVar1;
  local_100 = 0x80000000;
  local_108.field7 = 0;
  local_f8 = 1;
  CMessageManager::showMessageBox
            (iVar3,(QString *)0x3c87,(QStringList *)&local_d0.field0,
             (QStringList *)(local_e8 + 0x10),(CSlotInfo *)local_e8,SUB81(local_b0,0),
             (QWidget *)((ulong)in_stack_fffffffffffffebc << 0x20),(CSlotInfo *)0x0);
  QVariant::~QVariant((QVariant *)&local_108);
  uVar2 = local_e8._0_8_;
  if (*(int *)local_e8._0_8_ != -1) {
    if (*(int *)local_e8._0_8_ != 0) {
      LOCK();
      *(int *)local_e8._0_8_ = *(int *)local_e8._0_8_ + -1;
      local_29 = *(int *)local_e8._0_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10077ac31;
    }
    iVar3 = *(int *)(local_e8._0_8_ + 0xc);
    if (iVar3 != *(int *)(local_e8._0_8_ + 8)) {
      lVar4 = (long)*(int *)(local_e8._0_8_ + 8) * 8 + (long)iVar3 * -8;
      pDVar6 = (Data *)(local_e8._0_8_ + (long)iVar3 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_10077ac10:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_29 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_10077ac10;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose((Data *)uVar2);
  }
LAB_10077ac31:
  if (*(int *)local_e8._8_8_ != -1) {
    if (*(int *)local_e8._8_8_ != 0) {
      LOCK();
      *(int *)local_e8._8_8_ = *(int *)local_e8._8_8_ + -1;
      local_29 = *(int *)local_e8._8_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10077ac67;
    }
    QArrayData::deallocate((QArrayData *)local_e8._8_8_,2,8);
  }
LAB_10077ac67:
  uVar2 = local_e8._16_8_;
  if (*(int *)local_e8._16_8_ != -1) {
    if (*(int *)local_e8._16_8_ != 0) {
      LOCK();
      *(int *)local_e8._16_8_ = *(int *)local_e8._16_8_ + -1;
      local_29 = *(int *)local_e8._16_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10077ad01;
    }
    iVar3 = *(int *)(local_e8._16_8_ + 0xc);
    if (iVar3 != *(int *)(local_e8._16_8_ + 8)) {
      lVar4 = (long)*(int *)(local_e8._16_8_ + 8) * 8 + (long)iVar3 * -8;
      pDVar6 = (Data *)(local_e8._16_8_ + (long)iVar3 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_10077ace0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_29 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_10077ace0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose((Data *)uVar2);
  }
LAB_10077ad01:
  if (*(int *)local_d0.field1 != -1) {
    if (*(int *)local_d0.field1 != 0) {
      LOCK();
      *(int *)local_d0.field1 = *(int *)local_d0.field1 + -1;
      local_29 = *(int *)local_d0.field1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10077ad37;
    }
    QArrayData::deallocate((QArrayData *)local_d0.field1,2,8);
  }
LAB_10077ad37:
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

