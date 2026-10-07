
void FUN_100541710(QMutex *param_1)

{
  FUN_100540de0(param_1,0);
  QWaitCondition::~QWaitCondition((QWaitCondition *)(param_1 + 1));
  QMutex::~QMutex(param_1);
  return;
}

