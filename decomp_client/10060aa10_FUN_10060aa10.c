
void FUN_10060aa10(long param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  Node *pNVar6;
  Node *pNVar7;
  uint uVar8;
  int *piVar9;
  undefined8 *puVar10;
  int *piVar11;
  _func_void_Node_ptr *p_Var12;
  bool bVar13;
  QArrayData *local_70;
  int *local_68;
  int *local_60;
  int *local_58;
  uint local_50;
  int *local_48;
  int *local_40;
  undefined1 local_31;
  
  FUN_1006132b0(&local_48,param_1 + 0x68);
  local_40 = local_48;
  if (*local_48 != -1) {
    if (*local_48 == 0) {
      QListData::detach((int)&local_40);
      iVar3 = local_40[2];
      if (iVar3 != local_40[3]) {
        local_48 = local_48 + (long)local_48[2] * 2 + 4;
        piVar9 = local_40 + (long)iVar3 * 2 + 4;
        lVar4 = (long)local_40[3] * 8 + (long)iVar3 * -8;
        do {
          piVar11 = *(int **)local_48;
          *(int **)piVar9 = piVar11;
          if (1 < *piVar11 + 1U) {
            LOCK();
            *piVar11 = *piVar11 + 1;
            local_31 = *piVar11 != 0;
            UNLOCK();
          }
          piVar9 = piVar9 + 2;
          local_48 = local_48 + 2;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
    }
    else {
      LOCK();
      *local_48 = *local_48 + 1;
      local_31 = *local_48 != 0;
      UNLOCK();
    }
  }
  FUN_100039a80(&local_48);
  local_68 = local_40;
  if (*local_40 != -1) {
    if (*local_40 == 0) {
      QListData::detach((int)&local_68);
      iVar3 = local_68[2];
      if (iVar3 != local_68[3]) {
        piVar9 = local_40 + (long)local_40[2] * 2 + 4;
        piVar11 = local_68 + (long)iVar3 * 2 + 4;
        lVar4 = (long)local_68[3] * 8 + (long)iVar3 * -8;
        do {
          piVar2 = *(int **)piVar9;
          *(int **)piVar11 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar11 = piVar11 + 2;
          piVar9 = piVar9 + 2;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
    }
    else {
      LOCK();
      *local_40 = *local_40 + 1;
      local_31 = *local_40 != 0;
      UNLOCK();
    }
  }
  local_60 = local_68 + (long)local_68[2] * 2 + 4;
  local_58 = local_68 + (long)local_68[3] * 2 + 4;
  local_50 = 1;
  if (local_68[2] == local_68[3]) {
LAB_10060ad5d:
    FUN_100039a80(&local_68);
    FUN_100039a80(&local_40);
    return;
  }
LAB_10060ab90:
  local_70 = *(QArrayData **)local_60;
  if (1 < *(int *)local_70 + 1U) {
    LOCK();
    *(int *)local_70 = *(int *)local_70 + 1;
    local_31 = *(int *)local_70 != 0;
    UNLOCK();
  }
  if (local_50 != 0) {
    plVar5 = (long *)FUN_100613170(param_1 + 0x68,&local_70);
    pNVar6 = (Node *)*plVar5;
    if (*(uint *)(pNVar6 + 0x10) < 2) goto LAB_10060ac15;
    pNVar6 = (Node *)QHashData::detach_helper
                               ((_func_void_Node_ptr_void_ptr *)pNVar6,FUN_1006146b0,0x613ec0,0x48);
    p_Var12 = (_func_void_Node_ptr *)*plVar5;
    if (*(int *)(p_Var12 + 0x10) != -1) {
      if (*(int *)(p_Var12 + 0x10) != 0) {
        LOCK();
        pcVar1 = p_Var12 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_31 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10060ac12;
        p_Var12 = (_func_void_Node_ptr *)*plVar5;
      }
      QHashData::free_helper(p_Var12);
    }
LAB_10060ac12:
    *plVar5 = (long)pNVar6;
LAB_10060ac15:
    iVar3 = *(int *)(pNVar6 + 0x20);
    pNVar7 = pNVar6;
    if (iVar3 != 0) {
      puVar10 = *(undefined8 **)(pNVar6 + 8);
      do {
        pNVar7 = (Node *)*puVar10;
        if ((Node *)*puVar10 != pNVar6) break;
        iVar3 = iVar3 + -1;
        puVar10 = puVar10 + 1;
        pNVar7 = pNVar6;
      } while (iVar3 != 0);
    }
    do {
      if (1 < *(uint *)(pNVar6 + 0x10)) {
        pNVar6 = (Node *)QHashData::detach_helper
                                   ((_func_void_Node_ptr_void_ptr *)pNVar6,FUN_1006146b0,0x613ec0,
                                    0x48);
        p_Var12 = (_func_void_Node_ptr *)*plVar5;
        if (*(int *)(p_Var12 + 0x10) != -1) {
          if (*(int *)(p_Var12 + 0x10) != 0) {
            LOCK();
            pcVar1 = p_Var12 + 0x10;
            *(int *)pcVar1 = *(int *)pcVar1 + -1;
            local_31 = *(int *)pcVar1 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10060acaf;
            p_Var12 = (_func_void_Node_ptr *)*plVar5;
          }
          QHashData::free_helper(p_Var12);
        }
LAB_10060acaf:
        *plVar5 = (long)pNVar6;
      }
      if (pNVar7 == pNVar6) goto LAB_10060ad00;
      if (((*(long *)(pNVar7 + 0x10) == 0) || (*(int *)(*(long *)(pNVar7 + 0x10) + 4) == 0)) ||
         (*(long *)(pNVar7 + 0x18) == 0)) {
        pNVar7 = (Node *)FUN_100613350(plVar5,pNVar7);
      }
      else {
        pNVar7 = (Node *)QHashData::nextNode(pNVar7);
      }
      pNVar6 = (Node *)*plVar5;
    } while( true );
  }
  goto LAB_10060ad07;
LAB_10060ad00:
  local_50 = 0;
LAB_10060ad07:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10060ad37;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10060ad37:
  local_60 = local_60 + 2;
  uVar8 = local_50 ^ 1;
  bVar13 = local_50 == 1;
  local_50 = uVar8;
  if ((bVar13) || (local_60 == local_58)) goto LAB_10060ad5d;
  goto LAB_10060ab90;
}

