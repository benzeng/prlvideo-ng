
/* WARNING: Removing unreachable block (ram,0x000100227d0b) */
/* WARNING: Removing unreachable block (ram,0x000100227d19) */
/* WARNING: Removing unreachable block (ram,0x000100227d25) */

void FUN_100227b70(long *param_1,int param_2)

{
  AnonymousUnion0 AVar1;
  char cVar2;
  int iVar3;
  Data *pDVar4;
  Data *pDVar5;
  QArrayData *pQVar6;
  long lVar7;
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
  Data *local_50;
  AnonymousUnion0 local_48;
  AnonymousUnion0 local_40 [2];
  
  if (((param_1[3] == 0) || (*(int *)(param_1[3] + 4) == 0)) || (param_1[4] == 0)) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: VM instance is invalid.");
    (**(code **)(*param_1 + 0xb0))(param_1,0x80000009);
  }
  if (param_2 < 0) {
LAB_100227bf7:
                    /* WARNING: Could not recover jumptable at 0x000100227c17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1,param_2);
    return;
  }
  lVar7 = 0;
  if ((param_1[3] != 0) && (lVar7 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar7 = param_1[4];
  }
  cVar2 = FUN_10018dbd0(lVar7,10);
  if (cVar2 != '\0') goto LAB_100227bf7;
  iVar3 = CMessageManager::instance();
  lVar7 = 0;
  if ((param_1[3] != 0) && (lVar7 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar7 = param_1[4];
  }
  FUN_100188480(local_40,lVar7);
  local_48.field1 = (Data *)PTR_shared_null_1021e15e8;
  local_50 = (Data *)PTR_shared_null_1021e15e8;
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
            (iVar3,(QString *)0x80000239,(QStringList *)&local_40[0].field0,
             (QStringList *)&local_48.field0,(CSlotInfo *)&local_50,SUB81(&local_88,0),
             (QWidget *)((ulong)in_stack_ffffffffffffff1c << 0x20),(CSlotInfo *)0x0);
  QVariant::~QVariant((QVariant *)&local_a8);
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
      if ((bool)local_40[1]._7_1_) goto LAB_100227de1;
    }
    iVar3 = *(int *)(local_50 + 0xc);
    if (iVar3 != *(int *)(local_50 + 8)) {
      lVar7 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar3 * -8;
      pDVar4 = local_50 + (long)iVar3 * 8 + 8;
      do {
        pQVar6 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar6 == 0) {
LAB_100227dc0:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_40[1]._7_1_ = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_40[1]._7_1_) {
            pQVar6 = *(QArrayData **)pDVar4;
            goto LAB_100227dc0;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose(pDVar5);
  }
LAB_100227de1:
  AVar1 = local_48;
  if (*(int *)local_48.field1 != -1) {
    if (*(int *)local_48.field1 != 0) {
      LOCK();
      *(int *)local_48.field1 = *(int *)local_48.field1 + -1;
      local_40[1]._7_1_ = *(int *)local_48.field1 != 0;
      UNLOCK();
      if ((bool)local_40[1]._7_1_) goto LAB_100227e71;
    }
    iVar3 = *(int *)(local_48.field1 + 0xc);
    if (iVar3 != *(int *)(local_48.field1 + 8)) {
      lVar7 = (long)*(int *)(local_48.field1 + 8) * 8 + (long)iVar3 * -8;
      pDVar5 = (Data *)(local_48.field1 + (long)iVar3 * 8 + 8);
      do {
        pQVar6 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar6 == 0) {
LAB_100227e50:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_40[1]._7_1_ = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_40[1]._7_1_) {
            pQVar6 = *(QArrayData **)pDVar5;
            goto LAB_100227e50;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose((Data *)AVar1.field1);
  }
LAB_100227e71:
  if (*(int *)local_40[0].field1 != -1) {
    if (*(int *)local_40[0].field1 != 0) {
      LOCK();
      *(int *)local_40[0].field1 = *(int *)local_40[0].field1 + -1;
      local_40[1]._7_1_ = *(int *)local_40[0].field1 != 0;
      UNLOCK();
      if ((bool)local_40[1]._7_1_) goto LAB_100227ea1;
    }
    QArrayData::deallocate((QArrayData *)local_40[0].field1,2,8);
  }
LAB_100227ea1:
  (**(code **)(*param_1 + 0xb0))(param_1,0x80000239);
  return;
}

