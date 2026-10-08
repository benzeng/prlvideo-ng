
/* WARNING: Removing unreachable block (ram,0x000100351490) */
/* WARNING: Removing unreachable block (ram,0x00010035149e) */
/* WARNING: Removing unreachable block (ram,0x0001003514aa) */

void FUN_100351240(long param_1,int param_2)

{
  undefined8 *puVar1;
  AnonymousUnion0 AVar2;
  int iVar3;
  uint *puVar4;
  QObject *pQVar5;
  int *piVar6;
  Data *pDVar7;
  Data *pDVar8;
  QArrayData *pQVar9;
  uint *puVar10;
  long lVar11;
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
  QArrayData *local_60;
  Data *local_58;
  AnonymousUnion0 local_50;
  AnonymousUnion0 local_48;
  QArrayData *local_40 [2];
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    return;
  }
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    FUN_100830fb0(param_1);
    return;
  }
  puVar1 = (undefined8 *)(param_1 + 0x20);
  puVar4 = *(uint **)(param_1 + 0x20);
  if (1 < *puVar4) {
    FUN_100352c30(puVar1,puVar4[1]);
    puVar4 = (uint *)*puVar1;
  }
  puVar10 = puVar4 + (long)(int)puVar4[2] * 2 + 4;
  while( true ) {
    if (1 < *puVar4) {
      FUN_100352c30(puVar1,puVar4[1]);
      puVar4 = (uint *)*puVar1;
    }
    if (puVar10 == puVar4 + (long)(int)puVar4[3] * 2 + 4) break;
    pQVar5 = (QObject *)FUN_10018f120(*(undefined8 *)(param_1 + 0x10),8,**(undefined4 **)puVar10);
    if ((pQVar5 != (QObject *)0x0) &&
       (piVar6 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar5),
       piVar6 != (int *)0x0)) {
      if (piVar6[1] != 0) {
        local_40[0] = (QArrayData *)QString::fromAscii_helper("Shared Network",0xe);
        FUN_100149970(pQVar5,local_40,0xffffffff,1);
        if (*(int *)local_40[0] != -1) {
          if (*(int *)local_40[0] != 0) {
            LOCK();
            *(int *)local_40[0] = *(int *)local_40[0] + -1;
            UNLOCK();
            if (*(int *)local_40[0] != 0) goto LAB_10035136b;
            local_40[1]._7_1_ = 0;
          }
          QArrayData::deallocate(local_40[0],2,8);
        }
      }
LAB_10035136b:
      LOCK();
      *piVar6 = *piVar6 + -1;
      local_40[1]._7_1_ = *piVar6 != 0;
      UNLOCK();
      if (!(bool)local_40[1]._7_1_) {
        operator_delete(piVar6);
      }
    }
    puVar10 = puVar10 + 2;
    puVar4 = (uint *)*puVar1;
  }
  if (*(int *)(param_1 + 0x50) == 2) goto LAB_100351661;
  iVar3 = CMessageManager::instance();
  local_48.field1 = (Data *)PTR_shared_null_1021e1288;
  local_50.field1 = (Data *)PTR_shared_null_1021e15e8;
  local_58 = (Data *)PTR_shared_null_1021e15e8;
  FUN_10018d830(&local_60,*(undefined8 *)(param_1 + 0x10));
  FUN_1000341d0(&local_58,&local_60);
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
            (iVar3,(QString *)0x3c85,(QStringList *)&local_48.field0,(QStringList *)&local_50.field0
             ,(CSlotInfo *)&local_58,SUB81(&local_98,0),
             (QWidget *)((ulong)in_stack_ffffffffffffff0c << 0x20),(CSlotInfo *)0x0);
  QVariant::~QVariant((QVariant *)&local_b8);
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
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_40[1]._7_1_ = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_40[1]._7_1_) goto LAB_100351512;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100351512:
  pDVar8 = local_58;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_40[1]._7_1_ = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_40[1]._7_1_) goto LAB_1003515a1;
    }
    iVar3 = *(int *)(local_58 + 0xc);
    if (iVar3 != *(int *)(local_58 + 8)) {
      lVar11 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar3 * -8;
      pDVar7 = local_58 + (long)iVar3 * 8 + 8;
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_100351580:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_40[1]._7_1_ = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_40[1]._7_1_) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_100351580;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose(pDVar8);
  }
LAB_1003515a1:
  AVar2 = local_50;
  if (*(int *)local_50.field1 != -1) {
    if (*(int *)local_50.field1 != 0) {
      LOCK();
      *(int *)local_50.field1 = *(int *)local_50.field1 + -1;
      local_40[1]._7_1_ = *(int *)local_50.field1 != 0;
      UNLOCK();
      if ((bool)local_40[1]._7_1_) goto LAB_100351631;
    }
    iVar3 = *(int *)(local_50.field1 + 0xc);
    if (iVar3 != *(int *)(local_50.field1 + 8)) {
      lVar11 = (long)*(int *)(local_50.field1 + 8) * 8 + (long)iVar3 * -8;
      pDVar8 = (Data *)(local_50.field1 + (long)iVar3 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_100351610:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_40[1]._7_1_ = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_40[1]._7_1_) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_100351610;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose((Data *)AVar2.field1);
  }
LAB_100351631:
  if (*(int *)local_48.field1 != -1) {
    if (*(int *)local_48.field1 != 0) {
      LOCK();
      *(int *)local_48.field1 = *(int *)local_48.field1 + -1;
      local_40[1]._7_1_ = *(int *)local_48.field1 != 0;
      UNLOCK();
      if ((bool)local_40[1]._7_1_) goto LAB_100351661;
    }
    QArrayData::deallocate((QArrayData *)local_48.field1,2,8);
  }
LAB_100351661:
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (*(int *)(param_1 + 0x50) == 0) {
    QTimer::start();
  }
  FUN_100830fb0(param_1);
  return;
}

