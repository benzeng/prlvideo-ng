
void FUN_1007f7ac0(long param_1)

{
  long lVar1;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x80) != 0)) {
    FUN_1007fa260(param_1);
    lVar1 = *(long *)(param_1 + 0x80);
    if (*(long *)(lVar1 + 0xf0) != 0) {
      FUN_1007fea40(param_1);
      lVar1 = *(long *)(param_1 + 0x80);
    }
    if (*(long *)(lVar1 + 0x108) != 0) {
      FUN_1007fe910(param_1);
      lVar1 = *(long *)(param_1 + 0x80);
    }
    if (*(long *)(lVar1 + 0x140) != 0) {
      FUN_10081e1a0();
      lVar1 = *(long *)(param_1 + 0x80);
    }
    if (*(long *)(lVar1 + 0x3b0) != 0) {
      FUN_100876b00();
      lVar1 = *(long *)(param_1 + 0x80);
    }
    if (*(long *)(lVar1 + 0x3b8) != 0) {
      FUN_100863f80();
      lVar1 = *(long *)(param_1 + 0x80);
    }
    if (*(long *)(lVar1 + 0x3e0) != 0) {
      FUN_100885590(*(long *)(lVar1 + 0x3e0),FUN_1008a11b0);
      lVar1 = *(long *)(param_1 + 0x80);
    }
    if (*(long *)(lVar1 + 0x1b8) != 0) {
      FUN_10087d4e0();
      lVar1 = *(long *)(param_1 + 0x80);
    }
    if (*(long *)(lVar1 + 0x1c0) != 0) {
      FUN_1007fa500(param_1);
    }
    FUN_10081bac0(param_1);
    _OPENSSL_cleanse(*(void **)(param_1 + 0x80),0x4b0);
    FUN_10081e1a0(*(undefined8 *)(param_1 + 0x80));
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  return;
}

