
void * FUN_100b22ca0(long param_1)

{
  long lVar1;
  void *pvVar2;
  ulong uVar3;
  
  pvVar2 = *(void **)(param_1 + 8);
  if (pvVar2 == (void *)0x0) {
    lVar1 = *(long *)(param_1 + 0x20);
    uVar3 = (ulong)*(uint *)(lVar1 + 0x30) +
            (ulong)*(uint *)(lVar1 + 0x2c) +
            (ulong)*(uint *)(lVar1 + 0x28) +
            (ulong)*(uint *)(lVar1 + 0x10) *
            *(long *)(*(long *)(**(long **)(lVar1 + 0x38) + -0x18) + 0x38 +
                     (long)*(long **)(lVar1 + 0x38));
    pvVar2 = (void *)0x0;
    if ((int)uVar3 != 0) {
      pvVar2 = _valloc(uVar3 & 0xffffffff);
      *(void **)(param_1 + 8) = pvVar2;
      if (pvVar2 == (void *)0x0) {
        pvVar2 = (void *)0x0;
        FUN_100df99c0("","dimg",0,"Error allocating memory for data filler [size %u]",
                      uVar3 & 0xffffffff);
      }
      else {
        ___bzero(pvVar2,uVar3 & 0xffffffff);
      }
    }
  }
  return pvVar2;
}

