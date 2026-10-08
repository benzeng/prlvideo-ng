
undefined8 * FUN_1002b6530(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  _func_void_Node_ptr_void_ptr *p_Var4;
  char cVar5;
  int iVar6;
  uint uVar7;
  Node *pNVar8;
  Node *pNVar9;
  undefined8 *puVar10;
  _func_void_Node_ptr_void_ptr *p_Var11;
  Node *pNVar12;
  _func_void_Node_ptr_void_ptr *local_40;
  
  pNVar9 = (Node *)*param_1;
  if (1 < *(int *)(pNVar9 + 0x10) + 1U) {
    LOCK();
    *(int *)(pNVar9 + 0x10) = *(int *)(pNVar9 + 0x10) + 1;
    UNLOCK();
  }
  pNVar8 = pNVar9;
  if ((((byte)pNVar9[0x28] & 1) == 0) && (1 < *(uint *)(pNVar9 + 0x10))) {
    pNVar8 = (Node *)QHashData::detach_helper
                               ((_func_void_Node_ptr_void_ptr *)pNVar9,FUN_100062bb0,0x62be0,0x18);
    if (*(int *)(pNVar9 + 0x10) != -1) {
      if (*(int *)(pNVar9 + 0x10) != 0) {
        LOCK();
        pNVar12 = pNVar9 + 0x10;
        *(int *)pNVar12 = *(int *)pNVar12 + -1;
        UNLOCK();
        if (*(int *)pNVar12 != 0) goto LAB_1002b65bb;
      }
      QHashData::free_helper((_func_void_Node_ptr *)pNVar9);
    }
  }
LAB_1002b65bb:
  p_Var11 = (_func_void_Node_ptr_void_ptr *)*param_2;
  if (1 < *(int *)(p_Var11 + 0x10) + 1U) {
    LOCK();
    *(int *)(p_Var11 + 0x10) = *(int *)(p_Var11 + 0x10) + 1;
    UNLOCK();
  }
  pNVar9 = pNVar8;
  local_40 = p_Var11;
  if ((((byte)p_Var11[0x28] & 1) == 0) && (1 < *(uint *)(p_Var11 + 0x10))) {
    local_40 = (_func_void_Node_ptr_void_ptr *)
               QHashData::detach_helper(p_Var11,FUN_100062bb0,0x62be0,0x18);
    if (*(int *)(p_Var11 + 0x10) != -1) {
      if (*(int *)(p_Var11 + 0x10) != 0) {
        LOCK();
        pcVar1 = p_Var11 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        UNLOCK();
        if (*(int *)pcVar1 != 0) goto LAB_1002b6650;
      }
      QHashData::free_helper((_func_void_Node_ptr *)p_Var11);
    }
  }
LAB_1002b6650:
  iVar6 = *(int *)(pNVar8 + 0x20);
  pNVar12 = pNVar8;
  if (iVar6 != 0) {
    puVar10 = *(undefined8 **)(pNVar8 + 8);
    do {
      pNVar12 = (Node *)*puVar10;
      if ((Node *)*puVar10 != pNVar8) break;
      iVar6 = iVar6 + -1;
      puVar10 = puVar10 + 1;
      pNVar12 = pNVar8;
    } while (iVar6 != 0);
  }
  if (pNVar9 != pNVar12) {
    pNVar9 = (Node *)QHashData::previousNode(pNVar9);
    uVar2 = *(uint *)(local_40 + 0x20);
    if (uVar2 != 0) {
      pNVar12 = pNVar9 + 0x10;
      uVar7 = qHash((QString *)pNVar12,*(uint *)(local_40 + 0x24));
      uVar3 = (ulong)uVar7 % (ulong)uVar2;
      p_Var4 = (_func_void_Node_ptr_void_ptr *)(*(long *)(local_40 + 8) + uVar3 * 8);
      for (p_Var11 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(local_40 + 8) + uVar3 * 8);
          p_Var11 != local_40; p_Var11 = *(_func_void_Node_ptr_void_ptr **)p_Var11) {
        if (*(uint *)(p_Var11 + 8) == uVar7) {
          cVar5 = operator==((QString *)pNVar12,(QString *)(p_Var11 + 0x10));
          p_Var11 = *(_func_void_Node_ptr_void_ptr **)p_Var4;
          if (cVar5 != '\0') {
            if (p_Var11 != local_40) {
              FUN_1000ab900(param_1,pNVar12);
            }
            break;
          }
        }
        p_Var4 = p_Var11;
      }
    }
    goto LAB_1002b6650;
  }
  if (*(int *)(local_40 + 0x10) != -1) {
    if (*(int *)(local_40 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_40 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1002b674a;
    }
    QHashData::free_helper((_func_void_Node_ptr *)local_40);
  }
LAB_1002b674a:
  if (*(int *)(pNVar8 + 0x10) != -1) {
    if (*(int *)(pNVar8 + 0x10) != 0) {
      LOCK();
      pNVar9 = pNVar8 + 0x10;
      *(int *)pNVar9 = *(int *)pNVar9 + -1;
      UNLOCK();
      if (*(int *)pNVar9 != 0) {
        return param_1;
      }
    }
    QHashData::free_helper((_func_void_Node_ptr *)pNVar8);
  }
  return param_1;
}

