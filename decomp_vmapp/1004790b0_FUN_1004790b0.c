
Node * FUN_1004790b0(long *param_1,Node *param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  void *pvVar5;
  Node *pNVar6;
  Node *pNVar7;
  Node *pNVar8;
  int iVar9;
  _func_void_Node_ptr *p_Var10;
  QArrayData *pQVar11;
  
  pNVar7 = (Node *)*param_1;
  if (pNVar7 == param_2) {
    return param_2;
  }
  if (1 < *(uint *)(pNVar7 + 0x10)) {
    uVar2 = *(uint *)(param_2 + 8);
    iVar9 = 0;
    uVar3 = *(uint *)(pNVar7 + 0x20);
    pNVar6 = *(Node **)(*(long *)(pNVar7 + 8) + (long)(int)(uVar2 % uVar3) * 8);
    if (pNVar6 == param_2) {
LAB_10047911a:
      pNVar7 = (Node *)QHashData::detach_helper
                                 ((_func_void_Node_ptr_void_ptr *)pNVar7,FUN_100479de0,0x471d80,0x20
                                 );
      p_Var10 = (_func_void_Node_ptr *)*param_1;
      if (*(int *)(p_Var10 + 0x10) != -1) {
        if (*(int *)(p_Var10 + 0x10) != 0) {
          LOCK();
          pcVar1 = p_Var10 + 0x10;
          *(int *)pcVar1 = *(int *)pcVar1 + -1;
          UNLOCK();
          if (*(int *)pcVar1 != 0) goto LAB_10047916b;
          p_Var10 = (_func_void_Node_ptr *)*param_1;
        }
        QHashData::free_helper(p_Var10);
      }
LAB_10047916b:
      *param_1 = (long)pNVar7;
    }
    else {
      do {
        iVar9 = iVar9 + 1;
        pNVar6 = (Node *)QHashData::nextNode(pNVar6);
      } while (pNVar6 != param_2);
      pNVar7 = (Node *)*param_1;
      if (1 < *(uint *)(pNVar7 + 0x10)) goto LAB_10047911a;
    }
    param_2 = *(Node **)(*(long *)(pNVar7 + 8) + (long)(int)(uVar2 % uVar3) * 8);
    if (0 < iVar9) {
      iVar9 = iVar9 + 1;
      do {
        param_2 = (Node *)QHashData::nextNode(param_2);
        iVar9 = iVar9 + -1;
      } while (1 < iVar9);
    }
  }
  pNVar6 = (Node *)QHashData::nextNode(param_2);
  pNVar7 = (Node *)(((ulong)*(uint *)(param_2 + 8) % (ulong)*(uint *)(*param_1 + 0x20)) * 8 +
                   *(long *)(*param_1 + 8));
  do {
    pNVar8 = pNVar7;
    pNVar7 = *(Node **)pNVar8;
  } while (pNVar7 != param_2);
  *(long *)pNVar8 = *(long *)param_2;
  piVar4 = *(int **)(param_2 + 0x18);
  if (piVar4 != (int *)0x0) {
    LOCK();
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if ((*piVar4 == 0) && (pvVar5 = *(void **)(param_2 + 0x18), pvVar5 != (void *)0x0)) {
      FUN_100031ed0(pvVar5);
      operator_delete(pvVar5);
    }
  }
  pQVar11 = *(QArrayData **)(param_2 + 0x10);
  if (*(int *)pQVar11 != -1) {
    if (*(int *)pQVar11 != 0) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + -1;
      UNLOCK();
      if (*(int *)pQVar11 != 0) goto LAB_100479232;
      pQVar11 = *(QArrayData **)(param_2 + 0x10);
    }
    QArrayData::deallocate(pQVar11,2,8);
  }
LAB_100479232:
  QHashData::freeNode((void *)*param_1);
  *(int *)(*param_1 + 0x14) = *(int *)(*param_1 + 0x14) + -1;
  return pNVar6;
}

