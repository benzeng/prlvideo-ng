
void FUN_100c3b7b0(void *param_1)

{
  long *plVar1;
  int iVar2;
  long *ptr;
  
  if (param_1 != (void *)0x0) {
    iVar2 = FUN_100bf2cf0((long)param_1 + 0x30,0xffffffff,0x24,"ec_mult.c",0x9f);
    if (iVar2 < 1) {
      ptr = *(long **)((long)param_1 + 0x20);
      if (ptr != (long *)0x0) {
        if (*ptr != 0) {
          do {
            FUN_100c36410();
            _OPENSSL_cleanse(ptr,8);
            plVar1 = ptr + 1;
            ptr = ptr + 1;
          } while (*plVar1 != 0);
          ptr = *(long **)((long)param_1 + 0x20);
        }
        FUN_100bf3910(ptr);
      }
      _OPENSSL_cleanse(param_1,0x38);
      FUN_100bf3910(param_1);
      return;
    }
  }
  return;
}

