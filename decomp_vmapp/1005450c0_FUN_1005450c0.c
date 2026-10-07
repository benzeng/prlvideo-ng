
undefined1 FUN_1005450c0(long param_1)

{
  void *pvVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 uVar4;
  ulong uVar5;
  
  uVar3 = *(ulong *)(param_1 + 0x18);
  uVar2 = (uint)((*(ulong *)(param_1 + 0x10) >> 0xc) + 0x1f >> 3) & 0xfffffffc;
  pvVar1 = _malloc((ulong)uVar2);
  *(void **)(param_1 + 0x40) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    uVar4 = 0;
    FUN_1008e3970("","TransMem",0,
                  "init_zero_pages_map() failed to allocate %u bytes for main memory bitmap",uVar2);
  }
  else {
    uVar3 = (uVar3 >> 0xc) + 0x1f >> 3;
    ___bzero(pvVar1,(ulong)uVar2);
    uVar5 = uVar3 & 0xfffffffc;
    pvVar1 = _malloc(uVar5);
    *(void **)(param_1 + 0x48) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      uVar4 = 0;
      FUN_1008e3970("","TransMem",0,
                    "init_zero_pages_map() failed to allocate %u bytes for video memory bitmap",
                    uVar3 & 0xfffffffc);
    }
    else {
      ___bzero(pvVar1,uVar5);
      uVar4 = 1;
    }
  }
  return uVar4;
}

