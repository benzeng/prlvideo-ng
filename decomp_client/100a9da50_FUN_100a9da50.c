
long * FUN_100a9da50(long *param_1,_func_void_Node_ptr_void_ptr *param_2,ulong *param_3)

{
  code *pcVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  _func_void_Node_ptr_void_ptr *p_Var8;
  int iVar9;
  _func_void_Node_ptr_void_ptr *p_Var10;
  uint uVar11;
  _func_void_Node_ptr_void_ptr *p_Var12;
  _func_void_Node_ptr_void_ptr *p_Var13;
  _func_void_Node_ptr *p_Var14;
  
  p_Var10 = *(_func_void_Node_ptr_void_ptr **)param_2;
  if (*(int *)(p_Var10 + 0x14) == 0) goto LAB_100a9dbf3;
  if (1 < *(uint *)(p_Var10 + 0x10)) {
    p_Var10 = (_func_void_Node_ptr_void_ptr *)
              QHashData::detach_helper(p_Var10,FUN_100a9f100,0xa9e960,0x20);
    p_Var14 = *(_func_void_Node_ptr **)param_2;
    if (*(int *)(p_Var14 + 0x10) != -1) {
      if (*(int *)(p_Var14 + 0x10) != 0) {
        LOCK();
        pcVar1 = p_Var14 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        UNLOCK();
        if (*(int *)pcVar1 != 0) goto LAB_100a9dacd;
        p_Var14 = *(_func_void_Node_ptr **)param_2;
      }
      QHashData::free_helper(p_Var14);
    }
LAB_100a9dacd:
    *(_func_void_Node_ptr_void_ptr **)param_2 = p_Var10;
  }
  p_Var12 = p_Var10;
  p_Var13 = param_2;
  if (*(uint *)(p_Var10 + 0x20) != 0) {
    uVar3 = *param_3;
    uVar11 = (uint)(uVar3 >> 0x1f) ^ (uint)uVar3 ^ *(uint *)(p_Var10 + 0x24);
    uVar7 = (ulong)uVar11 % (ulong)*(uint *)(p_Var10 + 0x20);
    p_Var13 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var10 + 8) + uVar7 * 8);
    for (p_Var8 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var10 + 8) + uVar7 * 8);
        (p_Var12 = p_Var10, p_Var8 != p_Var10 &&
        ((*(uint *)(p_Var8 + 8) != uVar11 || (p_Var12 = p_Var8, uVar3 != *(ulong *)(p_Var8 + 0x10)))
        )); p_Var8 = *(_func_void_Node_ptr_void_ptr **)p_Var8) {
      p_Var13 = p_Var8;
    }
  }
  if (p_Var12 != p_Var10) {
    lVar4 = *(long *)(p_Var12 + 0x18);
    *param_1 = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    uVar5 = **(undefined8 **)p_Var13;
    plVar6 = (long *)(*(undefined8 **)p_Var13)[3];
    if (plVar6 != (long *)0x0) {
      LOCK();
      plVar2 = plVar6 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*plVar6 + 0x10))();
      }
    }
    QHashData::freeNode(*(void **)param_2);
    *(undefined8 *)p_Var13 = uVar5;
    lVar4 = *(long *)param_2;
    iVar9 = *(int *)(lVar4 + 0x14) + -1;
    *(int *)(lVar4 + 0x14) = iVar9;
    if (*(int *)(lVar4 + 0x20) >> 3 < iVar9) {
      return param_1;
    }
    if (*(short *)(lVar4 + 0x1e) <= *(short *)(lVar4 + 0x1c)) {
      return param_1;
    }
    QHashData::rehash((int)lVar4);
    return param_1;
  }
LAB_100a9dbf3:
  *param_1 = 0;
  return param_1;
}

