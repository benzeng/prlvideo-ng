
/* WARNING: Removing unreachable block (ram,0x000100224899) */
/* WARNING: Removing unreachable block (ram,0x0001002248a7) */
/* WARNING: Removing unreachable block (ram,0x0001002248b3) */

void FUN_100224750(long *param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  CSlotInfo *pCVar3;
  uint in_stack_ffffffffffffff1c;
  Data_conflict local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  Data_conflict local_88;
  undefined4 local_80;
  QArrayData *local_78;
  int *local_70 [4];
  QVariant local_50 [2];
  ExternalRefCountData *local_38;
  AnonymousUnion0 local_30;
  undefined1 local_21;
  
  if (param_2 != '\0') {
    FUN_100d79e50(0xe);
                    /* WARNING: Could not recover jumptable at 0x00010022478e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1,0);
    return;
  }
  local_30.field1 = (Data *)PTR_shared_null_1021e15e8;
  local_38 = (ExternalRefCountData *)PTR_shared_null_1021e15e8;
  uVar1 = (**(code **)(*param_1 + 0xd0))(param_1,&local_30,&local_38);
  iVar2 = CMessageManager::instance();
  local_78 = (QArrayData *)QString::fromAscii_helper("1onDeleteToTrashErrorClosed()",0x1d);
  local_80 = 0x80000000;
  local_88.field7 = 0;
  FUN_100a1c600(local_70,param_1,&local_78,&local_88);
  pCVar3 = (CSlotInfo *)0x0;
  if ((param_1[6] != 0) && (pCVar3 = (CSlotInfo *)0x0, *(int *)(param_1[6] + 4) != 0)) {
    pCVar3 = (CSlotInfo *)param_1[7];
  }
  local_a0 = 0x80000000;
  local_a8.field7 = 0;
  local_98 = 1;
  CMessageManager::showMessageBox
            (iVar2,(QString *)(ulong)uVar1,(QStringList *)(param_1 + 3),
             (QStringList *)&local_30.field0,(CSlotInfo *)&local_38,SUB81(local_70,0),
             (QWidget *)((ulong)in_stack_ffffffffffffff1c << 0x20),pCVar3);
  QVariant::~QVariant((QVariant *)&local_a8);
  QVariant::~QVariant(local_50);
  if (local_70[0] != (int *)0x0) {
    LOCK();
    *local_70[0] = *local_70[0] + -1;
    local_21 = *local_70[0] != 0;
    UNLOCK();
    if ((!(bool)local_21) && (local_70[0] != (int *)0x0)) {
      operator_delete(local_70[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_88);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10022491f;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10022491f:
  FUN_100039a80(&local_38);
  FUN_100039a80(&local_30);
  return;
}

