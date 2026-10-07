
void FUN_10033ae00(long param_1,uint param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int *piVar8;
  uint *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long *plVar19;
  long lVar20;
  undefined4 *puVar21;
  uint *puVar22;
  int *piVar23;
  long *plVar24;
  undefined4 *puVar25;
  ulong uVar26;
  
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    plVar5 = *(long **)(param_1 + 0x18);
    plVar24 = (long *)(param_1 + 0x18);
    do {
      while (plVar19 = plVar5, param_2 <= *(uint *)(plVar19 + 4)) {
        plVar5 = (long *)*plVar19;
        plVar24 = plVar19;
        if ((long *)*plVar19 == (long *)0x0) goto LAB_10033ae50;
      }
      plVar1 = plVar19 + 1;
      plVar19 = plVar24;
      plVar5 = (long *)*plVar1;
    } while ((long *)*plVar1 != (long *)0x0);
LAB_10033ae50:
    if ((plVar19 != (long *)(param_1 + 0x18)) && (*(uint *)(plVar19 + 4) <= param_2)) {
      plVar5 = (long *)plVar19[5];
      puVar25 = (undefined4 *)*plVar5;
      if (puVar25 != (undefined4 *)0x0) {
        uVar10 = *(undefined4 *)(param_3 + 0x19c);
        uVar11 = *(undefined4 *)(param_3 + 0x1a0);
        uVar12 = *(undefined4 *)(param_3 + 0x1a4);
        *puVar25 = *(undefined4 *)(param_3 + 0x198);
        puVar25[1] = uVar10;
        puVar25[2] = uVar11;
        puVar25[3] = uVar12;
      }
      puVar25 = (undefined4 *)plVar5[1];
      if (puVar25 != (undefined4 *)0x0) {
        *puVar25 = *(undefined4 *)(param_3 + 0x1a8);
        puVar25[1] = *(undefined4 *)(param_3 + 0x1ac);
      }
      puVar6 = (undefined8 *)plVar5[2];
      if (puVar6 != (undefined8 *)0x0) {
        uVar7 = *(undefined8 *)(param_3 + 0xbb50);
        puVar6[1] = *(undefined8 *)(param_3 + 0xbb58);
        *puVar6 = uVar7;
      }
      puVar25 = (undefined4 *)plVar5[3];
      if (puVar25 != (undefined4 *)0x0) {
        *puVar25 = *(undefined4 *)(param_3 + 0x1b8);
        puVar25[1] = *(undefined4 *)(param_3 + 0x1bc);
        puVar25[2] = *(undefined4 *)(param_3 + 0x1c0);
        puVar25[3] = *(undefined4 *)(param_3 + 0x1c4);
        puVar25[4] = *(undefined4 *)(param_3 + 0x1c8);
        puVar25[5] = *(undefined4 *)(param_3 + 0x1cc);
        puVar25[6] = *(undefined4 *)(param_3 + 0x1d0);
        puVar25[7] = *(undefined4 *)(param_3 + 0x1d4);
        puVar25[8] = *(undefined4 *)(param_3 + 0x1d8);
        puVar25[9] = *(undefined4 *)(param_3 + 0x1dc);
        puVar25[10] = *(undefined4 *)(param_3 + 0x1e0);
        puVar25[0xb] = *(undefined4 *)(param_3 + 0x1e4);
        puVar25[0xc] = *(undefined4 *)(param_3 + 0x1e8);
        puVar25[0xd] = *(undefined4 *)(param_3 + 0x1ec);
        puVar25[0xe] = *(undefined4 *)(param_3 + 0x1f0);
        puVar25[0xf] = *(undefined4 *)(param_3 + 500);
      }
      puVar25 = (undefined4 *)plVar5[4];
      if (puVar25 != (undefined4 *)plVar5[5]) {
        do {
          lVar20 = FUN_100350f40(param_3 + 0x1f8,*puVar25);
          if (lVar20 != 0) {
            *(undefined1 *)(puVar25 + 1) = *(undefined1 *)(lVar20 + 0x74);
          }
          puVar25 = puVar25 + 2;
        } while (puVar25 != (undefined4 *)plVar5[5]);
      }
      puVar25 = (undefined4 *)plVar5[7];
      if (puVar25 != (undefined4 *)plVar5[8]) {
        do {
          puVar21 = (undefined4 *)FUN_100350f40(param_3 + 0x1f8,*puVar25);
          if (puVar21 != (undefined4 *)0x0) {
            puVar25[1] = *puVar21;
            puVar25[2] = puVar21[1];
            puVar25[3] = puVar21[2];
            puVar25[4] = puVar21[3];
            puVar25[5] = puVar21[4];
            puVar25[6] = puVar21[5];
            puVar25[7] = puVar21[6];
            puVar25[8] = puVar21[7];
            puVar25[9] = puVar21[8];
            puVar25[10] = puVar21[9];
            puVar25[0xb] = puVar21[10];
            puVar25[0xc] = puVar21[0xb];
            puVar25[0xd] = puVar21[0xc];
            puVar25[0xe] = puVar21[0xd];
            puVar25[0xf] = puVar21[0xe];
            puVar25[0x10] = puVar21[0xf];
            puVar25[0x11] = puVar21[0x10];
            puVar25[0x12] = puVar21[0x11];
            puVar25[0x13] = puVar21[0x12];
            puVar25[0x14] = puVar21[0x13];
            puVar25[0x15] = puVar21[0x14];
            puVar25[0x16] = puVar21[0x15];
            puVar25[0x17] = puVar21[0x16];
            puVar25[0x18] = puVar21[0x17];
            puVar25[0x19] = puVar21[0x18];
            puVar25[0x1a] = puVar21[0x19];
            puVar25[0x1b] = puVar21[0x1a];
            puVar25[0x1c] = puVar21[0x1b];
            *(undefined1 *)(puVar25 + 0x1e) = *(undefined1 *)(puVar21 + 0x1d);
            puVar25[0x1d] = puVar21[0x1c];
          }
          puVar25 = puVar25 + 0x1f;
        } while (puVar25 != (undefined4 *)plVar5[8]);
      }
      piVar8 = (int *)plVar5[0xb];
      for (piVar23 = (int *)plVar5[10]; piVar23 != piVar8; piVar23 = piVar23 + 5) {
        lVar20 = (long)*piVar23 * 0x10;
        piVar23[1] = *(int *)(param_3 + 0x210 + lVar20);
        piVar23[2] = *(int *)(param_3 + 0x214 + lVar20);
        piVar23[3] = *(int *)(param_3 + 0x218 + lVar20);
        piVar23[4] = *(int *)(param_3 + 0x21c + lVar20);
      }
      for (puVar22 = (uint *)plVar5[0xd]; puVar22 != (uint *)plVar5[0xe]; puVar22 = puVar22 + 0x11)
      {
        lVar20 = (ulong)*puVar22 * 0x40;
        puVar6 = (undefined8 *)(param_3 + 0x270 + lVar20);
        uVar7 = puVar6[1];
        puVar2 = (undefined8 *)(param_3 + 0x280 + lVar20);
        uVar13 = *puVar2;
        uVar14 = puVar2[1];
        puVar2 = (undefined8 *)(param_3 + 0x290 + lVar20);
        uVar15 = *puVar2;
        uVar16 = puVar2[1];
        puVar2 = (undefined8 *)(param_3 + 0x2a0 + lVar20);
        uVar17 = *puVar2;
        uVar18 = puVar2[1];
        *(undefined8 *)(puVar22 + 1) = *puVar6;
        *(undefined8 *)(puVar22 + 3) = uVar7;
        *(undefined8 *)(puVar22 + 5) = uVar13;
        *(undefined8 *)(puVar22 + 7) = uVar14;
        *(undefined8 *)(puVar22 + 9) = uVar15;
        *(undefined8 *)(puVar22 + 0xb) = uVar16;
        *(undefined8 *)(puVar22 + 0xd) = uVar17;
        *(undefined8 *)(puVar22 + 0xf) = uVar18;
      }
      puVar9 = (uint *)plVar5[0x11];
      for (puVar22 = (uint *)plVar5[0x10]; puVar22 != puVar9; puVar22 = puVar22 + 2) {
        puVar22[1] = *(uint *)(param_3 + 0x8270 + (ulong)*puVar22 * 4);
      }
      piVar8 = (int *)plVar5[0x14];
      for (piVar23 = (int *)plVar5[0x13]; piVar23 != piVar8; piVar23 = piVar23 + 4) {
        uVar3 = piVar23[1];
        if ((ulong)uVar3 != 0) {
          lVar20 = *(long *)(piVar23 + 2);
          iVar4 = *piVar23;
          uVar26 = 0;
          do {
            *(undefined4 *)(lVar20 + uVar26 * 4) =
                 *(undefined4 *)(param_3 + 0x9a70 + (ulong)(uint)(iVar4 + (int)uVar26) * 4);
            uVar26 = uVar26 + 1;
          } while (uVar26 < uVar3);
        }
      }
      piVar8 = (int *)plVar5[0x17];
      for (piVar23 = (int *)plVar5[0x16]; piVar23 != piVar8; piVar23 = piVar23 + 4) {
        uVar3 = piVar23[1];
        if ((ulong)uVar3 != 0) {
          lVar20 = *(long *)(piVar23 + 2);
          iVar4 = *piVar23;
          uVar26 = 0;
          do {
            *(undefined4 *)(lVar20 + uVar26 * 4) =
                 *(undefined4 *)(param_3 + 0xabc0 + (ulong)(uint)(iVar4 + (int)uVar26) * 4);
            uVar26 = uVar26 + 1;
          } while (uVar26 < uVar3);
        }
      }
      if ((undefined4 *)plVar5[0x19] != (undefined4 *)0x0) {
        *(undefined4 *)plVar5[0x19] = *(undefined4 *)(param_3 + 0xc);
      }
      if ((undefined4 *)plVar5[0x1a] != (undefined4 *)0x0) {
        *(undefined4 *)plVar5[0x1a] = *(undefined4 *)(param_3 + 0x10);
      }
      if ((undefined4 *)plVar5[0x1b] != (undefined4 *)0x0) {
        *(undefined4 *)plVar5[0x1b] = *(undefined4 *)(param_3 + 8);
      }
      puVar22 = (uint *)plVar5[0x1c];
      if (puVar22 != (uint *)0x0) {
        puVar22[1] = *(uint *)(param_3 + 0x28);
        puVar22[2] = *(uint *)(param_3 + 0x3c);
        puVar22[3] = *(uint *)(param_3 + 0x50);
        puVar22[4] = *(uint *)(param_3 + 100);
        puVar22[5] = *(uint *)(param_3 + 0x78);
        puVar22[6] = *(uint *)(param_3 + 0x8c);
        puVar22[7] = *(uint *)(param_3 + 0xa0);
        puVar22[8] = *(uint *)(param_3 + 0xb4);
        puVar22[9] = *(uint *)(param_3 + 200);
        puVar22[10] = *(uint *)(param_3 + 0xdc);
        puVar22[0xb] = *(uint *)(param_3 + 0xf0);
        puVar22[0xc] = *(uint *)(param_3 + 0x104);
        puVar22[0xd] = *(uint *)(param_3 + 0x118);
        puVar22[0xe] = *(uint *)(param_3 + 300);
        puVar22[0xf] = *(uint *)(param_3 + 0x140);
        puVar22[0x10] = *(uint *)(param_3 + 0x154);
        *puVar22 = *puVar22 | 0xffff;
      }
    }
  }
  return;
}

