
long * FUN_100021f90(long *param_1,long *param_2)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  char cVar4;
  uint uVar5;
  Node *pNVar6;
  _func_void_Node_ptr *p_Var7;
  int iVar8;
  long *plVar9;
  _func_void_Node_ptr *p_Var10;
  Node *pNVar11;
  _func_void_Node_ptr *p_Var12;
  _func_void_Node_ptr *p_Var13;
  _func_void_Node_ptr *p_Var14;
  _func_void_Node_ptr *local_48;
  Node *local_40;
  undefined1 local_31;
  
  local_40 = (Node *)PTR_shared_null_100ba2180;
  local_48 = (_func_void_Node_ptr *)PTR_shared_null_100ba2180;
  if (*(int *)(*param_2 + 0x14) < *(int *)(*param_1 + 0x14)) {
    FUN_100023010(&local_40,param_2);
    FUN_100023010(&local_48,param_1);
    FUN_100023010(param_1,&local_40);
    pNVar6 = local_40;
  }
  else {
    FUN_100023010(&local_40,param_1);
    FUN_100023010(&local_48,param_2);
    pNVar6 = local_40;
  }
LAB_100022014:
  iVar8 = *(int *)(local_40 + 0x20);
  pNVar11 = local_40;
  if (iVar8 != 0) {
    plVar9 = *(long **)(local_40 + 8);
    do {
      pNVar11 = (Node *)*plVar9;
      if ((Node *)*plVar9 != local_40) break;
      iVar8 = iVar8 + -1;
      plVar9 = plVar9 + 1;
      pNVar11 = local_40;
    } while (iVar8 != 0);
  }
  if (pNVar6 != pNVar11) {
    pNVar6 = (Node *)QHashData::previousNode(pNVar6);
    p_Var7 = local_48;
    pNVar11 = pNVar6 + 0x10;
    uVar2 = *(uint *)(local_48 + 0x20);
    if (uVar2 == 0) goto LAB_1000220d0;
    uVar5 = qHash((QString *)pNVar11,*(uint *)(local_48 + 0x24));
    uVar3 = (ulong)uVar5 % (ulong)uVar2;
    p_Var12 = *(_func_void_Node_ptr **)(*(long *)(p_Var7 + 8) + uVar3 * 8);
    if (p_Var12 == p_Var7) goto LAB_1000220d0;
    p_Var14 = (_func_void_Node_ptr *)(*(long *)(p_Var7 + 8) + uVar3 * 8);
    do {
      p_Var10 = p_Var7;
      p_Var13 = p_Var12;
      if (*(uint *)(p_Var12 + 8) == uVar5) {
        cVar4 = operator==((QString *)pNVar11,(QString *)(p_Var12 + 0x10));
        p_Var7 = *(_func_void_Node_ptr **)p_Var14;
        p_Var10 = local_48;
        p_Var13 = p_Var7;
        if (cVar4 != '\0') break;
      }
      p_Var7 = p_Var10;
      p_Var12 = *(_func_void_Node_ptr **)p_Var13;
      p_Var10 = p_Var7;
      p_Var14 = p_Var13;
    } while (p_Var12 != p_Var7);
    if (p_Var7 == p_Var10) {
LAB_1000220d0:
      FUN_1000230e0(param_1,pNVar11);
    }
    goto LAB_100022014;
  }
  if (*(int *)(local_48 + 0x10) != -1) {
    if (*(int *)(local_48 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_48 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100022112;
    }
    QHashData::free_helper(local_48);
  }
LAB_100022112:
  if (*(int *)(local_40 + 0x10) != -1) {
    if (*(int *)(local_40 + 0x10) != 0) {
      LOCK();
      pNVar6 = local_40 + 0x10;
      *(int *)pNVar6 = *(int *)pNVar6 + -1;
      UNLOCK();
      if (*(int *)pNVar6 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QHashData::free_helper((_func_void_Node_ptr *)local_40);
  }
  return param_1;
}

