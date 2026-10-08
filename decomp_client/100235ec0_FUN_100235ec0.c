
/* WARNING: Removing unreachable block (ram,0x000100236162) */
/* WARNING: Removing unreachable block (ram,0x000100236170) */
/* WARNING: Removing unreachable block (ram,0x00010023617c) */

uint FUN_100235ec0(long param_1)

{
  undefined *puVar1;
  AnonymousUnion0 AVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  Data *pDVar7;
  undefined8 uVar8;
  QArrayData *pQVar9;
  uint uVar10;
  uint in_stack_fffffffffffffefc;
  Data_conflict local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  Data_conflict local_a8;
  undefined4 local_a0;
  QArrayData *local_98;
  int *local_90 [4];
  QVariant local_70 [2];
  undefined1 local_58 [24];
  AnonymousUnion0 local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    return 0x80000001;
  }
  if (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0) {
    return 0x80000001;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    return 0x80000001;
  }
  lVar5 = FUN_100319390();
  if (lVar5 == 0) {
    return 0;
  }
  cVar3 = FUN_10018ff50(lVar5);
  if (cVar3 == '\0') {
    iVar4 = FUN_10018a9d0(lVar5);
    uVar10 = 0x80015099;
    if (iVar4 != 0x3000000a) {
      iVar4 = FUN_10018a9d0(lVar5);
      uVar10 = 0x80015100;
      if (iVar4 != 0x30000003) {
        iVar4 = FUN_10018a9d0(lVar5);
        uVar10 = 0x80015101;
        if (iVar4 != 0x3000000f) {
          return 0;
        }
      }
    }
  }
  else {
    iVar4 = FUN_10018ffe0();
    uVar10 = 0x80015088;
    if (iVar4 == 0) {
      uVar10 = 0x80015079;
    }
  }
  uVar6 = FUN_100370280();
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_1003193e0(&local_38,uVar8);
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
  }
  iVar4 = FUN_100319b00(uVar8);
  FUN_1003705c0(uVar6,&local_38,iVar4 != 0);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100236006;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100236006:
  puVar1 = PTR_shared_null_1021e15e8;
  local_40.field1 = (Data *)PTR_shared_null_1021e15e8;
  FUN_10018d830(local_58 + 0x10,lVar5);
  FUN_1000341d0(&local_40,local_58 + 0x10);
  if (*(int *)local_58._16_8_ != -1) {
    if (*(int *)local_58._16_8_ != 0) {
      LOCK();
      *(int *)local_58._16_8_ = *(int *)local_58._16_8_ + -1;
      local_29 = *(int *)local_58._16_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10023605a;
    }
    QArrayData::deallocate((QArrayData *)local_58._16_8_,2,8);
  }
LAB_10023605a:
  iVar4 = CMessageManager::instance();
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_1003193e0(local_58 + 8,uVar8);
  local_58._0_8_ = puVar1;
  local_98 = (QArrayData *)QString::fromAscii_helper("1onCloseActionRejected()",0x18);
  local_a0 = 0x80000000;
  local_a8.field7 = 0;
  FUN_100a1c600(local_90,param_1,&local_98,&local_a8);
  local_c0 = 0x80000000;
  local_c8.field7 = 0;
  local_b8 = 1;
  CMessageManager::showMessageBox
            (iVar4,(QString *)(ulong)uVar10,(QStringList *)(local_58 + 8),
             (QStringList *)&local_40.field0,(CSlotInfo *)local_58,SUB81(local_90,0),
             (QWidget *)((ulong)in_stack_fffffffffffffefc << 0x20),(CSlotInfo *)0x0);
  QVariant::~QVariant((QVariant *)&local_c8);
  QVariant::~QVariant(local_70);
  if (local_90[0] != (int *)0x0) {
    LOCK();
    *local_90[0] = *local_90[0] + -1;
    local_29 = *local_90[0] != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_90[0] != (int *)0x0)) {
      operator_delete(local_90[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_a8);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_29 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002361f7;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1002361f7:
  uVar8 = local_58._0_8_;
  if (*(int *)local_58._0_8_ != -1) {
    if (*(int *)local_58._0_8_ != 0) {
      LOCK();
      *(int *)local_58._0_8_ = *(int *)local_58._0_8_ + -1;
      local_29 = *(int *)local_58._0_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100236281;
    }
    iVar4 = *(int *)(local_58._0_8_ + 0xc);
    if (iVar4 != *(int *)(local_58._0_8_ + 8)) {
      lVar5 = (long)*(int *)(local_58._0_8_ + 8) * 8 + (long)iVar4 * -8;
      pDVar7 = (Data *)(local_58._0_8_ + (long)iVar4 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_100236260:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_29 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_100236260;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose((Data *)uVar8);
  }
LAB_100236281:
  if (*(int *)local_58._8_8_ != -1) {
    if (*(int *)local_58._8_8_ != 0) {
      LOCK();
      *(int *)local_58._8_8_ = *(int *)local_58._8_8_ + -1;
      local_29 = *(int *)local_58._8_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002362b1;
    }
    QArrayData::deallocate((QArrayData *)local_58._8_8_,2,8);
  }
LAB_1002362b1:
  AVar2 = local_40;
  if (*(int *)local_40.field1 != -1) {
    if (*(int *)local_40.field1 != 0) {
      LOCK();
      *(int *)local_40.field1 = *(int *)local_40.field1 + -1;
      UNLOCK();
      if (*(int *)local_40.field1 != 0) {
        return uVar10;
      }
      local_29 = 0;
    }
    iVar4 = *(int *)(local_40.field1 + 0xc);
    if (iVar4 != *(int *)(local_40.field1 + 8)) {
      lVar5 = (long)*(int *)(local_40.field1 + 8) * 8 + (long)iVar4 * -8;
      pDVar7 = (Data *)(local_40.field1 + (long)iVar4 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_100236320:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_29 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_100236320;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose((Data *)AVar2.field1);
  }
  return uVar10;
}

