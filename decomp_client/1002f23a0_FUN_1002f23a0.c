
void FUN_1002f23a0(CAbstractTask *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_10220afc0;
  if (*(long *)(param_1 + 0x20) != 0) {
    _AuthorizationFree(*(long *)(param_1 + 0x20),0);
  }
  CAbstractTask::~CAbstractTask(param_1);
  operator_delete(param_1);
  return;
}

