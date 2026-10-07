
void FUN_1000aa6f0(long param_1)

{
  if (*(long **)(param_1 + 0x1910) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1910) + 0x20))();
    *(undefined8 *)(param_1 + 0x1910) = 0;
  }
  return;
}

