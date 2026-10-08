
void FUN_100c57f20(long param_1)

{
  if (param_1 != 0) {
    if (*(void **)(param_1 + 8) != (void *)0x0) {
      _OPENSSL_cleanse(*(void **)(param_1 + 8),*(size_t *)(param_1 + 0x10));
      FUN_100bf3910(*(undefined8 *)(param_1 + 8));
    }
    FUN_100bf3910(param_1);
    return;
  }
  return;
}

