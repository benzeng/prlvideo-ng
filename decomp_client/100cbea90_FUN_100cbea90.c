
void FUN_100cbea90(long param_1)

{
  FUN_100c66520();
  _OPENSSL_cleanse((void *)(param_1 + 0xe8),0x20);
  _OPENSSL_cleanse((void *)(param_1 + 0xa8),0x20);
  _OPENSSL_cleanse((void *)(param_1 + 200),0x20);
  _OPENSSL_cleanse((void *)(param_1 + 0x108),0x20);
  *(undefined4 *)(param_1 + 0x128) = 0xffffffff;
  return;
}

