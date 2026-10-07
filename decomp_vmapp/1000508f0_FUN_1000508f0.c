
void FUN_1000508f0(QMutex *param_1)

{
  FUN_100050610(param_1,0);
  QWaitCondition::~QWaitCondition((QWaitCondition *)(param_1 + 1));
  QMutex::~QMutex(param_1);
  return;
}

