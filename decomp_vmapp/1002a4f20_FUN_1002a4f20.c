
void FUN_1002a4f20(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR____cxa_pure_virtual_100bb2b18;
  param_1[1] = param_2;
  QMutex::QMutex((QMutex *)(param_1 + 2),0);
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  QMutex::QMutex((QMutex *)(param_1 + 7),0);
  ___bzero(param_1 + 8,0x800);
  return;
}

