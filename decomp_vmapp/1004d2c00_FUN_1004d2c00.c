
void FUN_1004d2c00(long param_1,long param_2)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  Node *pNVar6;
  Node *pNVar7;
  undefined8 *puVar8;
  _func_void_Node_ptr *p_Var9;
  long *plVar10;
  long *local_48;
  int *local_40;
  undefined1 local_31;
  
  local_40 = (int *)PTR_shared_null_100ba2188;
  QMutex::lock();
  pNVar6 = *(Node **)(param_1 + 0x20);
  plVar10 = (long *)(param_1 + 0x20);
  if (*(uint *)(pNVar6 + 0x10) < 2) goto LAB_1004d2ca0;
  pNVar6 = (Node *)QHashData::detach_helper
                             ((_func_void_Node_ptr_void_ptr *)pNVar6,FUN_1004d7090,0x4d6b40,0x18);
  p_Var9 = (_func_void_Node_ptr *)*plVar10;
  if (*(int *)(p_Var9 + 0x10) != -1) {
    if (*(int *)(p_Var9 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var9 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d2c92;
      p_Var9 = (_func_void_Node_ptr *)*plVar10;
    }
    QHashData::free_helper(p_Var9);
  }
LAB_1004d2c92:
  *plVar10 = (long)pNVar6;
LAB_1004d2ca0:
  iVar5 = *(int *)(pNVar6 + 0x20);
  pNVar7 = pNVar6;
  if (iVar5 != 0) {
    puVar8 = *(undefined8 **)(pNVar6 + 8);
    do {
      pNVar7 = (Node *)*puVar8;
      if ((Node *)*puVar8 != pNVar6) break;
      iVar5 = iVar5 + -1;
      puVar8 = puVar8 + 1;
      pNVar7 = pNVar6;
    } while (iVar5 != 0);
  }
  do {
    if (1 < *(uint *)(pNVar6 + 0x10)) {
      pNVar6 = (Node *)QHashData::detach_helper
                                 ((_func_void_Node_ptr_void_ptr *)pNVar6,FUN_1004d7090,0x4d6b40,0x18
                                 );
      p_Var9 = (_func_void_Node_ptr *)*plVar10;
      if (*(int *)(p_Var9 + 0x10) != -1) {
        if (*(int *)(p_Var9 + 0x10) != 0) {
          LOCK();
          pcVar1 = p_Var9 + 0x10;
          *(int *)pcVar1 = *(int *)pcVar1 + -1;
          local_31 = *(int *)pcVar1 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004d2d2e;
          p_Var9 = (_func_void_Node_ptr *)*plVar10;
        }
        QHashData::free_helper(p_Var9);
      }
LAB_1004d2d2e:
      *plVar10 = (long)pNVar6;
    }
    if (pNVar7 == pNVar6) {
      *(undefined1 *)(param_2 + 0x48) = 1;
      QMutex::unlock();
      if (*local_40 != -1) {
        if (*local_40 != 0) {
          LOCK();
          *local_40 = *local_40 + -1;
          UNLOCK();
          if (*local_40 != 0) {
            return;
          }
          local_31 = 0;
        }
        FUN_1004d74b0(&local_40,local_40);
      }
      return;
    }
    plVar3 = *(long **)(pNVar7 + 0x10);
    if (plVar3 != (long *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    local_48 = plVar3;
    if (plVar3[2] == param_2) {
      FUN_1004d7540(&local_40,&local_48);
      pNVar7 = (Node *)FUN_1004d5130(plVar10,pNVar7);
      *(long *)(DAT_1011cc978 + 0xf0) = *(long *)(DAT_1011cc978 + 0xf0) + -1;
    }
    else {
      pNVar7 = (Node *)QHashData::nextNode(pNVar7);
    }
    LOCK();
    plVar2 = plVar3 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
    pNVar6 = (Node *)*plVar10;
  } while( true );
}

