
void FUN_1005f5870(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100bc7300;
  QMutex::~QMutex((QMutex *)(param_1 + 5));
  FUN_1005f58d0(param_1 + 2,param_1[3]);
  operator_delete(param_1);
  return;
}

