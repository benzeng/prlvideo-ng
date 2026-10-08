
undefined8 FUN_1006fb110(undefined8 param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  CMacUserShortcutsStorage *this;
  _func_void_Node_ptr *p_Var5;
  undefined8 uVar6;
  undefined8 uVar7;
  Data *pDVar8;
  long lVar9;
  QKeySequence *this_00;
  uint local_7c;
  Data *local_78;
  uint local_6c;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  int local_48;
  _func_void_Node_ptr *local_40;
  undefined1 local_31;
  
  FUN_100704ae0(param_1,*(long *)(param_2 + 0x10) + 0x18,0);
  puVar4 = PTR_m_instance_1021e1450;
  if (*(long *)PTR_m_instance_1021e1450 == 0) {
    this = operator_new(0x18);
    CMacUserShortcutsStorage::CMacUserShortcutsStorage(this);
    *(CMacUserShortcutsStorage **)puVar4 = this;
    DAT_102274b30 = 1;
  }
  CMacUserShortcutsStorage::userShortcuts();
  FUN_1005678e0(&local_68,param_1);
  FUN_1000722f0(&local_60,&local_68);
  local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
  local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
  local_48 = 1;
  if (*(int *)local_68 == -1) {
LAB_1006fb229:
    if (local_58 != local_50) {
      do {
        uVar3 = **(uint **)local_58;
        local_6c = uVar3;
        if (*(uint *)(local_40 + 0x20) != 0) {
          p_Var5 = *(_func_void_Node_ptr **)
                    (*(long *)(local_40 + 8) +
                    ((ulong)(*(uint *)(local_40 + 0x24) ^ uVar3) % (ulong)*(uint *)(local_40 + 0x20)
                    ) * 8);
LAB_1006fb283:
          if (p_Var5 != local_40) {
            if ((*(uint *)(p_Var5 + 8) != (*(uint *)(local_40 + 0x24) ^ uVar3)) ||
               (uVar3 != *(uint *)(p_Var5 + 0xc))) goto LAB_1006fb280;
            if (p_Var5 == local_40) goto LAB_1006fb360;
            uVar6 = FUN_100565d60(param_1,&local_6c);
            local_7c = uVar3;
            uVar7 = FUN_100566280(&local_40,&local_7c);
            FUN_100566450(&local_78,uVar7);
            FUN_100708260(uVar6,&local_78);
            pDVar8 = local_78;
            if (*(int *)local_78 == -1) goto LAB_1006fb360;
            if (*(int *)local_78 != 0) {
              LOCK();
              *(int *)local_78 = *(int *)local_78 + -1;
              local_31 = *(int *)local_78 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006fb360;
            }
            iVar2 = *(int *)(local_78 + 0xc);
            if (iVar2 != *(int *)(local_78 + 8)) {
              lVar9 = (long)*(int *)(local_78 + 8) * 8 + (long)iVar2 * -8;
              this_00 = (QKeySequence *)(local_78 + (long)iVar2 * 8 + 8);
              do {
                QKeySequence::~QKeySequence(this_00);
                this_00 = this_00 + -8;
                lVar9 = lVar9 + 8;
              } while (lVar9 != 0);
            }
            QListData::dispose(pDVar8);
          }
        }
LAB_1006fb360:
        local_58 = local_58 + 8;
        local_48 = 1;
      } while (local_58 != local_50);
    }
  }
  else {
    if (*(int *)local_68 == 0) {
LAB_1006fb1d0:
      iVar2 = *(int *)(local_68 + 0xc);
      if (iVar2 != *(int *)(local_68 + 8)) {
        lVar9 = (long)*(int *)(local_68 + 8) * 8 + (long)iVar2 * -8;
        pDVar8 = local_68 + (long)iVar2 * 8 + 8;
        do {
          if (*(void **)pDVar8 != (void *)0x0) {
            operator_delete(*(void **)pDVar8);
          }
          pDVar8 = pDVar8 + -8;
          lVar9 = lVar9 + 8;
        } while (lVar9 != 0);
      }
      QListData::dispose(local_68);
    }
    else {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1006fb1d0;
    }
    if (local_48 != 0) goto LAB_1006fb229;
  }
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fb3ef;
    }
    iVar2 = *(int *)(local_60 + 0xc);
    if (iVar2 != *(int *)(local_60 + 8)) {
      lVar9 = (long)*(int *)(local_60 + 8) * 8 + (long)iVar2 * -8;
      pDVar8 = local_60 + (long)iVar2 * 8 + 8;
      do {
        if (*(void **)pDVar8 != (void *)0x0) {
          operator_delete(*(void **)pDVar8);
        }
        pDVar8 = pDVar8 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose(local_60);
  }
LAB_1006fb3ef:
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
LAB_1006fb280:
  p_Var5 = *(_func_void_Node_ptr **)p_Var5;
  goto LAB_1006fb283;
}

