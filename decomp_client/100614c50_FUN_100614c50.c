
void FUN_100614c50(_func_void_Node_ptr_void_ptr *param_1,uint *param_2,undefined8 param_3)

{
  code *pcVar1;
  ulong uVar2;
  _func_void_Node_ptr_void_ptr *p_Var3;
  _func_void_Node_ptr_void_ptr *p_Var4;
  _func_void_Node_ptr_void_ptr *p_Var5;
  uint uVar6;
  uint uVar7;
  _func_void_Node_ptr *p_Var8;
  _func_void_Node_ptr_void_ptr *p_Var9;
  
  p_Var4 = *(_func_void_Node_ptr_void_ptr **)param_1;
  if (*(uint *)(p_Var4 + 0x10) < 2) goto LAB_100614cc9;
  p_Var4 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var4,FUN_1006146b0,0x613ec0,0x48);
  p_Var8 = *(_func_void_Node_ptr **)param_1;
  if (*(int *)(p_Var8 + 0x10) != -1) {
    if (*(int *)(p_Var8 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var8 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100614cc5;
      p_Var8 = *(_func_void_Node_ptr **)param_1;
    }
    QHashData::free_helper(p_Var8);
  }
LAB_100614cc5:
  *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var4;
LAB_100614cc9:
  uVar7 = *(uint *)(p_Var4 + 0x20);
  if ((int)uVar7 <= *(int *)(p_Var4 + 0x14)) {
    QHashData::rehash((int)p_Var4);
    p_Var4 = *(_func_void_Node_ptr_void_ptr **)param_1;
    uVar7 = *(uint *)(p_Var4 + 0x20);
  }
  uVar6 = *(uint *)(p_Var4 + 0x24) ^ *param_2;
  p_Var9 = param_1;
  if (uVar7 != 0) {
    uVar2 = (ulong)uVar6 % (ulong)uVar7;
    p_Var3 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var4 + 8) + uVar2 * 8);
    p_Var9 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var4 + 8) + uVar2 * 8);
    while ((p_Var5 = p_Var3, p_Var5 != p_Var4 &&
           ((*(uint *)(p_Var5 + 8) != uVar6 || (*param_2 != *(uint *)(p_Var5 + 0xc)))))) {
      p_Var9 = p_Var5;
      p_Var3 = *(_func_void_Node_ptr_void_ptr **)p_Var5;
    }
  }
  FUN_100614d50(param_1,(ulong)uVar6,param_2,param_3,p_Var9);
  return;
}

