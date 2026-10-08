
void FUN_1001e3810(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  QDateTime *param_5)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_1022713d0;
  piVar1 = (int *)*param_2;
  param_1[1] = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = (int *)*param_3;
  param_1[2] = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = (int *)*param_4;
  param_1[3] = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  QDateTime::QDateTime((QDateTime *)(param_1 + 4),param_5);
  return;
}

