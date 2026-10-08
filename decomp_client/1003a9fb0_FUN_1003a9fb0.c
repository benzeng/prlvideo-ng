
undefined1 FUN_1003a9fb0(undefined8 param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  QStringList *pQVar4;
  undefined8 in_R8;
  undefined1 uVar5;
  int *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  Data_conflict local_68;
  undefined4 local_60;
  undefined1 local_58;
  ExternalRefCountData *local_48;
  AnonymousUnion0 local_40;
  QArrayData *local_38 [2];
  
  local_38[0] = (QArrayData *)PTR_shared_null_1021e1288;
  cVar2 = FUN_1003b84e0();
  uVar5 = 1;
  if (cVar2 == '\0') {
    iVar3 = CMessageManager::instance();
    pQVar4 = (QStringList *)FUN_1003b0b20(param_1);
    puVar1 = PTR_shared_null_1021e15e8;
    local_40.field1 = (Data *)PTR_shared_null_1021e15e8;
    FUN_1000341d0(&local_40,in_R8);
    FUN_1000341d0(&local_40,local_38);
    local_48 = (ExternalRefCountData *)puVar1;
    FUN_1000341d0(&local_48,local_38);
    local_88 = (int *)0x0;
    uStack_80 = 0;
    local_70 = 0;
    local_78 = 0;
    local_60 = 0x80000000;
    local_68.field7 = 0;
    local_58 = 1;
    CMessageManager::showMessageBox
              (iVar3,(QWidget *)0x80015291,pQVar4,(QStringList *)&local_40.field0,
               (CSlotInfo *)&local_48,SUB81(&local_88,0));
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
    uVar5 = 0;
  }
  if (*(int *)local_38[0] != -1) {
    if (*(int *)local_38[0] != 0) {
      LOCK();
      *(int *)local_38[0] = *(int *)local_38[0] + -1;
      UNLOCK();
      if (*(int *)local_38[0] != 0) {
        return uVar5;
      }
      local_38[1]._7_1_ = 0;
    }
    QArrayData::deallocate(local_38[0],2,8);
  }
  return uVar5;
}

