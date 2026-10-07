
void FUN_10040ad10(QObject *param_1)

{
  code *pcVar1;
  _func_void_Node_ptr *p_Var2;
  
  *(undefined ***)param_1 = &PTR_FUN_100bc0388;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_100bc0408;
  QMutex::lock();
  if (param_1[0x20] != (QObject)0x0) {
    (**(code **)(*(long *)(param_1 + 0x10) + 0x18))();
    param_1[0x20] = (QObject)0x0;
  }
  QMutex::unlock();
  QThread::quit();
  QThread::wait(*(ulong *)(param_1 + 0x28));
  if (*(long **)(param_1 + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x28) + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  p_Var2 = *(_func_void_Node_ptr **)(param_1 + 0x80);
  if (*(int *)(p_Var2 + 0x10) != -1) {
    if (*(int *)(p_Var2 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var2 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_10040adcc;
      p_Var2 = *(_func_void_Node_ptr **)(param_1 + 0x80);
    }
    QHashData::free_helper(p_Var2);
  }
LAB_10040adcc:
  p_Var2 = *(_func_void_Node_ptr **)(param_1 + 0x78);
  if (*(int *)(p_Var2 + 0x10) != -1) {
    if (*(int *)(p_Var2 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var2 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_10040adfb;
      p_Var2 = *(_func_void_Node_ptr **)(param_1 + 0x78);
    }
    QHashData::free_helper(p_Var2);
  }
LAB_10040adfb:
  QMutex::~QMutex((QMutex *)(param_1 + 0x70));
  QMutex::~QMutex((QMutex *)(param_1 + 0x68));
  QMutex::~QMutex((QMutex *)(param_1 + 0x60));
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10116d780;
  QMutex::~QMutex((QMutex *)(param_1 + 0x18));
  QObject::~QObject(param_1);
  return;
}

