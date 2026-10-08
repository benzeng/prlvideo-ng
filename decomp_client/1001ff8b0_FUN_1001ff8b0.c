
/* WARNING: Removing unreachable block (ram,0x0001001ffcc5) */
/* WARNING: Removing unreachable block (ram,0x0001001ffcd3) */
/* WARNING: Removing unreachable block (ram,0x0001001ffcdf) */

void FUN_1001ff8b0(long *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  AnonymousUnion0 AVar4;
  uint in_stack_fffffffffffffe7c;
  Data_conflict local_148;
  undefined4 local_140;
  undefined1 local_138;
  QVariant local_130;
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
  
  FUN_1001ef080(param_1[0xc]);
  QThread::wait(param_1[0xc]);
  if (((param_1[0x12] != 0) && (*(int *)(param_1[0x12] + 4) != 0)) && (param_1[0x13] != 0)) {
    QWidget::hide();
  }
  if (-1 < param_2) {
LAB_1001ff971:
                    /* WARNING: Could not recover jumptable at 0x0001001ff98e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1,param_2);
    return;
  }
  uVar3 = FUN_100dddcf0(param_2);
  FUN_100df99c0("","prl_client_app",0,"(!)Error: Backup failed with error code: %s",uVar3);
  FUN_10080da40(param_1);
  cVar1 = FUN_100d9bbb0(param_1 + 9);
  if (cVar1 == '\0') {
    FUN_100df99c0("","prl_client_app",0,"(!)Warning: Failed to cleanup backup dir");
  }
  if (param_2 == -0x7ffffd8b) goto LAB_1001ff971;
  if (param_2 != -0x7ffffd69) {
    iVar2 = CMessageManager::instance();
    if (((param_1[5] == 0) || (*(int *)(param_1[5] + 4) == 0)) || (param_1[6] == 0)) {
      local_e0._16_8_ = QString::fromAscii_helper("",0);
    }
    else {
      FUN_100188480(local_e0 + 0x10);
    }
    local_e0._8_8_ = PTR_shared_null_1021e15e8;
    local_e0._0_8_ = PTR_shared_null_1021e15e8;
    local_120 = (QArrayData *)
                QString::fromAscii_helper
                          ("1onErrorMessageClosed(PRL_RESULT, Messaging::ButtonID, const QVariant&)"
                           ,0x47);
    QVariant::QVariant(&local_130,param_2);
    FUN_100a1c600(local_118,param_1,&local_120,&local_130);
    local_140 = 0x80000000;
    local_148.field7 = 0;
    local_138 = 1;
    CMessageManager::showMessageBox
              (iVar2,(QString *)0x3b00,(QStringList *)(local_e0 + 0x10),
               (QStringList *)(local_e0 + 8),(CSlotInfo *)local_e0,SUB81(local_118,0),
               (QWidget *)((ulong)in_stack_fffffffffffffe7c << 0x20),(CSlotInfo *)0x0);
    QVariant::~QVariant((QVariant *)&local_148);
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
    QVariant::~QVariant(&local_130);
    if (*(int *)local_120 != -1) {
      if (*(int *)local_120 != 0) {
        LOCK();
        *(int *)local_120 = *(int *)local_120 + -1;
        local_30[1]._7_1_ = *(int *)local_120 != 0;
        UNLOCK();
        if ((bool)local_30[1]._7_1_) goto LAB_1001ffd5d;
      }
      QArrayData::deallocate(local_120,2,8);
    }
LAB_1001ffd5d:
    FUN_100039a80(local_e0);
    FUN_100039a80(local_e0 + 8);
    if (*(int *)local_e0._16_8_ == -1) {
      return;
    }
    AVar4 = (AnonymousUnion0)local_e0._16_8_;
    if (*(int *)local_e0._16_8_ != 0) {
      LOCK();
      *(int *)local_e0._16_8_ = *(int *)local_e0._16_8_ + -1;
      UNLOCK();
      if (*(int *)local_e0._16_8_ != 0) {
        return;
      }
      local_30[1]._7_1_ = 0;
    }
    goto LAB_1001ffd9c;
  }
  iVar2 = CMessageManager::instance();
  if (((param_1[5] == 0) || (*(int *)(param_1[5] + 4) == 0)) || (param_1[6] == 0)) {
    local_30[0].field1 = (Data *)QString::fromAscii_helper("",0);
  }
  else {
    FUN_100188480(local_30);
  }
  local_38.field1 = (Data *)PTR_shared_null_1021e15e8;
  local_40 = (ExternalRefCountData *)PTR_shared_null_1021e15e8;
  local_80 = (QArrayData *)
             QString::fromAscii_helper
                       ("1onErrorMessageClosed(PRL_RESULT, Messaging::ButtonID, const QVariant&)",
                        0x47);
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
            (iVar2,(QString *)0x3aff,(QStringList *)&local_30[0].field0,
             (QStringList *)&local_38.field0,(CSlotInfo *)&local_40,SUB81(local_78,0),
             (QWidget *)((ulong)in_stack_fffffffffffffe7c << 0x20),(CSlotInfo *)0x0);
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
      if ((bool)local_30[1]._7_1_) goto LAB_1001ffb78;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1001ffb78:
  FUN_100039a80(&local_40);
  FUN_100039a80(&local_38);
  if (*(int *)local_30[0].field1 == -1) {
    return;
  }
  AVar4 = local_30[0];
  if (*(int *)local_30[0].field1 != 0) {
    LOCK();
    *(int *)local_30[0].field1 = *(int *)local_30[0].field1 + -1;
    UNLOCK();
    if (*(int *)local_30[0].field1 != 0) {
      return;
    }
    local_30[1]._7_1_ = 0;
  }
LAB_1001ffd9c:
  QArrayData::deallocate((QArrayData *)AVar4.field1,2,8);
  return;
}

