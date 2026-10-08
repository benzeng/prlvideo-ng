
void FUN_1000c4930(long param_1)

{
  if (*(long **)(param_1 + 0x270) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x270) + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x270) = 0;
  FUN_1000c6560(param_1);
  return;
}

