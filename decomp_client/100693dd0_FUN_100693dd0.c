
undefined8 * FUN_100693dd0(undefined8 *param_1,_func_void_Node_ptr_void_ptr *param_2,ulong *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  _func_void_Node_ptr_void_ptr *p_Var7;
  int iVar8;
  _func_void_Node_ptr_void_ptr *p_Var9;
  uint uVar10;
  _func_void_Node_ptr_void_ptr *p_Var11;
  _func_void_Node_ptr_void_ptr *p_Var12;
  _func_void_Node_ptr *p_Var13;
  
  p_Var9 = *(_func_void_Node_ptr_void_ptr **)param_2;
  if (*(int *)(p_Var9 + 0x14) == 0) goto LAB_100693f82;
  if (1 < *(uint *)(p_Var9 + 0x10)) {
    p_Var9 = (_func_void_Node_ptr_void_ptr *)
             QHashData::detach_helper(p_Var9,FUN_1006942d0,0x6940f0,0x20);
    p_Var13 = *(_func_void_Node_ptr **)param_2;
    if (*(int *)(p_Var13 + 0x10) != -1) {
      if (*(int *)(p_Var13 + 0x10) != 0) {
        LOCK();
        pcVar1 = p_Var13 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        UNLOCK();
        if (*(int *)pcVar1 != 0) goto LAB_100693e4d;
        p_Var13 = *(_func_void_Node_ptr **)param_2;
      }
      QHashData::free_helper(p_Var13);
    }
LAB_100693e4d:
    *(_func_void_Node_ptr_void_ptr **)param_2 = p_Var9;
  }
  p_Var11 = param_2;
  p_Var12 = p_Var9;
  if (*(uint *)(p_Var9 + 0x20) != 0) {
    uVar2 = *param_3;
    uVar10 = (uint)(uVar2 >> 0x1f) ^ (uint)uVar2 ^ *(uint *)(p_Var9 + 0x24);
    uVar6 = (ulong)uVar10 % (ulong)*(uint *)(p_Var9 + 0x20);
    p_Var11 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var9 + 8) + uVar6 * 8);
    for (p_Var7 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var9 + 8) + uVar6 * 8);
        (p_Var12 = p_Var9, p_Var7 != p_Var9 &&
        ((*(uint *)(p_Var7 + 8) != uVar10 || (p_Var12 = p_Var7, uVar2 != *(ulong *)(p_Var7 + 0x10)))
        )); p_Var7 = *(_func_void_Node_ptr_void_ptr **)p_Var7) {
      p_Var11 = p_Var7;
    }
  }
  if (p_Var12 == p_Var9) {
LAB_100693f82:
    *param_1 = PTR_shared_null_1021e15d0;
    return param_1;
  }
  FUN_100694130(param_1,p_Var12 + 0x18);
  puVar3 = *(undefined8 **)p_Var11;
  uVar4 = *puVar3;
  p_Var13 = (_func_void_Node_ptr *)puVar3[3];
  if (*(int *)(p_Var13 + 0x10) != -1) {
    if (*(int *)(p_Var13 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var13 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100693ef8;
      p_Var13 = (_func_void_Node_ptr *)puVar3[3];
    }
    QHashData::free_helper(p_Var13);
  }
LAB_100693ef8:
  QHashData::freeNode(*(void **)param_2);
  *(undefined8 *)p_Var11 = uVar4;
  lVar5 = *(long *)param_2;
  iVar8 = *(int *)(lVar5 + 0x14) + -1;
  *(int *)(lVar5 + 0x14) = iVar8;
  if (*(int *)(lVar5 + 0x20) >> 3 < iVar8) {
    return param_1;
  }
  if (*(short *)(lVar5 + 0x1e) <= *(short *)(lVar5 + 0x1c)) {
    return param_1;
  }
  QHashData::rehash((int)lVar5);
  return param_1;
}

