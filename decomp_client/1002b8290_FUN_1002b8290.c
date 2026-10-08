
/* WARNING: Removing unreachable block (ram,0x0001002b83f7) */
/* WARNING: Removing unreachable block (ram,0x0001002b8405) */
/* WARNING: Removing unreachable block (ram,0x0001002b8411) */

void FUN_1002b8290(long *param_1,int param_2)

{
  AnonymousUnion0 AVar1;
  int iVar2;
  Data *pDVar3;
  Data *pDVar4;
  undefined8 uVar5;
  QArrayData *pQVar6;
  long lVar7;
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
  AnonymousUnion0 local_40;
  AnonymousUnion0 local_38 [2];
  
  if (param_2 != 0) {
    if (param_2 == 2) {
      FUN_1002b7560(param_1);
      uVar5 = 0x80000009;
      if (*(int *)(param_1[0xb] + 0xc) != *(int *)(param_1[0xb] + 8)) {
        uVar5 = 0;
      }
                    /* WARNING: Could not recover jumptable at 0x0001002b82e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xb0))(param_1,uVar5);
      return;
    }
    if (param_2 != 3) {
      return;
    }
  }
  iVar2 = CMessageManager::instance();
  lVar7 = 0;
  if ((param_1[3] != 0) && (lVar7 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar7 = param_1[4];
  }
  FUN_100188480(local_38,lVar7);
  local_40.field1 = (Data *)PTR_shared_null_1021e15e8;
  local_48 = (Data *)PTR_shared_null_1021e15e8;
  local_88 = (QArrayData *)QString::fromAscii_helper("1subTaskCompleted(PRL_RESULT)",0x1d);
  local_90 = 0x80000000;
  local_98.field7 = 0;
  FUN_100a1c600(local_80,param_1,&local_88,&local_98);
  local_b0 = 0x80000000;
  local_b8.field7 = 0;
  local_a8 = 1;
  CMessageManager::showMessageBox
            (iVar2,(QString *)0x80015439,(QStringList *)&local_38[0].field0,
             (QStringList *)&local_40.field0,(CSlotInfo *)&local_48,SUB81(local_80,0),
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
      if ((bool)local_38[1]._7_1_) goto LAB_1002b8480;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1002b8480:
  pDVar4 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_38[1]._7_1_ = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_1002b8511;
    }
    iVar2 = *(int *)(local_48 + 0xc);
    if (iVar2 != *(int *)(local_48 + 8)) {
      lVar7 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar2 * -8;
      pDVar3 = local_48 + (long)iVar2 * 8 + 8;
      do {
        pQVar6 = *(QArrayData **)pDVar3;
        if (*(int *)pQVar6 == 0) {
LAB_1002b84f0:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_38[1]._7_1_ = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_38[1]._7_1_) {
            pQVar6 = *(QArrayData **)pDVar3;
            goto LAB_1002b84f0;
          }
        }
        pDVar3 = pDVar3 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose(pDVar4);
  }
LAB_1002b8511:
  AVar1 = local_40;
  if (*(int *)local_40.field1 != -1) {
    if (*(int *)local_40.field1 != 0) {
      LOCK();
      *(int *)local_40.field1 = *(int *)local_40.field1 + -1;
      local_38[1]._7_1_ = *(int *)local_40.field1 != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_1002b85a1;
    }
    iVar2 = *(int *)(local_40.field1 + 0xc);
    if (iVar2 != *(int *)(local_40.field1 + 8)) {
      lVar7 = (long)*(int *)(local_40.field1 + 8) * 8 + (long)iVar2 * -8;
      pDVar4 = (Data *)(local_40.field1 + (long)iVar2 * 8 + 8);
      do {
        pQVar6 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar6 == 0) {
LAB_1002b8580:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_38[1]._7_1_ = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_38[1]._7_1_) {
            pQVar6 = *(QArrayData **)pDVar4;
            goto LAB_1002b8580;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose((Data *)AVar1.field1);
  }
LAB_1002b85a1:
  if (*(int *)local_38[0].field1 != -1) {
    if (*(int *)local_38[0].field1 != 0) {
      LOCK();
      *(int *)local_38[0].field1 = *(int *)local_38[0].field1 + -1;
      UNLOCK();
      if (*(int *)local_38[0].field1 != 0) {
        return;
      }
      local_38[1]._7_1_ = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38[0].field1,2,8);
  }
  return;
}

