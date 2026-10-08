
void FUN_100b5f170(QObject *param_1)

{
  code *pcVar1;
  _func_void_Node_ptr *p_Var2;
  
  *(undefined **)param_1 = &DAT_1022cf450;
  QMutex::~QMutex((QMutex *)(param_1 + 0x18));
  p_Var2 = *(_func_void_Node_ptr **)(param_1 + 0x10);
  if (*(int *)(p_Var2 + 0x10) != -1) {
    if (*(int *)(p_Var2 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var2 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100b5f1c0;
      p_Var2 = *(_func_void_Node_ptr **)(param_1 + 0x10);
    }
    QHashData::free_helper(p_Var2);
  }
LAB_100b5f1c0:
  QObject::~QObject(param_1);
  return;
}

