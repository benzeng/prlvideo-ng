
void FUN_100bcd230(long param_1)

{
  long lVar1;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x80) != 0)) {
    FUN_100bcf9d0(param_1);
    lVar1 = *(long *)(param_1 + 0x80);
    if (*(long *)(lVar1 + 0xf0) != 0) {
      FUN_100bd41b0(param_1);
      lVar1 = *(long *)(param_1 + 0x80);
    }
    if (*(long *)(lVar1 + 0x108) != 0) {
      FUN_100bd4080(param_1);
      lVar1 = *(long *)(param_1 + 0x80);
    }
    if (*(long *)(lVar1 + 0x140) != 0) {
      FUN_100bf3910();
      lVar1 = *(long *)(param_1 + 0x80);
    }
    if (*(long *)(lVar1 + 0x3b0) != 0) {
      FUN_100c51d00();
      lVar1 = *(long *)(param_1 + 0x80);
    }
    if (*(long *)(lVar1 + 0x3b8) != 0) {
      FUN_100c3f180();
      lVar1 = *(long *)(param_1 + 0x80);
    }
    if (*(long *)(lVar1 + 0x3e0) != 0) {
      FUN_100c60790(*(long *)(lVar1 + 0x3e0),FUN_100c7c730);
      lVar1 = *(long *)(param_1 + 0x80);
    }
    if (*(long *)(lVar1 + 0x1b8) != 0) {
      FUN_100c586e0();
      lVar1 = *(long *)(param_1 + 0x80);
    }
    if (*(long *)(lVar1 + 0x1c0) != 0) {
      FUN_100bcfc70(param_1);
    }
    FUN_100bf1230(param_1);
    _OPENSSL_cleanse(*(void **)(param_1 + 0x80),0x4b0);
    FUN_100bf3910(*(undefined8 *)(param_1 + 0x80));
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  return;
}

