
undefined4 * FUN_10067fb60(undefined4 *param_1,long param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_2 + 0x100);
  *param_1 = uVar2;
  piVar1 = *(int **)(param_2 + 0x108);
  *(int **)(param_1 + 2) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    uVar2 = *(undefined4 *)(param_2 + 0x100);
  }
  *param_1 = uVar2;
  piVar1 = *(int **)(param_2 + 0x110);
  *(int **)(param_1 + 4) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    uVar2 = *(undefined4 *)(param_2 + 0x100);
  }
  *param_1 = uVar2;
  piVar1 = *(int **)(param_2 + 0x118);
  *(int **)(param_1 + 6) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    uVar2 = *(undefined4 *)(param_2 + 0x100);
  }
  *param_1 = uVar2;
  return param_1;
}

