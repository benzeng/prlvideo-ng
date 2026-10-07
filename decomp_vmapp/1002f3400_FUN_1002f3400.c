
void FUN_1002f3400(long param_1)

{
  if (*(long **)(param_1 + 0x830) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x830) + 0x20))();
    *(undefined8 *)(param_1 + 0x830) = 0;
  }
  return;
}

