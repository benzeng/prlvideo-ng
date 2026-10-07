
void * FUN_100874a00(undefined8 param_1)

{
  void *pvVar1;
  void *ptr;
  void *pvVar2;
  
  pvVar1 = (void *)FUN_1008649d0(param_1,FUN_100874aa0,FUN_100874ac0,FUN_100874ac0);
  if (pvVar1 == (void *)0x0) {
    ptr = (void *)FUN_100874b10();
    pvVar1 = (void *)0x0;
    if ((ptr != (void *)0x0) &&
       (pvVar2 = (void *)FUN_100864a50(param_1,ptr,FUN_100874aa0,FUN_100874ac0,FUN_100874ac0),
       pvVar1 = ptr, pvVar2 != (void *)0x0)) {
      if (*(long *)((long)ptr + 8) != 0) {
        FUN_10087a5e0();
      }
      FUN_10081fa50(0xc,ptr,(long)ptr + 0x20);
      _OPENSSL_cleanse(ptr,0x30);
      FUN_10081e1a0(ptr);
      pvVar1 = pvVar2;
    }
  }
  return pvVar1;
}

