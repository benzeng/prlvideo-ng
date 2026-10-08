
void FUN_100c4fcc0(void *param_1)

{
  if (*(long *)((long)param_1 + 8) != 0) {
    FUN_100c557e0();
  }
  FUN_100bf51c0(0xc,param_1,(long)param_1 + 0x20);
  _OPENSSL_cleanse(param_1,0x30);
  FUN_100bf3910(param_1);
  return;
}

