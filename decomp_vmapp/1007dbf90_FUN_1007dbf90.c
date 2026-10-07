
ulong FUN_1007dbf90(uint *param_1,uint param_2,uint param_3)

{
  long lVar1;
  ulong *puVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  
  if (param_1 == (uint *)0x0) {
    return 0xffffffffffffffea;
  }
  if (*param_1 <= param_3) {
    return 0xffffffffffffffea;
  }
  if (*param_1 < param_2) {
    return 0xffffffffffffffea;
  }
  if (param_2 == 0) {
    return 0xffffffffffffffff;
  }
  iVar3 = param_2 - param_3;
  if (iVar3 == 0) {
    return 0xffffffffffffffff;
  }
  uVar7 = param_3 & 0x7fff;
  param_3 = param_3 >> 0xf;
  while( true ) {
    lVar1 = *(long *)(param_1 + (ulong)param_3 * 2 + 2);
    uVar4 = iVar3 + uVar7;
    uVar6 = 0x8000;
    if (uVar4 < 0x8000) {
      uVar6 = uVar4;
    }
    if (lVar1 == 0) {
      return (ulong)(param_3 << 0xf);
    }
    if (lVar1 != 1) break;
    param_3 = param_3 + 1;
    uVar7 = 0;
    iVar3 = uVar4 - uVar6;
    if (iVar3 == 0) {
      return 0xffffffffffffffff;
    }
  }
  uVar8 = (ulong)(uVar7 >> 6);
  if (uVar6 <= uVar7) {
    return 0xffffffffffffffff;
  }
  if (lVar1 == 0) {
    return 0xffffffffffffffff;
  }
  uVar4 = uVar7 & 0x7fc0;
  uVar6 = uVar6 - uVar4;
  if ((uVar7 & 0x3f) == 0) {
    puVar2 = (ulong *)(lVar1 + uVar8 * 8);
joined_r0x0001007dc07f:
    for (; 0x3f < uVar6; uVar6 = uVar6 - 0x40) {
      uVar5 = *puVar2;
      if (uVar5 != 0xffffffffffffffff) goto LAB_1007dc0c0;
      puVar2 = puVar2 + 1;
      uVar4 = uVar4 + 0x40;
    }
    if (uVar6 == 0) {
      return 0xffffffffffffffff;
    }
    uVar5 = *puVar2;
  }
  else {
    uVar5 = 0xffffffffffffffffU >> (0x40U - (char)(uVar7 & 0x3f) & 0x3f) |
            *(ulong *)(lVar1 + uVar8 * 8);
    if (0x3f < uVar6) {
      if (uVar5 != 0xffffffffffffffff) goto LAB_1007dc0c0;
      puVar2 = (ulong *)(lVar1 + 8 + uVar8 * 8);
      uVar6 = uVar6 - 0x40;
      uVar4 = uVar4 + 0x40;
      goto joined_r0x0001007dc07f;
    }
  }
  uVar5 = uVar5 | -1L << ((byte)uVar6 & 0x3f);
  if (uVar5 == 0xffffffffffffffff) {
    return 0xffffffffffffffff;
  }
LAB_1007dc0c0:
  lVar1 = 0;
  if (~uVar5 != 0) {
    for (; (~uVar5 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
    }
  }
  iVar3 = -1;
  if (uVar5 != 0xffffffffffffffff) {
    iVar3 = (int)lVar1;
  }
  return (ulong)(param_3 << 0xf) + (ulong)(iVar3 + uVar4);
}

