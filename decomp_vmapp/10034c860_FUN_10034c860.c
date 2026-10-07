
undefined8 FUN_10034c860(byte *param_1,long param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  void *pvVar9;
  byte *pbVar10;
  int iVar11;
  undefined4 uVar12;
  uint *puVar13;
  byte *pbVar14;
  ulong uVar15;
  long lVar16;
  byte *pbVar17;
  
  if ((ulong)*(uint *)(param_2 + 4) < 0x10) {
    return 9;
  }
  uVar4 = *(uint *)(param_2 + 0xc);
  if ((ulong)*(uint *)(param_2 + 4) - 0x10 >> 3 < (ulong)uVar4) {
    return 9;
  }
  uVar5 = *(uint *)(param_2 + 8);
  puVar13 = *(uint **)(*(long *)(param_1 + 0x2780) + 0x8068 +
                      (ulong)((uVar5 >> 0xc ^ uVar5) & 0xfff ^ uVar5 >> 0x18) * 8);
  if (puVar13 == (uint *)0x0) {
    return 7;
  }
  while (*puVar13 != uVar5) {
    puVar13 = *(uint **)(puVar13 + 4);
    if (puVar13 == (uint *)0x0) {
      return 7;
    }
  }
  lVar6 = *(long *)(puVar13 + 2);
  if (lVar6 == 0) {
    return 7;
  }
  if (uVar4 == 0) {
    return 0;
  }
  pbVar2 = param_1 + 0x27f0;
  uVar15 = 0;
  do {
    iVar11 = *(int *)(param_2 + 0x10 + uVar15 * 8);
    if (iVar11 == 1) {
      uVar5 = *(uint *)(param_2 + 0x14 + uVar15 * 8);
      puVar13 = *(uint **)(param_1 +
                          (ulong)((uVar5 >> 0xc ^ uVar5) & 0xfff ^ uVar5 >> 0x18) * 8 + 0xa850);
      if (puVar13 == (uint *)0x0) {
        return 7;
      }
      while (*puVar13 != uVar5) {
        puVar13 = *(uint **)(puVar13 + 4);
        if (puVar13 == (uint *)0x0) {
          return 7;
        }
      }
      lVar7 = *(long *)(puVar13 + 2);
      if (lVar7 == 0) {
        return 7;
      }
      lVar8 = *(long *)(lVar6 + 8);
      pvVar9 = *(void **)(lVar7 + 8);
      iVar11 = *(int *)((long)pvVar9 + 0x80) + -1;
      *(int *)((long)pvVar9 + 0x80) = iVar11;
      if ((pvVar9 != (void *)0x0) && (iVar11 == 0)) {
        FUN_10032d8f0(pvVar9);
        operator_delete(pvVar9);
      }
      *(long *)(lVar7 + 8) = lVar8;
      *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + 1;
      uVar12 = FUN_10034f3a0(param_1,lVar6,*(undefined4 *)(lVar7 + 0x14),lVar8,0);
      *(undefined4 *)(lVar7 + 0x10) = uVar12;
    }
    else {
      if (iVar11 != 0) {
        return 4;
      }
      if (*(byte **)pbVar2 == (byte *)0x0) {
        return 7;
      }
      uVar5 = *(uint *)(param_2 + 0x14 + uVar15 * 8);
      pbVar10 = *(byte **)pbVar2;
      pbVar14 = pbVar2;
      do {
        while (pbVar17 = pbVar10, *(uint *)(pbVar17 + 0x20) < uVar5) {
          pbVar1 = pbVar17 + 8;
          pbVar17 = pbVar14;
          pbVar10 = *(byte **)pbVar1;
          if (*(byte **)pbVar1 == (byte *)0x0) goto LAB_10034c9b1;
        }
        pbVar10 = *(byte **)pbVar17;
        pbVar14 = pbVar17;
      } while (*(byte **)pbVar17 != (byte *)0x0);
LAB_10034c9b1:
      if (pbVar17 == pbVar2) {
        return 7;
      }
      if (uVar5 < *(uint *)(pbVar17 + 0x20)) {
        return 7;
      }
      lVar7 = *(long *)(pbVar17 + 0x28);
      lVar8 = *(long *)(lVar6 + 8);
      pvVar9 = *(void **)(lVar7 + 8);
      iVar11 = *(int *)((long)pvVar9 + 0x80) + -1;
      *(int *)((long)pvVar9 + 0x80) = iVar11;
      lVar16 = lVar7;
      if ((pvVar9 != (void *)0x0) && (iVar11 == 0)) {
        FUN_10032d8f0(pvVar9);
        operator_delete(pvVar9);
        lVar16 = *(long *)(pbVar17 + 0x28);
      }
      *(long *)(lVar7 + 8) = lVar8;
      piVar3 = (int *)(lVar8 + 0x80);
      *piVar3 = *piVar3 + 1;
      uVar12 = FUN_10034f3a0(param_1,lVar6,*(undefined4 *)(lVar16 + 0x14),lVar7,0);
      *(undefined4 *)(lVar16 + 0x10) = uVar12;
      lVar7 = *(long *)(pbVar17 + 0x28);
      if (*(long *)(param_1 + 0x358) == lVar7) {
        param_1[0xc] = param_1[0xc] | 1;
        *param_1 = *param_1 | 8;
      }
      if (*(long *)(param_1 + 0x360) == lVar7) {
        param_1[0xc] = param_1[0xc] | 2;
        *param_1 = *param_1 | 8;
      }
      if (*(long *)(param_1 + 0x368) == lVar7) {
        param_1[0xc] = param_1[0xc] | 4;
        *param_1 = *param_1 | 8;
      }
      if (*(long *)(param_1 + 0x370) == lVar7) {
        param_1[0xc] = param_1[0xc] | 8;
        *param_1 = *param_1 | 8;
      }
      if (*(long *)(param_1 + 0x378) == lVar7) {
        param_1[0xc] = param_1[0xc] | 0x10;
        *param_1 = *param_1 | 8;
      }
      if (*(long *)(param_1 + 0x380) == lVar7) {
        param_1[0xc] = param_1[0xc] | 0x20;
        *param_1 = *param_1 | 8;
      }
      if (*(long *)(param_1 + 0x388) == lVar7) {
        param_1[0xc] = param_1[0xc] | 0x40;
        *param_1 = *param_1 | 8;
      }
      if (*(long *)(param_1 + 0x390) == lVar7) {
        param_1[0xc] = param_1[0xc] | 0x80;
        *param_1 = *param_1 | 8;
      }
    }
    uVar15 = uVar15 + 1;
    if (uVar4 <= uVar15) {
      return 0;
    }
  } while( true );
}

