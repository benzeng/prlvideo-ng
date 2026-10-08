
void FUN_1000f5e50(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  int iVar3;
  Node *pNVar4;
  Node *pNVar5;
  undefined8 *puVar6;
  long *plVar7;
  _func_void_Node_ptr *p_Var8;
  undefined8 uVar9;
  
  plVar7 = (long *)0x0;
  if (*(long *)(param_1 + 0x40) != 0) {
    plVar7 = *(long **)(*(long *)(param_1 + 0x40) + 0x10);
  }
  pNVar4 = (Node *)*plVar7;
  if (1 < *(uint *)(pNVar4 + 0x10)) {
    pNVar4 = (Node *)QHashData::detach_helper
                               ((_func_void_Node_ptr_void_ptr *)pNVar4,FUN_1000f81e0,0xf8050,0x20);
    p_Var8 = (_func_void_Node_ptr *)*plVar7;
    if (*(int *)(p_Var8 + 0x10) != -1) {
      if (*(int *)(p_Var8 + 0x10) != 0) {
        LOCK();
        pcVar1 = p_Var8 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        UNLOCK();
        if (*(int *)pcVar1 != 0) goto LAB_1000f5ecc;
        p_Var8 = (_func_void_Node_ptr *)*plVar7;
      }
      QHashData::free_helper(p_Var8);
    }
LAB_1000f5ecc:
    *plVar7 = (long)pNVar4;
  }
  iVar3 = *(int *)(pNVar4 + 0x20);
  pNVar5 = pNVar4;
  if (iVar3 != 0) {
    puVar6 = *(undefined8 **)(pNVar4 + 8);
    do {
      pNVar5 = (Node *)*puVar6;
      if ((Node *)*puVar6 != pNVar4) break;
      iVar3 = iVar3 + -1;
      puVar6 = puVar6 + 1;
      pNVar5 = pNVar4;
    } while (iVar3 != 0);
  }
LAB_1000f5f00:
  plVar7 = (long *)0x0;
  if (*(long *)(param_1 + 0x40) != 0) {
    plVar7 = *(long **)(*(long *)(param_1 + 0x40) + 0x10);
  }
  pNVar4 = (Node *)*plVar7;
  if (1 < *(uint *)(pNVar4 + 0x10)) {
    pNVar4 = (Node *)QHashData::detach_helper
                               ((_func_void_Node_ptr_void_ptr *)pNVar4,FUN_1000f81e0,0xf8050,0x20);
    p_Var8 = (_func_void_Node_ptr *)*plVar7;
    if (*(int *)(p_Var8 + 0x10) != -1) {
      if (*(int *)(p_Var8 + 0x10) != 0) {
        LOCK();
        pcVar1 = p_Var8 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        UNLOCK();
        if (*(int *)pcVar1 != 0) goto LAB_1000f5f6a;
        p_Var8 = (_func_void_Node_ptr *)*plVar7;
      }
      QHashData::free_helper(p_Var8);
    }
LAB_1000f5f6a:
    *plVar7 = (long)pNVar4;
  }
  puVar2 = PTR_shared_null_1021e1288;
  if (pNVar5 != pNVar4) {
    if ((*(byte *)(*(long *)(*(long *)(pNVar5 + 0x18) + 0x10) + 0x58) & 1) == 0) {
      QFile::remove((QString *)(pNVar5 + 0x10));
      uVar9 = 0;
      if (*(long *)(param_1 + 0x40) != 0) {
        uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x10);
      }
      pNVar5 = (Node *)FUN_1000f7ab0(uVar9,pNVar5);
    }
    else {
      pNVar5 = (Node *)QHashData::nextNode(pNVar5);
    }
    goto LAB_1000f5f00;
  }
  if (*(int *)PTR_shared_null_1021e1288 == -1) {
    return;
  }
  if (*(int *)PTR_shared_null_1021e1288 == 0) {
LAB_1000f602a:
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
  else {
    LOCK();
    *(int *)PTR_shared_null_1021e1288 = *(int *)PTR_shared_null_1021e1288 + -1;
    UNLOCK();
    if (*(int *)puVar2 == 0) goto LAB_1000f602a;
  }
  if (*(int *)puVar2 == -1) {
    return;
  }
  if (*(int *)puVar2 != 0) {
    LOCK();
    *(int *)puVar2 = *(int *)puVar2 + -1;
    UNLOCK();
    if (*(int *)puVar2 != 0) goto LAB_1000f606f;
  }
  QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
LAB_1000f606f:
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      UNLOCK();
      if (*(int *)puVar2 != 0) {
        return;
      }
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
  return;
}

