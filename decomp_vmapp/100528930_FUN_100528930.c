
void FUN_100528930(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  Node *pNVar5;
  Node *pNVar6;
  undefined8 *puVar7;
  _func_void_Node_ptr *p_Var8;
  
  FUN_1004ba370(param_2);
  pNVar5 = *(Node **)(param_1 + 0x830);
  if (*(uint *)(pNVar5 + 0x10) < 2) goto LAB_1005289bb;
  pNVar5 = (Node *)QHashData::detach_helper
                             ((_func_void_Node_ptr_void_ptr *)pNVar5,FUN_100529610,0x5292f0,0x18);
  p_Var8 = *(_func_void_Node_ptr **)(param_1 + 0x830);
  if (*(int *)(p_Var8 + 0x10) != -1) {
    if (*(int *)(p_Var8 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var8 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1005289b4;
      p_Var8 = *(_func_void_Node_ptr **)(param_1 + 0x830);
    }
    QHashData::free_helper(p_Var8);
  }
LAB_1005289b4:
  *(Node **)(param_1 + 0x830) = pNVar5;
LAB_1005289bb:
  iVar4 = *(int *)(pNVar5 + 0x20);
  pNVar6 = pNVar5;
  if (iVar4 != 0) {
    puVar7 = *(undefined8 **)(pNVar5 + 8);
    do {
      pNVar6 = (Node *)*puVar7;
      if ((Node *)*puVar7 != pNVar5) break;
      iVar4 = iVar4 + -1;
      puVar7 = puVar7 + 1;
      pNVar6 = pNVar5;
    } while (iVar4 != 0);
  }
  do {
    if (1 < *(uint *)(pNVar5 + 0x10)) {
      pNVar5 = (Node *)QHashData::detach_helper
                                 ((_func_void_Node_ptr_void_ptr *)pNVar5,FUN_100529610,0x5292f0,0x18
                                 );
      p_Var8 = *(_func_void_Node_ptr **)(param_1 + 0x830);
      if (*(int *)(p_Var8 + 0x10) != -1) {
        if (*(int *)(p_Var8 + 0x10) != 0) {
          LOCK();
          pcVar1 = p_Var8 + 0x10;
          *(int *)pcVar1 = *(int *)pcVar1 + -1;
          UNLOCK();
          if (*(int *)pcVar1 != 0) goto LAB_100528a63;
          p_Var8 = *(_func_void_Node_ptr **)(param_1 + 0x830);
        }
        QHashData::free_helper(p_Var8);
      }
LAB_100528a63:
      *(Node **)(param_1 + 0x830) = pNVar5;
    }
    if (pNVar6 == pNVar5) break;
    lVar2 = *(long *)(pNVar6 + 0x10);
    if ((lVar2 != 0) && (*(long *)(lVar2 + 0x50) != 0)) {
      puVar7 = (undefined8 *)FUN_1004be870(param_2,lVar2 + 8);
      puVar7[4] = *(undefined8 *)(lVar2 + 0x70);
      puVar7[3] = *(undefined8 *)(lVar2 + 0x68);
      puVar7[2] = *(undefined8 *)(lVar2 + 0x60);
      uVar3 = *(undefined8 *)(lVar2 + 0x50);
      puVar7[1] = *(undefined8 *)(lVar2 + 0x58);
      *puVar7 = uVar3;
      *(undefined8 *)(lVar2 + 0x70) = 0;
      *(undefined8 *)(lVar2 + 0x68) = 0;
      *(undefined8 *)(lVar2 + 0x60) = 0;
      *(undefined8 *)(lVar2 + 0x58) = 0;
      *(undefined8 *)(lVar2 + 0x50) = 0;
    }
    pNVar6 = (Node *)QHashData::nextNode(pNVar6);
    pNVar5 = *(Node **)(param_1 + 0x830);
  } while( true );
  pNVar5 = *(Node **)(param_1 + 0x838);
  if (*(uint *)(pNVar5 + 0x10) < 2) goto LAB_100528b58;
  pNVar5 = (Node *)QHashData::detach_helper
                             ((_func_void_Node_ptr_void_ptr *)pNVar5,FUN_100529610,0x5292f0,0x18);
  p_Var8 = *(_func_void_Node_ptr **)(param_1 + 0x838);
  if (*(int *)(p_Var8 + 0x10) != -1) {
    if (*(int *)(p_Var8 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var8 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100528b51;
      p_Var8 = *(_func_void_Node_ptr **)(param_1 + 0x838);
    }
    QHashData::free_helper(p_Var8);
  }
LAB_100528b51:
  *(Node **)(param_1 + 0x838) = pNVar5;
LAB_100528b58:
  iVar4 = *(int *)(pNVar5 + 0x20);
  pNVar6 = pNVar5;
  if (iVar4 != 0) {
    puVar7 = *(undefined8 **)(pNVar5 + 8);
    do {
      pNVar6 = (Node *)*puVar7;
      if ((Node *)*puVar7 != pNVar5) break;
      iVar4 = iVar4 + -1;
      puVar7 = puVar7 + 1;
      pNVar6 = pNVar5;
    } while (iVar4 != 0);
  }
  do {
    if (1 < *(uint *)(pNVar5 + 0x10)) {
      pNVar5 = (Node *)QHashData::detach_helper
                                 ((_func_void_Node_ptr_void_ptr *)pNVar5,FUN_100529610,0x5292f0,0x18
                                 );
      p_Var8 = *(_func_void_Node_ptr **)(param_1 + 0x838);
      if (*(int *)(p_Var8 + 0x10) != -1) {
        if (*(int *)(p_Var8 + 0x10) != 0) {
          LOCK();
          pcVar1 = p_Var8 + 0x10;
          *(int *)pcVar1 = *(int *)pcVar1 + -1;
          UNLOCK();
          if (*(int *)pcVar1 != 0) goto LAB_100528c03;
          p_Var8 = *(_func_void_Node_ptr **)(param_1 + 0x838);
        }
        QHashData::free_helper(p_Var8);
      }
LAB_100528c03:
      *(Node **)(param_1 + 0x838) = pNVar5;
    }
    if (pNVar6 == pNVar5) {
      return;
    }
    lVar2 = *(long *)(pNVar6 + 0x10);
    if ((lVar2 != 0) && (*(long *)(lVar2 + 0x50) != 0)) {
      puVar7 = (undefined8 *)FUN_1004be870(param_2,lVar2 + 8);
      puVar7[4] = *(undefined8 *)(lVar2 + 0x70);
      puVar7[3] = *(undefined8 *)(lVar2 + 0x68);
      puVar7[2] = *(undefined8 *)(lVar2 + 0x60);
      uVar3 = *(undefined8 *)(lVar2 + 0x50);
      puVar7[1] = *(undefined8 *)(lVar2 + 0x58);
      *puVar7 = uVar3;
      *(undefined8 *)(lVar2 + 0x70) = 0;
      *(undefined8 *)(lVar2 + 0x68) = 0;
      *(undefined8 *)(lVar2 + 0x60) = 0;
      *(undefined8 *)(lVar2 + 0x58) = 0;
      *(undefined8 *)(lVar2 + 0x50) = 0;
    }
    pNVar6 = (Node *)QHashData::nextNode(pNVar6);
    pNVar5 = *(Node **)(param_1 + 0x838);
  } while( true );
}

