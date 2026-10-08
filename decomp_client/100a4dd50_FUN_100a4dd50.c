
/* WARNING: Removing unreachable block (ram,0x000100a4dea0) */
/* WARNING: Removing unreachable block (ram,0x000100a4deae) */
/* WARNING: Removing unreachable block (ram,0x000100a4deba) */

bool FUN_100a4dd50(long param_1,undefined8 *param_2,int param_3,byte param_4)

{
  uint uVar1;
  int iVar2;
  AnonymousUnion0 AVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  Data *pDVar7;
  QArrayData *pQVar8;
  Data *pDVar9;
  uint in_stack_ffffffffffffff0c;
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
  
  iVar4 = _memcmp(param_2,(undefined8 *)(param_1 + 0x20),0x10);
  if ((param_3 != 1 | param_4) != 1) {
    return true;
  }
  if (iVar4 == 0) {
    return true;
  }
  if (2 < param_3 - 1U) {
    return false;
  }
  uVar1 = *(uint *)(&DAT_101cd36e8 + (long)(int)(param_3 - 1U) * 4);
  iVar4 = CMessageManager::instance();
  uVar5 = FUN_100319390(*(undefined8 *)(param_1 + 0x30));
  FUN_100188480(local_40,uVar5);
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
  iVar4 = CMessageManager::showMessageBox
                    (iVar4,(QString *)(ulong)uVar1,(QStringList *)&local_40[0].field0,
                     (QStringList *)&local_48.field0,(CSlotInfo *)&local_50,SUB81(&local_88,0),
                     (QWidget *)((ulong)in_stack_ffffffffffffff0c << 0x20),(CSlotInfo *)0x0);
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
  pDVar7 = local_50;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_40[1]._7_1_ = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_40[1]._7_1_) goto LAB_100a4dfa7;
    }
    iVar2 = *(int *)(local_50 + 0xc);
    if (iVar2 != *(int *)(local_50 + 8)) {
      lVar6 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar2 * -8;
      pDVar9 = local_50 + (long)iVar2 * 8 + 8;
      do {
        pQVar8 = *(QArrayData **)pDVar9;
        if (*(int *)pQVar8 == 0) {
LAB_100a4df80:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_40[1]._7_1_ = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_40[1]._7_1_) {
            pQVar8 = *(QArrayData **)pDVar9;
            goto LAB_100a4df80;
          }
        }
        pDVar9 = pDVar9 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(pDVar7);
  }
LAB_100a4dfa7:
  AVar3 = local_48;
  if (*(int *)local_48.field1 != -1) {
    if (*(int *)local_48.field1 != 0) {
      LOCK();
      *(int *)local_48.field1 = *(int *)local_48.field1 + -1;
      local_40[1]._7_1_ = *(int *)local_48.field1 != 0;
      UNLOCK();
      if ((bool)local_40[1]._7_1_) goto LAB_100a4e047;
    }
    iVar2 = *(int *)(local_48.field1 + 0xc);
    if (iVar2 != *(int *)(local_48.field1 + 8)) {
      lVar6 = (long)*(int *)(local_48.field1 + 8) * 8 + (long)iVar2 * -8;
      pDVar7 = (Data *)(local_48.field1 + (long)iVar2 * 8 + 8);
      do {
        pQVar8 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar8 == 0) {
LAB_100a4e020:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_40[1]._7_1_ = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_40[1]._7_1_) {
            pQVar8 = *(QArrayData **)pDVar7;
            goto LAB_100a4e020;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose((Data *)AVar3.field1);
  }
LAB_100a4e047:
  if (*(int *)local_40[0].field1 != -1) {
    if (*(int *)local_40[0].field1 != 0) {
      LOCK();
      *(int *)local_40[0].field1 = *(int *)local_40[0].field1 + -1;
      UNLOCK();
      if (*(int *)local_40[0].field1 != 0) goto LAB_100a4e077;
      local_40[1]._7_1_ = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40[0].field1,2,8);
  }
LAB_100a4e077:
  if (iVar4 == 1) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    param_2[1] = *(undefined8 *)(param_1 + 0x28);
    *param_2 = uVar5;
  }
  return iVar4 == 1;
}

