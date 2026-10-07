
int FUN_100466c80(_func_void_Node_ptr_void_ptr *param_1,uint *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  _func_void_Node_ptr_void_ptr *p_Var4;
  ulong uVar5;
  int iVar6;
  _func_void_Node_ptr_void_ptr *p_Var7;
  uint uVar8;
  int iVar9;
  _func_void_Node_ptr_void_ptr *p_Var10;
  _func_void_Node_ptr *p_Var11;
  _func_void_Node_ptr_void_ptr *p_Var12;
  
  p_Var7 = *(_func_void_Node_ptr_void_ptr **)param_1;
  iVar9 = *(int *)(p_Var7 + 0x14);
  if (iVar9 == 0) {
    return 0;
  }
  if (*(uint *)(p_Var7 + 0x10) < 2) goto LAB_100466d14;
  p_Var7 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var7,FUN_100466e50,0x466e40,0x18);
  p_Var11 = *(_func_void_Node_ptr **)param_1;
  if (*(int *)(p_Var11 + 0x10) != -1) {
    if (*(int *)(p_Var11 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var11 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100466d09;
      p_Var11 = *(_func_void_Node_ptr **)param_1;
    }
    QHashData::free_helper(p_Var11);
  }
LAB_100466d09:
  *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var7;
  iVar9 = *(int *)(p_Var7 + 0x14);
LAB_100466d14:
  p_Var10 = p_Var7;
  p_Var12 = param_1;
  if (*(uint *)(p_Var7 + 0x20) != 0) {
    uVar8 = *(uint *)(p_Var7 + 0x24) ^ *param_2;
    uVar5 = (ulong)uVar8 % (ulong)*(uint *)(p_Var7 + 0x20);
    p_Var12 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var7 + 8) + uVar5 * 8);
    for (p_Var4 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var7 + 8) + uVar5 * 8);
        (p_Var10 = p_Var7, p_Var4 != p_Var7 &&
        ((*(uint *)(p_Var4 + 8) != uVar8 || (p_Var10 = p_Var4, *param_2 != *(uint *)(p_Var4 + 0xc)))
        )); p_Var4 = *(_func_void_Node_ptr_void_ptr **)p_Var4) {
      p_Var12 = p_Var4;
    }
  }
  if (p_Var10 != p_Var7) {
    do {
      p_Var4 = *(_func_void_Node_ptr_void_ptr **)p_Var10;
      if (p_Var4 == p_Var7) {
        QHashData::freeNode(p_Var7);
        *(_func_void_Node_ptr_void_ptr **)p_Var12 = p_Var7;
        p_Var7 = *(_func_void_Node_ptr_void_ptr **)param_1;
        iVar6 = *(int *)(p_Var7 + 0x14) + -1;
        *(int *)(p_Var7 + 0x14) = iVar6;
        break;
      }
      iVar2 = *(int *)(p_Var4 + 0xc);
      iVar3 = *(int *)(p_Var10 + 0xc);
      QHashData::freeNode(p_Var7);
      *(_func_void_Node_ptr_void_ptr **)p_Var12 = p_Var4;
      p_Var7 = *(_func_void_Node_ptr_void_ptr **)param_1;
      iVar6 = *(int *)(p_Var7 + 0x14) + -1;
      *(int *)(p_Var7 + 0x14) = iVar6;
      p_Var10 = p_Var4;
    } while (iVar2 == iVar3);
    if ((iVar6 <= *(int *)(p_Var7 + 0x20) >> 3) &&
       (*(short *)(p_Var7 + 0x1c) < *(short *)(p_Var7 + 0x1e))) {
      QHashData::rehash((int)p_Var7);
    }
  }
  return iVar9 - *(int *)(*(long *)param_1 + 0x14);
}

