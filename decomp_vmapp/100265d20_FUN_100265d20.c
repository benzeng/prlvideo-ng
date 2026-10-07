
void FUN_100265d20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100baf140;
  CVmParallelPort::~CVmParallelPort((CVmParallelPort *)(param_1 + 1));
  operator_delete(param_1);
  return;
}

