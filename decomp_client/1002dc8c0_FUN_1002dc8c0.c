
void FUN_1002dc8c0(long param_1,undefined8 *param_2)

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
  *(undefined1 *)(param_2 + 3) = *(undefined1 *)(param_1 + 0x18);
  piVar2 = *(int **)(param_1 + 0x20);
  param_2[4] = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_2 + 3) = *(undefined1 *)(param_1 + 0x18);
  piVar2 = *(int **)(param_1 + 0x28);
  param_2[5] = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_2 + 3) = *(undefined1 *)(param_1 + 0x18);
  piVar2 = *(int **)(param_1 + 0x30);
  param_2[6] = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_2 + 3) = *(undefined1 *)(param_1 + 0x18);
  piVar2 = *(int **)(param_1 + 0x38);
  param_2[7] = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_2 + 3) = *(undefined1 *)(param_1 + 0x18);
  piVar2 = *(int **)(param_1 + 0x40);
  param_2[8] = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_2 + 3) = *(undefined1 *)(param_1 + 0x18);
  piVar2 = *(int **)(param_1 + 0x48);
  param_2[9] = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_2 + 10) = *(undefined4 *)(param_1 + 0x50);
  return;
}

