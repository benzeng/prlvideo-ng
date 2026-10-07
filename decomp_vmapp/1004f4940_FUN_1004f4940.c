
void FUN_1004f4940(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100bc3aa8;
  QWaitCondition::~QWaitCondition((QWaitCondition *)(param_1 + 3));
  QMutex::~QMutex((QMutex *)(param_1 + 2));
  operator_delete(param_1);
  return;
}

