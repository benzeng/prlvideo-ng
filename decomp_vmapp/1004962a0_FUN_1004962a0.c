
void FUN_1004962a0(QMutex *param_1)

{
  FUN_100495a10(param_1,0);
  QWaitCondition::~QWaitCondition((QWaitCondition *)(param_1 + 1));
  QMutex::~QMutex(param_1);
  return;
}

