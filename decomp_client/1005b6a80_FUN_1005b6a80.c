
void FUN_1005b6a80(long *param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  _func_void_Node_ptr_void_ptr *p_Var3;
  _func_void_Node_ptr *p_Var4;
  
  p_Var3 = (_func_void_Node_ptr_void_ptr *)*param_2;
  *param_1 = (long)p_Var3;
  if (1 < *(int *)(p_Var3 + 0x10) + 1U) {
    LOCK();
    *(int *)(p_Var3 + 0x10) = *(int *)(p_Var3 + 0x10) + 1;
    UNLOCK();
    p_Var3 = (_func_void_Node_ptr_void_ptr *)*param_1;
  }
  if (((byte)p_Var3[0x28] & 1) != 0) {
    return;
  }
  if (*(uint *)(p_Var3 + 0x10) < 2) {
    return;
  }
  lVar2 = QHashData::detach_helper(p_Var3,FUN_100287c60,0x286900,0x88);
  p_Var4 = (_func_void_Node_ptr *)*param_1;
  if (*(int *)(p_Var4 + 0x10) != -1) {
    if (*(int *)(p_Var4 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var4 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1005b6b04;
      p_Var4 = (_func_void_Node_ptr *)*param_1;
    }
    QHashData::free_helper(p_Var4);
  }
LAB_1005b6b04:
  *param_1 = lVar2;
  return;
}

