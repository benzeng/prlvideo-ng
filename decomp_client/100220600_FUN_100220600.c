
/* WARNING: Removing unreachable block (ram,0x000100220762) */
/* WARNING: Removing unreachable block (ram,0x000100220770) */
/* WARNING: Removing unreachable block (ram,0x00010022077c) */

undefined8 FUN_100220600(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
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
  AnonymousUnion0 local_28 [2];
  
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  iVar2 = FUN_10018a9d0(uVar3);
  if (iVar2 != 0x30000001) {
    return 0;
  }
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  cVar1 = FUN_10011df90(uVar3);
  if (cVar1 == '\0') {
    return 0;
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  iVar2 = CMessageManager::instance();
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100188480(local_28,uVar3);
  local_30.field1 = (Data *)PTR_shared_null_1021e15e8;
  local_38 = (ExternalRefCountData *)PTR_shared_null_1021e15e8;
  local_78 = (QArrayData *)
             QString::fromAscii_helper
                       ("1onQuestionCheckVideoPowerOptimizationClosed( PRL_RESULT, Messaging::ButtonID )"
                        ,0x4f);
  local_80 = 0x80000000;
  local_88.field7 = 0;
  FUN_100a1c600(local_70,param_1,&local_78,&local_88);
  local_a0 = 0x80000000;
  local_a8.field7 = 0;
  local_98 = 1;
  CMessageManager::showMessageBox
            (iVar2,(QString *)0x3bf3,(QStringList *)&local_28[0].field0,
             (QStringList *)&local_30.field0,(CSlotInfo *)&local_38,SUB81(local_70,0),
             (QWidget *)((ulong)in_stack_ffffffffffffff1c << 0x20),(CSlotInfo *)0x0);
  QVariant::~QVariant((QVariant *)&local_a8);
  QVariant::~QVariant(local_50);
  if (local_70[0] != (int *)0x0) {
    LOCK();
    *local_70[0] = *local_70[0] + -1;
    local_28[1]._7_1_ = *local_70[0] != 0;
    UNLOCK();
    if ((!(bool)local_28[1]._7_1_) && (local_70[0] != (int *)0x0)) {
      operator_delete(local_70[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_88);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_28[1]._7_1_ = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_28[1]._7_1_) goto LAB_1002207e8;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1002207e8:
  FUN_100039a80(&local_38);
  FUN_100039a80(&local_30);
  if (*(int *)local_28[0].field1 != -1) {
    if (*(int *)local_28[0].field1 != 0) {
      LOCK();
      *(int *)local_28[0].field1 = *(int *)local_28[0].field1 + -1;
      UNLOCK();
      if (*(int *)local_28[0].field1 != 0) {
        return 0;
      }
      local_28[1]._7_1_ = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28[0].field1,2,8);
  }
  return 0;
}

