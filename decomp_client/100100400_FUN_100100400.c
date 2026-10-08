
/* WARNING: Removing unreachable block (ram,0x00010010053f) */
/* WARNING: Removing unreachable block (ram,0x00010010054d) */
/* WARNING: Removing unreachable block (ram,0x000100100559) */

void FUN_100100400(long param_1)

{
  long lVar1;
  int iVar2;
  uint *puVar3;
  uint in_stack_ffffffffffffff1c;
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
  
  puVar3 = *(uint **)(param_1 + 0x10);
  if (1 < *puVar3) {
    FUN_1001020d0((undefined8 *)(param_1 + 0x10),puVar3[1]);
    puVar3 = *(uint **)(param_1 + 0x10);
  }
  lVar1 = *(long *)(puVar3 + (long)(int)puVar3[2] * 2 + 4);
  iVar2 = CMessageManager::instance();
  local_30[0].field1 = (Data *)PTR_shared_null_1021e1288;
  local_38.field1 = (Data *)PTR_shared_null_1021e15e8;
  local_40 = (ExternalRefCountData *)PTR_shared_null_1021e15e8;
  FUN_1000341d0(&local_40,lVar1 + 0x10);
  FUN_1000341d0(&local_40,lVar1);
  local_80 = (QArrayData *)
             QString::fromAscii_helper
                       ("1onExtensionNotificationClosed(PRL_RESULT, Messaging::ButtonID)",0x3f);
  local_88 = 0x80000000;
  local_90.field7 = 0;
  FUN_100a1c600(local_78,param_1,&local_80,&local_90);
  local_a0 = 0x80000000;
  local_a8.field7 = 0;
  local_98 = 1;
  CMessageManager::showMessageBox
            (iVar2,(QString *)0x3c80,(QStringList *)&local_30[0].field0,
             (QStringList *)&local_38.field0,(CSlotInfo *)&local_40,SUB81(local_78,0),
             (QWidget *)((ulong)in_stack_ffffffffffffff1c << 0x20),(CSlotInfo *)0x0);
  QVariant::~QVariant((QVariant *)&local_a8);
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
      if ((bool)local_30[1]._7_1_) goto LAB_1001005c8;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1001005c8:
  FUN_100039a80(&local_40);
  FUN_100039a80(&local_38);
  if (*(int *)local_30[0].field1 != -1) {
    if (*(int *)local_30[0].field1 != 0) {
      LOCK();
      *(int *)local_30[0].field1 = *(int *)local_30[0].field1 + -1;
      UNLOCK();
      if (*(int *)local_30[0].field1 != 0) {
        return;
      }
      local_30[1]._7_1_ = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30[0].field1,2,8);
  }
  return;
}

