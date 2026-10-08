
void FUN_100b364a0(long param_1)

{
  code *pcVar1;
  int *piVar2;
  _func_void_Node_ptr *p_Var3;
  
  FUN_100b365a0();
  FUN_100b3bae0(param_1 + 0x18);
  piVar2 = *(int **)(param_1 + 0x10);
  if (*piVar2 != -1) {
    if (*piVar2 != 0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 != 0) goto LAB_100b364e5;
      piVar2 = *(int **)(param_1 + 0x10);
    }
    FUN_100b3be40((undefined8 *)(param_1 + 0x10),piVar2);
  }
LAB_100b364e5:
  p_Var3 = *(_func_void_Node_ptr **)(param_1 + 8);
  if (*(int *)(p_Var3 + 0x10) != -1) {
    if (*(int *)(p_Var3 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var3 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) {
        return;
      }
      p_Var3 = *(_func_void_Node_ptr **)(param_1 + 8);
    }
    QHashData::free_helper(p_Var3);
  }
  return;
}

