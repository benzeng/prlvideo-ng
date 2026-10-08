
undefined1 * FUN_100746ae0(undefined1 *param_1,long param_2)

{
  long lVar1;
  int *piVar2;
  undefined1 uVar3;
  
  lVar1 = *(long *)(param_2 + 0x10);
  uVar3 = *(undefined1 *)(lVar1 + 0x28);
  *param_1 = uVar3;
  piVar2 = *(int **)(lVar1 + 0x30);
  *(int **)(param_1 + 8) = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    uVar3 = *(undefined1 *)(lVar1 + 0x28);
  }
  *param_1 = uVar3;
  piVar2 = *(int **)(lVar1 + 0x38);
  *(int **)(param_1 + 0x10) = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    uVar3 = *(undefined1 *)(lVar1 + 0x28);
  }
  *param_1 = uVar3;
  piVar2 = *(int **)(lVar1 + 0x40);
  *(int **)(param_1 + 0x18) = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    uVar3 = *(undefined1 *)(lVar1 + 0x28);
  }
  *param_1 = uVar3;
  piVar2 = *(int **)(lVar1 + 0x48);
  *(int **)(param_1 + 0x20) = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    uVar3 = *(undefined1 *)(lVar1 + 0x28);
  }
  *param_1 = uVar3;
  piVar2 = *(int **)(lVar1 + 0x50);
  *(int **)(param_1 + 0x28) = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    uVar3 = *(undefined1 *)(lVar1 + 0x28);
  }
  *param_1 = uVar3;
  piVar2 = *(int **)(lVar1 + 0x58);
  *(int **)(param_1 + 0x30) = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(lVar1 + 0x60);
  return param_1;
}

