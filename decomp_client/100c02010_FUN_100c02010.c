
void FUN_100c02010(long param_1)

{
  long lVar1;
  void *ptr;
  
  lVar1 = *(long *)(param_1 + 0x28);
  FUN_100c01b10(lVar1 + 0x20);
  ptr = *(void **)(lVar1 + 0x10);
  if (ptr != (void *)0x0) {
    if ((long)*(int *)(lVar1 + 8) != 0) {
      _OPENSSL_cleanse(ptr,(long)*(int *)(lVar1 + 8));
      ptr = *(void **)(lVar1 + 0x10);
    }
    FUN_100bf3910(ptr);
    *(undefined8 *)(lVar1 + 0x10) = 0;
  }
  FUN_100bf3910(lVar1);
  return;
}

