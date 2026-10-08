
void FUN_100ad9aa0(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = uVar1;
  *(undefined8 *)((long)param_2 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  piVar2 = *(int **)(param_1 + 0x18);
  param_2[3] = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  return;
}

