
/* WARNING: Removing unreachable block (ram,0x0001001b3e68) */
/* WARNING: Removing unreachable block (ram,0x0001001b3e76) */
/* WARNING: Removing unreachable block (ram,0x0001001b3e82) */

void FUN_1001b3d20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  QString *pQVar4;
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
  
  iVar2 = FUN_10018f860();
  if ((iVar2 == 8) && (uVar3 = FUN_10018f890(param_1), 0x805 < uVar3)) {
    cVar1 = FUN_1001aea00(param_2,param_3);
    pQVar4 = (QString *)0x3b33;
    if (cVar1 == '\0') {
      cVar1 = FUN_1001aeb10(param_2,param_3);
      pQVar4 = (QString *)0x3b34;
      if (cVar1 == '\0') {
        return;
      }
    }
    iVar2 = CMessageManager::instance();
    FUN_100188480(local_40,param_1);
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
    CMessageManager::showMessageBox
              (iVar2,pQVar4,(QStringList *)&local_40[0].field0,(QStringList *)&local_48.field0,
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
        UNLOCK();
        if (*(int *)local_40[0].field1 != 0) {
          return;
        }
        local_40[1]._7_1_ = 0;
      }
      QArrayData::deallocate((QArrayData *)local_40[0].field1,2,8);
    }
  }
  return;
}

