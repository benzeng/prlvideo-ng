
void FUN_100d06370(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  
  *param_1 = *param_2;
  piVar1 = (int *)param_2[1];
  param_1[1] = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = (int *)param_2[2];
  param_1[2] = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[3] = param_2[3];
  return;
}

