
/* WARNING: Removing unreachable block (ram,0x00010034a664) */
/* WARNING: Removing unreachable block (ram,0x00010034a672) */
/* WARNING: Removing unreachable block (ram,0x00010034a67e) */

void FUN_10034a470(long param_1,uint param_2,int param_3)

{
  undefined *puVar1;
  AnonymousUnion0 AVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  Data *pDVar8;
  QArrayData *pQVar9;
  long lVar10;
  uint in_stack_fffffffffffffefc;
  Data_conflict local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  int *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  Data_conflict local_88;
  undefined4 local_80;
  undefined1 local_78;
  QArrayData *local_68;
  undefined1 local_60 [24];
  AnonymousUnion0 local_48;
  AnonymousUnion0 local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  if ((param_2 + 0xcffffffe < 0xf) && ((0x4003U >> (param_2 + 0xcffffffe & 0x1f) & 1) != 0)) {
    QDateTime::setMSecsSinceEpoch(param_1 + 0x20);
    if (*(char *)(param_1 + 0x31) != '\0') {
      *(undefined1 *)(param_1 + 0x31) = 0;
      FUN_100830bb0(param_1,0);
    }
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  if ((((param_2 & 0xfffffffe) != 0x30000006) || (param_3 != 0x30000004)) ||
     (cVar3 = FUN_10034ac90(param_1), cVar3 == '\0')) goto LAB_10034a891;
  FUN_100d3f2e0(&local_38,1,0,1);
  iVar5 = CMessageManager::instance();
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_1003193e0(&local_40,uVar7);
  puVar1 = PTR_shared_null_1021e15e8;
  local_48.field1 = (Data *)PTR_shared_null_1021e15e8;
  FUN_10034ad30(local_60 + 8,param_1);
  QDateTime::toString((QString *)(local_60 + 0x10));
  FUN_1000341d0(&local_48,local_60 + 0x10);
  local_60._0_8_ = puVar1;
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_100319410(&local_68,uVar7);
  FUN_1000341d0(local_60,&local_68);
  local_a8 = (int *)0x0;
  uStack_a0 = 0;
  local_90 = 0;
  local_98 = 0;
  local_80 = 0x80000000;
  local_88.field7 = 0;
  local_78 = 1;
  local_c0 = 0x80000000;
  local_c8.field7 = 0;
  local_b8 = 1;
  CMessageManager::showMessageBox
            (iVar5,(QString *)0x3c9a,(QStringList *)&local_40.field0,(QStringList *)&local_48.field0
             ,(CSlotInfo *)local_60,SUB81(&local_a8,0),
             (QWidget *)((ulong)in_stack_fffffffffffffefc << 0x20),(CSlotInfo *)0x0);
  QVariant::~QVariant((QVariant *)&local_c8);
  QVariant::~QVariant((QVariant *)&local_88);
  if (local_a8 != (int *)0x0) {
    LOCK();
    *local_a8 = *local_a8 + -1;
    local_29 = *local_a8 != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_a8 != (int *)0x0)) {
      operator_delete(local_a8);
    }
  }
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10034a6e6;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10034a6e6:
  uVar7 = local_60._0_8_;
  if (*(int *)local_60._0_8_ != -1) {
    if (*(int *)local_60._0_8_ != 0) {
      LOCK();
      *(int *)local_60._0_8_ = *(int *)local_60._0_8_ + -1;
      local_29 = *(int *)local_60._0_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10034a771;
    }
    iVar5 = *(int *)(local_60._0_8_ + 0xc);
    if (iVar5 != *(int *)(local_60._0_8_ + 8)) {
      lVar10 = (long)*(int *)(local_60._0_8_ + 8) * 8 + (long)iVar5 * -8;
      pDVar8 = (Data *)(local_60._0_8_ + (long)iVar5 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_10034a750:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_29 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_10034a750;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)uVar7);
  }
LAB_10034a771:
  if (*(int *)local_60._16_8_ != -1) {
    if (*(int *)local_60._16_8_ != 0) {
      LOCK();
      *(int *)local_60._16_8_ = *(int *)local_60._16_8_ + -1;
      local_29 = *(int *)local_60._16_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10034a7a1;
    }
    QArrayData::deallocate((QArrayData *)local_60._16_8_,2,8);
  }
LAB_10034a7a1:
  QDateTime::~QDateTime((QDateTime *)(local_60 + 8));
  AVar2 = local_48;
  if (*(int *)local_48.field1 != -1) {
    if (*(int *)local_48.field1 != 0) {
      LOCK();
      *(int *)local_48.field1 = *(int *)local_48.field1 + -1;
      local_29 = *(int *)local_48.field1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10034a831;
    }
    iVar5 = *(int *)(local_48.field1 + 0xc);
    if (iVar5 != *(int *)(local_48.field1 + 8)) {
      lVar10 = (long)*(int *)(local_48.field1 + 8) * 8 + (long)iVar5 * -8;
      pDVar8 = (Data *)(local_48.field1 + (long)iVar5 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_10034a810:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_29 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_10034a810;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar2.field1);
  }
LAB_10034a831:
  if (*(int *)local_40.field1 != -1) {
    if (*(int *)local_40.field1 != 0) {
      LOCK();
      *(int *)local_40.field1 = *(int *)local_40.field1 + -1;
      local_29 = *(int *)local_40.field1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10034a861;
    }
    QArrayData::deallocate((QArrayData *)local_40.field1,2,8);
  }
LAB_10034a861:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10034a891;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10034a891:
  cVar3 = FUN_10034c560(param_1);
  if (cVar3 == '\0') {
    bVar4 = false;
  }
  else {
    uVar7 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x18);
    }
    uVar7 = FUN_100319390(uVar7);
    uVar6 = FUN_10018a9d0(uVar7);
    bVar4 = uVar6 == 0x3000000c || (uVar6 & 0xfffffffe) == 0x30000004;
  }
  FUN_100830c00(param_1,bVar4);
  return;
}

