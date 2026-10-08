
void FUN_100a05510(long *param_1)

{
  code *pcVar1;
  int iVar2;
  Node *pNVar3;
  Node *pNVar4;
  long *plVar5;
  _func_void_Node_ptr *p_Var6;
  QArrayData *local_48;
  _func_void_Node_ptr *local_40;
  undefined1 local_38 [7];
  undefined1 local_31;
  
  local_40 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
  pNVar3 = (Node *)*param_1;
  if (1 < *(uint *)(pNVar3 + 0x10)) {
    pNVar3 = (Node *)QHashData::detach_helper
                               ((_func_void_Node_ptr_void_ptr *)pNVar3,FUN_100062bb0,0x62be0,0x18);
    p_Var6 = (_func_void_Node_ptr *)*param_1;
    if (*(int *)(p_Var6 + 0x10) != -1) {
      if (*(int *)(p_Var6 + 0x10) != 0) {
        LOCK();
        pcVar1 = p_Var6 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_31 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a0558a;
        p_Var6 = (_func_void_Node_ptr *)*param_1;
      }
      QHashData::free_helper(p_Var6);
    }
LAB_100a0558a:
    *param_1 = (long)pNVar3;
  }
  iVar2 = *(int *)(pNVar3 + 0x20);
  pNVar4 = pNVar3;
  if (iVar2 != 0) {
    plVar5 = *(long **)(pNVar3 + 8);
    do {
      pNVar4 = (Node *)*plVar5;
      if ((Node *)*plVar5 != pNVar3) break;
      iVar2 = iVar2 + -1;
      plVar5 = plVar5 + 1;
      pNVar4 = pNVar3;
    } while (iVar2 != 0);
  }
  if (*(uint *)(pNVar3 + 0x10) < 2) goto LAB_100a05610;
  pNVar3 = (Node *)QHashData::detach_helper
                             ((_func_void_Node_ptr_void_ptr *)pNVar3,FUN_100062bb0,0x62be0,0x18);
  p_Var6 = (_func_void_Node_ptr *)*param_1;
  if (*(int *)(p_Var6 + 0x10) != -1) {
    if (*(int *)(p_Var6 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var6 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a0560d;
      p_Var6 = (_func_void_Node_ptr *)*param_1;
    }
    QHashData::free_helper(p_Var6);
  }
LAB_100a0560d:
  *param_1 = (long)pNVar3;
LAB_100a05610:
  do {
    if (pNVar4 == pNVar3) {
      FUN_100062c30(param_1,&local_40);
      if (*(int *)(local_40 + 0x10) != -1) {
        if (*(int *)(local_40 + 0x10) != 0) {
          LOCK();
          pcVar1 = local_40 + 0x10;
          *(int *)pcVar1 = *(int *)pcVar1 + -1;
          local_31 = *(int *)pcVar1 != 0;
          UNLOCK();
          if ((bool)local_31) {
            return;
          }
        }
        QHashData::free_helper(local_40);
      }
      return;
    }
    FUN_100a053b0(&local_48,pNVar4 + 0x10);
    FUN_100062d00(&local_40,&local_48,local_38);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a0566f;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_100a0566f:
    pNVar4 = (Node *)QHashData::nextNode(pNVar4);
  } while( true );
}

