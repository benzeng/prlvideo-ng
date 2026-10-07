
void FUN_10045b420(long param_1)

{
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x10));
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}

