
void FUN_10005f880(QMutex *param_1)

{
  FUN_10005f200(param_1,0);
  QWaitCondition::~QWaitCondition((QWaitCondition *)(param_1 + 1));
  QMutex::~QMutex(param_1);
  return;
}

