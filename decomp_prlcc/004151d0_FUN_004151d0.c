
long FUN_004151d0(int param_1)

{
  __off_t _Var1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  ssize_t sVar5;
  ulong __len;
  stat64 sStack_b8;
  
  lVar2 = 0;
  if (-1 < param_1) {
    __fxstat64(1,param_1,&sStack_b8);
    _Var1 = sStack_b8.st_size;
    lVar2 = sysconf(0x1e);
    lVar3 = sysconf(0x1e);
    __len = -lVar3 & (_Var1 - 1U) + lVar2;
    pvVar4 = mmap64((void *)0x0,__len,3,2,param_1,0);
    if (pvVar4 == (void *)0xffffffffffffffff) {
      pvVar4 = malloc(sStack_b8.st_size);
      sVar5 = read(param_1,pvVar4,sStack_b8.st_size);
      lVar2 = FUN_00414040(pvVar4,sVar5);
      *(undefined8 *)(lVar2 + 0x60) = 0xffffffffffffffff;
    }
    else {
      madvise(pvVar4,__len,2);
      lVar2 = FUN_00414040(pvVar4,sStack_b8.st_size);
      *(ulong *)(lVar2 + 0x60) = __len;
      madvise(pvVar4,__len,0);
    }
  }
  return lVar2;
}

