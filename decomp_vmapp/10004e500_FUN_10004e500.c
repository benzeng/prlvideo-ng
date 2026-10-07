
void FUN_10004e500(QMutex *param_1)

{
  FUN_10004dd60(param_1,0);
  QWaitCondition::~QWaitCondition((QWaitCondition *)(param_1 + 1));
  QMutex::~QMutex(param_1);
  return;
}

