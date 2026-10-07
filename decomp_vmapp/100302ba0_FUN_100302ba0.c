
void FUN_100302ba0(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined4 *puVar17;
  bool bVar18;
  byte bVar19;
  
  bVar19 = 0;
  lVar4 = *(long *)(param_1 + 0x68);
  if (lVar4 == 0) {
    bVar18 = false;
  }
  else {
    uVar7 = *(long *)(param_1 + 0x60) + -1 + lVar4;
    uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0x48) + (uVar7 >> 10) * 8) + (uVar7 & 0x3ff) * 4
                     );
    *(long *)(param_1 + 0x68) = lVar4 + -1;
    lVar15 = 0;
    lVar14 = *(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48);
    if (lVar14 != 0) {
      lVar15 = lVar14 * 0x80 + -1;
    }
    if (0x7ff < (ulong)(((1 - lVar4) + lVar15) - *(long *)(param_1 + 0x60))) {
      operator_delete(*(void **)(*(long *)(param_1 + 0x50) + -8));
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + -8;
    }
    if ((uVar1 & 0x20) == 0) {
      bVar18 = false;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x15a8);
      uVar3 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2058);
      uVar13 = uVar2;
      if (uVar3 < 0x20) {
        uVar6 = 0x20;
        do {
          uVar6 = uVar6 >> 1;
          uVar13 = uVar13 ^ uVar13 >> (sbyte)uVar6;
        } while (uVar3 < uVar6);
      }
      for (puVar8 = *(uint **)(*(long *)(param_1 + 0x30) + 0x1858 + (ulong)(uVar13 & 0xff) * 8);
          puVar8 != (uint *)0x0; puVar8 = *(uint **)(puVar8 + 4)) {
        if (*puVar8 == uVar2) {
          lVar4 = *(long *)(puVar8 + 2);
          if ((lVar4 != 0) && (lVar15 = *(long *)(lVar4 + 0x240), lVar15 != 0)) {
            uVar7 = lVar15 + -1 + *(long *)(lVar4 + 0x238);
            lVar14 = *(long *)(*(long *)(lVar4 + 0x220) + (uVar7 >> 9) * 8);
            uVar7 = uVar7 & 0x1ff;
            bVar18 = *(int *)(lVar4 + 0x248) != *(int *)(lVar14 + uVar7 * 8);
            *(undefined8 *)(lVar4 + 0x248) = *(undefined8 *)(lVar14 + uVar7 * 8);
            *(long *)(lVar4 + 0x240) = lVar15 + -1;
            lVar14 = 0;
            lVar16 = *(long *)(lVar4 + 0x228) - *(long *)(lVar4 + 0x220);
            if (lVar16 != 0) {
              lVar14 = lVar16 * 0x40 + -1;
            }
            if (0x3ff < (ulong)(((1 - lVar15) + lVar14) - *(long *)(lVar4 + 0x238))) {
              operator_delete(*(void **)(*(long *)(lVar4 + 0x228) + -8));
              *(long *)(lVar4 + 0x228) = *(long *)(lVar4 + 0x228) + -8;
            }
            goto LAB_100302d45;
          }
          break;
        }
      }
      bVar18 = false;
LAB_100302d45:
      lVar4 = *(long *)(param_1 + 0x98);
      if (lVar4 != 0) {
        *(long *)(param_1 + 0x98) = lVar4 + -1;
        lVar15 = 0;
        lVar14 = *(long *)(param_1 + 0x80) - *(long *)(param_1 + 0x78);
        if (lVar14 != 0) {
          lVar15 = lVar14 * 0x200 + -1;
        }
        if (0x1fff < (ulong)(((1 - lVar4) + lVar15) - *(long *)(param_1 + 0x90))) {
          operator_delete(*(void **)(*(long *)(param_1 + 0x80) + -8));
          *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + -8;
        }
      }
    }
    if ((uVar1 & 0x4000) != 0) {
      uVar2 = *(uint *)(param_1 + 0x15ac);
      uVar3 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2058);
      uVar13 = uVar2;
      if (uVar3 < 0x20) {
        uVar6 = 0x20;
        do {
          uVar6 = uVar6 >> 1;
          uVar13 = uVar13 ^ uVar13 >> (sbyte)uVar6;
        } while (uVar3 < uVar6);
      }
      for (puVar8 = *(uint **)(*(long *)(param_1 + 0x30) + 0x1858 + (ulong)(uVar13 & 0xff) * 8);
          puVar8 != (uint *)0x0; puVar8 = *(uint **)(puVar8 + 4)) {
        if (*puVar8 == uVar2) {
          lVar4 = *(long *)(puVar8 + 2);
          if ((lVar4 != 0) && (lVar15 = *(long *)(lVar4 + 400), lVar15 != 0)) {
            lVar14 = *(long *)(lVar4 + 0x170);
            lVar16 = *(long *)(lVar4 + 0x188);
            uVar7 = lVar15 + -1 + lVar16;
            lVar12 = *(long *)(lVar14 + (uVar7 >> 5) * 8);
            lVar10 = (uVar7 & 0x1f) * 0x80;
            if (*(int *)(lVar4 + 0x198) != *(int *)(lVar12 + lVar10)) {
              bVar18 = true;
            }
            puVar11 = (undefined4 *)(lVar12 + lVar10);
            puVar17 = (undefined4 *)(lVar4 + 0x198);
            for (lVar9 = 0x20; lVar9 != 0; lVar9 = lVar9 + -1) {
              *puVar17 = *puVar11;
              puVar11 = puVar11 + (ulong)bVar19 * -2 + 1;
              puVar17 = puVar17 + (ulong)bVar19 * -2 + 1;
            }
            *(long *)(lVar4 + 400) = lVar15 + -1;
            lVar12 = 0;
            lVar14 = *(long *)(lVar4 + 0x178) - lVar14;
            if (lVar14 != 0) {
              lVar12 = lVar14 * 4 + -1;
            }
            if (0x3f < (ulong)(((1 - lVar15) + lVar12) - lVar16)) {
              operator_delete(*(void **)(*(long *)(lVar4 + 0x178) + -8));
              *(long *)(lVar4 + 0x178) = *(long *)(lVar4 + 0x178) + -8;
            }
          }
          break;
        }
      }
      lVar4 = *(long *)(param_1 + 0xd0);
      if (lVar4 != 0) {
        uVar7 = lVar4 + -1 + *(long *)(param_1 + 200);
        lVar15 = *(long *)(*(long *)(param_1 + 0xb0) + (uVar7 >> 8) * 8);
        lVar14 = (uVar7 & 0xff) * 0x10;
        uVar5 = *(undefined8 *)(lVar15 + lVar14);
        *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(lVar15 + 8 + lVar14);
        *(undefined8 *)(param_1 + 0xd8) = uVar5;
        *(long *)(param_1 + 0xd0) = lVar4 + -1;
        lVar15 = 0;
        lVar14 = *(long *)(param_1 + 0xb8) - *(long *)(param_1 + 0xb0);
        if (lVar14 != 0) {
          lVar15 = lVar14 * 0x20 + -1;
        }
        if (0x1ff < (ulong)(((1 - lVar4) + lVar15) - *(long *)(param_1 + 200))) {
          operator_delete(*(void **)(*(long *)(param_1 + 0xb8) + -8));
          *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + -8;
        }
      }
    }
    if (((uVar1 & 0x200) != 0) && (lVar4 = *(long *)(param_1 + 0x110), lVar4 != 0)) {
      uVar7 = lVar4 + -1 + *(long *)(param_1 + 0x108);
      lVar15 = *(long *)(*(long *)(param_1 + 0xf0) + (uVar7 >> 8) * 8);
      lVar14 = (uVar7 & 0xff) * 0x10;
      uVar5 = *(undefined8 *)(lVar15 + lVar14);
      *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(lVar15 + 8 + lVar14);
      *(undefined8 *)(param_1 + 0x118) = uVar5;
      *(long *)(param_1 + 0x110) = lVar4 + -1;
      lVar15 = 0;
      lVar14 = *(long *)(param_1 + 0xf8) - *(long *)(param_1 + 0xf0);
      if (lVar14 != 0) {
        lVar15 = lVar14 * 0x20 + -1;
      }
      if (0x1ff < (ulong)(((1 - lVar4) + lVar15) - *(long *)(param_1 + 0x108))) {
        operator_delete(*(void **)(*(long *)(param_1 + 0xf8) + -8));
        *(long *)(param_1 + 0xf8) = *(long *)(param_1 + 0xf8) + -8;
      }
    }
    if (((uVar1 & 0x40000) != 0) && (lVar4 = *(long *)(param_1 + 0x150), lVar4 != 0)) {
      lVar14 = *(long *)(param_1 + 0x130);
      lVar16 = *(long *)(param_1 + 0x148);
      uVar7 = lVar4 + -1 + lVar16;
      _memcpy((void *)(param_1 + 0x158),
              (void *)((uVar7 & 0xf) * 0x2c4 + *(long *)(lVar14 + (uVar7 >> 4) * 8)),0x2c4);
      *(long *)(param_1 + 0x150) = lVar4 + -1;
      lVar15 = 0;
      lVar14 = *(long *)(param_1 + 0x138) - lVar14;
      if (lVar14 != 0) {
        lVar15 = lVar14 * 2 + -1;
      }
      if (0x1f < (ulong)(((1 - lVar4) + lVar15) - lVar16)) {
        operator_delete(*(void **)(*(long *)(param_1 + 0x138) + -8));
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + -8;
      }
    }
  }
  (*(code *)DAT_1011c4a88[0xcc])(*DAT_1011c4a88);
  if (bVar18) {
    FUN_100301c50(param_1,0x8ca8,*(undefined4 *)(param_1 + 0x15a0));
    FUN_100301c50(param_1,0x8ca9,*(undefined4 *)(param_1 + 0x15a4));
  }
  if ((*(byte *)(param_1 + 0x25f8) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100303107. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)DAT_1011c4a88[0x5b])(*DAT_1011c4a88);
    return;
  }
  return;
}

