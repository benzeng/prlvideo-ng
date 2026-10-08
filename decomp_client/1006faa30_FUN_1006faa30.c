
undefined8 FUN_1006faa30(undefined8 param_1,long param_2,uint param_3)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  CMacUserShortcutsStorage *this;
  _func_void_Node_ptr *p_Var4;
  undefined8 uVar5;
  QKeySequence *this_00;
  long lVar6;
  uint local_4c;
  Data *local_48;
  _func_void_Node_ptr *local_40;
  undefined1 local_31;
  
  FUN_1007055e0(param_1,*(long *)(param_2 + 0x10) + 0x18);
  puVar3 = PTR_m_instance_1021e1450;
  if (*(long *)PTR_m_instance_1021e1450 == 0) {
    this = operator_new(0x18);
    CMacUserShortcutsStorage::CMacUserShortcutsStorage(this);
    *(CMacUserShortcutsStorage **)puVar3 = this;
    DAT_102274b30 = 1;
  }
  CMacUserShortcutsStorage::userShortcuts();
  if (*(uint *)(local_40 + 0x20) != 0) {
    for (p_Var4 = *(_func_void_Node_ptr **)
                   (*(long *)(local_40 + 8) +
                   ((ulong)(*(uint *)(local_40 + 0x24) ^ param_3) %
                   (ulong)*(uint *)(local_40 + 0x20)) * 8); p_Var4 != local_40;
        p_Var4 = *(_func_void_Node_ptr **)p_Var4) {
      if ((*(uint *)(p_Var4 + 8) == (*(uint *)(local_40 + 0x24) ^ param_3)) &&
         (*(uint *)(p_Var4 + 0xc) == param_3)) {
        if (p_Var4 == local_40) break;
        local_4c = param_3;
        uVar5 = FUN_100566280(&local_40,&local_4c);
        FUN_100566450(&local_48,uVar5);
        FUN_100708260(param_1,&local_48);
        if (*(int *)local_48 == -1) break;
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) break;
        }
        iVar2 = *(int *)(local_48 + 0xc);
        if (iVar2 != *(int *)(local_48 + 8)) {
          lVar6 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar2 * -8;
          this_00 = (QKeySequence *)(local_48 + (long)iVar2 * 8 + 8);
          do {
            QKeySequence::~QKeySequence(this_00);
            this_00 = this_00 + -8;
            lVar6 = lVar6 + 8;
          } while (lVar6 != 0);
        }
        QListData::dispose(local_48);
        break;
      }
    }
  }
  if (*(int *)(local_40 + 0x10) != -1) {
    if (*(int *)(local_40 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_40 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QHashData::free_helper(local_40);
  }
  return param_1;
}

