
void FUN_100372a20(undefined8 param_1,undefined8 param_2,long *param_3,undefined4 param_4,
                  long param_5)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  undefined4 *puVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  bool bVar16;
  long local_78;
  long lStack_70;
  undefined4 local_38;
  undefined4 local_34;
  
  lVar4 = *param_3;
  if (*(long *)(lVar4 + 0x3a8) != *(long *)(lVar4 + 0x3b0)) {
    FUN_10038e060(param_3 + 0x1d9);
  }
  lVar5 = *(long *)(lVar4 + 0x378);
  lVar8 = *(long *)(lVar4 + 0x380) - lVar5;
  if (lVar8 != 0) {
    uVar9 = 1;
    uVar14 = 0;
    do {
      uVar11 = uVar9;
      uVar2 = *(uint *)(lVar5 + uVar14 * 4);
      uVar9 = (ulong)uVar2;
      iVar13 = uVar2 * 0x40;
      *(undefined4 *)(param_3 + uVar9 * 4 + 0x1db) =
           *(undefined4 *)(param_5 + 0x8270 + (ulong)(iVar13 + 0x107) * 4);
      *(undefined4 *)((long)param_3 + uVar9 * 0x20 + 0xedc) =
           *(undefined4 *)(param_5 + 0x8270 + (ulong)(iVar13 + 0x109) * 4);
      *(undefined4 *)(param_3 + uVar9 * 4 + 0x1dc) =
           *(undefined4 *)(param_5 + 0x8270 + (ulong)(iVar13 + 0x108) * 4);
      *(undefined4 *)((long)param_3 + uVar9 * 0x20 + 0xee4) =
           *(undefined4 *)(param_5 + 0x8270 + (ulong)(iVar13 + 0x10a) * 4);
      uVar9 = (ulong)((int)uVar11 + 1);
      uVar14 = uVar11;
    } while (uVar11 < (ulong)(lVar8 >> 2));
  }
  lVar8 = *(long *)(lVar4 + 0x398) - *(long *)(lVar4 + 0x390);
  if (lVar8 != 0) {
    uVar9 = 1;
    uVar14 = 0;
    do {
      uVar11 = uVar9;
      uVar2 = *(uint *)(lVar5 + uVar14 * 4);
      *(undefined4 *)(param_3 + (ulong)uVar2 * 4 + 0x1dd) =
           *(undefined4 *)(param_5 + 0x8270 + (ulong)(uVar2 * 0x40 + 0x116) * 4);
      *(undefined4 *)((long)param_3 + (ulong)uVar2 * 0x20 + 0xeec) =
           *(undefined4 *)(param_5 + 0x8270 + (ulong)(uVar2 * 0x40 + 0x117) * 4);
      uVar9 = (ulong)((int)uVar11 + 1);
      uVar14 = uVar11;
    } while (uVar11 < (ulong)(lVar8 >> 2));
  }
  lVar5 = *(long *)(lVar4 + 0x3c0);
  if (*(long *)(lVar4 + 0x3c8) != lVar5) {
    uVar9 = 0;
    uVar14 = 1;
    do {
      uVar2 = *(uint *)(lVar5 + uVar9 * 4);
      local_38 = FUN_100399b60(param_3[0xa7]);
      FUN_10038e060(param_3 + (ulong)uVar2 * 2 + 0x1fb,&local_38);
      lVar5 = *(long *)(lVar4 + 0x3c0);
      bVar16 = uVar14 < (ulong)(*(long *)(lVar4 + 0x3c8) - lVar5 >> 2);
      uVar9 = uVar14;
      uVar14 = (ulong)((int)uVar14 + 1);
    } while (bVar16);
  }
  if ((*(int **)(lVar4 + 0x348) != *(int **)(lVar4 + 0x350)) &&
     (iVar13 = **(int **)(lVar4 + 0x348), iVar13 != 0)) {
    iVar3 = *(int *)(*param_3 + 0x23c);
    uVar2 = *(uint *)(param_5 + 34000);
    uVar10 = 5;
    if (5 < iVar13 - 1U) {
      uVar10 = iVar13 - 1U;
    }
    puVar12 = (undefined4 *)((long)param_3 + 0xe74);
    uVar15 = 0;
    do {
      if ((uVar2 >> (uVar15 & 0x1f) & 1) != 0) {
        if (iVar3 == 0) {
          FUN_10038dac0(&local_78);
          FUN_10038dc10(param_5 + 0x2f0,&local_78,4);
          uVar7 = FUN_10033cfd0(param_5 + 0x210,uVar15);
          uVar7 = FUN_10038ded0(&local_78,uVar7);
          *(undefined8 *)(puVar12 + -3) = uVar7;
          puVar12[-1] = (int)param_2;
          *puVar12 = (int)((ulong)param_2 >> 0x20);
        }
        else {
          puVar6 = (undefined4 *)FUN_10033cfd0(param_5 + 0x210,uVar15);
          puVar12[-3] = *puVar6;
          puVar12[-2] = puVar6[1];
          puVar12[-1] = puVar6[2];
          *puVar12 = puVar6[3];
        }
      }
      uVar15 = uVar15 + 1;
      puVar12 = puVar12 + 4;
    } while ((iVar13 + 5) - uVar10 != uVar15);
  }
  if (*(long *)(lVar4 + 0x3d8) != *(long *)(lVar4 + 0x3e0)) {
    if (*(int *)(param_5 + 0x84d8) == 0x314d3241) {
      *(undefined4 *)(param_3 + 0x1c7) = 0x42ff0000;
    }
    else {
      *(float *)(param_3 + 0x1c7) = (float)*(byte *)(param_5 + 0x82d0);
    }
  }
  if (*(long *)(lVar4 + 0x360) != *(long *)(lVar4 + 0x368)) {
    fVar1 = *(float *)(param_5 + 0x8304);
    local_34 = *(undefined4 *)(param_5 + 0x82f8);
    local_78 = 0;
    lStack_70 = 0;
    FUN_10038e060(&local_78,&local_34);
    param_3[0x1c9] = local_78;
    param_3[0x1ca] = lStack_70;
    *(undefined4 *)(param_3 + 0x1cb) = *(undefined4 *)(param_5 + 0x8308);
    *(float *)((long)param_3 + 0xe5c) = fVar1;
    *(float *)(param_3 + 0x1cc) = DAT_100b39678 / (fVar1 - *(float *)(param_5 + 0x8300));
  }
  (*DAT_1011c6e18)(param_4,*(undefined4 *)(*param_3 + 0x410),
                   (long)param_3 + (ulong)*(uint *)(*param_3 + 0x408) * 4 + 0xe38);
  return;
}

