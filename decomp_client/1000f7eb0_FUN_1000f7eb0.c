
undefined8 * FUN_1000f7eb0(long *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  _func_void_Node_ptr *p_Var3;
  
  puVar2 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    puVar2[2] = param_1;
    *puVar2 = &PTR_FUN_10226d458;
    return puVar2;
  }
  if (param_1 == (long *)0x0) {
    return (undefined8 *)0x0;
  }
  p_Var3 = (_func_void_Node_ptr *)*param_1;
  if (*(int *)(p_Var3 + 0x10) != -1) {
    if (*(int *)(p_Var3 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var3 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1000f7f1f;
      p_Var3 = (_func_void_Node_ptr *)*param_1;
    }
    QHashData::free_helper(p_Var3);
  }
LAB_1000f7f1f:
  operator_delete(param_1);
  return (undefined8 *)0x0;
}

