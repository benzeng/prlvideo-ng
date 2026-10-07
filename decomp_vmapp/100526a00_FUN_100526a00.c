
void FUN_100526a00(char *param_1,undefined8 *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  Node *pNVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  Node *pNVar7;
  int iVar8;
  int *piVar9;
  long lVar10;
  uint *puVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  uint uVar15;
  undefined8 *puVar16;
  
  param_3[6] = 0;
  param_3[7] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[0] = 0;
  param_3[1] = 0;
  iVar5 = DAT_1011bc2d0 + 1;
  DAT_1011bc2d0 = 1;
  if (iVar5 != 0) {
    DAT_1011bc2d0 = iVar5;
  }
  param_3[6] = DAT_1011bc2d0;
  param_3[5] = *(int *)(param_1 + 4);
  if (0 < *(int *)(*(long *)(param_1 + 8) + 0x14)) {
    param_3[10] = 0;
    param_3[0xb] = 0;
    param_3[8] = 0;
    param_3[9] = 0;
    pNVar3 = *(Node **)(param_1 + 8);
    iVar8 = *(int *)(pNVar3 + 0x14);
    iVar5 = iVar8 * 4 + 0x10;
    param_3[8] = iVar5;
    param_3[9] = iVar8;
    iVar8 = *(int *)(pNVar3 + 0x20);
    if (iVar8 != 0) {
      piVar9 = param_3 + 0xc;
      plVar14 = *(long **)(pNVar3 + 8);
      do {
        pNVar7 = (Node *)*plVar14;
        if (pNVar7 != pNVar3) goto LAB_100526ad0;
        iVar8 = iVar8 + -1;
        plVar14 = plVar14 + 1;
      } while (iVar8 != 0);
    }
    goto LAB_100526aed;
  }
  goto LAB_100526af2;
LAB_100526b80:
  do {
    lVar13 = *(long *)(pNVar7 + 0x10);
    *(undefined4 *)(puVar16 + 2) = 0;
    puVar16[1] = 0;
    *puVar16 = 0;
    *(undefined4 *)puVar16 = *(undefined4 *)(lVar13 + 0x94);
    iVar5 = *(int *)(lVar13 + 0x78);
    *(int *)((long)puVar16 + 4) = iVar5;
    iVar5 = *(int *)(lVar13 + 0x1c) * 0x10 + *(int *)(lVar13 + 0x40) * 2 + 0x44 + iVar5 * 2;
    *(int *)(puVar16 + 1) = iVar5;
    *piVar9 = *piVar9 + iVar5;
    *(undefined8 *)((long)puVar16 + 0x3c) = *(undefined8 *)(lVar13 + 0x30);
    *(undefined8 *)((long)puVar16 + 0x34) = *(undefined8 *)(lVar13 + 0x28);
    *(undefined8 *)((long)puVar16 + 0x2c) = *(undefined8 *)(lVar13 + 0x20);
    *(undefined8 *)((long)puVar16 + 0x24) = *(undefined8 *)(lVar13 + 0x18);
    uVar4 = *(undefined8 *)(lVar13 + 8);
    *(undefined8 *)((long)puVar16 + 0x1c) = *(undefined8 *)(lVar13 + 0x10);
    *(undefined8 *)((long)puVar16 + 0x14) = uVar4;
    uVar6 = 0;
    if ((ulong)*(uint *)(lVar13 + 0x1c) != 0) {
      _memcpy((void *)((long)puVar16 + 0x44),*(void **)(lVar13 + 0x38),
              (ulong)*(uint *)(lVar13 + 0x1c) << 4);
      uVar6 = *(uint *)(lVar13 + 0x1c);
    }
    lVar10 = (ulong)uVar6 * 0x10 + 0x44;
    if ((ulong)*(uint *)(lVar13 + 0x40) == 0) {
      *(undefined4 *)((long)puVar16 + 0x2c) = 0;
      uVar6 = 0;
    }
    else {
      _memcpy((void *)((long)puVar16 + lVar10),*(void **)(lVar13 + 0x48),
              (ulong)*(uint *)(lVar13 + 0x40) * 2);
      uVar6 = *(uint *)(lVar13 + 0x40);
      *(uint *)((long)puVar16 + 0x2c) = uVar6;
    }
    lVar10 = lVar10 + (ulong)uVar6 * 2;
    uVar6 = 0;
    if ((ulong)*(uint *)(lVar13 + 0x78) != 0) {
      _memcpy((void *)((long)puVar16 + lVar10),*(void **)(lVar13 + 0x80),
              (ulong)*(uint *)(lVar13 + 0x78) * 2);
      uVar6 = *(uint *)(lVar13 + 0x78);
    }
    puVar16 = (undefined8 *)((long)puVar16 + lVar10 + (ulong)uVar6 * 2);
    pNVar7 = (Node *)QHashData::nextNode(pNVar7);
  } while (pNVar7 != *(Node **)(param_1 + 0x10));
  iVar8 = *piVar9;
  goto LAB_100526cae;
LAB_100526d50:
  do {
    lVar13 = *(long *)(pNVar7 + 0x10);
    puVar11[2] = 0;
    puVar11[3] = 0;
    puVar11[0] = 0;
    puVar11[1] = 0;
    puVar11[4] = *(uint *)(lVar13 + 0x94);
    puVar11[1] = *(uint *)(lVar13 + 0x90);
    *(undefined8 *)(puVar11 + 0xf) = *(undefined8 *)(lVar13 + 0x30);
    *(undefined8 *)(puVar11 + 0xd) = *(undefined8 *)(lVar13 + 0x28);
    *(undefined8 *)(puVar11 + 0xb) = *(undefined8 *)(lVar13 + 0x20);
    *(undefined8 *)(puVar11 + 9) = *(undefined8 *)(lVar13 + 0x18);
    uVar4 = *(undefined8 *)(lVar13 + 8);
    *(undefined8 *)(puVar11 + 7) = *(undefined8 *)(lVar13 + 0x10);
    *(undefined8 *)(puVar11 + 5) = uVar4;
    if (*(int *)(lVar13 + 0x98) != 0) {
      *(byte *)(puVar11 + 9) = (byte)puVar11[9] | 0x40;
    }
    uVar6 = *(uint *)(lVar13 + 0x90);
    if ((uVar6 & 2) == 0) {
      uVar15 = 0;
    }
    else {
      uVar1 = *(uint *)(lVar13 + 0x1c);
      uVar15 = 0;
      if ((ulong)uVar1 != 0) {
        puVar11[2] = uVar1;
        _memcpy(puVar11 + 0x11,*(void **)(lVar13 + 0x38),(ulong)uVar1 << 4);
        uVar6 = *(uint *)(lVar13 + 0x90);
        uVar15 = uVar1;
      }
    }
    iVar5 = 0;
    if ((uVar6 & 4) != 0) {
      uVar6 = *(uint *)(lVar13 + 0x40);
      if ((ulong)uVar6 != 0) {
        puVar11[3] = uVar6;
        _memcpy(puVar11 + (ulong)uVar15 * 4 + 0x11,*(void **)(lVar13 + 0x48),(ulong)uVar6 * 2);
        iVar5 = uVar6 * 2;
      }
    }
    uVar6 = uVar15 * 0x10 + 0x44 + iVar5;
    *puVar11 = uVar6;
    puVar11 = (uint *)((long)puVar11 + (ulong)uVar6);
    *piVar9 = *piVar9 + uVar6;
    pNVar7 = (Node *)QHashData::nextNode(pNVar7);
  } while (pNVar7 != *(Node **)(param_1 + 0x18));
  iVar8 = *piVar9;
  goto LAB_100526e6e;
LAB_100526ad0:
  do {
    *piVar9 = *(int *)(pNVar7 + 0xc);
    pNVar7 = (Node *)QHashData::nextNode(pNVar7);
    piVar9 = piVar9 + 1;
  } while (pNVar7 != *(Node **)(param_1 + 8));
  iVar5 = param_3[8];
LAB_100526aed:
  param_3[1] = iVar5;
LAB_100526af2:
  if (0 < *(int *)(*(long *)(param_1 + 0x10) + 0x14)) {
    uVar12 = (ulong)(uint)param_3[1];
    *(undefined8 *)(uVar12 + 0x28 + (long)param_3) = 0;
    *(undefined8 *)(uVar12 + 0x20 + (long)param_3) = 0;
    *(undefined4 *)(uVar12 + 0x20 + (long)param_3) = 0x10;
    pNVar3 = *(Node **)(param_1 + 0x10);
    *(undefined4 *)(uVar12 + 0x24 + (long)param_3) = *(undefined4 *)(pNVar3 + 0x14);
    iVar5 = *(int *)(pNVar3 + 0x20);
    iVar8 = 0x10;
    if (iVar5 != 0) {
      piVar9 = (int *)(uVar12 + 0x20 + (long)param_3);
      puVar16 = (undefined8 *)(uVar12 + 0x30 + (long)param_3);
      plVar14 = *(long **)(pNVar3 + 8);
      do {
        pNVar7 = (Node *)*plVar14;
        if (pNVar7 != pNVar3) goto LAB_100526b80;
        iVar5 = iVar5 + -1;
        plVar14 = plVar14 + 1;
      } while (iVar5 != 0);
    }
LAB_100526cae:
    param_3[2] = iVar8;
  }
  if (0 < *(int *)(*(long *)(param_1 + 0x18) + 0x14)) {
    lVar13 = (ulong)(uint)param_3[2] + (ulong)(uint)param_3[1];
    *(undefined8 *)((long)param_3 + lVar13 + 0x28) = 0;
    *(undefined8 *)((long)param_3 + lVar13 + 0x20) = 0;
    *(undefined4 *)((long)param_3 + lVar13 + 0x20) = 0x10;
    pNVar3 = *(Node **)(param_1 + 0x18);
    *(undefined4 *)((long)param_3 + lVar13 + 0x24) = *(undefined4 *)(pNVar3 + 0x14);
    iVar5 = *(int *)(pNVar3 + 0x20);
    iVar8 = 0x10;
    if (iVar5 != 0) {
      piVar9 = (int *)((long)param_3 + lVar13 + 0x20);
      puVar11 = (uint *)((long)param_3 + lVar13 + 0x30);
      plVar14 = *(long **)(pNVar3 + 8);
      do {
        pNVar7 = (Node *)*plVar14;
        if (pNVar7 != pNVar3) goto LAB_100526d50;
        iVar5 = iVar5 + -1;
        plVar14 = plVar14 + 1;
      } while (iVar5 != 0);
    }
LAB_100526e6e:
    param_3[3] = iVar8;
  }
  if (*param_1 == '\0') {
    iVar5 = param_3[4];
  }
  else {
    uVar6 = param_3[1];
    uVar1 = param_3[2];
    uVar15 = param_3[3];
    lVar13 = (ulong)uVar1 + (ulong)uVar6 + (ulong)uVar15;
    *(undefined8 *)((long)param_3 + lVar13 + 0x28) = 0;
    *(undefined8 *)((long)param_3 + lVar13 + 0x20) = 0;
    uVar2 = *(uint *)(param_2 + 1);
    iVar5 = uVar2 * 4 + 0x10;
    *(int *)((long)param_3 + lVar13 + 0x20) = iVar5;
    *(uint *)((long)param_3 + lVar13 + 0x24) = uVar2;
    if ((ulong)uVar2 != 0) {
      _memcpy((void *)((ulong)uVar15 + (ulong)uVar1 + (ulong)uVar6 + 0x30 + (long)param_3),
              (void *)*param_2,(ulong)uVar2 << 2);
    }
    param_3[4] = iVar5;
  }
  *param_3 = iVar5 + 0x20 + param_3[1] + param_3[2] + param_3[3];
  return;
}

