
undefined8 FUN_1005aa5e0(long param_1,uint *param_2)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong *puVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  bool bVar10;
  
  lVar2 = *(long *)(param_1 + 8);
  uVar4 = *param_2;
  uVar8 = (ulong)(uVar4 >> 6);
  uVar9 = 0xfffffffe;
  if ((lVar2 == 0) || (*(uint *)(param_1 + 0x1c) <= uVar4)) goto LAB_1005aa6a2;
  uVar9 = uVar4 & 0xffffffc0;
  uVar6 = *(uint *)(param_1 + 0x1c) - uVar9;
  if ((uVar4 & 0x3f) == 0) {
    puVar5 = (ulong *)(lVar2 + uVar8 * 8);
joined_r0x0001005aa648:
    for (; 0x3f < uVar6; uVar6 = uVar6 - 0x40) {
      uVar7 = *puVar5;
      if (uVar7 != 0) goto LAB_1005aa68b;
      puVar5 = puVar5 + 1;
      uVar9 = uVar9 + 0x40;
    }
    if (uVar6 == 0) {
      return 0;
    }
    uVar7 = *puVar5;
LAB_1005aa672:
    uVar7 = uVar7 & 0xffffffffffffffffU >> (0x40U - (char)uVar6 & 0x3f);
    if (uVar7 == 0) {
      return 0;
    }
  }
  else {
    uVar7 = -1L << (sbyte)(uVar4 & 0x3f) & *(ulong *)(lVar2 + uVar8 * 8);
    if (uVar6 < 0x40) goto LAB_1005aa672;
    if (uVar7 == 0) {
      puVar5 = (ulong *)(lVar2 + 8 + uVar8 * 8);
      uVar6 = uVar6 - 0x40;
      uVar9 = uVar9 + 0x40;
      goto joined_r0x0001005aa648;
    }
  }
LAB_1005aa68b:
  lVar3 = 0;
  if (uVar7 != 0) {
    for (; (uVar7 >> lVar3 & 1) == 0; lVar3 = lVar3 + 1) {
    }
  }
  uVar9 = (-(uint)(uVar7 == 0) | (uint)lVar3) + uVar9;
  if (uVar9 == 0xffffffff) {
    return 0;
  }
LAB_1005aa6a2:
  *param_2 = uVar9;
  uVar4 = *(uint *)(lVar2 + (ulong)(uVar9 >> 5) * 4);
  do {
    puVar1 = (uint *)(lVar2 + (ulong)(uVar9 >> 5) * 4);
    LOCK();
    uVar6 = *puVar1;
    bVar10 = uVar4 == uVar6;
    if (bVar10) {
      *puVar1 = ~(1 << ((byte)uVar9 & 0x1f)) & uVar4;
      uVar6 = uVar4;
    }
    uVar4 = uVar6;
    UNLOCK();
  } while (!bVar10);
  return 1;
}

