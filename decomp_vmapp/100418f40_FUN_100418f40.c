
undefined8 FUN_100418f40(long param_1)

{
  if (*(void **)(param_1 + 0x640) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x640));
    *(undefined8 *)(param_1 + 0x640) = 0;
  }
  FUN_100416cc0(param_1);
  return 1;
}

