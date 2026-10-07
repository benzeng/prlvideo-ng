
long FUN_00415350(FILE *param_1)

{
  void *__ptr;
  size_t sVar1;
  long lVar2;
  
  __ptr = malloc(0x400);
  if (__ptr != (void *)0x0) {
    lVar2 = 0;
    do {
      sVar1 = fread((void *)((long)__ptr + lVar2),1,0x400,param_1);
      lVar2 = lVar2 + sVar1;
      if (sVar1 != 0x400) {
        if (__ptr == (void *)0x0) {
          return 0;
        }
        lVar2 = FUN_00414040(__ptr,lVar2);
        *(undefined8 *)(lVar2 + 0x60) = 0xffffffffffffffff;
        return lVar2;
      }
      __ptr = realloc(__ptr,lVar2 + 0x400);
    } while (__ptr != (void *)0x0);
  }
  return 0;
}

