
void FUN_10047e350(long *param_1,long *param_2,undefined8 *param_3,undefined4 param_4,long param_5)

{
  long lVar1;
  int *piVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  piVar2 = (int *)*param_3;
  param_1[1] = (long)piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 2) = param_4;
  param_1[3] = param_5;
  return;
}

