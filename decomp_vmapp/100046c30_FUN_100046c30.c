
void FUN_100046c30(undefined8 *param_1)

{
  code *pcVar1;
  _func_void_Node_ptr *p_Var2;
  
  *param_1 = &PTR_FUN_100ba8108;
  param_1[5] = &PTR_FUN_100ba8160;
  FUN_100519360(param_1[0xd] + 0x10f0,10);
  (**(code **)(**(long **)(param_1[0xd] + 0x1a48) + 0x28))
            (*(long **)(param_1[0xd] + 0x1a48),0x18,FUN_100046c00,param_1);
  QMutex::~QMutex((QMutex *)(param_1 + 0xf));
  p_Var2 = (_func_void_Node_ptr *)param_1[0xe];
  if (*(int *)(p_Var2 + 0x10) != -1) {
    if (*(int *)(p_Var2 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var2 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100046cc4;
      p_Var2 = (_func_void_Node_ptr *)param_1[0xe];
    }
    QHashData::free_helper(p_Var2);
  }
LAB_100046cc4:
  FUN_1005192c0(param_1 + 5);
  FUN_1004c0680(param_1);
  return;
}

