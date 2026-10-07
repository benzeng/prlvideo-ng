
void FUN_1002d9da0(long param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}

