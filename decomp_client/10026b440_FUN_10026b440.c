
/* WARNING: Removing unreachable block (ram,0x00010026b603) */
/* WARNING: Removing unreachable block (ram,0x00010026b611) */
/* WARNING: Removing unreachable block (ram,0x00010026b61d) */

undefined8 FUN_10026b440(long param_1)

{
  AnonymousUnion0 AVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  Data *pDVar5;
  Data *pDVar6;
  QArrayData *pQVar7;
  long lVar8;
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
  
  if (*(int *)(param_1 + 0x58) != 3) {
    return 0;
  }
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  cVar2 = FUN_10018f900(uVar4);
  if (cVar2 == '\0') {
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar4 = FUN_10018c2b0(uVar4);
    cVar2 = FUN_100112cc0(uVar4);
    if (cVar2 == '\0') {
      uVar4 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar4 = *(undefined8 *)(param_1 + 0x20);
      }
      cVar2 = FUN_10011cdc0(uVar4);
      if (cVar2 == '\0') {
        uVar4 = 0;
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
          uVar4 = *(undefined8 *)(param_1 + 0x20);
        }
        FUN_10018c2b0(uVar4);
        CVmConfiguration::getVmSettings();
        CVmSettings::getVmRuntimeOptions();
        iVar3 = CVmRunTimeOptions::getUndoDisksModeEx();
        if (iVar3 == 0) {
          return 0;
        }
      }
    }
  }
  iVar3 = CMessageManager::instance();
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100188480(local_40,uVar4);
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
            (iVar3,(QString *)0x80015466,(QStringList *)&local_40[0].field0,
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
  pDVar6 = local_50;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_40[1]._7_1_ = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_40[1]._7_1_) goto LAB_10026b6e1;
    }
    iVar3 = *(int *)(local_50 + 0xc);
    if (iVar3 != *(int *)(local_50 + 8)) {
      lVar8 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar3 * -8;
      pDVar5 = local_50 + (long)iVar3 * 8 + 8;
      do {
        pQVar7 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar7 == 0) {
LAB_10026b6c0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_40[1]._7_1_ = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_40[1]._7_1_) {
            pQVar7 = *(QArrayData **)pDVar5;
            goto LAB_10026b6c0;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose(pDVar6);
  }
LAB_10026b6e1:
  AVar1 = local_48;
  if (*(int *)local_48.field1 != -1) {
    if (*(int *)local_48.field1 != 0) {
      LOCK();
      *(int *)local_48.field1 = *(int *)local_48.field1 + -1;
      local_40[1]._7_1_ = *(int *)local_48.field1 != 0;
      UNLOCK();
      if ((bool)local_40[1]._7_1_) goto LAB_10026b771;
    }
    iVar3 = *(int *)(local_48.field1 + 0xc);
    if (iVar3 != *(int *)(local_48.field1 + 8)) {
      lVar8 = (long)*(int *)(local_48.field1 + 8) * 8 + (long)iVar3 * -8;
      pDVar6 = (Data *)(local_48.field1 + (long)iVar3 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_10026b750:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_40[1]._7_1_ = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_40[1]._7_1_) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_10026b750;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar1.field1);
  }
LAB_10026b771:
  if (*(int *)local_40[0].field1 != -1) {
    if (*(int *)local_40[0].field1 != 0) {
      LOCK();
      *(int *)local_40[0].field1 = *(int *)local_40[0].field1 + -1;
      UNLOCK();
      if (*(int *)local_40[0].field1 != 0) {
        return 0x80000009;
      }
      local_40[1]._7_1_ = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40[0].field1,2,8);
  }
  return 0x80000009;
}

