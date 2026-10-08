
Node * FUN_1000aac60(long *param_1,Node *param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  Node *pNVar4;
  Node *pNVar5;
  Node *pNVar6;
  int iVar7;
  long lVar8;
  _func_void_Node_ptr *p_Var9;
  QArrayData *pQVar10;
  Data *pDVar11;
  Data *pDVar12;
  
  pNVar5 = (Node *)*param_1;
  if (pNVar5 == param_2) {
    return param_2;
  }
  if (1 < *(uint *)(pNVar5 + 0x10)) {
    uVar2 = *(uint *)(param_2 + 8);
    iVar7 = 0;
    uVar3 = *(uint *)(pNVar5 + 0x20);
    pNVar4 = *(Node **)(*(long *)(pNVar5 + 8) + (long)(int)(uVar2 % uVar3) * 8);
    if (pNVar4 == param_2) {
LAB_1000aacca:
      pNVar5 = (Node *)QHashData::detach_helper
                                 ((_func_void_Node_ptr_void_ptr *)pNVar5,FUN_1000abc20,0xab020,0x20)
      ;
      p_Var9 = (_func_void_Node_ptr *)*param_1;
      if (*(int *)(p_Var9 + 0x10) != -1) {
        if (*(int *)(p_Var9 + 0x10) != 0) {
          LOCK();
          pcVar1 = p_Var9 + 0x10;
          *(int *)pcVar1 = *(int *)pcVar1 + -1;
          UNLOCK();
          if (*(int *)pcVar1 != 0) goto LAB_1000aad1b;
          p_Var9 = (_func_void_Node_ptr *)*param_1;
        }
        QHashData::free_helper(p_Var9);
      }
LAB_1000aad1b:
      *param_1 = (long)pNVar5;
    }
    else {
      do {
        iVar7 = iVar7 + 1;
        pNVar4 = (Node *)QHashData::nextNode(pNVar4);
      } while (pNVar4 != param_2);
      pNVar5 = (Node *)*param_1;
      if (1 < *(uint *)(pNVar5 + 0x10)) goto LAB_1000aacca;
    }
    param_2 = *(Node **)(*(long *)(pNVar5 + 8) + (long)(int)(uVar2 % uVar3) * 8);
    if (0 < iVar7) {
      iVar7 = iVar7 + 1;
      do {
        param_2 = (Node *)QHashData::nextNode(param_2);
        iVar7 = iVar7 + -1;
      } while (1 < iVar7);
    }
  }
  pNVar4 = (Node *)QHashData::nextNode(param_2);
  pNVar5 = (Node *)(((ulong)*(uint *)(param_2 + 8) % (ulong)*(uint *)(*param_1 + 0x20)) * 8 +
                   *(long *)(*param_1 + 8));
  do {
    pNVar6 = pNVar5;
    pNVar5 = *(Node **)pNVar6;
  } while (pNVar5 != param_2);
  *(long *)pNVar6 = *(long *)param_2;
  pDVar11 = *(Data **)(param_2 + 0x18);
  if (*(int *)pDVar11 != -1) {
    if (*(int *)pDVar11 != 0) {
      LOCK();
      *(int *)pDVar11 = *(int *)pDVar11 + -1;
      UNLOCK();
      if (*(int *)pDVar11 != 0) goto LAB_1000aae03;
      pDVar11 = *(Data **)(param_2 + 0x18);
    }
    iVar7 = *(int *)(pDVar11 + 0xc);
    if (iVar7 != *(int *)(pDVar11 + 8)) {
      lVar8 = (long)*(int *)(pDVar11 + 8) * 8 + (long)iVar7 * -8;
      pDVar12 = pDVar11 + (long)iVar7 * 8 + 8;
      do {
        if (*(void **)pDVar12 != (void *)0x0) {
          operator_delete(*(void **)pDVar12);
        }
        pDVar12 = pDVar12 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose(pDVar11);
  }
LAB_1000aae03:
  pQVar10 = *(QArrayData **)(param_2 + 0x10);
  if (*(int *)pQVar10 != -1) {
    if (*(int *)pQVar10 != 0) {
      LOCK();
      *(int *)pQVar10 = *(int *)pQVar10 + -1;
      UNLOCK();
      if (*(int *)pQVar10 != 0) goto LAB_1000aae33;
      pQVar10 = *(QArrayData **)(param_2 + 0x10);
    }
    QArrayData::deallocate(pQVar10,2,8);
  }
LAB_1000aae33:
  QHashData::freeNode((void *)*param_1);
  *(int *)(*param_1 + 0x14) = *(int *)(*param_1 + 0x14) + -1;
  return pNVar4;
}

