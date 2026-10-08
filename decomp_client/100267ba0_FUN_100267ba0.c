
/* WARNING: Removing unreachable block (ram,0x0001002682e0) */
/* WARNING: Removing unreachable block (ram,0x0001002682ee) */
/* WARNING: Removing unreachable block (ram,0x0001002682fa) */

undefined8 FUN_100267ba0(long param_1)

{
  AnonymousUnion0 AVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  Data *pDVar5;
  Data *pDVar6;
  QArrayData *pQVar7;
  long lVar8;
  uint in_stack_fffffffffffffdfc;
  Data_conflict local_1c8;
  undefined4 local_1c0;
  undefined1 local_1b8;
  int *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined4 local_190;
  Data_conflict local_188;
  undefined4 local_180;
  undefined1 local_178;
  undefined1 local_170 [24];
  int *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 local_140;
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
  Data *local_48;
  AnonymousUnion0 local_40;
  AnonymousUnion0 local_38 [2];
  
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar4 = FUN_10018c2b0(uVar4);
  cVar2 = FUN_100112cc0(uVar4);
  if (cVar2 == '\0') {
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_10018c2b0(uVar4);
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmRuntimeOptions();
    iVar3 = CVmRunTimeOptions::getUndoDisksModeEx();
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
    }
    if (iVar3 == 0) {
      cVar2 = FUN_10011a820(uVar4);
      if (cVar2 == '\0') {
        return 0;
      }
      uVar4 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar4 = *(undefined8 *)(param_1 + 0x20);
      }
      FUN_10011a850(uVar4);
      return 0x80000009;
    }
    cVar2 = FUN_10018f900();
    iVar3 = CMessageManager::instance();
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
    }
    if (cVar2 == '\0') {
      FUN_100188480((QStringList *)(local_170 + 0x10),uVar4);
      local_170._8_8_ = PTR_shared_null_1021e15e8;
      local_170._0_8_ = PTR_shared_null_1021e15e8;
      local_1a8 = (int *)0x0;
      uStack_1a0 = 0;
      local_190 = 0;
      local_198 = 0;
      local_180 = 0x80000000;
      local_188.field7 = 0;
      local_178 = 1;
      local_1c0 = 0x80000000;
      local_1c8.field7 = 0;
      local_1b8 = 1;
      CMessageManager::showMessageBox
                (iVar3,(QString *)0x80000429,(QStringList *)(local_170 + 0x10),
                 (QStringList *)(local_170 + 8),(CSlotInfo *)local_170,SUB81(&local_1a8,0),
                 (QWidget *)((ulong)in_stack_fffffffffffffdfc << 0x20),(CSlotInfo *)0x0);
      QVariant::~QVariant((QVariant *)&local_1c8);
      QVariant::~QVariant((QVariant *)&local_188);
      if (local_1a8 != (int *)0x0) {
        LOCK();
        *local_1a8 = *local_1a8 + -1;
        local_38[1]._7_1_ = *local_1a8 != 0;
        UNLOCK();
        if ((!(bool)local_38[1]._7_1_) && (local_1a8 != (int *)0x0)) {
          operator_delete(local_1a8);
        }
      }
      uVar4 = local_170._0_8_;
      if (*(int *)local_170._0_8_ != -1) {
        if (*(int *)local_170._0_8_ != 0) {
          LOCK();
          *(int *)local_170._0_8_ = *(int *)local_170._0_8_ + -1;
          local_38[1]._7_1_ = *(int *)local_170._0_8_ != 0;
          UNLOCK();
          if ((bool)local_38[1]._7_1_) goto LAB_1002683c1;
        }
        iVar3 = *(int *)(local_170._0_8_ + 0xc);
        if (iVar3 != *(int *)(local_170._0_8_ + 8)) {
          lVar8 = (long)*(int *)(local_170._0_8_ + 8) * 8 + (long)iVar3 * -8;
          pDVar6 = (Data *)(local_170._0_8_ + (long)iVar3 * 8 + 8);
          do {
            pQVar7 = *(QArrayData **)pDVar6;
            if (*(int *)pQVar7 == 0) {
LAB_1002683a0:
              QArrayData::deallocate(pQVar7,2,8);
            }
            else if (*(int *)pQVar7 != -1) {
              LOCK();
              *(int *)pQVar7 = *(int *)pQVar7 + -1;
              local_38[1]._7_1_ = *(int *)pQVar7 != 0;
              UNLOCK();
              if (!(bool)local_38[1]._7_1_) {
                pQVar7 = *(QArrayData **)pDVar6;
                goto LAB_1002683a0;
              }
            }
            pDVar6 = pDVar6 + -8;
            lVar8 = lVar8 + 8;
          } while (lVar8 != 0);
        }
        QListData::dispose((Data *)uVar4);
      }
LAB_1002683c1:
      uVar4 = local_170._8_8_;
      if (*(int *)local_170._8_8_ != -1) {
        if (*(int *)local_170._8_8_ != 0) {
          LOCK();
          *(int *)local_170._8_8_ = *(int *)local_170._8_8_ + -1;
          local_38[1]._7_1_ = *(int *)local_170._8_8_ != 0;
          UNLOCK();
          if ((bool)local_38[1]._7_1_) goto LAB_100268451;
        }
        iVar3 = *(int *)(local_170._8_8_ + 0xc);
        if (iVar3 != *(int *)(local_170._8_8_ + 8)) {
          lVar8 = (long)*(int *)(local_170._8_8_ + 8) * 8 + (long)iVar3 * -8;
          pDVar6 = (Data *)(local_170._8_8_ + (long)iVar3 * 8 + 8);
          do {
            pQVar7 = *(QArrayData **)pDVar6;
            if (*(int *)pQVar7 == 0) {
LAB_100268430:
              QArrayData::deallocate(pQVar7,2,8);
            }
            else if (*(int *)pQVar7 != -1) {
              LOCK();
              *(int *)pQVar7 = *(int *)pQVar7 + -1;
              local_38[1]._7_1_ = *(int *)pQVar7 != 0;
              UNLOCK();
              if (!(bool)local_38[1]._7_1_) {
                pQVar7 = *(QArrayData **)pDVar6;
                goto LAB_100268430;
              }
            }
            pDVar6 = pDVar6 + -8;
            lVar8 = lVar8 + 8;
          } while (lVar8 != 0);
        }
        QListData::dispose((Data *)uVar4);
      }
LAB_100268451:
      if (*(int *)local_170._16_8_ == -1) {
        return 0x80000009;
      }
      local_38[0] = (AnonymousUnion0)local_170._16_8_;
      if (*(int *)local_170._16_8_ != 0) {
        LOCK();
        *(int *)local_170._16_8_ = *(int *)local_170._16_8_ + -1;
        UNLOCK();
        if (*(int *)local_170._16_8_ != 0) {
          return 0x80000009;
        }
        local_38[1]._7_1_ = 0;
      }
      goto LAB_10026847e;
    }
    FUN_100188480((QStringList *)(local_e0 + 0x10),uVar4);
    local_e0._8_8_ = PTR_shared_null_1021e15e8;
    local_e0._0_8_ = PTR_shared_null_1021e15e8;
    local_118 = (int *)0x0;
    uStack_110 = 0;
    local_100 = 0;
    local_108 = 0;
    local_f0 = 0x80000000;
    local_f8.field7 = 0;
    local_e8 = 1;
    local_158 = (int *)0x0;
    uStack_150 = 0;
    local_140 = 0;
    local_148 = 0;
    local_130 = 0x80000000;
    local_138.field7 = 0;
    local_128 = 1;
    CMessageManager::showMessageBox
              (iVar3,(QString *)0x80000440,(QStringList *)(local_e0 + 0x10),
               (QStringList *)(local_e0 + 8),(CSlotInfo *)local_e0,SUB81(&local_118,0),
               (QWidget *)((ulong)in_stack_fffffffffffffdfc << 0x20),(CSlotInfo *)0x0);
    QVariant::~QVariant((QVariant *)&local_138);
    if (local_158 != (int *)0x0) {
      LOCK();
      *local_158 = *local_158 + -1;
      local_38[1]._7_1_ = *local_158 != 0;
      UNLOCK();
      if ((!(bool)local_38[1]._7_1_) && (local_158 != (int *)0x0)) {
        operator_delete(local_158);
      }
    }
    QVariant::~QVariant((QVariant *)&local_f8);
    if (local_118 != (int *)0x0) {
      LOCK();
      *local_118 = *local_118 + -1;
      local_38[1]._7_1_ = *local_118 != 0;
      UNLOCK();
      if ((!(bool)local_38[1]._7_1_) && (local_118 != (int *)0x0)) {
        operator_delete(local_118);
      }
    }
    uVar4 = local_e0._0_8_;
    if (*(int *)local_e0._0_8_ != -1) {
      if (*(int *)local_e0._0_8_ != 0) {
        LOCK();
        *(int *)local_e0._0_8_ = *(int *)local_e0._0_8_ + -1;
        local_38[1]._7_1_ = *(int *)local_e0._0_8_ != 0;
        UNLOCK();
        if ((bool)local_38[1]._7_1_) goto LAB_1002680e1;
      }
      iVar3 = *(int *)(local_e0._0_8_ + 0xc);
      if (iVar3 != *(int *)(local_e0._0_8_ + 8)) {
        lVar8 = (long)*(int *)(local_e0._0_8_ + 8) * 8 + (long)iVar3 * -8;
        pDVar6 = (Data *)(local_e0._0_8_ + (long)iVar3 * 8 + 8);
        do {
          pQVar7 = *(QArrayData **)pDVar6;
          if (*(int *)pQVar7 == 0) {
LAB_1002680c0:
            QArrayData::deallocate(pQVar7,2,8);
          }
          else if (*(int *)pQVar7 != -1) {
            LOCK();
            *(int *)pQVar7 = *(int *)pQVar7 + -1;
            local_38[1]._7_1_ = *(int *)pQVar7 != 0;
            UNLOCK();
            if (!(bool)local_38[1]._7_1_) {
              pQVar7 = *(QArrayData **)pDVar6;
              goto LAB_1002680c0;
            }
          }
          pDVar6 = pDVar6 + -8;
          lVar8 = lVar8 + 8;
        } while (lVar8 != 0);
      }
      QListData::dispose((Data *)uVar4);
    }
LAB_1002680e1:
    uVar4 = local_e0._8_8_;
    if (*(int *)local_e0._8_8_ != -1) {
      if (*(int *)local_e0._8_8_ != 0) {
        LOCK();
        *(int *)local_e0._8_8_ = *(int *)local_e0._8_8_ + -1;
        local_38[1]._7_1_ = *(int *)local_e0._8_8_ != 0;
        UNLOCK();
        if ((bool)local_38[1]._7_1_) goto LAB_100268171;
      }
      iVar3 = *(int *)(local_e0._8_8_ + 0xc);
      if (iVar3 != *(int *)(local_e0._8_8_ + 8)) {
        lVar8 = (long)*(int *)(local_e0._8_8_ + 8) * 8 + (long)iVar3 * -8;
        pDVar6 = (Data *)(local_e0._8_8_ + (long)iVar3 * 8 + 8);
        do {
          pQVar7 = *(QArrayData **)pDVar6;
          if (*(int *)pQVar7 == 0) {
LAB_100268150:
            QArrayData::deallocate(pQVar7,2,8);
          }
          else if (*(int *)pQVar7 != -1) {
            LOCK();
            *(int *)pQVar7 = *(int *)pQVar7 + -1;
            local_38[1]._7_1_ = *(int *)pQVar7 != 0;
            UNLOCK();
            if (!(bool)local_38[1]._7_1_) {
              pQVar7 = *(QArrayData **)pDVar6;
              goto LAB_100268150;
            }
          }
          pDVar6 = pDVar6 + -8;
          lVar8 = lVar8 + 8;
        } while (lVar8 != 0);
      }
      QListData::dispose((Data *)uVar4);
    }
LAB_100268171:
    if (*(int *)local_e0._16_8_ == -1) {
      return 0x80000009;
    }
    local_38[0] = (AnonymousUnion0)local_e0._16_8_;
    if (*(int *)local_e0._16_8_ != 0) {
      LOCK();
      *(int *)local_e0._16_8_ = *(int *)local_e0._16_8_ + -1;
      UNLOCK();
      if (*(int *)local_e0._16_8_ != 0) {
        return 0x80000009;
      }
      local_38[1]._7_1_ = 0;
    }
    goto LAB_10026847e;
  }
  iVar3 = CMessageManager::instance();
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100188480(local_38,uVar4);
  local_40.field1 = (Data *)PTR_shared_null_1021e15e8;
  local_48 = (Data *)PTR_shared_null_1021e15e8;
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
            (iVar3,(QString *)0x3ae1,(QStringList *)&local_38[0].field0,
             (QStringList *)&local_40.field0,(CSlotInfo *)&local_48,SUB81(&local_88,0),
             (QWidget *)((ulong)in_stack_fffffffffffffdfc << 0x20),(CSlotInfo *)0x0);
  QVariant::~QVariant((QVariant *)&local_a8);
  if (local_c8 != (int *)0x0) {
    LOCK();
    *local_c8 = *local_c8 + -1;
    local_38[1]._7_1_ = *local_c8 != 0;
    UNLOCK();
    if ((!(bool)local_38[1]._7_1_) && (local_c8 != (int *)0x0)) {
      operator_delete(local_c8);
    }
  }
  QVariant::~QVariant((QVariant *)&local_68);
  if (local_88 != (int *)0x0) {
    LOCK();
    *local_88 = *local_88 + -1;
    local_38[1]._7_1_ = *local_88 != 0;
    UNLOCK();
    if ((!(bool)local_38[1]._7_1_) && (local_88 != (int *)0x0)) {
      operator_delete(local_88);
    }
  }
  pDVar6 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_38[1]._7_1_ = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_100267db1;
    }
    iVar3 = *(int *)(local_48 + 0xc);
    if (iVar3 != *(int *)(local_48 + 8)) {
      lVar8 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar3 * -8;
      pDVar5 = local_48 + (long)iVar3 * 8 + 8;
      do {
        pQVar7 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar7 == 0) {
LAB_100267d90:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_38[1]._7_1_ = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_38[1]._7_1_) {
            pQVar7 = *(QArrayData **)pDVar5;
            goto LAB_100267d90;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose(pDVar6);
  }
LAB_100267db1:
  AVar1 = local_40;
  if (*(int *)local_40.field1 != -1) {
    if (*(int *)local_40.field1 != 0) {
      LOCK();
      *(int *)local_40.field1 = *(int *)local_40.field1 + -1;
      local_38[1]._7_1_ = *(int *)local_40.field1 != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_100267e41;
    }
    iVar3 = *(int *)(local_40.field1 + 0xc);
    if (iVar3 != *(int *)(local_40.field1 + 8)) {
      lVar8 = (long)*(int *)(local_40.field1 + 8) * 8 + (long)iVar3 * -8;
      pDVar6 = (Data *)(local_40.field1 + (long)iVar3 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_100267e20:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_38[1]._7_1_ = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_38[1]._7_1_) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_100267e20;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar1.field1);
  }
LAB_100267e41:
  if (*(int *)local_38[0].field1 == -1) {
    return 0x80000009;
  }
  if (*(int *)local_38[0].field1 != 0) {
    LOCK();
    *(int *)local_38[0].field1 = *(int *)local_38[0].field1 + -1;
    UNLOCK();
    if (*(int *)local_38[0].field1 != 0) {
      return 0x80000009;
    }
    local_38[1]._7_1_ = 0;
  }
LAB_10026847e:
  QArrayData::deallocate((QArrayData *)local_38[0].field1,2,8);
  return 0x80000009;
}

