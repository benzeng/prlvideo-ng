
int FUN_100b5a9c0(_func_void_Node_ptr_void_ptr *param_1,ulong *param_2)

{
  code *pcVar1;
  ulong uVar2;
  _func_void_Node_ptr_void_ptr *p_Var3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  _func_void_Node_ptr_void_ptr *p_Var8;
  uint uVar9;
  int iVar10;
  _func_void_Node_ptr_void_ptr *p_Var11;
  _func_void_Node_ptr *p_Var12;
  _func_void_Node_ptr_void_ptr *p_Var13;
  
  p_Var8 = *(_func_void_Node_ptr_void_ptr **)param_1;
  iVar10 = *(int *)(p_Var8 + 0x14);
  if (iVar10 == 0) {
    return 0;
  }
  if (*(uint *)(p_Var8 + 0x10) < 2) goto LAB_100b5aa54;
  p_Var8 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var8,FUN_100b5a810,0xb5a800,0x18);
  p_Var12 = *(_func_void_Node_ptr **)param_1;
  if (*(int *)(p_Var12 + 0x10) != -1) {
    if (*(int *)(p_Var12 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var12 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100b5aa49;
      p_Var12 = *(_func_void_Node_ptr **)param_1;
    }
    QHashData::free_helper(p_Var12);
  }
LAB_100b5aa49:
  *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var8;
  iVar10 = *(int *)(p_Var8 + 0x14);
LAB_100b5aa54:
  p_Var11 = p_Var8;
  p_Var13 = param_1;
  if (*(uint *)(p_Var8 + 0x20) != 0) {
    uVar2 = *param_2;
    uVar9 = (uint)(uVar2 >> 0x1f) ^ (uint)uVar2 ^ *(uint *)(p_Var8 + 0x24);
    uVar6 = (ulong)uVar9 % (ulong)*(uint *)(p_Var8 + 0x20);
    p_Var13 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var8 + 8) + uVar6 * 8);
    for (p_Var3 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var8 + 8) + uVar6 * 8);
        (p_Var11 = p_Var8, p_Var3 != p_Var8 &&
        ((*(uint *)(p_Var3 + 8) != uVar9 || (p_Var11 = p_Var3, uVar2 != *(ulong *)(p_Var3 + 0x10))))
        ); p_Var3 = *(_func_void_Node_ptr_void_ptr **)p_Var3) {
      p_Var13 = p_Var3;
    }
  }
  if (p_Var11 != p_Var8) {
    do {
      p_Var3 = *(_func_void_Node_ptr_void_ptr **)p_Var11;
      if (p_Var3 == p_Var8) {
        QHashData::freeNode(p_Var8);
        *(_func_void_Node_ptr_void_ptr **)p_Var13 = p_Var8;
        p_Var8 = *(_func_void_Node_ptr_void_ptr **)param_1;
        iVar7 = *(int *)(p_Var8 + 0x14) + -1;
        *(int *)(p_Var8 + 0x14) = iVar7;
        break;
      }
      lVar4 = *(long *)(p_Var3 + 0x10);
      lVar5 = *(long *)(p_Var11 + 0x10);
      QHashData::freeNode(p_Var8);
      *(_func_void_Node_ptr_void_ptr **)p_Var13 = p_Var3;
      p_Var8 = *(_func_void_Node_ptr_void_ptr **)param_1;
      iVar7 = *(int *)(p_Var8 + 0x14) + -1;
      *(int *)(p_Var8 + 0x14) = iVar7;
      p_Var11 = p_Var3;
    } while (lVar4 == lVar5);
    if ((iVar7 <= *(int *)(p_Var8 + 0x20) >> 3) &&
       (*(short *)(p_Var8 + 0x1c) < *(short *)(p_Var8 + 0x1e))) {
      QHashData::rehash((int)p_Var8);
    }
  }
  return iVar10 - *(int *)(*(long *)param_1 + 0x14);
}

