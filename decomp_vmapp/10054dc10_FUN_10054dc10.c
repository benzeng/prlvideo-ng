
void FUN_10054dc10(long param_1)

{
  if (*(long **)(param_1 + 0x90) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x90) + 8))();
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (*(long **)(param_1 + 0x88) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x88) + 8))();
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (*(long **)(param_1 + 0x80) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x80) + 8))();
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  return;
}

