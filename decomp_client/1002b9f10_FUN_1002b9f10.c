
void FUN_1002b9f10(long *param_1,int param_2)

{
  AnonymousUnion0 AVar1;
  int iVar2;
  long lVar3;
  Data *pDVar4;
  Data *pDVar5;
  QArrayData *pQVar6;
  uint in_stack_fffffffffffffecc;
  undefined4 local_118 [2];
  int *local_110;
  int *local_108;
  int *local_100;
  long local_f8;
  int *local_f0;
  int *local_e8;
  int *local_e0;
  int *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
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
  
  if (param_2 == -0x7ffffd8b) {
                    /* WARNING: Could not recover jumptable at 0x0001002b9f4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1,0x80000275);
    return;
  }
  if (-1 < param_2) {
    QObject::sender();
    lVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102205db0);
    if (lVar3 == 0) {
      (**(code **)(*param_1 + 0xb0))(param_1,0x80000001);
    }
    if (*(char *)(lVar3 + 0x71) == '\0') {
      *(undefined1 *)(param_1 + 0xe) = 1;
    }
    local_110 = *(int **)(lVar3 + 0x20);
    if (1 < *local_110 + 1U) {
      LOCK();
      *local_110 = *local_110 + 1;
      local_38[1]._7_1_ = *local_110 != 0;
      UNLOCK();
    }
    local_108 = *(int **)(lVar3 + 0x28);
    if (1 < *local_108 + 1U) {
      LOCK();
      *local_108 = *local_108 + 1;
      local_38[1]._7_1_ = *local_108 != 0;
      UNLOCK();
    }
    local_100 = *(int **)(lVar3 + 0x30);
    if (1 < *local_100 + 1U) {
      LOCK();
      *local_100 = *local_100 + 1;
      local_38[1]._7_1_ = *local_100 != 0;
      UNLOCK();
    }
    local_f8 = *(long *)(lVar3 + 0x38);
    local_118[0] = *(undefined4 *)(lVar3 + 0x18);
    local_f0 = *(int **)(lVar3 + 0x40);
    if (1 < *local_f0 + 1U) {
      LOCK();
      *local_f0 = *local_f0 + 1;
      local_38[1]._7_1_ = *local_f0 != 0;
      UNLOCK();
      local_118[0] = *(undefined4 *)(lVar3 + 0x18);
    }
    local_e8 = *(int **)(lVar3 + 0x48);
    if (1 < *local_e8 + 1U) {
      LOCK();
      *local_e8 = *local_e8 + 1;
      local_38[1]._7_1_ = *local_e8 != 0;
      UNLOCK();
      local_118[0] = *(undefined4 *)(lVar3 + 0x18);
    }
    local_e0 = *(int **)(lVar3 + 0x50);
    if (1 < *local_e0 + 1U) {
      LOCK();
      *local_e0 = *local_e0 + 1;
      local_38[1]._7_1_ = *local_e0 != 0;
      UNLOCK();
      local_118[0] = *(undefined4 *)(lVar3 + 0x18);
    }
    param_1[0xc] = local_f8 + param_1[0xc];
    FUN_1002b74a0(param_1);
    if (*(int *)(param_1[0xb] + 0xc) != *(int *)(param_1[0xb] + 8)) {
      CAbstractTask::prependSubTask((int)param_1);
    }
    (**(code **)(*param_1 + 0xb0))(param_1,0);
    FUN_1001b8c60(local_118);
    return;
  }
  iVar2 = CMessageManager::instance();
  lVar3 = 0;
  if ((param_1[3] != 0) && (lVar3 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar3 = param_1[4];
  }
  FUN_100188480(local_38,lVar3);
  local_40.field1 = (Data *)PTR_shared_null_1021e15e8;
  local_48 = (Data *)PTR_shared_null_1021e15e8;
  local_88 = (QArrayData *)QString::fromAscii_helper("1subTaskCompleted(PRL_RESULT)",0x1d);
  local_90 = 0x80000000;
  local_98.field7 = 0;
  FUN_100a1c600(local_80,param_1,&local_88,&local_98);
  local_d8 = (int *)0x0;
  uStack_d0 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_b0 = 0x80000000;
  local_b8.field7 = 0;
  local_a8 = 1;
  CMessageManager::showMessageBox
            (iVar2,(QString *)0x80015439,(QStringList *)&local_38[0].field0,
             (QStringList *)&local_40.field0,(CSlotInfo *)&local_48,SUB81(local_80,0),
             (QWidget *)((ulong)in_stack_fffffffffffffecc << 0x20),(CSlotInfo *)0x0);
  QVariant::~QVariant((QVariant *)&local_b8);
  if (local_d8 != (int *)0x0) {
    LOCK();
    *local_d8 = *local_d8 + -1;
    local_38[1]._7_1_ = *local_d8 != 0;
    UNLOCK();
    if ((!(bool)local_38[1]._7_1_) && (local_d8 != (int *)0x0)) {
      operator_delete(local_d8);
    }
  }
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
      if ((bool)local_38[1]._7_1_) goto LAB_1002ba24e;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1002ba24e:
  pDVar5 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_38[1]._7_1_ = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_1002ba2e1;
    }
    iVar2 = *(int *)(local_48 + 0xc);
    if (iVar2 != *(int *)(local_48 + 8)) {
      lVar3 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar2 * -8;
      pDVar4 = local_48 + (long)iVar2 * 8 + 8;
      do {
        pQVar6 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar6 == 0) {
LAB_1002ba2c0:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_38[1]._7_1_ = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_38[1]._7_1_) {
            pQVar6 = *(QArrayData **)pDVar4;
            goto LAB_1002ba2c0;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose(pDVar5);
  }
LAB_1002ba2e1:
  AVar1 = local_40;
  if (*(int *)local_40.field1 != -1) {
    if (*(int *)local_40.field1 != 0) {
      LOCK();
      *(int *)local_40.field1 = *(int *)local_40.field1 + -1;
      local_38[1]._7_1_ = *(int *)local_40.field1 != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_1002ba371;
    }
    iVar2 = *(int *)(local_40.field1 + 0xc);
    if (iVar2 != *(int *)(local_40.field1 + 8)) {
      lVar3 = (long)*(int *)(local_40.field1 + 8) * 8 + (long)iVar2 * -8;
      pDVar5 = (Data *)(local_40.field1 + (long)iVar2 * 8 + 8);
      do {
        pQVar6 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar6 == 0) {
LAB_1002ba350:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_38[1]._7_1_ = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_38[1]._7_1_) {
            pQVar6 = *(QArrayData **)pDVar5;
            goto LAB_1002ba350;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose((Data *)AVar1.field1);
  }
LAB_1002ba371:
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

