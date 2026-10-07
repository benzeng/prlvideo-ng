
undefined1 FUN_100556a40(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 in_RAX;
  void *pvVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  char *pcVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  undefined4 uVar15;
  
  uVar15 = (undefined4)((ulong)in_RAX >> 0x20);
  uVar1 = *(uint *)(*(long *)(param_1 + 0x10) + 8);
  uVar14 = (ulong)uVar1;
  if (**(char **)(param_1 + 0x18) == '\0') {
    if (2 < (byte)(*(char *)(*(long *)(param_1 + 0x10) + 3) - 2U)) {
      FUN_1008e3970("","TransMem",0,
                    "CSnapshotEngineCompressed::init() unsupported compression type (%u)");
      return 0;
    }
  }
  else {
    iVar2 = FUN_1007da300("vm.snapshot.use_lz4",1);
    if (iVar2 == 0) {
      *(undefined1 *)(*(long *)(param_1 + 0x10) + 3) = 3;
    }
    else {
      *(undefined1 *)(*(long *)(param_1 + 0x10) + 3) = 4;
    }
  }
  uVar3 = FUN_100778180();
  uVar13 = 1;
  if (uVar3 != 0) {
    uVar13 = uVar3;
  }
  *(uint *)(param_1 + 0x84) = uVar13;
  uVar10 = (ulong)(uVar1 + 0x1f >> 3 & 0x1ffffffc);
  pvVar4 = operator_new__(uVar10,(nothrow_t *)PTR_nothrow_100ba21c8);
  *(void **)(param_1 + 0x78) = pvVar4;
  if (pvVar4 == (void *)0x0) {
    pcVar8 = "CSnapshotEngineCompressed::init(%u blocks) failed to allocate bitmap";
  }
  else {
    ___bzero(pvVar4,uVar10);
    puVar5 = operator_new__(uVar14 * 0x10 + 8,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (puVar5 == (ulong *)0x0) {
      *(undefined8 *)(param_1 + 0x60) = 0;
      pcVar8 = "CSnapshotEngineCompressed::init(%u blocks) failed to allocate queue";
    }
    else {
      *puVar5 = uVar14;
      puVar5 = puVar5 + 1;
      if (uVar1 != 0) {
        puVar6 = puVar5;
        do {
          *(undefined4 *)puVar6 = 0xfffffffd;
          *(undefined4 *)((long)puVar6 + 4) = 0xfffffffd;
          puVar6[1] = 0;
          puVar6 = puVar6 + 2;
        } while (puVar6 != puVar5 + uVar14 * 2);
      }
      *(ulong **)(param_1 + 0x60) = puVar5;
      *(undefined8 *)(param_1 + 0x88) = 0xffffffffffffffff;
      uVar10 = (ulong)(uVar13 + 1);
      puVar5 = operator_new__(uVar10 * 0x10 + 8,(nothrow_t *)PTR_nothrow_100ba21c8);
      if (puVar5 != (ulong *)0x0) {
        *puVar5 = uVar10;
        puVar6 = puVar5 + 1;
        if (uVar13 + 1 != 0) {
          uVar7 = 2;
          if (1 < uVar3) {
            uVar7 = ((ulong)(uVar3 + 1) * 0x10 - 0x10 >> 4) + 1;
          }
          puVar9 = puVar6;
          uVar12 = 0;
          if ((uVar7 & 0x1ffffffffffffffe) != 0) {
            puVar9 = puVar6 + (uVar7 & 0x1ffffffffffffffe) * 2;
            uVar11 = uVar7 & 0xfffffffffffffffe;
            do {
              puVar5[1] = 0;
              puVar5[3] = 0;
              *(undefined1 *)(puVar5 + 2) = 0;
              *(undefined1 *)(puVar5 + 4) = 0;
              uVar11 = uVar11 - 2;
              uVar12 = uVar7 & 0x1ffffffffffffffe;
              puVar5 = puVar5 + 4;
            } while (uVar11 != 0);
          }
          if (uVar7 != uVar12) {
            do {
              *puVar9 = 0;
              *(undefined1 *)(puVar9 + 1) = 0;
              puVar9 = puVar9 + 2;
            } while (puVar9 != puVar6 + uVar10 * 2);
          }
        }
        *(ulong **)(param_1 + 0x98) = puVar6;
        FUN_1008e3970("","TransMem",0,
                      "CSnapshotEngineCompressed::init() %u blocks, comp.types=%u,%u",uVar14,
                      *(undefined1 *)(*(long *)(param_1 + 0x10) + 3),
                      CONCAT44(uVar15,(uint)*(byte *)(*(long *)(param_1 + 0x10) + 2)));
        return 1;
      }
      *(undefined8 *)(param_1 + 0x98) = 0;
      pcVar8 = "CSnapshotEngineCompressed::init(%u blocks) failed to allocate buffer list";
    }
  }
  FUN_1008e3970("","TransMem",0,pcVar8,uVar14);
  return 0;
}

