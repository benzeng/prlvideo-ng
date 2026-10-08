
void FUN_10034b700(long param_1,char param_2)

{
  AnonymousUnion0 AVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  Data *pDVar7;
  Data *pDVar8;
  QArrayData *pQVar9;
  uint in_stack_fffffffffffffe7c;
  QDateTime local_170;
  int *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 local_150;
  Data_conflict local_148;
  undefined4 local_140;
  undefined1 local_138;
  int *local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  Data_conflict local_108;
  undefined4 local_100;
  undefined1 local_f8;
  undefined1 local_f0 [24];
  int *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  Data_conflict local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  int *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  Data_conflict local_78;
  undefined4 local_70;
  undefined1 local_68;
  Data *local_58;
  QArrayData *local_50;
  AnonymousUnion0 local_48;
  AnonymousUnion0 local_40 [2];
  
  lVar4 = QDateTime::currentMSecsSinceEpoch();
  lVar5 = QDateTime::toMSecsSinceEpoch();
  if ((lVar4 - lVar5 < 1800000) && (param_2 == '\0')) {
    return;
  }
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar6 = FUN_100319390(uVar6);
  uVar2 = FUN_10018f890(uVar6);
  iVar3 = CMessageManager::instance();
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x18);
  }
  if (uVar2 < 0x80f) {
    FUN_1003193e0((QStringList *)(local_f0 + 0x10),uVar6);
    local_f0._8_8_ = PTR_shared_null_1021e15e8;
    local_f0._0_8_ = PTR_shared_null_1021e15e8;
    local_128 = (int *)0x0;
    uStack_120 = 0;
    local_110 = 0;
    local_118 = 0;
    local_100 = 0x80000000;
    local_108.field7 = 0;
    local_f8 = 1;
    local_168 = (int *)0x0;
    uStack_160 = 0;
    local_150 = 0;
    local_158 = 0;
    local_140 = 0x80000000;
    local_148.field7 = 0;
    local_138 = 1;
    CMessageManager::showMessageBox
              (iVar3,(QString *)0x3c5f,(QStringList *)(local_f0 + 0x10),
               (QStringList *)(local_f0 + 8),(CSlotInfo *)local_f0,SUB81(&local_128,0),
               (QWidget *)((ulong)in_stack_fffffffffffffe7c << 0x20),(CSlotInfo *)0x0);
    QVariant::~QVariant((QVariant *)&local_148);
    if (local_168 != (int *)0x0) {
      LOCK();
      *local_168 = *local_168 + -1;
      local_40[1]._7_1_ = *local_168 != 0;
      UNLOCK();
      if ((!(bool)local_40[1]._7_1_) && (local_168 != (int *)0x0)) {
        operator_delete(local_168);
      }
    }
    QVariant::~QVariant((QVariant *)&local_108);
    if (local_128 != (int *)0x0) {
      LOCK();
      *local_128 = *local_128 + -1;
      local_40[1]._7_1_ = *local_128 != 0;
      UNLOCK();
      if ((!(bool)local_40[1]._7_1_) && (local_128 != (int *)0x0)) {
        operator_delete(local_128);
      }
    }
    uVar6 = local_f0._0_8_;
    if (*(int *)local_f0._0_8_ != -1) {
      if (*(int *)local_f0._0_8_ != 0) {
        LOCK();
        *(int *)local_f0._0_8_ = *(int *)local_f0._0_8_ + -1;
        local_40[1]._7_1_ = *(int *)local_f0._0_8_ != 0;
        UNLOCK();
        if ((bool)local_40[1]._7_1_) goto LAB_10034bc51;
      }
      iVar3 = *(int *)(local_f0._0_8_ + 0xc);
      if (iVar3 != *(int *)(local_f0._0_8_ + 8)) {
        lVar4 = (long)*(int *)(local_f0._0_8_ + 8) * 8 + (long)iVar3 * -8;
        pDVar8 = (Data *)(local_f0._0_8_ + (long)iVar3 * 8 + 8);
        do {
          pQVar9 = *(QArrayData **)pDVar8;
          if (*(int *)pQVar9 == 0) {
LAB_10034bc30:
            QArrayData::deallocate(pQVar9,2,8);
          }
          else if (*(int *)pQVar9 != -1) {
            LOCK();
            *(int *)pQVar9 = *(int *)pQVar9 + -1;
            local_40[1]._7_1_ = *(int *)pQVar9 != 0;
            UNLOCK();
            if (!(bool)local_40[1]._7_1_) {
              pQVar9 = *(QArrayData **)pDVar8;
              goto LAB_10034bc30;
            }
          }
          pDVar8 = pDVar8 + -8;
          lVar4 = lVar4 + 8;
        } while (lVar4 != 0);
      }
      QListData::dispose((Data *)uVar6);
    }
LAB_10034bc51:
    uVar6 = local_f0._8_8_;
    if (*(int *)local_f0._8_8_ != -1) {
      if (*(int *)local_f0._8_8_ != 0) {
        LOCK();
        *(int *)local_f0._8_8_ = *(int *)local_f0._8_8_ + -1;
        local_40[1]._7_1_ = *(int *)local_f0._8_8_ != 0;
        UNLOCK();
        if ((bool)local_40[1]._7_1_) goto LAB_10034bce1;
      }
      iVar3 = *(int *)(local_f0._8_8_ + 0xc);
      if (iVar3 != *(int *)(local_f0._8_8_ + 8)) {
        lVar4 = (long)*(int *)(local_f0._8_8_ + 8) * 8 + (long)iVar3 * -8;
        pDVar8 = (Data *)(local_f0._8_8_ + (long)iVar3 * 8 + 8);
        do {
          pQVar9 = *(QArrayData **)pDVar8;
          if (*(int *)pQVar9 == 0) {
LAB_10034bcc0:
            QArrayData::deallocate(pQVar9,2,8);
          }
          else if (*(int *)pQVar9 != -1) {
            LOCK();
            *(int *)pQVar9 = *(int *)pQVar9 + -1;
            local_40[1]._7_1_ = *(int *)pQVar9 != 0;
            UNLOCK();
            if (!(bool)local_40[1]._7_1_) {
              pQVar9 = *(QArrayData **)pDVar8;
              goto LAB_10034bcc0;
            }
          }
          pDVar8 = pDVar8 + -8;
          lVar4 = lVar4 + 8;
        } while (lVar4 != 0);
      }
      QListData::dispose((Data *)uVar6);
    }
LAB_10034bce1:
    if (*(int *)local_f0._16_8_ == -1) goto LAB_10034bd17;
    local_40[0] = (AnonymousUnion0)local_f0._16_8_;
    if (*(int *)local_f0._16_8_ != 0) {
      LOCK();
      *(int *)local_f0._16_8_ = *(int *)local_f0._16_8_ + -1;
      iVar3 = *(int *)local_f0._16_8_;
      UNLOCK();
      goto joined_r0x00010034bcff;
    }
  }
  else {
    FUN_1003193e0(local_40,uVar6);
    local_58 = (Data *)PTR_shared_null_1021e15e8;
    local_48.field1 = (Data *)PTR_shared_null_1021e15e8;
    uVar6 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x18);
    }
    FUN_100319410(&local_50,uVar6);
    FUN_1000341d0(&local_48,&local_50);
    local_98 = (int *)0x0;
    uStack_90 = 0;
    local_80 = 0;
    local_88 = 0;
    local_70 = 0x80000000;
    local_78.field7 = 0;
    local_68 = 1;
    local_d8 = (int *)0x0;
    uStack_d0 = 0;
    local_c0 = 0;
    local_c8 = 0;
    local_b0 = 0x80000000;
    local_b8.field7 = 0;
    local_a8 = 1;
    CMessageManager::showMessageBox
              (iVar3,(QString *)0x3c97,(QStringList *)&local_40[0].field0,
               (QStringList *)&local_48.field0,(CSlotInfo *)&local_58,SUB81(&local_98,0),
               (QWidget *)((ulong)in_stack_fffffffffffffe7c << 0x20),(CSlotInfo *)0x0);
    QVariant::~QVariant((QVariant *)&local_b8);
    if (local_d8 != (int *)0x0) {
      LOCK();
      *local_d8 = *local_d8 + -1;
      local_40[1]._7_1_ = *local_d8 != 0;
      UNLOCK();
      if ((!(bool)local_40[1]._7_1_) && (local_d8 != (int *)0x0)) {
        operator_delete(local_d8);
      }
    }
    QVariant::~QVariant((QVariant *)&local_78);
    if (local_98 != (int *)0x0) {
      LOCK();
      *local_98 = *local_98 + -1;
      local_40[1]._7_1_ = *local_98 != 0;
      UNLOCK();
      if ((!(bool)local_40[1]._7_1_) && (local_98 != (int *)0x0)) {
        operator_delete(local_98);
      }
    }
    pDVar8 = local_58;
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_40[1]._7_1_ = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_40[1]._7_1_) goto LAB_10034b981;
      }
      iVar3 = *(int *)(local_58 + 0xc);
      if (iVar3 != *(int *)(local_58 + 8)) {
        lVar4 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar3 * -8;
        pDVar7 = local_58 + (long)iVar3 * 8 + 8;
        do {
          pQVar9 = *(QArrayData **)pDVar7;
          if (*(int *)pQVar9 == 0) {
LAB_10034b960:
            QArrayData::deallocate(pQVar9,2,8);
          }
          else if (*(int *)pQVar9 != -1) {
            LOCK();
            *(int *)pQVar9 = *(int *)pQVar9 + -1;
            local_40[1]._7_1_ = *(int *)pQVar9 != 0;
            UNLOCK();
            if (!(bool)local_40[1]._7_1_) {
              pQVar9 = *(QArrayData **)pDVar7;
              goto LAB_10034b960;
            }
          }
          pDVar7 = pDVar7 + -8;
          lVar4 = lVar4 + 8;
        } while (lVar4 != 0);
      }
      QListData::dispose(pDVar8);
    }
LAB_10034b981:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_40[1]._7_1_ = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_40[1]._7_1_) goto LAB_10034b9b1;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_10034b9b1:
    AVar1 = local_48;
    if (*(int *)local_48.field1 != -1) {
      if (*(int *)local_48.field1 != 0) {
        LOCK();
        *(int *)local_48.field1 = *(int *)local_48.field1 + -1;
        local_40[1]._7_1_ = *(int *)local_48.field1 != 0;
        UNLOCK();
        if ((bool)local_40[1]._7_1_) goto LAB_10034ba41;
      }
      iVar3 = *(int *)(local_48.field1 + 0xc);
      if (iVar3 != *(int *)(local_48.field1 + 8)) {
        lVar4 = (long)*(int *)(local_48.field1 + 8) * 8 + (long)iVar3 * -8;
        pDVar8 = (Data *)(local_48.field1 + (long)iVar3 * 8 + 8);
        do {
          pQVar9 = *(QArrayData **)pDVar8;
          if (*(int *)pQVar9 == 0) {
LAB_10034ba20:
            QArrayData::deallocate(pQVar9,2,8);
          }
          else if (*(int *)pQVar9 != -1) {
            LOCK();
            *(int *)pQVar9 = *(int *)pQVar9 + -1;
            local_40[1]._7_1_ = *(int *)pQVar9 != 0;
            UNLOCK();
            if (!(bool)local_40[1]._7_1_) {
              pQVar9 = *(QArrayData **)pDVar8;
              goto LAB_10034ba20;
            }
          }
          pDVar8 = pDVar8 + -8;
          lVar4 = lVar4 + 8;
        } while (lVar4 != 0);
      }
      QListData::dispose((Data *)AVar1.field1);
    }
LAB_10034ba41:
    if (*(int *)local_40[0].field1 == -1) goto LAB_10034bd17;
    if (*(int *)local_40[0].field1 != 0) {
      LOCK();
      *(int *)local_40[0].field1 = *(int *)local_40[0].field1 + -1;
      iVar3 = *(int *)local_40[0].field1;
      UNLOCK();
joined_r0x00010034bcff:
      local_40[1]._7_1_ = iVar3 != 0;
      if ((bool)local_40[1]._7_1_) goto LAB_10034bd17;
    }
  }
  QArrayData::deallocate((QArrayData *)local_40[0].field1,2,8);
LAB_10034bd17:
  QDateTime::currentDateTime();
  QDateTime::operator=((QDateTime *)(param_1 + 0x20),&local_170);
  QDateTime::~QDateTime(&local_170);
  return;
}

