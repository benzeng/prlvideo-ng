
undefined8 FUN_1002fce50(long param_1,uint param_2,long *param_3)

{
  void *pvVar1;
  ulong *puVar2;
  uint uVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  uint local_38;
  
  local_38 = *(uint *)(param_1 + 0x11968);
  uVar11 = 0;
  uVar4 = (ulong)local_38;
  while (iVar13 = (int)uVar4, iVar13 != 0) {
    uVar4 = uVar4 >> 1;
    uVar12 = uVar11 + (int)uVar4;
    lVar6 = (ulong)uVar12 * 0x10;
    uVar3 = *(uint *)(*(long *)(param_1 + 0x11970) + lVar6);
    if (uVar3 < *(int *)(*param_3 + 8) + param_2) {
      if (param_2 < uVar3 + *(int *)(*(long *)(*(long *)(param_1 + 0x11970) + 8 + lVar6) + 8)) {
        return 0;
      }
      uVar11 = uVar12 + 1;
      uVar4 = (ulong)(uint)((iVar13 + -1) - (int)uVar4);
    }
  }
  uVar3 = *(uint *)(param_1 + 0x1196c);
  if (local_38 < uVar3) {
    puVar10 = *(ulong **)(param_1 + 0x11970);
  }
  else {
    uVar4 = (ulong)(uVar3 + 0x10);
    puVar5 = operator_new__(uVar4 << 4 | 8,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (puVar5 == (ulong *)0x0) {
      return 0;
    }
    *puVar5 = uVar4;
    puVar10 = puVar5 + 1;
    if (uVar3 + 0x10 != 0) {
      uVar8 = (uVar4 * 0x10 - 0x10 >> 4) + 1;
      puVar7 = puVar10;
      uVar14 = 0;
      if ((uVar8 & 0x1ffffffffffffffe) != 0) {
        puVar7 = puVar10 + (uVar8 & 0x1ffffffffffffffe) * 2;
        uVar9 = (uVar4 * 0x10 - 0x10 >> 4) + 1 & 0xfffffffffffffffe;
        puVar2 = puVar5;
        do {
          puVar2[2] = 0;
          puVar2[4] = 0;
          uVar9 = uVar9 - 2;
          uVar14 = uVar8 & 0x1ffffffffffffffe;
          puVar2 = puVar2 + 4;
        } while (uVar9 != 0);
      }
      if (uVar8 != uVar14) {
        puVar7 = puVar7 + -1;
        do {
          puVar7[2] = 0;
          puVar7 = puVar7 + 2;
        } while (puVar5 + uVar4 * 2 != puVar7);
      }
    }
    pvVar1 = *(void **)(param_1 + 0x11970);
    _memcpy(puVar10,pvVar1,(ulong)local_38 << 4);
    if (pvVar1 != (void *)0x0) {
      operator_delete__((void *)((long)pvVar1 + -8));
      local_38 = *(uint *)(param_1 + 0x11968);
      uVar3 = *(uint *)(param_1 + 0x1196c);
    }
    *(ulong **)(param_1 + 0x11970) = puVar10;
    *(uint *)(param_1 + 0x1196c) = uVar3 + 0x10;
  }
  uVar4 = (ulong)uVar11;
  _memmove(puVar10 + uVar4 * 2 + 2,puVar10 + uVar4 * 2,(ulong)(local_38 - uVar11) << 4);
  lVar6 = *(long *)(param_1 + 0x11970);
  *(uint *)(lVar6 + uVar4 * 0x10) = param_2;
  *(long *)(lVar6 + 8 + uVar4 * 0x10) = *param_3;
  *(int *)(param_1 + 0x11968) = *(int *)(param_1 + 0x11968) + 1;
  return CONCAT71((int7)((ulong)lVar6 >> 8),1);
}

