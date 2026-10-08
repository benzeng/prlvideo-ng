
/* WARNING: Removing unreachable block (ram,0x0001002cc594) */
/* WARNING: Removing unreachable block (ram,0x0001002cc5a2) */
/* WARNING: Removing unreachable block (ram,0x0001002cc5ae) */

undefined8 FUN_1002cc450(long param_1)

{
  undefined *puVar1;
  AnonymousUnion0 AVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  Data *pDVar6;
  Data *pDVar7;
  QArrayData *pQVar8;
  uint in_stack_ffffffffffffff0c;
  Data_conflict local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  Data_conflict local_98;
  undefined4 local_90;
  QArrayData *local_88;
  int *local_80 [4];
  QVariant local_60 [2];
  Data *local_48;
  QArrayData *local_40;
  AnonymousUnion0 local_38 [2];
  
  uVar4 = FUN_100152280();
  lVar5 = FUN_1001548f0(uVar4,param_1 + 0x28);
  if (lVar5 == 0) {
    return 0x80000009;
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  iVar3 = CMessageManager::instance();
  puVar1 = PTR_shared_null_1021e15e8;
  local_38[0].field1 = (Data *)PTR_shared_null_1021e15e8;
  FUN_10018d830(&local_40,lVar5);
  FUN_1000341d0(local_38,&local_40);
  local_48 = (Data *)puVar1;
  local_88 = (QArrayData *)
             QString::fromAscii_helper
                       ("1onQuestionMessageClosed( PRL_RESULT, Messaging::ButtonID )",0x3b);
  local_90 = 0x80000000;
  local_98.field7 = 0;
  FUN_100a1c600(local_80,param_1,&local_88,&local_98);
  local_b0 = 0x80000000;
  local_b8.field7 = 0;
  local_a8 = 1;
  CMessageManager::showMessageBox
            (iVar3,(QString *)0x36c6,(QStringList *)(param_1 + 0x20),
             (QStringList *)&local_38[0].field0,(CSlotInfo *)&local_48,SUB81(local_80,0),
             (QWidget *)((ulong)in_stack_ffffffffffffff0c << 0x20),(CSlotInfo *)0x0);
  QVariant::~QVariant((QVariant *)&local_b8);
  QVariant::~QVariant(local_60);
  if (local_80[0] != (int *)0x0) {
    LOCK();
    *local_80[0] = *local_80[0] + -1;
    local_38[1]._7_1_ = *local_80[0] != 0;
    UNLOCK();
    if ((!(bool)local_38[1]._7_1_) && (local_80[0] != (int *)0x0)) {
      operator_delete(local_80[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_98);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38[1]._7_1_ = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_1002cc61d;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1002cc61d:
  pDVar7 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_38[1]._7_1_ = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_1002cc6b1;
    }
    iVar3 = *(int *)(local_48 + 0xc);
    if (iVar3 != *(int *)(local_48 + 8)) {
      lVar5 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar3 * -8;
      pDVar6 = local_48 + (long)iVar3 * 8 + 8;
      do {
        pQVar8 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar8 == 0) {
LAB_1002cc690:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_38[1]._7_1_ = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_38[1]._7_1_) {
            pQVar8 = *(QArrayData **)pDVar6;
            goto LAB_1002cc690;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar7);
  }
LAB_1002cc6b1:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_38[1]._7_1_ = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_1002cc6e1;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1002cc6e1:
  AVar2 = local_38[0];
  if (*(int *)local_38[0].field1 != -1) {
    if (*(int *)local_38[0].field1 != 0) {
      LOCK();
      *(int *)local_38[0].field1 = *(int *)local_38[0].field1 + -1;
      UNLOCK();
      if (*(int *)local_38[0].field1 != 0) {
        return 0;
      }
      local_38[1]._7_1_ = 0;
    }
    iVar3 = *(int *)(local_38[0].field1 + 0xc);
    if (iVar3 != *(int *)(local_38[0].field1 + 8)) {
      lVar5 = (long)*(int *)(local_38[0].field1 + 8) * 8 + (long)iVar3 * -8;
      pDVar7 = (Data *)(local_38[0].field1 + (long)iVar3 * 8 + 8);
      do {
        pQVar8 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar8 == 0) {
LAB_1002cc750:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_38[1]._7_1_ = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_38[1]._7_1_) {
            pQVar8 = *(QArrayData **)pDVar7;
            goto LAB_1002cc750;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose((Data *)AVar2.field1);
  }
  return 0;
}

