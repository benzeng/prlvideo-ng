
bool FUN_10054c5d0(long param_1)

{
  uint uVar1;
  long *plVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  bool bVar15;
  
  cVar3 = FUN_10054bea0();
  if (cVar3 == '\0') {
    return false;
  }
  cVar3 = FUN_10054c2c0(param_1);
  if (cVar3 == '\0') {
    return false;
  }
  lVar9 = *(long *)(param_1 + 0x28);
  uVar14 = (ulong)*(uint *)(lVar9 + 4);
  iVar12 = (int)((*(long *)(param_1 + 0x10) + -1 + uVar14) / uVar14);
  *(int *)(param_1 + 0x30) = iVar12;
  iVar13 = (int)((*(long *)(param_1 + 0x18) + -1 + uVar14) / uVar14);
  *(int *)(param_1 + 0x34) = iVar13;
  uVar4 = iVar12 + iVar13;
  uVar11 = uVar4 * 8 + 0xfff & 0xfffff000;
  pvVar7 = _valloc((ulong)uVar11);
  *(void **)(param_1 + 0x40) = pvVar7;
  if (pvVar7 == (void *)0x0) {
    pcVar10 = "CGuestMemoryCompressor::open_existing() failed to allocate index";
  }
  else {
    lVar9 = *(long *)(lVar9 + 0x18);
    lVar8 = FUN_1007616e0(*(undefined8 *)(param_1 + 8),lVar9,0);
    if ((lVar8 == lVar9) &&
       (uVar5 = FUN_100761880(*(undefined8 *)(param_1 + 8),FUN_1007617a0,0), uVar5 == uVar11)) {
      plVar2 = *(long **)(param_1 + 0x60);
      if ((plVar2 == (long *)0x0) ||
         (iVar6 = (**(code **)(*plVar2 + 0x40))(plVar2,*(undefined8 *)(param_1 + 0x40),uVar11),
         -1 < iVar6)) {
        uVar14 = (ulong)((uint)(iVar12 + 0x1f + iVar13) >> 3 & 0x1ffffffc);
        pvVar7 = operator_new__(uVar14,(nothrow_t *)PTR_nothrow_100ba21c8);
        if (pvVar7 != (void *)0x0) {
          ___bzero(pvVar7,uVar14);
          uVar14 = 0;
          if (**(short **)(param_1 + 0x28) != 1) {
            uVar14 = (ulong)*(uint *)(param_1 + 0x30);
          }
          if ((uint)uVar14 < uVar4) {
            lVar9 = *(long *)(param_1 + 0x40);
            uVar11 = *(uint *)(param_1 + 0x30);
            do {
              uVar5 = uVar11;
              if ((uint)uVar14 < uVar11) {
                uVar5 = 0;
              }
              uVar5 = uVar5 + *(int *)(lVar9 + uVar14 * 8);
              iVar12 = *(int *)(lVar9 + 4 + uVar14 * 8);
              if ((uVar4 <= uVar5) || (bVar15 = iVar12 == 0, iVar12 = 0, bVar15)) {
                FUN_1008e3970("","TransMem",0,
                              "CGuestMemoryCompressor::open_existing() invalid block [%u](%u)",uVar5
                              ,iVar12);
                goto LAB_10054c88c;
              }
              uVar1 = *(uint *)((long)pvVar7 + (ulong)(uVar5 >> 5) * 4);
              if ((uVar1 >> ((byte)uVar5 & 0x1f) & 1) != 0) {
                FUN_1008e3970("","TransMem",0,
                              "CGuestMemoryCompressor::open_existing() block [%u] is already present"
                              ,uVar5);
                goto LAB_10054c88c;
              }
              *(uint *)((long)pvVar7 + (ulong)(uVar5 >> 5) * 4) = uVar1 | 1 << ((byte)uVar5 & 0x1f);
              uVar14 = uVar14 + 1;
            } while ((uint)uVar14 < uVar4);
          }
          *(undefined8 *)(param_1 + 0x48) = 0;
          lVar9 = FUN_1007616e0(*(undefined8 *)(param_1 + 8),0,0);
          if (lVar9 == 0) {
            *(undefined1 *)(param_1 + 0x20) = 1;
          }
          else {
            FUN_1008e3970("","TransMem",0,
                          "CGuestMemoryCompressor::open_existing() failed to reset file pointer");
          }
LAB_10054c88c:
          operator_delete__(pvVar7);
          return *(char *)(param_1 + 0x20) != '\0';
        }
        pcVar10 = "CGuestMemoryCompressor::open_existing() failed to allocate index map";
        goto LAB_10054c81a;
      }
      FUN_1008e3970("","TransMem",0,"CGuestMemoryCompressor::decrypt() failed (%d)");
    }
    pcVar10 = "CGuestMemoryCompressor::open_existing() failed to read index";
  }
LAB_10054c81a:
  FUN_1008e3970("","TransMem",0,pcVar10);
  return false;
}

