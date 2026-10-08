
void FUN_10007b680(QObject *param_1)

{
  code *pcVar1;
  int *piVar2;
  _func_void_Node_ptr *p_Var3;
  
  *(undefined ***)param_1 = &PTR_FUN_1021ed910;
  piVar2 = *(int **)(param_1 + 0x30);
  if (*piVar2 != -1) {
    if (*piVar2 != 0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 != 0) goto LAB_10007b6c1;
      piVar2 = *(int **)(param_1 + 0x30);
    }
    FUN_10006b5d0(param_1 + 0x30,piVar2);
  }
LAB_10007b6c1:
  p_Var3 = *(_func_void_Node_ptr **)(param_1 + 0x28);
  if (*(int *)(p_Var3 + 0x10) != -1) {
    if (*(int *)(p_Var3 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var3 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_10007b6f0;
      p_Var3 = *(_func_void_Node_ptr **)(param_1 + 0x28);
    }
    QHashData::free_helper(p_Var3);
  }
LAB_10007b6f0:
  QObject::~QObject(param_1);
  return;
}

