
undefined1 FUN_10054dea0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  char cVar2;
  undefined1 uVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  
  FUN_1008e3970("","TransMem",0,"Uncompress main memory...");
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","TransMem",2,"CGuestMemoryCompressor::uncompress() unpacking v.2 stream");
  }
  pvVar4 = _valloc(0x400000);
  if (pvVar4 == (void *)0x0) {
    uVar3 = 0;
    FUN_1008e3970("","TransMem",0,"CGuestMemoryCompressor::create_new() failed to allocate buffer");
  }
  else {
    uVar1 = *(ulong *)(*(long *)(param_1 + 0x28) + 0x28);
    if (uVar1 != 0) {
      uVar6 = 0;
      do {
        lVar5 = FUN_100761880(*(undefined8 *)(param_1 + 8),FUN_1007617a0,0,pvVar4,0x400000);
        if (((lVar5 != 0x400000) ||
            (cVar2 = FUN_10054e010(param_1,pvVar4,0x400000,uVar6,0), cVar2 == '\0')) ||
           (cVar2 = FUN_10054e130(param_1,pvVar4,param_2), cVar2 == '\0')) {
          _free(pvVar4);
          FUN_1008e3970("","TransMem",0,
                        "CGuestMemoryCompressor::uncompress() main memory uncompression failed");
          *(undefined1 *)(param_1 + 0x20) = 0;
          return 0;
        }
        uVar6 = uVar6 + 0x400000;
      } while (uVar6 < uVar1);
    }
    _free(pvVar4);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x28);
    uVar3 = FUN_10054d910(param_1,param_2);
  }
  return uVar3;
}

