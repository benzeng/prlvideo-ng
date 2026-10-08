
void FUN_100cbeb10(long param_1)

{
  if (param_1 != 0) {
    FUN_100c66520(param_1);
    _OPENSSL_cleanse((void *)(param_1 + 0xe8),0x20);
    _OPENSSL_cleanse((void *)(param_1 + 0xa8),0x20);
    _OPENSSL_cleanse((void *)(param_1 + 200),0x20);
    _OPENSSL_cleanse((void *)(param_1 + 0x108),0x20);
    *(undefined4 *)(param_1 + 0x128) = 0xffffffff;
    FUN_100bf3910(param_1);
    return;
  }
  return;
}

