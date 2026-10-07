
void FUN_10082a630(long param_1)

{
  long lVar1;
  void *ptr;
  
  lVar1 = *(long *)(param_1 + 0x28);
  FUN_10082a130(lVar1 + 0x20);
  ptr = *(void **)(lVar1 + 0x10);
  if (ptr != (void *)0x0) {
    if ((long)*(int *)(lVar1 + 8) != 0) {
      _OPENSSL_cleanse(ptr,(long)*(int *)(lVar1 + 8));
      ptr = *(void **)(lVar1 + 0x10);
    }
    FUN_10081e1a0(ptr);
    *(undefined8 *)(lVar1 + 0x10) = 0;
  }
  FUN_10081e1a0(lVar1);
  return;
}

