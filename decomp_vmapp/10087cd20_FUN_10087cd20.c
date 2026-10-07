
void FUN_10087cd20(long param_1)

{
  if (param_1 != 0) {
    if (*(void **)(param_1 + 8) != (void *)0x0) {
      _OPENSSL_cleanse(*(void **)(param_1 + 8),*(size_t *)(param_1 + 0x10));
      FUN_10081e1a0(*(undefined8 *)(param_1 + 8));
    }
    FUN_10081e1a0(param_1);
    return;
  }
  return;
}

