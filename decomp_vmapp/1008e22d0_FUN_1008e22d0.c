
void FUN_1008e22d0(long param_1)

{
  if (param_1 != 0) {
    FUN_10088b320(param_1);
    _OPENSSL_cleanse((void *)(param_1 + 0xe8),0x20);
    _OPENSSL_cleanse((void *)(param_1 + 0xa8),0x20);
    _OPENSSL_cleanse((void *)(param_1 + 200),0x20);
    _OPENSSL_cleanse((void *)(param_1 + 0x108),0x20);
    *(undefined4 *)(param_1 + 0x128) = 0xffffffff;
    FUN_10081e1a0(param_1);
    return;
  }
  return;
}

