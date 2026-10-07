
void FUN_1003fcbb0(long param_1)

{
  int iVar1;
  
  LOCK();
  iVar1 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = 0;
  UNLOCK();
  if (iVar1 != 0) {
    if (*(long **)(param_1 + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x20) + 0x20))();
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    if (*(long **)(param_1 + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    if (*(long **)(param_1 + 8) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 8) + 8))();
      *(undefined8 *)(param_1 + 8) = 0;
    }
  }
  return;
}

