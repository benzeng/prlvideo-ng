
void FUN_10040c870(long param_1)

{
  if (*(long **)(param_1 + 0x60) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x60) + 0x48))();
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  return;
}

