
void FUN_100c3f180(void *param_1)

{
  int iVar1;
  
  if (param_1 != (void *)0x0) {
    iVar1 = FUN_100bf2cf0((long)param_1 + 0x28,0xffffffff,0x21,"ec_key.c",0x71);
    if (iVar1 < 1) {
      if (*(long *)((long)param_1 + 8) != 0) {
        FUN_100c36170();
      }
      if (*(long *)((long)param_1 + 0x10) != 0) {
        FUN_100c36280();
      }
      if (*(long *)((long)param_1 + 0x18) != 0) {
        FUN_100c26640();
      }
      FUN_100c36230((long)param_1 + 0x30);
      _OPENSSL_cleanse(param_1,0x38);
      FUN_100bf3910(param_1);
      return;
    }
  }
  return;
}

