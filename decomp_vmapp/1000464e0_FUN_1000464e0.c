
void FUN_1000464e0(QMutex *param_1)

{
  FUN_100046350(param_1,0);
  QWaitCondition::~QWaitCondition((QWaitCondition *)(param_1 + 1));
  QMutex::~QMutex(param_1);
  return;
}

