
undefined8 FUN_10003e890(long param_1,int *param_2,QString *param_3)

{
  code *pcVar1;
  int iVar2;
  Node *pNVar3;
  Node *pNVar4;
  undefined8 *puVar5;
  _func_void_Node_ptr *p_Var6;
  
  pNVar3 = *(Node **)(param_1 + 0x10);
  if (*(int *)(pNVar3 + 0x14) == 0) {
    return 0;
  }
  if (*(uint *)(pNVar3 + 0x10) < 2) goto LAB_10003e91c;
  pNVar3 = (Node *)QHashData::detach_helper
                             ((_func_void_Node_ptr_void_ptr *)pNVar3,FUN_10003f440,0x3f3a0,0x20);
  p_Var6 = *(_func_void_Node_ptr **)(param_1 + 0x10);
  if (*(int *)(p_Var6 + 0x10) != -1) {
    if (*(int *)(p_Var6 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var6 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_10003e917;
      p_Var6 = *(_func_void_Node_ptr **)(param_1 + 0x10);
    }
    QHashData::free_helper(p_Var6);
  }
LAB_10003e917:
  *(Node **)(param_1 + 0x10) = pNVar3;
LAB_10003e91c:
  iVar2 = *(int *)(pNVar3 + 0x20);
  pNVar4 = pNVar3;
  if (iVar2 != 0) {
    puVar5 = *(undefined8 **)(pNVar3 + 8);
    do {
      pNVar4 = (Node *)*puVar5;
      if ((Node *)*puVar5 != pNVar3) break;
      iVar2 = iVar2 + -1;
      puVar5 = puVar5 + 1;
      pNVar4 = pNVar3;
    } while (iVar2 != 0);
  }
  do {
    if (1 < *(uint *)(pNVar3 + 0x10)) {
      pNVar3 = (Node *)QHashData::detach_helper
                                 ((_func_void_Node_ptr_void_ptr *)pNVar3,FUN_10003f440,0x3f3a0,0x20)
      ;
      p_Var6 = *(_func_void_Node_ptr **)(param_1 + 0x10);
      if (*(int *)(p_Var6 + 0x10) != -1) {
        if (*(int *)(p_Var6 + 0x10) != 0) {
          LOCK();
          pcVar1 = p_Var6 + 0x10;
          *(int *)pcVar1 = *(int *)pcVar1 + -1;
          UNLOCK();
          if (*(int *)pcVar1 != 0) goto LAB_10003e9b4;
          p_Var6 = *(_func_void_Node_ptr **)(param_1 + 0x10);
        }
        QHashData::free_helper(p_Var6);
      }
LAB_10003e9b4:
      *(Node **)(param_1 + 0x10) = pNVar3;
    }
    if (pNVar3 == pNVar4) {
      return 0;
    }
    if ((param_2[1] == (*(int **)(pNVar4 + 0x18))[1]) && (*param_2 == **(int **)(pNVar4 + 0x18))) {
      QString::operator=(param_3,(QString *)(pNVar4 + 0x10));
      return 1;
    }
    pNVar4 = (Node *)QHashData::nextNode(pNVar4);
    pNVar3 = *(Node **)(param_1 + 0x10);
  } while( true );
}

