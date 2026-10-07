
void FUN_1002767f0(long param_1)

{
  if (*(long **)(param_1 + 0x170) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x170) + 8))();
  }
  *(undefined8 *)(param_1 + 0x170) = 0;
  FUN_1007d8af0(param_1 + 0x1ec);
  return;
}

