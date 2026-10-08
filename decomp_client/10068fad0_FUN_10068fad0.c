
int FUN_10068fad0(long *param_1,long *param_2,long *param_3)

{
  code *pcVar1;
  Node *pNVar2;
  Node *pNVar3;
  _func_void_Node_ptr *p_Var4;
  int iVar5;
  
  pNVar2 = (Node *)FUN_1006901b0();
  pNVar3 = (Node *)*param_1;
  if (*(uint *)(pNVar3 + 0x10) < 2) goto LAB_10068fb50;
  pNVar3 = (Node *)QHashData::detach_helper
                             ((_func_void_Node_ptr_void_ptr *)pNVar3,FUN_10068ffa0,0x68fd10,0x20);
  p_Var4 = (_func_void_Node_ptr *)*param_1;
  if (*(int *)(p_Var4 + 0x10) != -1) {
    if (*(int *)(p_Var4 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var4 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_10068fb4d;
      p_Var4 = (_func_void_Node_ptr *)*param_1;
    }
    QHashData::free_helper(p_Var4);
  }
LAB_10068fb4d:
  *param_1 = (long)pNVar3;
LAB_10068fb50:
  iVar5 = 0;
  while ((pNVar2 != pNVar3 && (*(long *)(pNVar2 + 0x10) == *param_2))) {
    if (*(long *)(pNVar2 + 0x18) == *param_3) {
      pNVar2 = (Node *)FUN_100690280(param_1,pNVar2);
      iVar5 = iVar5 + 1;
    }
    else {
      pNVar2 = (Node *)QHashData::nextNode(pNVar2);
    }
  }
  return iVar5;
}

