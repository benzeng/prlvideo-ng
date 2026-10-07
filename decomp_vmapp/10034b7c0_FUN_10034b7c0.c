
undefined8 FUN_10034b7c0(long param_1,short *param_2)

{
  long *plVar1;
  uint *puVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  undefined8 uVar10;
  uint *puVar11;
  undefined8 *puVar12;
  long lVar13;
  uint uVar14;
  long *plVar15;
  long *plVar16;
  uint *puVar17;
  uint *puVar18;
  undefined1 local_34 [4];
  
  puVar17 = (uint *)0x0;
  if (*param_2 == 0x68) {
    puVar18 = (uint *)(param_2 + 4);
    puVar17 = (uint *)0x0;
  }
  else {
    puVar18 = (uint *)0x0;
    if (*param_2 == 0x2c) {
      puVar17 = (uint *)(param_2 + 4);
      puVar18 = (uint *)0x0;
    }
  }
  uVar14 = 0x114;
  if (puVar18 != (uint *)0x0) {
    uVar14 = 0x154;
  }
  uVar10 = 9;
  if (uVar14 <= *(uint *)(param_2 + 2)) {
    if (*(long **)(param_1 + 0x2790) != (long *)0x0) {
      puVar11 = puVar17;
      if (puVar18 != (uint *)0x0) {
        puVar11 = puVar18;
      }
      plVar9 = *(long **)(param_1 + 0x2790);
      plVar16 = (long *)(param_1 + 0x2790);
      do {
        while (plVar15 = plVar9, *(uint *)(plVar15 + 4) < *puVar11) {
          plVar1 = plVar15 + 1;
          plVar15 = plVar16;
          plVar9 = (long *)*plVar1;
          if ((long *)*plVar1 == (long *)0x0) goto LAB_10034b860;
        }
        plVar9 = (long *)*plVar15;
        plVar16 = plVar15;
      } while ((long *)*plVar15 != (long *)0x0);
LAB_10034b860:
      if ((plVar15 != (long *)(param_1 + 0x2790)) && (*(uint *)(plVar15 + 4) <= *puVar11)) {
        return 7;
      }
    }
    puVar11 = operator_new(0x14c);
    *(undefined1 *)(puVar11 + 0xc) = 0;
    puVar11[10] = 0;
    puVar11[0xb] = 0;
    puVar11[8] = 0;
    puVar11[9] = 0;
    puVar11[6] = 0;
    puVar11[7] = 0;
    puVar11[4] = 0;
    puVar11[5] = 0;
    puVar11[2] = 0;
    puVar11[3] = 0;
    puVar11[0] = 0;
    puVar11[1] = 0;
    *(undefined1 *)(puVar11 + 0x16) = 0;
    puVar11[0x15] = 0;
    puVar11[0x13] = 0;
    puVar11[0x14] = 0;
    puVar11[0x11] = 0;
    puVar11[0x12] = 0;
    puVar11[0xf] = 0;
    puVar11[0x10] = 0;
    puVar11[0xd] = 0;
    puVar11[0xe] = 0;
    *(undefined1 *)(puVar11 + 0x20) = 0;
    puVar11[0x1f] = 0;
    puVar11[0x1d] = 0;
    puVar11[0x1e] = 0;
    puVar11[0x1b] = 0;
    puVar11[0x1c] = 0;
    puVar11[0x19] = 0;
    puVar11[0x1a] = 0;
    puVar11[0x17] = 0;
    puVar11[0x18] = 0;
    *(undefined1 *)(puVar11 + 0x2a) = 0;
    puVar11[0x29] = 0;
    puVar11[0x27] = 0;
    puVar11[0x28] = 0;
    puVar11[0x25] = 0;
    puVar11[0x26] = 0;
    puVar11[0x23] = 0;
    puVar11[0x24] = 0;
    puVar11[0x21] = 0;
    puVar11[0x22] = 0;
    *(undefined1 *)(puVar11 + 0x34) = 0;
    puVar11[0x33] = 0;
    puVar11[0x31] = 0;
    puVar11[0x32] = 0;
    puVar11[0x2f] = 0;
    puVar11[0x30] = 0;
    puVar11[0x2d] = 0;
    puVar11[0x2e] = 0;
    puVar11[0x2b] = 0;
    puVar11[0x2c] = 0;
    *(undefined1 *)(puVar11 + 0x3e) = 0;
    puVar11[0x3d] = 0;
    puVar11[0x3b] = 0;
    puVar11[0x3c] = 0;
    puVar11[0x39] = 0;
    puVar11[0x3a] = 0;
    puVar11[0x37] = 0;
    puVar11[0x38] = 0;
    puVar11[0x35] = 0;
    puVar11[0x36] = 0;
    *(undefined1 *)(puVar11 + 0x48) = 0;
    puVar11[0x47] = 0;
    puVar11[0x45] = 0;
    puVar11[0x46] = 0;
    puVar11[0x43] = 0;
    puVar11[0x44] = 0;
    puVar11[0x41] = 0;
    puVar11[0x42] = 0;
    puVar11[0x3f] = 0;
    puVar11[0x40] = 0;
    *(undefined1 *)(puVar11 + 0x52) = 0;
    puVar11[0x51] = 0;
    puVar11[0x4f] = 0;
    puVar11[0x50] = 0;
    puVar11[0x4d] = 0;
    puVar11[0x4e] = 0;
    puVar11[0x4b] = 0;
    puVar11[0x4c] = 0;
    puVar11[0x49] = 0;
    puVar11[0x4a] = 0;
    if (puVar18 == (uint *)0x0) {
      *puVar11 = *puVar17;
      puVar11[1] = puVar17[1];
      puVar11[2] = puVar17[2];
      puVar18 = puVar11 + 0xc;
      lVar13 = 0;
      do {
        puVar2 = (uint *)((long)puVar17 + lVar13 + 0x10);
        uVar5 = *puVar2;
        uVar6 = puVar2[1];
        uVar7 = puVar2[2];
        uVar8 = puVar2[3];
        uVar14 = *(uint *)((long)puVar17 + lVar13 + 0x20);
        uVar4 = *(uint *)((long)puVar17 + lVar13 + 0x24);
        uVar3 = *(undefined1 *)((long)puVar17 + lVar13 + 0x28);
        puVar18[-9] = *(uint *)((long)puVar17 + lVar13 + 0xc);
        puVar18[-8] = 0;
        puVar18[-7] = uVar5;
        puVar18[-6] = uVar6;
        puVar18[-5] = uVar7;
        puVar18[-4] = uVar8;
        puVar18[-3] = uVar14;
        puVar18[-2] = uVar4;
        puVar18[-1] = 0;
        *(undefined1 *)puVar18 = uVar3;
        lVar13 = lVar13 + 0x20;
        puVar18 = puVar18 + 10;
      } while (lVar13 != 0x100);
    }
    else {
      FUN_10034fad0(puVar11,puVar18);
    }
    puVar12 = (undefined8 *)FUN_10034fc50(param_1 + 0x2788,local_34);
    *puVar12 = puVar11;
    uVar10 = 0;
  }
  return uVar10;
}

