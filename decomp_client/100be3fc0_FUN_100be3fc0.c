
long FUN_100be3fc0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = 0;
    if (*(long *)(param_1 + 0x130) != 0) {
      lVar1 = *(long *)(*(long *)(param_1 + 0x130) + 0xb0);
      lVar2 = 0;
      if (lVar1 != 0) {
        FUN_100bf2cf0(lVar1 + 0x1c,1,3,"ssl_lib.c",0x34a);
        lVar2 = lVar1;
      }
    }
  }
  return lVar2;
}

