
void FUN_100405d10(long param_1)

{
  while (*(long *)(param_1 + 0x10) != param_1 + 0x10) {
    FUN_100404740(param_1,*(long *)(param_1 + 0x10) + -0x48);
  }
  if (*(void **)(param_1 + 0x70) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x70));
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  if (*(void **)(param_1 + 0x68) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x68));
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  return;
}

