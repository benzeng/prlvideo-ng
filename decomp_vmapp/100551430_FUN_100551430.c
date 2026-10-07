
void FUN_100551430(long *param_1,ushort *param_2)

{
  ushort *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  long lVar11;
  long lVar12;
  ushort *puVar13;
  ushort *puVar14;
  long lVar15;
  undefined8 uVar16;
  
  uVar3 = *(uint *)((long)param_1 + 0xc);
  uVar6 = -uVar3 & *param_2 + 3 + uVar3;
  puVar1 = (ushort *)((long)param_2 + (long)(int)uVar6);
  uVar6 = uVar6 / uVar3;
  *(uint *)(param_2 + 2) = uVar6;
  uVar4 = *(uint *)(param_1 + 1);
  puVar9 = (ushort *)0x0;
  puVar13 = puVar1;
  if (puVar1 == (ushort *)(param_1[3] + (ulong)uVar4)) {
    puVar13 = puVar9;
  }
  puVar8 = (ushort *)((long)param_2 - (ulong)(param_2[1] * uVar3));
  if (((puVar8 != (ushort *)0x0) && (puVar8 != param_2)) && (puVar9 = puVar8, *puVar8 != 0)) {
    puVar9 = (ushort *)0x0;
  }
  puVar8 = (ushort *)0x0;
  if ((puVar13 != (ushort *)0x0) && (puVar8 = puVar13, *puVar13 != 0)) {
    puVar8 = (ushort *)0x0;
  }
  puVar13 = (ushort *)((long)param_2 + 0x1017U & 0xfffffffffffff000);
  if ((puVar9 != (ushort *)0x0) && (puVar9 + 0xc <= (ushort *)((ulong)param_2 & 0xfffffffffffff000))
     ) {
    puVar13 = (ushort *)((ulong)param_2 & 0xfffffffffffff000);
  }
  puVar14 = (ushort *)((ulong)puVar1 & 0xfffffffffffff000);
  if ((puVar8 != (ushort *)0x0) &&
     (puVar10 = (ushort *)((long)puVar8 + 0x1017U & 0xfffffffffffff000),
     puVar10 <= (ushort *)((ulong)(*(int *)(puVar8 + 2) * uVar3) + (long)puVar8))) {
    puVar14 = puVar10;
  }
  if (puVar9 != (ushort *)0x0) {
    iVar5 = *(int *)(puVar9 + 2);
    uVar7 = iVar5 - 1;
    bVar2 = *(byte *)(param_1 + 2);
    if (bVar2 < uVar7) {
      uVar7 = (uint)bVar2;
    }
    if (*(long *)(puVar9 + 4) == 0) {
      *(undefined8 *)(param_1[4] + (long)(int)uVar7 * 8) = *(undefined8 *)(puVar9 + 8);
    }
    else {
      *(undefined8 *)(*(long *)(puVar9 + 4) + 0x10) = *(undefined8 *)(puVar9 + 8);
    }
    if (*(long *)(puVar9 + 8) != 0) {
      *(undefined8 *)(*(long *)(puVar9 + 8) + 8) = *(undefined8 *)(puVar9 + 4);
    }
    if ((*(uint *)(param_1 + 5) == uVar7) && (*(long *)(param_1[4] + (long)(int)uVar7 * 8) == 0)) {
      uVar7 = ~(uint)bVar2;
      if (~(uint)bVar2 < (uint)-iVar5) {
        uVar7 = -iVar5;
      }
      lVar11 = (long)(int)~uVar7;
      lVar15 = (long)(int)(-2 - uVar7);
      do {
        lVar12 = lVar15;
        if (lVar11 < 1) break;
        lVar11 = lVar11 + -1;
        lVar15 = lVar12 + -1;
      } while (*(long *)(param_1[4] + lVar12 * 8) == 0);
      *(int *)(param_1 + 5) = (int)lVar12;
    }
    uVar6 = uVar6 + iVar5;
    *(uint *)(puVar9 + 2) = uVar6;
    param_2 = puVar9;
  }
  if (puVar8 != (ushort *)0x0) {
    iVar5 = *(int *)(puVar8 + 2);
    uVar7 = iVar5 - 1;
    bVar2 = *(byte *)(param_1 + 2);
    if (bVar2 < uVar7) {
      uVar7 = (uint)bVar2;
    }
    if (*(long *)(puVar8 + 4) == 0) {
      *(undefined8 *)(param_1[4] + (long)(int)uVar7 * 8) = *(undefined8 *)(puVar8 + 8);
    }
    else {
      *(undefined8 *)(*(long *)(puVar8 + 4) + 0x10) = *(undefined8 *)(puVar8 + 8);
    }
    if (*(long *)(puVar8 + 8) != 0) {
      *(undefined8 *)(*(long *)(puVar8 + 8) + 8) = *(undefined8 *)(puVar8 + 4);
    }
    if ((*(uint *)(param_1 + 5) == uVar7) && (*(long *)(param_1[4] + (long)(int)uVar7 * 8) == 0)) {
      uVar7 = ~(uint)bVar2;
      if (~(uint)bVar2 < (uint)-iVar5) {
        uVar7 = -iVar5;
      }
      lVar11 = (long)(int)~uVar7;
      lVar15 = (long)(int)(-2 - uVar7);
      do {
        lVar12 = lVar15;
        if (lVar11 < 1) break;
        lVar11 = lVar11 + -1;
        lVar15 = lVar12 + -1;
      } while (*(long *)(param_1[4] + lVar12 * 8) == 0);
      *(int *)(param_1 + 5) = (int)lVar12;
    }
    uVar6 = uVar6 + iVar5;
    *(uint *)(param_2 + 2) = uVar6;
  }
  if ((long)param_2 + (ulong)(uVar3 * uVar6) != (ulong)uVar4 + param_1[3]) {
    *(short *)((ulong)(uVar3 * uVar6) + 2 + (long)param_2) = (short)uVar6;
    uVar6 = *(uint *)(param_2 + 2);
  }
  *param_2 = 0;
  uVar6 = uVar6 - 1;
  if (*(byte *)(param_1 + 2) < uVar6) {
    uVar6 = (uint)*(byte *)(param_1 + 2);
  }
  lVar12 = (long)(int)uVar6;
  lVar15 = param_1[4];
  lVar11 = *(long *)(lVar15 + lVar12 * 8);
  uVar16 = 0;
  if (lVar11 != 0) {
    *(ushort **)(lVar11 + 8) = param_2;
    uVar16 = *(undefined8 *)(lVar15 + lVar12 * 8);
  }
  *(undefined8 *)(param_2 + 8) = uVar16;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *(ushort **)(lVar15 + lVar12 * 8) = param_2;
  if ((int)param_1[5] < (int)uVar6) {
    *(uint *)(param_1 + 5) = uVar6;
  }
  lVar15 = (long)puVar14 - (long)puVar13;
  if (puVar14 < puVar13 || lVar15 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001005516f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,puVar13,((ulong)(lVar15 >> 0x3f) >> 0x34) + lVar15 >> 0xc);
  return;
}

