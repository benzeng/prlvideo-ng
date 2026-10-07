
undefined8 FUN_1006199e0(uint param_1,undefined8 param_2,undefined8 *param_3)

{
  code *pcVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  Node *pNVar5;
  Node *pNVar6;
  undefined8 *puVar7;
  uint uVar8;
  _func_void_Node_ptr *p_Var9;
  undefined8 *puVar10;
  
  uVar8 = DAT_1011cc9e8[2];
  if (DAT_1011cc9e8[3] - uVar8 <= param_1) {
    return 0x80042000;
  }
  if (1 < *DAT_1011cc9e8) {
    FUN_10061a270(&DAT_1011cc9e8,DAT_1011cc9e8[1]);
    uVar8 = DAT_1011cc9e8[2];
  }
  lVar2 = *(long *)(DAT_1011cc9e8 + ((long)(int)param_1 + (long)(int)uVar8) * 2 + 4);
  FUN_1007ea840(lVar2,param_2);
  puVar4 = _malloc((long)*(int *)(*(long *)(lVar2 + 0x10) + 0x14) * 0x10 + 0x10);
  if (puVar4 == (undefined8 *)0x0) {
    FUN_1008e3970("","prlplg",0,"Failed to allocate memory for static plugin %u interfaces",param_1)
    ;
    return 0x80000002;
  }
  pNVar5 = *(Node **)(lVar2 + 0x10);
  if (*(uint *)(pNVar5 + 0x10) < 2) goto LAB_100619ad3;
  pNVar5 = (Node *)QHashData::detach_helper
                             ((_func_void_Node_ptr_void_ptr *)pNVar5,FUN_100619440,0x619150,0x20);
  p_Var9 = *(_func_void_Node_ptr **)(lVar2 + 0x10);
  if (*(int *)(p_Var9 + 0x10) != -1) {
    if (*(int *)(p_Var9 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var9 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100619ace;
      p_Var9 = *(_func_void_Node_ptr **)(lVar2 + 0x10);
    }
    QHashData::free_helper(p_Var9);
  }
LAB_100619ace:
  *(Node **)(lVar2 + 0x10) = pNVar5;
LAB_100619ad3:
  iVar3 = *(int *)(pNVar5 + 0x20);
  pNVar6 = pNVar5;
  puVar10 = puVar4;
  if (iVar3 != 0) {
    puVar7 = *(undefined8 **)(pNVar5 + 8);
    do {
      pNVar6 = (Node *)*puVar7;
      if ((Node *)*puVar7 != pNVar5) break;
      iVar3 = iVar3 + -1;
      puVar7 = puVar7 + 1;
      pNVar6 = pNVar5;
    } while (iVar3 != 0);
  }
  do {
    if (1 < *(uint *)(pNVar5 + 0x10)) {
      pNVar5 = (Node *)QHashData::detach_helper
                                 ((_func_void_Node_ptr_void_ptr *)pNVar5,FUN_100619440,0x619150,0x20
                                 );
      p_Var9 = *(_func_void_Node_ptr **)(lVar2 + 0x10);
      if (*(int *)(p_Var9 + 0x10) != -1) {
        if (*(int *)(p_Var9 + 0x10) != 0) {
          LOCK();
          pcVar1 = p_Var9 + 0x10;
          *(int *)pcVar1 = *(int *)pcVar1 + -1;
          UNLOCK();
          if (*(int *)pcVar1 != 0) goto LAB_100619b7c;
          p_Var9 = *(_func_void_Node_ptr **)(lVar2 + 0x10);
        }
        QHashData::free_helper(p_Var9);
      }
LAB_100619b7c:
      *(Node **)(lVar2 + 0x10) = pNVar5;
    }
    if (pNVar6 == pNVar5) {
      puVar10[1] = 0;
      *puVar10 = 0;
      *param_3 = puVar4;
      return 0;
    }
    FUN_1007ea840(pNVar6 + 0xc,puVar10);
    pNVar6 = (Node *)QHashData::nextNode(pNVar6);
    pNVar5 = *(Node **)(lVar2 + 0x10);
    puVar10 = puVar10 + 2;
  } while( true );
}

