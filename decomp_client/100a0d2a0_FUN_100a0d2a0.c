
void FUN_100a0d2a0(long param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  int *piVar3;
  
  piVar1 = (int *)*param_2;
  piVar3 = *(int **)(param_1 + 0x20);
  if (piVar3 != piVar1) {
    uVar2 = param_2[1];
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      piVar3 = *(int **)(param_1 + 0x20);
    }
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if ((*piVar3 == 0) && (*(void **)(param_1 + 0x20) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x20));
      }
    }
    *(int **)(param_1 + 0x20) = piVar1;
    *(undefined8 *)(param_1 + 0x28) = uVar2;
  }
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 3);
  *(undefined8 *)(param_1 + 0x30) = param_2[2];
  QVariant::operator=((QVariant *)(param_1 + 0x40),(QVariant *)(param_2 + 4));
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 6);
  return;
}

