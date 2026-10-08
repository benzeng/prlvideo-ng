
/* WARNING: Removing unreachable block (ram,0x0001002cd424) */
/* WARNING: Removing unreachable block (ram,0x0001002cd432) */
/* WARNING: Removing unreachable block (ram,0x0001002cd43e) */

void FUN_1002cd1e0(long *param_1,long param_2)

{
  undefined *puVar1;
  AnonymousUnion0 AVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  Data *pDVar7;
  Data *pDVar8;
  QArrayData *pQVar9;
  bool bVar10;
  bool bVar11;
  uint in_stack_ffffffffffffff0c;
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
  AnonymousUnion0 local_60;
  AnonymousUnion0 local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  Data *local_40;
  undefined1 local_31;
  
  plVar4 = (long *)FUN_1002ccce0(*(undefined8 *)(param_2 + 0x180),param_1 + 3);
  if (plVar4 == (long *)0x0) {
    return;
  }
  iVar3 = CAbstractTask::getCurrentSubTask();
  if (iVar3 == 1) {
    iVar3 = (**(code **)(*plVar4 + 0xd8))(plVar4);
    bVar10 = iVar3 == 0;
  }
  else {
    bVar10 = false;
  }
  iVar3 = CAbstractTask::getCurrentSubTask();
  if (iVar3 == 2) {
    iVar3 = (**(code **)(*plVar4 + 0xd8))(plVar4);
    bVar11 = iVar3 == 1;
  }
  else {
    bVar11 = false;
  }
  if (!(bool)(bVar10 | bVar11)) {
    return;
  }
  QTimer::stop();
  puVar1 = PTR_shared_null_1021e15e8;
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  (**(code **)(*plVar4 + 0xa8))(&local_48,plVar4);
  FUN_1000341d0(&local_40,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002cd2d0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1002cd2d0:
  if (bVar11) {
    uVar5 = FUN_100152280();
    lVar6 = FUN_1001548f0(uVar5,param_1 + 4);
    if (lVar6 != 0) {
      uVar5 = FUN_100152280();
      uVar5 = FUN_1001548f0(uVar5,param_1 + 4);
      FUN_10018d830(&local_50,uVar5);
      FUN_1000341d0(&local_40,&local_50);
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002cd347;
        }
        QArrayData::deallocate(local_50,2,8);
      }
    }
  }
LAB_1002cd347:
  iVar3 = CMessageManager::instance();
  local_58.field1 = (Data *)PTR_shared_null_1021e1288;
  local_60.field1 = (Data *)puVar1;
  local_98 = (int *)0x0;
  uStack_90 = 0;
  local_80 = 0;
  local_88 = 0;
  local_70 = 0x80000000;
  local_78.field7 = 0;
  local_68 = 1;
  local_b0 = 0x80000000;
  local_b8.field7 = 0;
  local_a8 = 1;
  CMessageManager::showMessageBox
            (iVar3,(QString *)(ulong)(!bVar11 | 0x3c7c),(QStringList *)&local_58.field0,
             (QStringList *)&local_60.field0,(CSlotInfo *)&local_40,SUB81(&local_98,0),
             (QWidget *)((ulong)in_stack_ffffffffffffff0c << 0x20),(CSlotInfo *)0x0);
  QVariant::~QVariant((QVariant *)&local_b8);
  QVariant::~QVariant((QVariant *)&local_78);
  if (local_98 != (int *)0x0) {
    LOCK();
    *local_98 = *local_98 + -1;
    local_31 = *local_98 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_98 != (int *)0x0)) {
      operator_delete(local_98);
    }
  }
  AVar2 = local_60;
  if (*(int *)local_60.field1 != -1) {
    if (*(int *)local_60.field1 != 0) {
      LOCK();
      *(int *)local_60.field1 = *(int *)local_60.field1 + -1;
      local_31 = *(int *)local_60.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002cd501;
    }
    iVar3 = *(int *)(local_60.field1 + 0xc);
    if (iVar3 != *(int *)(local_60.field1 + 8)) {
      lVar6 = (long)*(int *)(local_60.field1 + 8) * 8 + (long)iVar3 * -8;
      pDVar7 = (Data *)(local_60.field1 + (long)iVar3 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_1002cd4e0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_1002cd4e0;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose((Data *)AVar2.field1);
  }
LAB_1002cd501:
  if (*(int *)local_58.field1 != -1) {
    if (*(int *)local_58.field1 != 0) {
      LOCK();
      *(int *)local_58.field1 = *(int *)local_58.field1 + -1;
      local_31 = *(int *)local_58.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002cd531;
    }
    QArrayData::deallocate((QArrayData *)local_58.field1,2,8);
  }
LAB_1002cd531:
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  pDVar7 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    iVar3 = *(int *)(local_40 + 0xc);
    if (iVar3 != *(int *)(local_40 + 8)) {
      lVar6 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar3 * -8;
      pDVar8 = local_40 + (long)iVar3 * 8 + 8;
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_1002cd5b0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_1002cd5b0;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(pDVar7);
  }
  return;
}

