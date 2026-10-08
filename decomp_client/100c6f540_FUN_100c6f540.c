
bool FUN_100c6f540(long param_1)

{
  if (param_1 != 0) {
    FUN_100c66520(*(long *)(param_1 + 0x30) + 0x18);
    _OPENSSL_cleanse(*(void **)(param_1 + 0x30),0x1108);
    FUN_100bf3910(*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return param_1 != 0;
}

