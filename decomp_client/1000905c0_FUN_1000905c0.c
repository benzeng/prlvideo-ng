
/* WARNING: Removing unreachable block (ram,0x0001000906c4) */
/* WARNING: Removing unreachable block (ram,0x0001000906d2) */
/* WARNING: Removing unreachable block (ram,0x0001000906de) */

char FUN_1000905c0(long *param_1,char param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
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
  ExternalRefCountData *local_50;
  AnonymousUnion0 local_48;
  AnonymousUnion0 local_40 [2];
  
  iVar3 = CMessageManager::instance();
  FUN_1003193e0(local_40,param_1[4]);
  local_48.field1 = (Data *)PTR_shared_null_1021e15e8;
  local_50 = (ExternalRefCountData *)PTR_shared_null_1021e15e8;
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
  iVar3 = CMessageManager::showMessageBox
                    (iVar3,(QString *)(ulong)((param_2 == '\0') + 0x36bd),
                     (QStringList *)&local_40[0].field0,(QStringList *)&local_48.field0,
                     (CSlotInfo *)&local_50,SUB81(&local_88,0),
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
  FUN_100039a80(&local_50);
  FUN_100039a80(&local_48);
  if (*(int *)local_40[0].field1 != -1) {
    if (*(int *)local_40[0].field1 != 0) {
      LOCK();
      *(int *)local_40[0].field1 = *(int *)local_40[0].field1 + -1;
      local_40[1]._7_1_ = *(int *)local_40[0].field1 != 0;
      UNLOCK();
      if ((bool)local_40[1]._7_1_) goto LAB_100090753;
    }
    QArrayData::deallocate((QArrayData *)local_40[0].field1,2,8);
  }
LAB_100090753:
  cVar2 = '\0';
  if (iVar3 == 1) {
    cVar1 = (**(code **)(*param_1 + 0x70))(param_1,param_2);
    cVar2 = '\x02';
    if (cVar1 != '\0') {
      uVar4 = FUN_100319390(param_1[4]);
      cVar2 = FUN_100a4a370(uVar4,param_2);
      cVar2 = (cVar2 == '\0') + '\x01';
    }
  }
  return cVar2;
}

