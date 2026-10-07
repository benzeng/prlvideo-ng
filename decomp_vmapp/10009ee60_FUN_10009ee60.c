
long * FUN_10009ee60(long *param_1,undefined8 *param_2)

{
  code *pcVar1;
  _func_void_Node_ptr_void_ptr *p_Var2;
  long lVar3;
  _func_void_Node_ptr_void_ptr *p_Var4;
  _func_void_Node_ptr *p_Var5;
  
  p_Var4 = (_func_void_Node_ptr_void_ptr *)*param_1;
  p_Var2 = (_func_void_Node_ptr_void_ptr *)*param_2;
  if (p_Var4 == p_Var2) {
    return param_1;
  }
  if (1 < *(int *)(p_Var2 + 0x10) + 1U) {
    LOCK();
    *(int *)(p_Var2 + 0x10) = *(int *)(p_Var2 + 0x10) + 1;
    UNLOCK();
    p_Var4 = (_func_void_Node_ptr_void_ptr *)*param_1;
  }
  if (*(int *)(p_Var4 + 0x10) != -1) {
    if (*(int *)(p_Var4 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var4 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_10009eebd;
      p_Var4 = (_func_void_Node_ptr_void_ptr *)*param_1;
    }
    QHashData::free_helper((_func_void_Node_ptr *)p_Var4);
  }
LAB_10009eebd:
  *param_1 = (long)p_Var2;
  if (((byte)p_Var2[0x28] & 1) != 0) {
    return param_1;
  }
  lVar3 = QHashData::detach_helper(p_Var2,FUN_10009ef30,0x9eda0,0x20);
  p_Var5 = (_func_void_Node_ptr *)*param_1;
  if (*(int *)(p_Var5 + 0x10) != -1) {
    if (*(int *)(p_Var5 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var5 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_10009ef17;
      p_Var5 = (_func_void_Node_ptr *)*param_1;
    }
    QHashData::free_helper(p_Var5);
  }
LAB_10009ef17:
  *param_1 = lVar3;
  return param_1;
}

