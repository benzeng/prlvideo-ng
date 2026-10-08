
/* WARNING: Removing unreachable block (ram,0x0001000e1e66) */
/* WARNING: Removing unreachable block (ram,0x0001000e1e74) */
/* WARNING: Removing unreachable block (ram,0x0001000e1e80) */

undefined8 FUN_1000e1d60(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
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
  ExternalRefCountData *local_48;
  AnonymousUnion0 local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  lVar3 = FUN_1000bbb10();
  if (lVar3 == 0) {
    QString::toUtf8();
    FUN_100df99c0("SGAC","prl_client_app",0,
                  "Error: failed to get Vm Tools configuration for Vm with vmUuid=\"%s\"",
                  local_38 + *(long *)(local_38 + 0x10));
    uVar4 = 0xfffffffe;
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) {
          return 0xfffffffe;
        }
        local_29 = 0;
      }
      QArrayData::deallocate(local_38,1,8);
    }
  }
  else {
    cVar1 = CVmTools::isIsolatedVm();
    uVar4 = 0;
    if (cVar1 != '\0') {
      iVar2 = CMessageManager::instance();
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
                (iVar2,(QString *)0x3b12,(QStringList *)(param_1 + 0x10),
                 (QStringList *)&local_40.field0,(CSlotInfo *)&local_48,SUB81(&local_88,0),
                 (QWidget *)((ulong)in_stack_ffffffffffffff1c << 0x20),(CSlotInfo *)0x0);
      QVariant::~QVariant((QVariant *)&local_a8);
      QVariant::~QVariant((QVariant *)&local_68);
      if (local_88 != (int *)0x0) {
        LOCK();
        *local_88 = *local_88 + -1;
        local_29 = *local_88 != 0;
        UNLOCK();
        if ((!(bool)local_29) && (local_88 != (int *)0x0)) {
          operator_delete(local_88);
        }
      }
      FUN_100039a80(&local_48);
      FUN_100039a80(&local_40);
      uVar4 = 2;
    }
  }
  return uVar4;
}

