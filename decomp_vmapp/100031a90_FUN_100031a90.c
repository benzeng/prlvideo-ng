
int FUN_100031a90(_func_void_Node_ptr_void_ptr *param_1,uint *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  _func_void_Node_ptr_void_ptr *p_Var4;
  long lVar5;
  ulong uVar6;
  _func_void_Node_ptr_void_ptr *p_Var7;
  uint uVar8;
  _func_void_Node_ptr_void_ptr *p_Var9;
  _func_void_Node_ptr *p_Var10;
  int iVar11;
  _func_void_Node_ptr_void_ptr *p_Var12;
  
  p_Var7 = *(_func_void_Node_ptr_void_ptr **)param_1;
  iVar11 = *(int *)(p_Var7 + 0x14);
  if (iVar11 == 0) {
    return 0;
  }
  if (*(uint *)(p_Var7 + 0x10) < 2) goto LAB_100031b24;
  p_Var7 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var7,FUN_1000320e0,0x320d0,0x28);
  p_Var10 = *(_func_void_Node_ptr **)param_1;
  if (*(int *)(p_Var10 + 0x10) != -1) {
    if (*(int *)(p_Var10 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var10 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100031b1c;
      p_Var10 = *(_func_void_Node_ptr **)param_1;
    }
    QHashData::free_helper(p_Var10);
  }
LAB_100031b1c:
  *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var7;
  iVar11 = *(int *)(p_Var7 + 0x14);
LAB_100031b24:
  p_Var9 = p_Var7;
  p_Var12 = param_1;
  if (*(uint *)(p_Var7 + 0x20) != 0) {
    uVar8 = *(uint *)(p_Var7 + 0x24) ^ *param_2;
    uVar6 = (ulong)uVar8 % (ulong)*(uint *)(p_Var7 + 0x20);
    p_Var12 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var7 + 8) + uVar6 * 8);
    for (p_Var4 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var7 + 8) + uVar6 * 8);
        (p_Var9 = p_Var7, p_Var4 != p_Var7 &&
        ((*(uint *)(p_Var4 + 8) != uVar8 || (p_Var9 = p_Var4, *param_2 != *(uint *)(p_Var4 + 0xc))))
        ); p_Var4 = *(_func_void_Node_ptr_void_ptr **)p_Var4) {
      p_Var12 = p_Var4;
    }
  }
  if (p_Var9 != p_Var7) {
    while (p_Var4 = *(_func_void_Node_ptr_void_ptr **)p_Var9, p_Var4 != p_Var7) {
      iVar2 = *(int *)(p_Var4 + 0xc);
      iVar3 = *(int *)(p_Var9 + 0xc);
      QHashData::freeNode(p_Var7);
      *(_func_void_Node_ptr_void_ptr **)p_Var12 = p_Var4;
      *(int *)(*(long *)param_1 + 0x14) = *(int *)(*(long *)param_1 + 0x14) + -1;
      if (iVar2 != iVar3) goto LAB_100031bd5;
      p_Var7 = *(_func_void_Node_ptr_void_ptr **)param_1;
      p_Var9 = *(_func_void_Node_ptr_void_ptr **)p_Var12;
    }
    QHashData::freeNode(p_Var7);
    *(_func_void_Node_ptr_void_ptr **)p_Var12 = p_Var7;
    *(int *)(*(long *)param_1 + 0x14) = *(int *)(*(long *)param_1 + 0x14) + -1;
LAB_100031bd5:
    lVar5 = *(long *)param_1;
    if ((*(int *)(lVar5 + 0x14) <= *(int *)(lVar5 + 0x20) >> 3) &&
       (*(short *)(lVar5 + 0x1c) < *(short *)(lVar5 + 0x1e))) {
      QHashData::rehash((int)lVar5);
    }
  }
  return iVar11 - *(int *)(*(long *)param_1 + 0x14);
}

