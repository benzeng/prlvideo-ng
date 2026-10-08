
/* WARNING: Removing unreachable block (ram,0x00010024a64b) */
/* WARNING: Removing unreachable block (ram,0x00010024a659) */
/* WARNING: Removing unreachable block (ram,0x00010024a665) */

undefined8 FUN_10024a490(long param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  uint in_stack_fffffffffffffdcc;
  Data_conflict local_1f8;
  undefined4 local_1f0;
  undefined1 local_1e8;
  Data_conflict local_1d8;
  undefined4 local_1d0;
  QArrayData *local_1c8;
  int *local_1c0 [4];
  QVariant local_1a0 [2];
  undefined1 local_188 [24];
  AnonymousUnion0 local_170;
  int *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 local_150;
  Data_conflict local_148;
  undefined4 local_140;
  undefined1 local_138;
  Data_conflict local_130;
  undefined4 local_128;
  QArrayData *local_120;
  int *local_118 [4];
  QVariant local_f8 [2];
  undefined1 local_e0 [24];
  int *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  Data_conflict local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  Data_conflict local_90;
  undefined4 local_88;
  QArrayData *local_80;
  int *local_78 [4];
  QVariant local_58 [2];
  ExternalRefCountData *local_40;
  AnonymousUnion0 local_38;
  AnonymousUnion0 local_30 [2];
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (iVar3 == 0x40f) {
    CAbstractTask::setWaitForSubTaskCompletion();
    iVar3 = CMessageManager::instance();
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_100188480(local_e0 + 0x10,uVar4);
    local_e0._8_8_ = PTR_shared_null_1021e15e8;
    local_e0._0_8_ = PTR_shared_null_1021e15e8;
    local_120 = (QArrayData *)
                QString::fromAscii_helper
                          ("1onMessageAnswered(PRL_RESULT, Messaging::ButtonID)",0x33);
    local_128 = 0x80000000;
    local_130.field7 = 0;
    FUN_100a1c600(local_118,param_1,&local_120,&local_130);
    local_168 = (int *)0x0;
    uStack_160 = 0;
    local_150 = 0;
    local_158 = 0;
    local_140 = 0x80000000;
    local_148.field7 = 0;
    local_138 = 1;
    CMessageManager::showMessageBox
              (iVar3,(QString *)0x3ae4,(QStringList *)(local_e0 + 0x10),
               (QStringList *)(local_e0 + 8),(CSlotInfo *)local_e0,SUB81(local_118,0),
               (QWidget *)((ulong)in_stack_fffffffffffffdcc << 0x20),(CSlotInfo *)0x0);
    QVariant::~QVariant((QVariant *)&local_148);
    if (local_168 != (int *)0x0) {
      LOCK();
      *local_168 = *local_168 + -1;
      local_30[1]._7_1_ = *local_168 != 0;
      UNLOCK();
      if ((!(bool)local_30[1]._7_1_) && (local_168 != (int *)0x0)) {
        operator_delete(local_168);
      }
    }
    QVariant::~QVariant(local_f8);
    if (local_118[0] != (int *)0x0) {
      LOCK();
      *local_118[0] = *local_118[0] + -1;
      local_30[1]._7_1_ = *local_118[0] != 0;
      UNLOCK();
      if ((!(bool)local_30[1]._7_1_) && (local_118[0] != (int *)0x0)) {
        operator_delete(local_118[0]);
      }
    }
    QVariant::~QVariant((QVariant *)&local_130);
    if (*(int *)local_120 != -1) {
      if (*(int *)local_120 != 0) {
        LOCK();
        *(int *)local_120 = *(int *)local_120 + -1;
        local_30[1]._7_1_ = *(int *)local_120 != 0;
        UNLOCK();
        if ((bool)local_30[1]._7_1_) goto LAB_10024a92e;
      }
      QArrayData::deallocate(local_120,2,8);
    }
LAB_10024a92e:
    FUN_100039a80(local_e0);
    FUN_100039a80(local_e0 + 8);
    if (*(int *)local_e0._16_8_ == -1) {
      return 0;
    }
    local_170 = (AnonymousUnion0)local_e0._16_8_;
    if (*(int *)local_e0._16_8_ != 0) {
      LOCK();
      *(int *)local_e0._16_8_ = *(int *)local_e0._16_8_ + -1;
      UNLOCK();
      if (*(int *)local_e0._16_8_ != 0) {
        return 0;
      }
      local_30[1]._7_1_ = 0;
    }
    goto LAB_10024ab51;
  }
  if (iVar3 != 0x3f0) {
    if (iVar3 != 0x3ee) {
      return 0;
    }
    CAbstractTask::setWaitForSubTaskCompletion();
    iVar3 = CMessageManager::instance();
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_100188480(local_30,uVar4);
    local_38.field1 = (Data *)PTR_shared_null_1021e15e8;
    local_40 = (ExternalRefCountData *)PTR_shared_null_1021e15e8;
    local_80 = (QArrayData *)
               QString::fromAscii_helper("1onMessageAnswered(PRL_RESULT, Messaging::ButtonID)",0x33)
    ;
    local_88 = 0x80000000;
    local_90.field7 = 0;
    FUN_100a1c600(local_78,param_1,&local_80,&local_90);
    local_c8 = (int *)0x0;
    uStack_c0 = 0;
    local_b0 = 0;
    local_b8 = 0;
    local_a0 = 0x80000000;
    local_a8.field7 = 0;
    local_98 = 1;
    CMessageManager::showMessageBox
              (iVar3,(QString *)0x80000312,(QStringList *)&local_30[0].field0,
               (QStringList *)&local_38.field0,(CSlotInfo *)&local_40,SUB81(local_78,0),
               (QWidget *)((ulong)in_stack_fffffffffffffdcc << 0x20),(CSlotInfo *)0x0);
    QVariant::~QVariant((QVariant *)&local_a8);
    if (local_c8 != (int *)0x0) {
      LOCK();
      *local_c8 = *local_c8 + -1;
      local_30[1]._7_1_ = *local_c8 != 0;
      UNLOCK();
      if ((!(bool)local_30[1]._7_1_) && (local_c8 != (int *)0x0)) {
        operator_delete(local_c8);
      }
    }
    QVariant::~QVariant(local_58);
    if (local_78[0] != (int *)0x0) {
      LOCK();
      *local_78[0] = *local_78[0] + -1;
      local_30[1]._7_1_ = *local_78[0] != 0;
      UNLOCK();
      if ((!(bool)local_30[1]._7_1_) && (local_78[0] != (int *)0x0)) {
        operator_delete(local_78[0]);
      }
    }
    QVariant::~QVariant((QVariant *)&local_90);
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_30[1]._7_1_ = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_30[1]._7_1_) goto LAB_10024ab1e;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_10024ab1e:
    FUN_100039a80(&local_40);
    FUN_100039a80(&local_38);
    if (*(int *)local_30[0].field1 == -1) {
      return 0;
    }
    local_170 = local_30[0];
    if (*(int *)local_30[0].field1 != 0) {
      LOCK();
      *(int *)local_30[0].field1 = *(int *)local_30[0].field1 + -1;
      UNLOCK();
      if (*(int *)local_30[0].field1 != 0) {
        return 0;
      }
      local_30[1]._7_1_ = 0;
    }
    goto LAB_10024ab51;
  }
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar4 = FUN_10018c2b0(uVar4);
  cVar2 = FUN_100112cc0(uVar4);
  if (cVar2 == '\0') {
    return 0;
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  iVar3 = CMessageManager::instance();
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100188480(&local_170,uVar4);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_10018d830(local_188 + 8,uVar4);
  puVar1 = PTR_shared_null_1021e15e8;
  local_188._16_8_ = PTR_shared_null_1021e15e8;
  FUN_1000341d0(local_188 + 0x10,local_188 + 8);
  local_188._0_8_ = puVar1;
  local_1c8 = (QArrayData *)
              QString::fromAscii_helper("1onMessageAnswered(PRL_RESULT, Messaging::ButtonID)",0x33);
  local_1d0 = 0x80000000;
  local_1d8.field7 = 0;
  FUN_100a1c600(local_1c0,param_1,&local_1c8,&local_1d8);
  local_1f0 = 0x80000000;
  local_1f8.field7 = 0;
  local_1e8 = 1;
  CMessageManager::showMessageBox
            (iVar3,(QString *)0x32de,(QStringList *)&local_170.field0,
             (QStringList *)(local_188 + 0x10),(CSlotInfo *)local_188,SUB81(local_1c0,0),
             (QWidget *)((ulong)in_stack_fffffffffffffdcc << 0x20),(CSlotInfo *)0x0);
  QVariant::~QVariant((QVariant *)&local_1f8);
  QVariant::~QVariant(local_1a0);
  if (local_1c0[0] != (int *)0x0) {
    LOCK();
    *local_1c0[0] = *local_1c0[0] + -1;
    local_30[1]._7_1_ = *local_1c0[0] != 0;
    UNLOCK();
    if ((!(bool)local_30[1]._7_1_) && (local_1c0[0] != (int *)0x0)) {
      operator_delete(local_1c0[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_1d8);
  if (*(int *)local_1c8 != -1) {
    if (*(int *)local_1c8 != 0) {
      LOCK();
      *(int *)local_1c8 = *(int *)local_1c8 + -1;
      local_30[1]._7_1_ = *(int *)local_1c8 != 0;
      UNLOCK();
      if ((bool)local_30[1]._7_1_) goto LAB_10024a6e3;
    }
    QArrayData::deallocate(local_1c8,2,8);
  }
LAB_10024a6e3:
  FUN_100039a80(local_188);
  FUN_100039a80(local_188 + 0x10);
  if (*(int *)local_188._8_8_ != -1) {
    if (*(int *)local_188._8_8_ != 0) {
      LOCK();
      *(int *)local_188._8_8_ = *(int *)local_188._8_8_ + -1;
      local_30[1]._7_1_ = *(int *)local_188._8_8_ != 0;
      UNLOCK();
      if ((bool)local_30[1]._7_1_) goto LAB_10024a731;
    }
    QArrayData::deallocate((QArrayData *)local_188._8_8_,2,8);
  }
LAB_10024a731:
  if (*(int *)local_170.field1 == -1) {
    return 0;
  }
  if (*(int *)local_170.field1 != 0) {
    LOCK();
    *(int *)local_170.field1 = *(int *)local_170.field1 + -1;
    UNLOCK();
    if (*(int *)local_170.field1 != 0) {
      return 0;
    }
    local_30[1]._7_1_ = 0;
  }
LAB_10024ab51:
  QArrayData::deallocate((QArrayData *)local_170.field1,2,8);
  return 0;
}

