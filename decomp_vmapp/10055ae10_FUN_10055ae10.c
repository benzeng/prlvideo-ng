
void FUN_10055ae10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100bc5e30;
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete__((void *)param_1[7]);
  }
  if ((void *)param_1[9] != (void *)0x0) {
    _free((void *)param_1[9]);
  }
  QMutex::~QMutex((QMutex *)(param_1 + 6));
  operator_delete(param_1);
  return;
}

