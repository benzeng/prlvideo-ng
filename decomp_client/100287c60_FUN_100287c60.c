
void FUN_100287c60(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
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
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 0x18);
  FUN_100260700(param_2 + 4,param_1 + 0x20);
  return;
}

