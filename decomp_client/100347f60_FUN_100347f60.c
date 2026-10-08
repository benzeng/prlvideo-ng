
/* WARNING: Removing unreachable block (ram,0x0001003480dd) */
/* WARNING: Removing unreachable block (ram,0x0001003480eb) */
/* WARNING: Removing unreachable block (ram,0x0001003480f7) */

void FUN_100347f60(long param_1,int param_2)

{
  AnonymousUnion0 AVar1;
  char cVar2;
  int iVar3;
  Data *pDVar4;
  Data *pDVar5;
  undefined8 uVar6;
  QArrayData *pQVar7;
  long lVar8;
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
  
  if (param_2 != 1) {
    iVar3 = CMessageManager::instance();
    CMessageManager::closeSpecificMessageBox(iVar3);
    return;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  iVar3 = FUN_10018a9d0();
  if (iVar3 != 0x30000004) {
    return;
  }
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  cVar2 = FUN_10011df90(uVar6);
  if (cVar2 == '\0') {
    return;
  }
  iVar3 = CMessageManager::instance();
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100188480(local_38,uVar6);
  local_40.field1 = (Data *)PTR_shared_null_1021e15e8;
  local_48 = (Data *)PTR_shared_null_1021e15e8;
  local_88 = (QArrayData *)
             QString::fromAscii_helper
                       ("1onQuestionCheckVideoPowerOptimizationClosed( PRL_RESULT, Messaging::ButtonID )"
                        ,0x4f);
  local_90 = 0x80000000;
  local_98.field7 = 0;
  FUN_100a1c600(local_80,param_1,&local_88,&local_98);
  local_b0 = 0x80000000;
  local_b8.field7 = 0;
  local_a8 = 1;
  CMessageManager::showMessageBox
            (iVar3,(QString *)0x3bf4,(QStringList *)&local_38[0].field0,
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
      if ((bool)local_38[1]._7_1_) goto LAB_100348166;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100348166:
  pDVar5 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_38[1]._7_1_ = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_1003481ea;
    }
    iVar3 = *(int *)(local_48 + 0xc);
    if (iVar3 != *(int *)(local_48 + 8)) {
      lVar8 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar3 * -8;
      pDVar4 = local_48 + (long)iVar3 * 8 + 8;
      do {
        pQVar7 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar7 == 0) {
LAB_1003481c9:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_38[1]._7_1_ = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_38[1]._7_1_) {
            pQVar7 = *(QArrayData **)pDVar4;
            goto LAB_1003481c9;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose(pDVar5);
  }
LAB_1003481ea:
  AVar1 = local_40;
  if (*(int *)local_40.field1 != -1) {
    if (*(int *)local_40.field1 != 0) {
      LOCK();
      *(int *)local_40.field1 = *(int *)local_40.field1 + -1;
      local_38[1]._7_1_ = *(int *)local_40.field1 != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_10034826e;
    }
    iVar3 = *(int *)(local_40.field1 + 0xc);
    if (iVar3 != *(int *)(local_40.field1 + 8)) {
      lVar8 = (long)*(int *)(local_40.field1 + 8) * 8 + (long)iVar3 * -8;
      pDVar5 = (Data *)(local_40.field1 + (long)iVar3 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar7 == 0) {
LAB_10034824d:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_38[1]._7_1_ = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_38[1]._7_1_) {
            pQVar7 = *(QArrayData **)pDVar5;
            goto LAB_10034824d;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar1.field1);
  }
LAB_10034826e:
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

