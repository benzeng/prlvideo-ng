
void FUN_100083bc0(long param_1,long param_2)

{
  int *piVar1;
  undefined8 uVar2;
  
  __Block_object_assign((void *)(param_1 + 0x20),*(void **)(param_2 + 0x20),7);
  piVar1 = *(int **)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  *(int **)(param_1 + 0x28) = piVar1;
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return;
}

