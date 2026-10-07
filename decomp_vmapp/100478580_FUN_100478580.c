
undefined8 FUN_100478580(long param_1)

{
  long *plVar1;
  code *pcVar2;
  _func_void_Node_ptr_void_ptr *p_Var3;
  _func_void_Node_ptr_void_ptr *p_Var4;
  undefined8 uVar5;
  _func_void_Node_ptr *p_Var6;
  
  plVar1 = (long *)(param_1 + 0x28);
  p_Var3 = (_func_void_Node_ptr_void_ptr *)FUN_1004788a0(plVar1);
  p_Var4 = *(_func_void_Node_ptr_void_ptr **)(param_1 + 0x28);
  if (*(uint *)(p_Var4 + 0x10) < 2) goto LAB_1004785fa;
  p_Var4 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var4,FUN_100479d20,0x472060,0x20);
  p_Var6 = (_func_void_Node_ptr *)*plVar1;
  if (*(int *)(p_Var6 + 0x10) != -1) {
    if (*(int *)(p_Var6 + 0x10) != 0) {
      LOCK();
      pcVar2 = p_Var6 + 0x10;
      *(int *)pcVar2 = *(int *)pcVar2 + -1;
      UNLOCK();
      if (*(int *)pcVar2 != 0) goto LAB_1004785f7;
      p_Var6 = (_func_void_Node_ptr *)*plVar1;
    }
    QHashData::free_helper(p_Var6);
  }
LAB_1004785f7:
  *plVar1 = (long)p_Var4;
LAB_1004785fa:
  uVar5 = 0;
  if (p_Var4 != p_Var3) {
    uVar5 = 0;
    if (*(long *)(p_Var3 + 0x18) != 0) {
      uVar5 = *(undefined8 *)(*(long *)(p_Var3 + 0x18) + 0x10);
    }
  }
  return uVar5;
}

