
void FUN_100723880(long param_1)

{
  if ((((*(long *)(param_1 + 8) != 0) && (*(int *)(*(long *)(param_1 + 8) + 4) != 0)) &&
      (*(long **)(param_1 + 0x10) != (long *)0x0)) && (*(long *)(param_1 + 0x18) != 0)) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0xf8))();
  }
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x18) + 0x60))();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}

