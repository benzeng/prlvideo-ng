
undefined8 FUN_1000bd350(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  QStringList *pQVar3;
  int *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  Data_conflict local_58;
  undefined4 local_50;
  undefined1 local_48;
  ExternalRefCountData *local_40;
  AnonymousUnion0 local_38;
  undefined1 local_29;
  
  iVar2 = CMessageManager::instance();
  pQVar3 = (QStringList *)FUN_1000b6b00(*(undefined8 *)(param_1 + 0xb0));
  puVar1 = PTR_shared_null_1021e15e8;
  local_38.field1 = (Data *)PTR_shared_null_1021e15e8;
  FUN_1000341d0(&local_38,param_2);
  local_40 = (ExternalRefCountData *)puVar1;
  local_78 = (int *)0x0;
  uStack_70 = 0;
  local_60 = 0;
  local_68 = 0;
  local_50 = 0x80000000;
  local_58.field7 = 0;
  local_48 = 1;
  CMessageManager::showMessageBox
            (iVar2,(QWidget *)0x3bcf,pQVar3,(QStringList *)&local_38.field0,(CSlotInfo *)&local_40,
             SUB81(&local_78,0));
  QVariant::~QVariant((QVariant *)&local_58);
  if (local_78 != (int *)0x0) {
    LOCK();
    *local_78 = *local_78 + -1;
    local_29 = *local_78 != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_78 != (int *)0x0)) {
      operator_delete(local_78);
    }
  }
  FUN_100039a80(&local_40);
  FUN_100039a80(&local_38);
  return 0;
}

