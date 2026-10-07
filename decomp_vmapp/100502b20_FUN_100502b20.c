
void FUN_100502b20(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  _func_void_Node_ptr_void_ptr *p_Var3;
  _func_void_Node_ptr_void_ptr *p_Var4;
  _func_void_Node_ptr *p_Var5;
  
  uVar2 = FUN_100502bd0(param_2);
  p_Var3 = (_func_void_Node_ptr_void_ptr *)FUN_1005043a0(param_1,uVar2);
  p_Var4 = (_func_void_Node_ptr_void_ptr *)*param_1;
  if (*(uint *)(p_Var4 + 0x10) < 2) goto LAB_100502ba0;
  p_Var4 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var4,FUN_100504840,0x5047f0,0x28);
  p_Var5 = (_func_void_Node_ptr *)*param_1;
  if (*(int *)(p_Var5 + 0x10) != -1) {
    if (*(int *)(p_Var5 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var5 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100502b9d;
      p_Var5 = (_func_void_Node_ptr *)*param_1;
    }
    QHashData::free_helper(p_Var5);
  }
LAB_100502b9d:
  *param_1 = (long)p_Var4;
LAB_100502ba0:
  if (p_Var3 != p_Var4) {
    pcVar1 = p_Var3 + 0x18;
    *(int *)pcVar1 = *(int *)pcVar1 + -1;
    if (*(int *)pcVar1 == 0) {
      if (*(long **)(p_Var3 + 0x20) != (long *)0x0) {
        (**(code **)(**(long **)(p_Var3 + 0x20) + 8))();
      }
      FUN_100504480(param_1,p_Var3);
    }
  }
  return;
}

