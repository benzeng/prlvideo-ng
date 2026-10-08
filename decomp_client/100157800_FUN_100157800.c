
/* WARNING: Removing unreachable block (ram,0x000100157967) */
/* WARNING: Removing unreachable block (ram,0x000100157975) */
/* WARNING: Removing unreachable block (ram,0x000100157981) */

void FUN_100157800(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  uint in_stack_ffffffffffffff1c;
  Data_conflict local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined1 local_88 [24];
  QVariant local_70;
  QArrayData *local_60;
  int *local_58 [4];
  QVariant local_38 [2];
  undefined1 local_19;
  
  iVar2 = CSdkCommunicator::requestStorage();
  CRequestStorage::clear(iVar2);
  uVar3 = FUN_1001d50a0();
  cVar1 = FUN_1001d5140(uVar3,0);
  if (cVar1 != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x18) != '\0') {
    return;
  }
  local_60 = (QArrayData *)
             QString::fromAscii_helper
                       ("1onReportDisconnectAnswered(PRL_RESULT, Messaging::ButtonID)",0x3c);
  local_70.field0_0x0.field1_0x8.bitField0_30 = 0x80000000;
  local_70.field0_0x0.field0_0x0.field7 = 0;
  FUN_100a1c600(local_58,param_1,&local_60,&local_70);
  QVariant::~QVariant(&local_70);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_19 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001578b9;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1001578b9:
  iVar2 = CMessageManager::instance();
  local_88._16_8_ = PTR_shared_null_1021e1288;
  local_88._8_8_ = PTR_shared_null_1021e15e8;
  local_88._0_8_ = PTR_shared_null_1021e15e8;
  local_a0 = 0x80000000;
  local_a8.field7 = 0;
  local_98 = 1;
  CMessageManager::showMessageBox
            (iVar2,(QString *)0x80000249,(QStringList *)(local_88 + 0x10),
             (QStringList *)(local_88 + 8),(CSlotInfo *)local_88,SUB81(local_58,0),
             (QWidget *)((ulong)in_stack_ffffffffffffff1c << 0x20),(CSlotInfo *)0x0);
  QVariant::~QVariant((QVariant *)&local_a8);
  FUN_100039a80(local_88);
  FUN_100039a80(local_88 + 8);
  if (*(int *)local_88._16_8_ != -1) {
    if (*(int *)local_88._16_8_ != 0) {
      LOCK();
      *(int *)local_88._16_8_ = *(int *)local_88._16_8_ + -1;
      local_19 = *(int *)local_88._16_8_ != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001579c8;
    }
    QArrayData::deallocate((QArrayData *)local_88._16_8_,2,8);
  }
LAB_1001579c8:
  QVariant::~QVariant(local_38);
  if (local_58[0] != (int *)0x0) {
    LOCK();
    *local_58[0] = *local_58[0] + -1;
    local_19 = *local_58[0] != 0;
    UNLOCK();
    if ((!(bool)local_19) && (local_58[0] != (int *)0x0)) {
      operator_delete(local_58[0]);
    }
  }
  return;
}

