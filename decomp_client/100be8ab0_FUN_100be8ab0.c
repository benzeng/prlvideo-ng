
void FUN_100be8ab0(void *param_1)

{
  int iVar1;
  
  if (param_1 != (void *)0x0) {
    iVar1 = FUN_100bf2cf0((long)param_1 + 0xc0,0xffffffff,0xe,"ssl_sess.c",0x36c);
    if (iVar1 < 1) {
      FUN_100bf51c0(3,param_1,(long)param_1 + 0xf8);
      _OPENSSL_cleanse((void *)((long)param_1 + 8),8);
      _OPENSSL_cleanse((void *)((long)param_1 + 0x14),0x30);
      _OPENSSL_cleanse((void *)((long)param_1 + 0x48),0x20);
      if (*(long *)((long)param_1 + 0xa8) != 0) {
        FUN_100be7be0();
      }
      if (*(long *)((long)param_1 + 0xb0) != 0) {
        FUN_100c7cd70();
      }
      if (*(long *)((long)param_1 + 0xf0) != 0) {
        FUN_100c5ffd0();
      }
      if (*(long *)((long)param_1 + 0x118) != 0) {
        FUN_100bf3910();
      }
      if (*(long *)((long)param_1 + 0x140) != 0) {
        FUN_100bf3910();
      }
      *(undefined8 *)((long)param_1 + 0x120) = 0;
      if (*(long *)((long)param_1 + 0x128) != 0) {
        FUN_100bf3910();
      }
      *(undefined8 *)((long)param_1 + 0x130) = 0;
      if (*(long *)((long)param_1 + 0x138) != 0) {
        FUN_100bf3910();
      }
      if (*(long *)((long)param_1 + 0x90) != 0) {
        FUN_100bf3910();
      }
      if (*(long *)((long)param_1 + 0x98) != 0) {
        FUN_100bf3910();
      }
      if (*(long *)((long)param_1 + 0x158) != 0) {
        FUN_100bf3910();
      }
      _OPENSSL_cleanse(param_1,0x160);
      FUN_100bf3910(param_1);
      return;
    }
  }
  return;
}

