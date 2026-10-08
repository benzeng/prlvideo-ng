
void FUN_100b59cb0(QObject *param_1)

{
  code *pcVar1;
  _func_void_Node_ptr *p_Var2;
  
  *(undefined ***)param_1 = &PTR_FUN_10223f430;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10223f4b0;
  QMutex::lock();
  if (param_1[0x20] != (QObject)0x0) {
    (**(code **)(*(long *)(param_1 + 0x10) + 0x18))();
    param_1[0x20] = (QObject)0x0;
  }
  QMutex::unlock();
  p_Var2 = *(_func_void_Node_ptr **)(param_1 + 0x38);
  if (*(int *)(p_Var2 + 0x10) != -1) {
    if (*(int *)(p_Var2 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var2 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100b59d33;
      p_Var2 = *(_func_void_Node_ptr **)(param_1 + 0x38);
    }
    QHashData::free_helper(p_Var2);
  }
LAB_100b59d33:
  QMutex::~QMutex((QMutex *)(param_1 + 0x30));
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1022cf410;
  QMutex::~QMutex((QMutex *)(param_1 + 0x18));
  QObject::~QObject(param_1);
  return;
}

