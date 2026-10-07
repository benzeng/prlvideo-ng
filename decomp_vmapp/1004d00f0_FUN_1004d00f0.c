
void FUN_1004d00f0(long param_1)

{
  code *pcVar1;
  int *piVar2;
  _func_void_Node_ptr *p_Var3;
  
  FUN_1004cfea0();
  p_Var3 = *(_func_void_Node_ptr **)(param_1 + 0x30);
  if (*(int *)(p_Var3 + 0x10) != -1) {
    if (*(int *)(p_Var3 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var3 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1004d0132;
      p_Var3 = *(_func_void_Node_ptr **)(param_1 + 0x30);
    }
    QHashData::free_helper(p_Var3);
  }
LAB_1004d0132:
  QMutex::~QMutex((QMutex *)(param_1 + 0x28));
  p_Var3 = *(_func_void_Node_ptr **)(param_1 + 0x20);
  if (*(int *)(p_Var3 + 0x10) != -1) {
    if (*(int *)(p_Var3 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var3 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1004d016a;
      p_Var3 = *(_func_void_Node_ptr **)(param_1 + 0x20);
    }
    QHashData::free_helper(p_Var3);
  }
LAB_1004d016a:
  QMutex::~QMutex((QMutex *)(param_1 + 0x18));
  QMutex::~QMutex((QMutex *)(param_1 + 0x10));
  piVar2 = *(int **)(param_1 + 8);
  if (*piVar2 != -1) {
    if (*piVar2 != 0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 != 0) {
        return;
      }
      piVar2 = *(int **)(param_1 + 8);
    }
    FUN_1004d6ab0((undefined8 *)(param_1 + 8),piVar2);
  }
  return;
}

