
undefined8 FUN_100738ec0(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  _func_void_Node_ptr *p_Var4;
  
  if (*(uint *)((_func_void_Node_ptr_void_ptr *)*param_1 + 0x10) < 2) goto LAB_100738f2a;
  lVar2 = QHashData::detach_helper
                    ((_func_void_Node_ptr_void_ptr *)*param_1,FUN_100739040,0x738cf0,0x20);
  p_Var4 = (_func_void_Node_ptr *)*param_1;
  if (*(int *)(p_Var4 + 0x10) != -1) {
    if (*(int *)(p_Var4 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var4 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100738f27;
      p_Var4 = (_func_void_Node_ptr *)*param_1;
    }
    QHashData::free_helper(p_Var4);
  }
LAB_100738f27:
  *param_1 = lVar2;
LAB_100738f2a:
  puVar3 = (undefined8 *)FUN_100738f50(param_1,param_2,0);
  return *puVar3;
}

