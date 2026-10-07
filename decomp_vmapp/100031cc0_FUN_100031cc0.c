
void FUN_100031cc0(undefined4 *param_1,long param_2)

{
  int *piVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  piVar1 = *(int **)(param_2 + 8);
  *(int **)(param_1 + 2) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_2 + 0x10);
  *(int **)(param_1 + 4) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 6) = uVar2;
  piVar1 = *(int **)(param_2 + 0x40);
  *(int **)(param_1 + 0x10) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 6) = uVar2;
  piVar1 = *(int **)(param_2 + 0x48);
  *(int **)(param_1 + 0x12) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 6) = uVar2;
  QDateTime::QDateTime((QDateTime *)(param_1 + 0x14),(QDateTime *)(param_2 + 0x50));
  param_1[0x16] = *(undefined4 *)(param_2 + 0x58);
  piVar1 = *(int **)(param_2 + 0x60);
  *(int **)(param_1 + 0x18) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_1[0x1a] = *(undefined4 *)(param_2 + 0x68);
  return;
}

