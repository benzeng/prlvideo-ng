
void FUN_1003dd6e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100bbe360;
  QMutex::~QMutex((QMutex *)(param_1 + 0x21));
  *param_1 = &PTR_FUN_100baf140;
  CVmParallelPort::~CVmParallelPort((CVmParallelPort *)(param_1 + 1));
  operator_delete(param_1);
  return;
}

