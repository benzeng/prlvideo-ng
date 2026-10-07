
undefined1 FUN_10054c090(long param_1,short param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  char cVar2;
  short *psVar3;
  void *pvVar4;
  long lVar5;
  short sVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  
  cVar2 = FUN_10054bea0();
  if (cVar2 != '\0') {
    psVar3 = _valloc(0x1000);
    *(short **)(param_1 + 0x28) = psVar3;
    if (psVar3 == (short *)0x0) {
      pcVar8 = "CGuestMemoryCompressor::create_new() allocation failed";
    }
    else {
      psVar3[0x1c] = 0;
      psVar3[0x1d] = 0;
      psVar3[0x1e] = 0;
      psVar3[0x1f] = 0;
      psVar3[0x18] = 0;
      psVar3[0x19] = 0;
      psVar3[0x1a] = 0;
      psVar3[0x1b] = 0;
      psVar3[0x14] = 0;
      psVar3[0x15] = 0;
      psVar3[0x16] = 0;
      psVar3[0x17] = 0;
      psVar3[0x10] = 0;
      psVar3[0x11] = 0;
      psVar3[0x12] = 0;
      psVar3[0x13] = 0;
      psVar3[0xc] = 0;
      psVar3[0xd] = 0;
      psVar3[0xe] = 0;
      psVar3[0xf] = 0;
      psVar3[8] = 0;
      psVar3[9] = 0;
      psVar3[10] = 0;
      psVar3[0xb] = 0;
      psVar3[4] = 0;
      psVar3[5] = 0;
      psVar3[6] = 0;
      psVar3[7] = 0;
      psVar3[0] = 0;
      psVar3[1] = 0;
      psVar3[2] = 0;
      psVar3[3] = 0;
      sVar6 = 1;
      if (param_2 != 0) {
        sVar6 = param_2;
      }
      *psVar3 = sVar6;
      *(undefined1 *)(psVar3 + 1) = param_3;
      *(undefined1 *)((long)psVar3 + 3) = param_4;
      lVar5 = *(long *)(param_1 + 0x10);
      *(long *)(psVar3 + 4) = lVar5;
      lVar10 = *(long *)(param_1 + 0x18);
      *(long *)(psVar3 + 8) = lVar10;
      psVar3[2] = 0;
      psVar3[3] = 0x10;
      if (*(long *)(param_1 + 0x60) != 0) {
        uVar1 = rdtsc();
        *(int *)(*(long *)(param_1 + 0x28) + 0x20) = (int)uVar1;
        lVar5 = *(long *)(param_1 + 0x10);
        lVar10 = *(long *)(param_1 + 0x18);
      }
      iVar7 = (int)(lVar5 + 0xfffffU >> 0x14);
      *(int *)(param_1 + 0x30) = iVar7;
      iVar9 = (int)(lVar10 + 0xfffffU >> 0x14);
      *(int *)(param_1 + 0x34) = iVar9;
      uVar11 = (ulong)((iVar9 + iVar7) * 8 + 0xfffU & 0xfffff000);
      pvVar4 = _valloc(uVar11);
      *(void **)(param_1 + 0x40) = pvVar4;
      if (pvVar4 == (void *)0x0) {
        pcVar8 = "CGuestMemoryCompressor::create_new() failed to allocate index";
      }
      else {
        ___bzero(pvVar4,uVar11);
        *(undefined8 *)(param_1 + 0x48) = 0;
        lVar5 = FUN_1007616e0(*(undefined8 *)(param_1 + 8),0,0);
        if (lVar5 == 0) {
          *(undefined1 *)(param_1 + 0x20) = 1;
          return 1;
        }
        pcVar8 = "CGuestMemoryCompressor::create_new() failed to reset file pointer";
      }
    }
    FUN_1008e3970("","TransMem",0,pcVar8);
  }
  return 0;
}

