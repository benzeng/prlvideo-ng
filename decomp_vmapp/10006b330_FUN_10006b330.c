
void FUN_10006b330(QObject *param_1)

{
  code *pcVar1;
  _func_void_Node_ptr *p_Var2;
  
  *(undefined ***)param_1 = &PTR_FUN_100baa050;
  FUN_100430eb0(*(undefined8 *)(param_1 + 0x18));
  if (*(long **)(param_1 + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x20))();
  }
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  }
  if (*(long **)(param_1 + 0x120) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x120) + 0x20))();
  }
  p_Var2 = *(_func_void_Node_ptr **)(param_1 + 0x368);
  if (*(int *)(p_Var2 + 0x10) != -1) {
    if (*(int *)(p_Var2 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var2 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_10006b3c3;
      p_Var2 = *(_func_void_Node_ptr **)(param_1 + 0x368);
    }
    QHashData::free_helper(p_Var2);
  }
LAB_10006b3c3:
  QMutex::~QMutex((QMutex *)(param_1 + 0x360));
  CParallelsNetworkConfig::~CParallelsNetworkConfig((CParallelsNetworkConfig *)(param_1 + 0x288));
  CDispCommonPreferences::~CDispCommonPreferences((CDispCommonPreferences *)(param_1 + 0x128));
  CVmConfiguration::~CVmConfiguration((CVmConfiguration *)(param_1 + 0x28));
  QObject::~QObject(param_1);
  return;
}

