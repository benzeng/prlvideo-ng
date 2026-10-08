
undefined8 FUN_100786040(_func_void_Node_ptr_void_ptr *param_1,ulong *param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  _func_void_Node_ptr_void_ptr *p_Var6;
  int iVar7;
  _func_void_Node_ptr_void_ptr *p_Var8;
  uint uVar9;
  _func_void_Node_ptr_void_ptr *p_Var10;
  _func_void_Node_ptr_void_ptr *p_Var11;
  _func_void_Node_ptr *p_Var12;
  undefined8 uVar13;
  
  p_Var8 = *(_func_void_Node_ptr_void_ptr **)param_1;
  if (*(int *)(p_Var8 + 0x14) == 0) {
    return 0;
  }
  if (*(uint *)(p_Var8 + 0x10) < 2) goto LAB_1007860c0;
  p_Var8 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var8,FUN_1007862b0,0x7862a0,0x20);
  p_Var12 = *(_func_void_Node_ptr **)param_1;
  if (*(int *)(p_Var12 + 0x10) != -1) {
    if (*(int *)(p_Var12 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var12 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1007860bd;
      p_Var12 = *(_func_void_Node_ptr **)param_1;
    }
    QHashData::free_helper(p_Var12);
  }
LAB_1007860bd:
  *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var8;
LAB_1007860c0:
  p_Var10 = param_1;
  p_Var11 = p_Var8;
  if (*(uint *)(p_Var8 + 0x20) != 0) {
    uVar2 = *param_2;
    uVar9 = (uint)(uVar2 >> 0x1f) ^ (uint)uVar2 ^ *(uint *)(p_Var8 + 0x24);
    uVar5 = (ulong)uVar9 % (ulong)*(uint *)(p_Var8 + 0x20);
    p_Var10 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var8 + 8) + uVar5 * 8);
    for (p_Var6 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var8 + 8) + uVar5 * 8);
        (p_Var11 = p_Var8, p_Var6 != p_Var8 &&
        ((*(uint *)(p_Var6 + 8) != uVar9 || (p_Var11 = p_Var6, uVar2 != *(ulong *)(p_Var6 + 0x10))))
        ); p_Var6 = *(_func_void_Node_ptr_void_ptr **)p_Var6) {
      p_Var10 = p_Var6;
    }
  }
  uVar13 = 0;
  if (p_Var11 != p_Var8) {
    uVar3 = *(undefined8 *)p_Var11;
    uVar13 = *(undefined8 *)(p_Var11 + 0x18);
    QHashData::freeNode(p_Var8);
    *(undefined8 *)p_Var10 = uVar3;
    lVar4 = *(long *)param_1;
    iVar7 = *(int *)(lVar4 + 0x14) + -1;
    *(int *)(lVar4 + 0x14) = iVar7;
    if ((iVar7 <= *(int *)(lVar4 + 0x20) >> 3) &&
       (*(short *)(lVar4 + 0x1c) < *(short *)(lVar4 + 0x1e))) {
      QHashData::rehash((int)lVar4);
    }
  }
  return uVar13;
}

