
/* WARNING: Removing unreachable block (ram,0x00010011a989) */
/* WARNING: Removing unreachable block (ram,0x00010011a997) */
/* WARNING: Removing unreachable block (ram,0x00010011a9a3) */

void FUN_10011a850(undefined8 param_1)

{
  undefined8 uVar1;
  AnonymousUnion0 AVar2;
  int iVar3;
  ulong uVar4;
  Data *pDVar5;
  Data *pDVar6;
  QArrayData *pQVar7;
  long lVar8;
  uint in_stack_fffffffffffffe8c;
  Data_conflict local_138;
  undefined4 local_130;
  undefined1 local_128;
  int *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_100;
  Data_conflict local_f8;
  undefined4 local_f0;
  undefined1 local_e8;
  undefined1 local_e0 [24];
  int *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  Data_conflict local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  int *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  Data_conflict local_68;
  undefined4 local_60;
  undefined1 local_58;
  Data *local_50;
  AnonymousUnion0 local_48;
  AnonymousUnion0 local_40 [2];
  
  uVar4 = FUN_10018d470();
  if ((uVar4 & 2) != 0) {
    iVar3 = CMessageManager::instance();
    FUN_100188480(local_40,param_1);
    local_48.field1 = (Data *)PTR_shared_null_1021e15e8;
    local_50 = (Data *)PTR_shared_null_1021e15e8;
    local_88 = (int *)0x0;
    uStack_80 = 0;
    local_70 = 0;
    local_78 = 0;
    local_60 = 0x80000000;
    local_68.field7 = 0;
    local_58 = 1;
    local_c8 = (int *)0x0;
    uStack_c0 = 0;
    local_b0 = 0;
    local_b8 = 0;
    local_a0 = 0x80000000;
    local_a8.field7 = 0;
    local_98 = 1;
    CMessageManager::showMessageBox
              (iVar3,(QString *)0x3b0d,(QStringList *)&local_40[0].field0,
               (QStringList *)&local_48.field0,(CSlotInfo *)&local_50,SUB81(&local_88,0),
               (QWidget *)((ulong)in_stack_fffffffffffffe8c << 0x20),(CSlotInfo *)0x0);
    QVariant::~QVariant((QVariant *)&local_a8);
    if (local_c8 != (int *)0x0) {
      LOCK();
      *local_c8 = *local_c8 + -1;
      local_40[1]._7_1_ = *local_c8 != 0;
      UNLOCK();
      if ((!(bool)local_40[1]._7_1_) && (local_c8 != (int *)0x0)) {
        operator_delete(local_c8);
      }
    }
    QVariant::~QVariant((QVariant *)&local_68);
    if (local_88 != (int *)0x0) {
      LOCK();
      *local_88 = *local_88 + -1;
      local_40[1]._7_1_ = *local_88 != 0;
      UNLOCK();
      if ((!(bool)local_40[1]._7_1_) && (local_88 != (int *)0x0)) {
        operator_delete(local_88);
      }
    }
    pDVar5 = local_50;
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_40[1]._7_1_ = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_40[1]._7_1_) goto LAB_10011acf1;
      }
      iVar3 = *(int *)(local_50 + 0xc);
      if (iVar3 != *(int *)(local_50 + 8)) {
        lVar8 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar3 * -8;
        pDVar6 = local_50 + (long)iVar3 * 8 + 8;
        do {
          pQVar7 = *(QArrayData **)pDVar6;
          if (*(int *)pQVar7 == 0) {
LAB_10011acd0:
            QArrayData::deallocate(pQVar7,2,8);
          }
          else if (*(int *)pQVar7 != -1) {
            LOCK();
            *(int *)pQVar7 = *(int *)pQVar7 + -1;
            local_40[1]._7_1_ = *(int *)pQVar7 != 0;
            UNLOCK();
            if (!(bool)local_40[1]._7_1_) {
              pQVar7 = *(QArrayData **)pDVar6;
              goto LAB_10011acd0;
            }
          }
          pDVar6 = pDVar6 + -8;
          lVar8 = lVar8 + 8;
        } while (lVar8 != 0);
      }
      QListData::dispose(pDVar5);
    }
LAB_10011acf1:
    AVar2 = local_48;
    if (*(int *)local_48.field1 != -1) {
      if (*(int *)local_48.field1 != 0) {
        LOCK();
        *(int *)local_48.field1 = *(int *)local_48.field1 + -1;
        local_40[1]._7_1_ = *(int *)local_48.field1 != 0;
        UNLOCK();
        if ((bool)local_40[1]._7_1_) goto LAB_10011ad81;
      }
      iVar3 = *(int *)(local_48.field1 + 0xc);
      if (iVar3 != *(int *)(local_48.field1 + 8)) {
        lVar8 = (long)*(int *)(local_48.field1 + 8) * 8 + (long)iVar3 * -8;
        pDVar5 = (Data *)(local_48.field1 + (long)iVar3 * 8 + 8);
        do {
          pQVar7 = *(QArrayData **)pDVar5;
          if (*(int *)pQVar7 == 0) {
LAB_10011ad60:
            QArrayData::deallocate(pQVar7,2,8);
          }
          else if (*(int *)pQVar7 != -1) {
            LOCK();
            *(int *)pQVar7 = *(int *)pQVar7 + -1;
            local_40[1]._7_1_ = *(int *)pQVar7 != 0;
            UNLOCK();
            if (!(bool)local_40[1]._7_1_) {
              pQVar7 = *(QArrayData **)pDVar5;
              goto LAB_10011ad60;
            }
          }
          pDVar5 = pDVar5 + -8;
          lVar8 = lVar8 + 8;
        } while (lVar8 != 0);
      }
      QListData::dispose((Data *)AVar2.field1);
    }
LAB_10011ad81:
    if (*(int *)local_40[0].field1 == -1) {
      return;
    }
    local_e0._16_8_ = local_40[0];
    if (*(int *)local_40[0].field1 != 0) {
      LOCK();
      *(int *)local_40[0].field1 = *(int *)local_40[0].field1 + -1;
      UNLOCK();
      if (*(int *)local_40[0].field1 != 0) {
        return;
      }
      local_40[1]._7_1_ = 0;
    }
    goto LAB_10011ada2;
  }
  uVar4 = FUN_10018d470(param_1);
  if ((uVar4 & 4) == 0) {
    return;
  }
  iVar3 = CMessageManager::instance();
  FUN_100188480((QStringList *)(local_e0 + 0x10),param_1);
  local_e0._8_8_ = PTR_shared_null_1021e15e8;
  local_e0._0_8_ = PTR_shared_null_1021e15e8;
  local_118 = (int *)0x0;
  uStack_110 = 0;
  local_100 = 0;
  local_108 = 0;
  local_f0 = 0x80000000;
  local_f8.field7 = 0;
  local_e8 = 1;
  local_130 = 0x80000000;
  local_138.field7 = 0;
  local_128 = 1;
  CMessageManager::showMessageBox
            (iVar3,(QString *)0x3b0e,(QStringList *)(local_e0 + 0x10),(QStringList *)(local_e0 + 8),
             (CSlotInfo *)local_e0,SUB81(&local_118,0),
             (QWidget *)((ulong)in_stack_fffffffffffffe8c << 0x20),(CSlotInfo *)0x0);
  QVariant::~QVariant((QVariant *)&local_138);
  QVariant::~QVariant((QVariant *)&local_f8);
  if (local_118 != (int *)0x0) {
    LOCK();
    *local_118 = *local_118 + -1;
    local_40[1]._7_1_ = *local_118 != 0;
    UNLOCK();
    if ((!(bool)local_40[1]._7_1_) && (local_118 != (int *)0x0)) {
      operator_delete(local_118);
    }
  }
  uVar1 = local_e0._0_8_;
  if (*(int *)local_e0._0_8_ != -1) {
    if (*(int *)local_e0._0_8_ != 0) {
      LOCK();
      *(int *)local_e0._0_8_ = *(int *)local_e0._0_8_ + -1;
      local_40[1]._7_1_ = *(int *)local_e0._0_8_ != 0;
      UNLOCK();
      if ((bool)local_40[1]._7_1_) goto LAB_10011aa71;
    }
    iVar3 = *(int *)(local_e0._0_8_ + 0xc);
    if (iVar3 != *(int *)(local_e0._0_8_ + 8)) {
      lVar8 = (long)*(int *)(local_e0._0_8_ + 8) * 8 + (long)iVar3 * -8;
      pDVar5 = (Data *)(local_e0._0_8_ + (long)iVar3 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar7 == 0) {
LAB_10011aa50:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_40[1]._7_1_ = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_40[1]._7_1_) {
            pQVar7 = *(QArrayData **)pDVar5;
            goto LAB_10011aa50;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)uVar1);
  }
LAB_10011aa71:
  uVar1 = local_e0._8_8_;
  if (*(int *)local_e0._8_8_ != -1) {
    if (*(int *)local_e0._8_8_ != 0) {
      LOCK();
      *(int *)local_e0._8_8_ = *(int *)local_e0._8_8_ + -1;
      local_40[1]._7_1_ = *(int *)local_e0._8_8_ != 0;
      UNLOCK();
      if ((bool)local_40[1]._7_1_) goto LAB_10011ab01;
    }
    iVar3 = *(int *)(local_e0._8_8_ + 0xc);
    if (iVar3 != *(int *)(local_e0._8_8_ + 8)) {
      lVar8 = (long)*(int *)(local_e0._8_8_ + 8) * 8 + (long)iVar3 * -8;
      pDVar5 = (Data *)(local_e0._8_8_ + (long)iVar3 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar7 == 0) {
LAB_10011aae0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_40[1]._7_1_ = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_40[1]._7_1_) {
            pQVar7 = *(QArrayData **)pDVar5;
            goto LAB_10011aae0;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)uVar1);
  }
LAB_10011ab01:
  if (*(int *)local_e0._16_8_ == -1) {
    return;
  }
  if (*(int *)local_e0._16_8_ != 0) {
    LOCK();
    *(int *)local_e0._16_8_ = *(int *)local_e0._16_8_ + -1;
    UNLOCK();
    if (*(int *)local_e0._16_8_ != 0) {
      return;
    }
    local_40[1]._7_1_ = 0;
  }
LAB_10011ada2:
  QArrayData::deallocate((QArrayData *)local_e0._16_8_,2,8);
  return;
}

