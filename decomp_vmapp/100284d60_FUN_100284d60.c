
void FUN_100284d60(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    if (*(void **)(param_1 + 8) != (void *)0x0) {
      _free(*(void **)(param_1 + 8));
      *(undefined8 *)(param_1 + 8) = 0;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}

