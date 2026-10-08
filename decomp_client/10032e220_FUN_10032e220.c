
void FUN_10032e220(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = uVar1;
  piVar2 = *(int **)(param_1 + 0x10);
  param_2[2] = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  piVar2 = *(int **)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = piVar2;
  param_2[4] = uVar3;
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  return;
}

