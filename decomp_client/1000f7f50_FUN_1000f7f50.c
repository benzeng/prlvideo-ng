
void FUN_1000f7f50(undefined8 *param_1)

{
  code *pcVar1;
  long *plVar2;
  _func_void_Node_ptr *p_Var3;
  
  *param_1 = &PTR_FUN_10226d458;
  plVar2 = (long *)param_1[2];
  if (plVar2 == (long *)0x0) {
    return;
  }
  p_Var3 = (_func_void_Node_ptr *)*plVar2;
  if (*(int *)(p_Var3 + 0x10) != -1) {
    if (*(int *)(p_Var3 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var3 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1000f7f9b;
      p_Var3 = (_func_void_Node_ptr *)*plVar2;
    }
    QHashData::free_helper(p_Var3);
  }
LAB_1000f7f9b:
  operator_delete(plVar2);
  return;
}

