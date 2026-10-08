
void FUN_100aacc40(void)

{
  code *pcVar1;
  long *plVar2;
  _func_void_Node_ptr *p_Var3;
  
  plVar2 = DAT_102313a48;
  if (DAT_102313a48 == (long *)0x0) {
    DAT_102313a40 = 0xfffffffe;
    return;
  }
  p_Var3 = (_func_void_Node_ptr *)*DAT_102313a48;
  if (*(int *)(p_Var3 + 0x10) != -1) {
    if (*(int *)(p_Var3 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var3 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100aacc84;
      p_Var3 = (_func_void_Node_ptr *)*plVar2;
    }
    QHashData::free_helper(p_Var3);
  }
LAB_100aacc84:
  operator_delete(plVar2);
  DAT_102313a40 = 0xfffffffe;
  return;
}

