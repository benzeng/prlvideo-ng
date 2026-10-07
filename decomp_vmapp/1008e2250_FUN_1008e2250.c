
void FUN_1008e2250(long param_1)

{
  FUN_10088b320();
  _OPENSSL_cleanse((void *)(param_1 + 0xe8),0x20);
  _OPENSSL_cleanse((void *)(param_1 + 0xa8),0x20);
  _OPENSSL_cleanse((void *)(param_1 + 200),0x20);
  _OPENSSL_cleanse((void *)(param_1 + 0x108),0x20);
  *(undefined4 *)(param_1 + 0x128) = 0xffffffff;
  return;
}

