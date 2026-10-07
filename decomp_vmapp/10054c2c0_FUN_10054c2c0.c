
undefined1 FUN_10054c2c0(long param_1)

{
  long *plVar1;
  short *psVar2;
  int iVar3;
  ulong uVar4;
  void *pvVar5;
  long lVar6;
  char *pcVar7;
  long lVar8;
  
  uVar4 = FUN_100761a10(**(undefined4 **)(param_1 + 8));
  FUN_1008e3970("","TransMem",0,"CGuestMemoryCompressor::load_descr() file size=%#llx",uVar4);
  if ((uVar4 & 0xfff) == 0x40) {
    pvVar5 = _valloc(0x1000);
    *(void **)(param_1 + 0x28) = pvVar5;
    if (pvVar5 == (void *)0x0) {
      pcVar7 = "CGuestMemoryCompressor::load_descr() allocation failed";
    }
    else {
      lVar6 = FUN_1007616e0(*(undefined8 *)(param_1 + 8),uVar4 - 0x40,0);
      if ((lVar6 == uVar4 - 0x40) &&
         (lVar6 = FUN_100761880(*(undefined8 *)(param_1 + 8),FUN_1007617a0,0,
                                *(undefined8 *)(param_1 + 0x28),0x1000), lVar6 == 0x40)) {
        plVar1 = *(long **)(param_1 + 0x60);
        if ((plVar1 == (long *)0x0) ||
           (iVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,*(undefined8 *)(param_1 + 0x28),0x40,0),
           -1 < iVar3)) {
          psVar2 = *(short **)(param_1 + 0x28);
          if (1 < (ushort)(*psVar2 - 1U)) {
            FUN_1008e3970("","TransMem",0,
                          "CGuestMemoryCompressor::load_descr() unexpected version %u");
            return 0;
          }
          if (((2 < (byte)((char)psVar2[1] - 2U)) || (4 < *(byte *)((long)psVar2 + 3))) ||
             ((0x1aU >> (*(byte *)((long)psVar2 + 3) & 0x1f) & 1) == 0)) {
            FUN_1008e3970("","TransMem",0,
                          "CGuestMemoryCompressor::load_descr() unexpected compression type %d:%d");
            return 0;
          }
          if (*(long *)(param_1 + 0x10) != *(long *)(psVar2 + 4)) {
            lVar8 = *(long *)(psVar2 + 8);
            lVar6 = *(long *)(param_1 + 0x18);
LAB_10054c513:
            FUN_1008e3970("","TransMem",0,
                          "CGuestMemoryCompressor::load_descr() size %#llx:%#llx, expected %#llx:%#llx"
                          ,*(long *)(psVar2 + 4),lVar8,*(long *)(param_1 + 0x10),lVar6);
            return 0;
          }
          lVar6 = *(long *)(param_1 + 0x18);
          lVar8 = *(long *)(psVar2 + 8);
          if (lVar6 != lVar8) goto LAB_10054c513;
          if ((*(uint *)(psVar2 + 2) & 0xfff) != 0) {
            FUN_1008e3970("","TransMem",0,
                          "CGuestMemoryCompressor::load_descr() invalid block size %u");
            return 0;
          }
          uVar4 = *(ulong *)(psVar2 + 0x14);
          if ((uVar4 & 0x3fffff) == 0) {
            uVar4 = *(ulong *)(psVar2 + 0xc);
            if ((uVar4 != 0) && ((uVar4 & 0xfff) == 0)) {
              return 1;
            }
            pcVar7 = "CGuestMemoryCompressor::load_descr() invalid index offset %#llx";
          }
          else {
            pcVar7 = "CGuestMemoryCompressor::load_descr() invalid compressed size %llu";
          }
          goto LAB_10054c453;
        }
        FUN_1008e3970("","TransMem",0,"CGuestMemoryCompressor::decrypt() failed (%d)",iVar3);
      }
      pcVar7 = "CGuestMemoryCompressor::load_descr() failed to read descriptor";
    }
    FUN_1008e3970("","TransMem",0,pcVar7);
  }
  else {
    pcVar7 = "CGuestMemoryCompressor::load_descr() wrong file size %#llx";
LAB_10054c453:
    FUN_1008e3970("","TransMem",0,pcVar7,uVar4);
  }
  return 0;
}

