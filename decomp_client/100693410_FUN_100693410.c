
undefined8 * FUN_100693410(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  _func_void_Node_ptr_void_ptr *p_Var2;
  undefined8 uVar3;
  
  p_Var2 = *(_func_void_Node_ptr_void_ptr **)(param_2 + 0x10);
  *param_1 = p_Var2;
  if (1 < *(int *)(p_Var2 + 0x10) + 1U) {
    LOCK();
    *(int *)(p_Var2 + 0x10) = *(int *)(p_Var2 + 0x10) + 1;
    UNLOCK();
  }
  if (((byte)p_Var2[0x28] & 1) != 0) {
    return param_1;
  }
  if (*(uint *)(p_Var2 + 0x10) < 2) {
    return param_1;
  }
  uVar3 = QHashData::detach_helper(p_Var2,FUN_1006942d0,0x6940f0,0x20);
  if (*(int *)(p_Var2 + 0x10) != -1) {
    if (*(int *)(p_Var2 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var2 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100693491;
    }
    QHashData::free_helper((_func_void_Node_ptr *)p_Var2);
  }
LAB_100693491:
  *param_1 = uVar3;
  return param_1;
}

