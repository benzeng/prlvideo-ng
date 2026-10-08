
void FUN_1001e35f0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,QDateTime *param_4)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_1022713a0;
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
  QDateTime::QDateTime((QDateTime *)(param_1 + 3),param_4);
  return;
}

