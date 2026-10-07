
void FUN_1005192c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100bc49f8;
  if (param_1[4] != 0) {
    FUN_100519360(param_1[4],*(undefined4 *)(param_1 + 3));
  }
  QWaitCondition::~QWaitCondition((QWaitCondition *)(param_1 + 7));
  QMutex::~QMutex((QMutex *)(param_1 + 6));
  FUN_100037320(param_1 + 2);
  QMutex::~QMutex((QMutex *)(param_1 + 1));
  return;
}

