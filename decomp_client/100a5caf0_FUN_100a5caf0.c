
void FUN_100a5caf0(long *param_1)

{
  code *pcVar1;
  Node *pNVar2;
  void *pvVar3;
  Node *pNVar4;
  int iVar5;
  long *plVar6;
  QArrayData *pQVar7;
  _func_void_Node_ptr *p_Var8;
  
  pNVar2 = (Node *)*param_1;
  iVar5 = *(int *)(pNVar2 + 0x20);
  pNVar4 = pNVar2;
  if (iVar5 != 0) {
    plVar6 = *(long **)(pNVar2 + 8);
    do {
      pNVar4 = (Node *)*plVar6;
      if ((Node *)*plVar6 != pNVar2) break;
      iVar5 = iVar5 + -1;
      plVar6 = plVar6 + 1;
      pNVar4 = pNVar2;
    } while (iVar5 != 0);
  }
  if (pNVar4 != pNVar2) {
    do {
      pvVar3 = *(void **)(pNVar4 + 0x18);
      if (pvVar3 != (void *)0x0) {
        FUN_100a5a080(pvVar3);
        operator_delete(pvVar3);
      }
      pNVar4 = (Node *)QHashData::nextNode(pNVar4);
    } while (pNVar4 != (Node *)*param_1);
  }
  pQVar7 = (QArrayData *)param_1[2];
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      UNLOCK();
      if (*(int *)pQVar7 != 0) goto LAB_100a5cb99;
      pQVar7 = (QArrayData *)param_1[2];
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_100a5cb99:
  pQVar7 = (QArrayData *)param_1[1];
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      UNLOCK();
      if (*(int *)pQVar7 != 0) goto LAB_100a5cbc9;
      pQVar7 = (QArrayData *)param_1[1];
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_100a5cbc9:
  p_Var8 = (_func_void_Node_ptr *)*param_1;
  if (*(int *)(p_Var8 + 0x10) != -1) {
    if (*(int *)(p_Var8 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var8 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) {
        return;
      }
      p_Var8 = (_func_void_Node_ptr *)*param_1;
    }
    QHashData::free_helper(p_Var8);
  }
  return;
}

