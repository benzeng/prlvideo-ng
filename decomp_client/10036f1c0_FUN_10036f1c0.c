
/* WARNING: Removing unreachable block (ram,0x00010036f3f4) */
/* WARNING: Removing unreachable block (ram,0x00010036f402) */
/* WARNING: Removing unreachable block (ram,0x00010036f40e) */

void FUN_10036f1c0(long param_1)

{
  QStringList *pQVar1;
  undefined *puVar2;
  AnonymousUnion0 AVar3;
  int iVar4;
  int iVar5;
  CTaskGenericId *pCVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  CSlotInfo *pCVar10;
  Data *pDVar11;
  QArrayData *pQVar12;
  uint in_stack_fffffffffffffeec;
  Data_conflict local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  QVariant local_c0;
  QArrayData *local_b0;
  int *local_a8 [4];
  QVariant local_88 [2];
  undefined1 local_70 [24];
  AnonymousUnion0 local_58;
  CTaskGenericId local_50 [31];
  undefined1 local_31;
  
  pQVar1 = (QStringList *)(param_1 + 0x40);
  FUN_1002450f0(local_50,pQVar1);
  pCVar6 = (CTaskGenericId *)CTaskManager::instance();
  lVar7 = CTaskManager::getTaskById(pCVar6);
  if (lVar7 == 0) goto LAB_10036f591;
  uVar8 = FUN_100152280();
  lVar9 = FUN_1001548f0(uVar8,pQVar1);
  puVar2 = PTR_shared_null_1021e15e8;
  if (lVar9 == 0) goto LAB_10036f591;
  local_58.field1 = (Data *)PTR_shared_null_1021e15e8;
  FUN_10018d830(local_70 + 0x10,lVar9);
  FUN_1000341d0(&local_58,local_70 + 0x10);
  if (*(int *)local_70._16_8_ != -1) {
    if (*(int *)local_70._16_8_ != 0) {
      LOCK();
      *(int *)local_70._16_8_ = *(int *)local_70._16_8_ + -1;
      local_31 = *(int *)local_70._16_8_ != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10036f275;
    }
    QArrayData::deallocate((QArrayData *)local_70._16_8_,2,8);
  }
LAB_10036f275:
  iVar4 = FUN_100243ee0(lVar7);
  if (iVar4 == 0) {
    FUN_100116020(local_70 + 8);
  }
  else {
    FUN_1001160f0(local_70 + 8);
  }
  local_70._0_8_ = puVar2;
  FUN_1000341d0(local_70,local_70 + 8);
  local_b0 = (QArrayData *)
             QString::fromAscii_helper
                       ("1onEnterManualModeAnswered(PRL_RESULT, Messaging::ButtonID, const QVariant&)"
                        ,0x4c);
  QVariant::QVariant(&local_c0,10,local_70 + 8,0);
  FUN_100a1c600(local_a8,param_1,&local_b0,&local_c0);
  QVariant::~QVariant(&local_c0);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10036f334;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_10036f334:
  iVar4 = CMessageManager::instance();
  iVar5 = FUN_10018ffe0(lVar9);
  pCVar10 = (CSlotInfo *)0x0;
  if ((*(long *)(param_1 + 0x48) != 0) &&
     (pCVar10 = (CSlotInfo *)0x0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) {
    pCVar10 = *(CSlotInfo **)(param_1 + 0x50);
  }
  local_d0 = 0x80000000;
  local_d8.field7 = 0;
  local_c8 = 1;
  CMessageManager::showMessageBox
            (iVar4,(QString *)((ulong)(iVar5 != 0) * 9 + 0x3ae6),pQVar1,
             (QStringList *)&local_58.field0,(CSlotInfo *)local_70,SUB81(local_a8,0),
             (QWidget *)((ulong)in_stack_fffffffffffffeec << 0x20),pCVar10);
  QVariant::~QVariant((QVariant *)&local_d8);
  QVariant::~QVariant(local_88);
  if (local_a8[0] != (int *)0x0) {
    LOCK();
    *local_a8[0] = *local_a8[0] + -1;
    local_31 = *local_a8[0] != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_a8[0] != (int *)0x0)) {
      operator_delete(local_a8[0]);
    }
  }
  uVar8 = local_70._0_8_;
  if (*(int *)local_70._0_8_ != -1) {
    if (*(int *)local_70._0_8_ != 0) {
      LOCK();
      *(int *)local_70._0_8_ = *(int *)local_70._0_8_ + -1;
      local_31 = *(int *)local_70._0_8_ != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10036f4d1;
    }
    iVar4 = *(int *)(local_70._0_8_ + 0xc);
    if (iVar4 != *(int *)(local_70._0_8_ + 8)) {
      lVar7 = (long)*(int *)(local_70._0_8_ + 8) * 8 + (long)iVar4 * -8;
      pDVar11 = (Data *)(local_70._0_8_ + (long)iVar4 * 8 + 8);
      do {
        pQVar12 = *(QArrayData **)pDVar11;
        if (*(int *)pQVar12 == 0) {
LAB_10036f4b0:
          QArrayData::deallocate(pQVar12,2,8);
        }
        else if (*(int *)pQVar12 != -1) {
          LOCK();
          *(int *)pQVar12 = *(int *)pQVar12 + -1;
          local_31 = *(int *)pQVar12 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar12 = *(QArrayData **)pDVar11;
            goto LAB_10036f4b0;
          }
        }
        pDVar11 = pDVar11 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose((Data *)uVar8);
  }
LAB_10036f4d1:
  if (*(int *)local_70._8_8_ != -1) {
    if (*(int *)local_70._8_8_ != 0) {
      LOCK();
      *(int *)local_70._8_8_ = *(int *)local_70._8_8_ + -1;
      local_31 = *(int *)local_70._8_8_ != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10036f501;
    }
    QArrayData::deallocate((QArrayData *)local_70._8_8_,2,8);
  }
LAB_10036f501:
  AVar3 = local_58;
  if (*(int *)local_58.field1 != -1) {
    if (*(int *)local_58.field1 != 0) {
      LOCK();
      *(int *)local_58.field1 = *(int *)local_58.field1 + -1;
      local_31 = *(int *)local_58.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10036f591;
    }
    iVar4 = *(int *)(local_58.field1 + 0xc);
    if (iVar4 != *(int *)(local_58.field1 + 8)) {
      lVar7 = (long)*(int *)(local_58.field1 + 8) * 8 + (long)iVar4 * -8;
      pDVar11 = (Data *)(local_58.field1 + (long)iVar4 * 8 + 8);
      do {
        pQVar12 = *(QArrayData **)pDVar11;
        if (*(int *)pQVar12 == 0) {
LAB_10036f570:
          QArrayData::deallocate(pQVar12,2,8);
        }
        else if (*(int *)pQVar12 != -1) {
          LOCK();
          *(int *)pQVar12 = *(int *)pQVar12 + -1;
          local_31 = *(int *)pQVar12 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar12 = *(QArrayData **)pDVar11;
            goto LAB_10036f570;
          }
        }
        pDVar11 = pDVar11 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose((Data *)AVar3.field1);
  }
LAB_10036f591:
  CTaskGenericId::~CTaskGenericId(local_50);
  return;
}

