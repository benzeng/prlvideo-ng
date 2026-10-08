
undefined8 FUN_100132060(_func_void_Node_ptr_void_ptr *param_1,uint *param_2)

{
  code *pcVar1;
  ulong uVar2;
  _func_void_Node_ptr_void_ptr *p_Var3;
  _func_void_Node_ptr_void_ptr *p_Var4;
  _func_void_Node_ptr_void_ptr *p_Var5;
  uint uVar6;
  _func_void_Node_ptr *p_Var7;
  
  p_Var4 = *(_func_void_Node_ptr_void_ptr **)param_1;
  if (*(uint *)(p_Var4 + 0x10) < 2) goto LAB_1001320ce;
  p_Var4 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var4,FUN_100132040,0x131900,0x10);
  p_Var7 = *(_func_void_Node_ptr **)param_1;
  if (*(int *)(p_Var7 + 0x10) != -1) {
    if (*(int *)(p_Var7 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var7 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1001320cb;
      p_Var7 = *(_func_void_Node_ptr **)param_1;
    }
    QHashData::free_helper(p_Var7);
  }
LAB_1001320cb:
  *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var4;
LAB_1001320ce:
  if (*(uint *)(p_Var4 + 0x20) != 0) {
    uVar6 = *(uint *)(p_Var4 + 0x24) ^ *param_2;
    uVar2 = (ulong)uVar6 % (ulong)*(uint *)(p_Var4 + 0x20);
    p_Var3 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var4 + 8) + uVar2 * 8);
    param_1 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var4 + 8) + uVar2 * 8);
    while ((p_Var5 = p_Var3, p_Var5 != p_Var4 &&
           ((*(uint *)(p_Var5 + 8) != uVar6 || (*param_2 != *(uint *)(p_Var5 + 0xc)))))) {
      param_1 = p_Var5;
      p_Var3 = *(_func_void_Node_ptr_void_ptr **)p_Var5;
    }
  }
  return *(undefined8 *)param_1;
}

