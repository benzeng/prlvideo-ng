
/* WARNING: Removing unreachable block (ram,0x0001002389c9) */
/* WARNING: Removing unreachable block (ram,0x0001002389d7) */
/* WARNING: Removing unreachable block (ram,0x0001002389e3) */

void FUN_1002388b0(long *param_1,char param_2,uint param_3)

{
  AnonymousUnion0 AVar1;
  int iVar2;
  Data *pDVar3;
  Data *pDVar4;
  QArrayData *pQVar5;
  long lVar6;
  uint in_stack_ffffffffffffff1c;
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
  
  if (param_2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001002388ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1,0);
    return;
  }
  if (param_3 == 0) goto LAB_100238b61;
  iVar2 = CMessageManager::instance();
  local_38[0].field1 = (Data *)PTR_shared_null_1021e1288;
  local_40.field1 = (Data *)PTR_shared_null_1021e15e8;
  local_48 = (Data *)PTR_shared_null_1021e15e8;
  local_88 = (int *)0x0;
  uStack_80 = 0;
  local_70 = 0;
  local_78 = 0;
  local_60 = 0x80000000;
  local_68.field7 = 0;
  local_58 = 1;
  local_a0 = 0x80000000;
  local_a8.field7 = 0;
  local_98 = 1;
  CMessageManager::showMessageBox
            (iVar2,(QString *)(ulong)param_3,(QStringList *)&local_38[0].field0,
             (QStringList *)&local_40.field0,(CSlotInfo *)&local_48,SUB81(&local_88,0),
             (QWidget *)((ulong)in_stack_ffffffffffffff1c << 0x20),(CSlotInfo *)0x0);
  QVariant::~QVariant((QVariant *)&local_a8);
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
  pDVar4 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_38[1]._7_1_ = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_100238aa1;
    }
    iVar2 = *(int *)(local_48 + 0xc);
    if (iVar2 != *(int *)(local_48 + 8)) {
      lVar6 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar2 * -8;
      pDVar3 = local_48 + (long)iVar2 * 8 + 8;
      do {
        pQVar5 = *(QArrayData **)pDVar3;
        if (*(int *)pQVar5 == 0) {
LAB_100238a80:
          QArrayData::deallocate(pQVar5,2,8);
        }
        else if (*(int *)pQVar5 != -1) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_38[1]._7_1_ = *(int *)pQVar5 != 0;
          UNLOCK();
          if (!(bool)local_38[1]._7_1_) {
            pQVar5 = *(QArrayData **)pDVar3;
            goto LAB_100238a80;
          }
        }
        pDVar3 = pDVar3 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(pDVar4);
  }
LAB_100238aa1:
  AVar1 = local_40;
  if (*(int *)local_40.field1 != -1) {
    if (*(int *)local_40.field1 != 0) {
      LOCK();
      *(int *)local_40.field1 = *(int *)local_40.field1 + -1;
      local_38[1]._7_1_ = *(int *)local_40.field1 != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_100238b31;
    }
    iVar2 = *(int *)(local_40.field1 + 0xc);
    if (iVar2 != *(int *)(local_40.field1 + 8)) {
      lVar6 = (long)*(int *)(local_40.field1 + 8) * 8 + (long)iVar2 * -8;
      pDVar4 = (Data *)(local_40.field1 + (long)iVar2 * 8 + 8);
      do {
        pQVar5 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar5 == 0) {
LAB_100238b10:
          QArrayData::deallocate(pQVar5,2,8);
        }
        else if (*(int *)pQVar5 != -1) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_38[1]._7_1_ = *(int *)pQVar5 != 0;
          UNLOCK();
          if (!(bool)local_38[1]._7_1_) {
            pQVar5 = *(QArrayData **)pDVar4;
            goto LAB_100238b10;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose((Data *)AVar1.field1);
  }
LAB_100238b31:
  if (*(int *)local_38[0].field1 != -1) {
    if (*(int *)local_38[0].field1 != 0) {
      LOCK();
      *(int *)local_38[0].field1 = *(int *)local_38[0].field1 + -1;
      local_38[1]._7_1_ = *(int *)local_38[0].field1 != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_100238b61;
    }
    QArrayData::deallocate((QArrayData *)local_38[0].field1,2,8);
  }
LAB_100238b61:
  FUN_100df99c0("","prl_client_app",0,"(!)Notice: vm declined stop/suspend request");
  (**(code **)(*param_1 + 0xb0))(param_1,0x80000009);
  return;
}

