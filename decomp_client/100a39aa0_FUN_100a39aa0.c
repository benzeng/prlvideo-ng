
/* WARNING: Removing unreachable block (ram,0x000100a39bc6) */
/* WARNING: Removing unreachable block (ram,0x000100a39bd4) */
/* WARNING: Removing unreachable block (ram,0x000100a39be0) */

void FUN_100a39aa0(undefined8 param_1,long param_2,ulong param_3)

{
  int iVar1;
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
  ExternalRefCountData *local_48;
  AnonymousUnion0 local_40;
  AnonymousUnion0 local_38 [2];
  
  if (param_2 == 0) {
    iVar1 = CMessageManager::instance();
    local_38[0].field1 = (Data *)PTR_shared_null_1021e1288;
    local_40.field1 = (Data *)PTR_shared_null_1021e15e8;
    local_48 = (ExternalRefCountData *)PTR_shared_null_1021e15e8;
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
              (iVar1,(QString *)(param_3 & 0xffffffff),(QStringList *)&local_38[0].field0,
               (QStringList *)&local_40.field0,(CSlotInfo *)&local_48,SUB81(&local_88,0),
               (QWidget *)((ulong)in_stack_ffffffffffffff1c << 0x20),(CSlotInfo *)0x0);
    QVariant::~QVariant((QVariant *)&local_a8);
    QVariant::~QVariant((QVariant *)&local_68);
    if (local_88 != (int *)0x0) {
      LOCK();
      *local_88 = *local_88 + -1;
      local_38[1]._7_1_ = *local_88 != 0;
      UNLOCK();
      if ((!(bool)local_38[1]._7_1_) && (local_88 != (int *)0x0)) {
        operator_delete(local_88);
      }
    }
    FUN_100039a80(&local_48);
    FUN_100039a80(&local_40);
    if (*(int *)local_38[0].field1 != -1) {
      if (*(int *)local_38[0].field1 != 0) {
        LOCK();
        *(int *)local_38[0].field1 = *(int *)local_38[0].field1 + -1;
        UNLOCK();
        if (*(int *)local_38[0].field1 != 0) {
          return;
        }
        local_38[1]._7_1_ = 0;
      }
      QArrayData::deallocate((QArrayData *)local_38[0].field1,2,8);
    }
  }
  else {
    iVar1 = FUN_10018a9d0(param_2);
    if (iVar1 != 0x30000004) {
      FUN_100192d10(param_2,0x27f,0,0);
      return;
    }
  }
  return;
}

