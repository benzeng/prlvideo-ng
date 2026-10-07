
void FUN_100528750(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  Node *pNVar7;
  Node *pNVar8;
  long *plVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  _func_void_Node_ptr *p_Var14;
  
  FUN_1004ba370(param_2);
  plVar2 = (long *)(param_1 + 0x840);
  pNVar7 = *(Node **)(param_1 + 0x840);
  if (*(uint *)(pNVar7 + 0x10) < 2) goto LAB_1005287dc;
  pNVar7 = (Node *)QHashData::detach_helper
                             ((_func_void_Node_ptr_void_ptr *)pNVar7,FUN_100529610,0x5292f0,0x18);
  p_Var14 = (_func_void_Node_ptr *)*plVar2;
  if (*(int *)(p_Var14 + 0x10) != -1) {
    if (*(int *)(p_Var14 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var14 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1005287d8;
      p_Var14 = (_func_void_Node_ptr *)*plVar2;
    }
    QHashData::free_helper(p_Var14);
  }
LAB_1005287d8:
  *plVar2 = (long)pNVar7;
LAB_1005287dc:
  iVar6 = *(int *)(pNVar7 + 0x20);
  pNVar8 = pNVar7;
  if (iVar6 != 0) {
    puVar11 = *(undefined8 **)(pNVar7 + 8);
    do {
      pNVar8 = (Node *)*puVar11;
      if ((Node *)*puVar11 != pNVar7) break;
      iVar6 = iVar6 + -1;
      puVar11 = puVar11 + 1;
      pNVar8 = pNVar7;
    } while (iVar6 != 0);
  }
  do {
    if (1 < *(uint *)(pNVar7 + 0x10)) {
      pNVar7 = (Node *)QHashData::detach_helper
                                 ((_func_void_Node_ptr_void_ptr *)pNVar7,FUN_100529610,0x5292f0,0x18
                                 );
      p_Var14 = (_func_void_Node_ptr *)*plVar2;
      if (*(int *)(p_Var14 + 0x10) != -1) {
        if (*(int *)(p_Var14 + 0x10) != 0) {
          LOCK();
          pcVar1 = p_Var14 + 0x10;
          *(int *)pcVar1 = *(int *)pcVar1 + -1;
          UNLOCK();
          if (*(int *)pcVar1 != 0) goto LAB_100528879;
          p_Var14 = (_func_void_Node_ptr *)*plVar2;
        }
        QHashData::free_helper(p_Var14);
      }
LAB_100528879:
      *plVar2 = (long)pNVar7;
    }
    if (pNVar8 == pNVar7) {
      FUN_100529800(plVar2);
      return;
    }
    uVar3 = *(uint *)(*(long *)(pNVar8 + 0x10) + 8);
    uVar10 = uVar3 >> 0x10 ^ uVar3;
    uVar12 = (ulong)(uVar10 >> 8 ^ uVar10) & 0xff;
    plVar9 = *(long **)(param_1 + 8 + uVar12 * 8);
    if (plVar9 != (long *)0x0) {
      plVar13 = (long *)(param_1 + 8 + uVar12 * 8);
      do {
        if (*(uint *)(plVar9 + 1) == uVar3) {
          lVar5 = plVar9[0x11];
          if (lVar5 != 0) {
            plVar9 = (long *)FUN_1004be870(param_2,plVar9 + 1);
            *plVar9 = lVar5;
            *(undefined8 *)(*plVar13 + 0x88) = 0;
          }
          break;
        }
        plVar4 = (long *)*plVar9;
        plVar13 = plVar9;
        plVar9 = plVar4;
      } while (plVar4 != (long *)0x0);
    }
    pNVar8 = (Node *)QHashData::nextNode(pNVar8);
    pNVar7 = (Node *)*plVar2;
  } while( true );
}

