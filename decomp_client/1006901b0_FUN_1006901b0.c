
undefined8 FUN_1006901b0(_func_void_Node_ptr_void_ptr *param_1,ulong *param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  _func_void_Node_ptr_void_ptr *p_Var4;
  _func_void_Node_ptr_void_ptr *p_Var5;
  _func_void_Node_ptr_void_ptr *p_Var6;
  uint uVar7;
  _func_void_Node_ptr *p_Var8;
  
  p_Var5 = *(_func_void_Node_ptr_void_ptr **)param_1;
  if (*(uint *)(p_Var5 + 0x10) < 2) goto LAB_10069021e;
  p_Var5 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var5,FUN_10068ffa0,0x68fd10,0x20);
  p_Var8 = *(_func_void_Node_ptr **)param_1;
  if (*(int *)(p_Var8 + 0x10) != -1) {
    if (*(int *)(p_Var8 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var8 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_10069021b;
      p_Var8 = *(_func_void_Node_ptr **)param_1;
    }
    QHashData::free_helper(p_Var8);
  }
LAB_10069021b:
  *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var5;
LAB_10069021e:
  if (*(uint *)(p_Var5 + 0x20) != 0) {
    uVar2 = *param_2;
    uVar7 = (uint)(uVar2 >> 0x1f) ^ (uint)uVar2 ^ *(uint *)(p_Var5 + 0x24);
    uVar3 = (ulong)uVar7 % (ulong)*(uint *)(p_Var5 + 0x20);
    p_Var4 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var5 + 8) + uVar3 * 8);
    param_1 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var5 + 8) + uVar3 * 8);
    while ((p_Var6 = p_Var4, p_Var6 != p_Var5 &&
           ((*(uint *)(p_Var6 + 8) != uVar7 || (uVar2 != *(ulong *)(p_Var6 + 0x10)))))) {
      param_1 = p_Var6;
      p_Var4 = *(_func_void_Node_ptr_void_ptr **)p_Var6;
    }
  }
  return *(undefined8 *)param_1;
}

