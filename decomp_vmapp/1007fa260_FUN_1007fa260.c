
void FUN_1007fa260(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x80);
  if (*(void **)(lVar1 + 0x3f0) != (void *)0x0) {
    _OPENSSL_cleanse(*(void **)(lVar1 + 0x3f0),(long)*(int *)(lVar1 + 0x3ec));
    FUN_10081e1a0(*(undefined8 *)(*(long *)(param_1 + 0x80) + 0x3f0));
    lVar1 = *(long *)(param_1 + 0x80);
    *(undefined8 *)(lVar1 + 0x3f0) = 0;
  }
  *(undefined4 *)(lVar1 + 0x3ec) = 0;
  return;
}

