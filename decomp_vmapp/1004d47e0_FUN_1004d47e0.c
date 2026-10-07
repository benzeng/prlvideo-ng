
void FUN_1004d47e0(QMutex *param_1)

{
  FUN_1004d4870(param_1,0);
  QWaitCondition::~QWaitCondition((QWaitCondition *)(param_1 + 1));
  QMutex::~QMutex(param_1);
  return;
}

