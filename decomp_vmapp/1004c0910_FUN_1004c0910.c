
void FUN_1004c0910(QMutex *param_1)

{
  FUN_1004c0870(param_1,0);
  QWaitCondition::~QWaitCondition((QWaitCondition *)(param_1 + 1));
  QMutex::~QMutex(param_1);
  return;
}

