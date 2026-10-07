
void FUN_100863f80(void *param_1)

{
  int iVar1;
  
  if (param_1 != (void *)0x0) {
    iVar1 = FUN_10081d580((long)param_1 + 0x28,0xffffffff,0x21,"ec_key.c",0x71);
    if (iVar1 < 1) {
      if (*(long *)((long)param_1 + 8) != 0) {
        FUN_10085af70();
      }
      if (*(long *)((long)param_1 + 0x10) != 0) {
        FUN_10085b080();
      }
      if (*(long *)((long)param_1 + 0x18) != 0) {
        FUN_10084b440();
      }
      FUN_10085b030((long)param_1 + 0x30);
      _OPENSSL_cleanse(param_1,0x38);
      FUN_10081e1a0(param_1);
      return;
    }
  }
  return;
}

