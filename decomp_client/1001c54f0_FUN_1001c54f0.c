
void FUN_1001c54f0(QObject *param_1)

{
  code *pcVar1;
  char cVar2;
  _func_void_Node_ptr *p_Var3;
  
  *(undefined ***)param_1 = &PTR_FUN_1021ff110;
  cVar2 = FUN_1001c5c50();
  if (cVar2 != '\0') {
    FUN_1001c5f40();
  }
  p_Var3 = *(_func_void_Node_ptr **)(param_1 + 0x10);
  if (*(int *)(p_Var3 + 0x10) != -1) {
    if (*(int *)(p_Var3 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var3 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1001c5549;
      p_Var3 = *(_func_void_Node_ptr **)(param_1 + 0x10);
    }
    QHashData::free_helper(p_Var3);
  }
LAB_1001c5549:
  QObject::~QObject(param_1);
  return;
}

