
int * FUN_100a75220(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
                   long *param_5)

{
  uint *puVar1;
  long lVar2;
  int *piVar3;
  
  piVar3 = (int *)*param_2;
  *param_1 = piVar3;
  if (1 < *piVar3 + 1U) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  piVar3 = (int *)*param_3;
  param_1[1] = piVar3;
  if (1 < *piVar3 + 1U) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 2) = param_4;
  lVar2 = *param_5;
  param_1[3] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar2 + 8);
    piVar3 = (int *)(ulong)*puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
  }
  return piVar3;
}

