
bool FUN_1004e2700(long param_1,undefined8 param_2,undefined4 *param_3)

{
  code *pcVar1;
  long *plVar2;
  _func_void_Node_ptr_void_ptr *p_Var3;
  _func_void_Node_ptr_void_ptr *p_Var4;
  _func_void_Node_ptr *p_Var5;
  
  plVar2 = (long *)(param_1 + 0x88);
  p_Var3 = (_func_void_Node_ptr_void_ptr *)FUN_1004e2910(plVar2);
  p_Var4 = *(_func_void_Node_ptr_void_ptr **)(param_1 + 0x88);
  if (*(uint *)(p_Var4 + 0x10) < 2) goto LAB_1004e278b;
  p_Var4 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var4,FUN_1004e2d50,0x4e2d90,0x20);
  p_Var5 = (_func_void_Node_ptr *)*plVar2;
  if (*(int *)(p_Var5 + 0x10) != -1) {
    if (*(int *)(p_Var5 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var5 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1004e2787;
      p_Var5 = (_func_void_Node_ptr *)*plVar2;
    }
    QHashData::free_helper(p_Var5);
  }
LAB_1004e2787:
  *plVar2 = (long)p_Var4;
LAB_1004e278b:
  if (p_Var3 != p_Var4) {
    *param_3 = *(undefined4 *)(p_Var3 + 0x18);
    FUN_1004e29f0(plVar2,p_Var3);
  }
  return p_Var3 != p_Var4;
}

