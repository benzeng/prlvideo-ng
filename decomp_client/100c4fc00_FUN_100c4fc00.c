
void * FUN_100c4fc00(undefined8 param_1)

{
  void *pvVar1;
  void *ptr;
  void *pvVar2;
  
  pvVar1 = (void *)FUN_100c3fbd0(param_1,FUN_100c4fca0,FUN_100c4fcc0,FUN_100c4fcc0);
  if (pvVar1 == (void *)0x0) {
    ptr = (void *)FUN_100c4fd10();
    pvVar1 = (void *)0x0;
    if ((ptr != (void *)0x0) &&
       (pvVar2 = (void *)FUN_100c3fc50(param_1,ptr,FUN_100c4fca0,FUN_100c4fcc0,FUN_100c4fcc0),
       pvVar1 = ptr, pvVar2 != (void *)0x0)) {
      if (*(long *)((long)ptr + 8) != 0) {
        FUN_100c557e0();
      }
      FUN_100bf51c0(0xc,ptr,(long)ptr + 0x20);
      _OPENSSL_cleanse(ptr,0x30);
      FUN_100bf3910(ptr);
      pvVar1 = pvVar2;
    }
  }
  return pvVar1;
}

