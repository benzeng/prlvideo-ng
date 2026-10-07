
void FUN_1002b3530(undefined8 *param_1)

{
  DAT_100bfad84 = 0;
  DAT_100bfad9d = DAT_100bfad9d | 1;
  *param_1 = &PTR_FUN_100bb2db0;
  FUN_1002b2690(param_1,1);
  QMutex::~QMutex((QMutex *)(param_1 + 1));
  return;
}

