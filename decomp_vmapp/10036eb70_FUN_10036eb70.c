
undefined8 FUN_10036eb70(long param_1,long *param_2)

{
  float fVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  bool bVar19;
  
  plVar3 = *(long **)(*(long *)(param_1 + 0x540) + 0x20);
  if (plVar3 == (long *)0x0) {
    return 0;
  }
  lVar4 = param_2[3];
  *(undefined4 *)((long)param_2 + 0xdc) = *(undefined4 *)(lVar4 + 0x160);
  bVar6 = *(byte *)(lVar4 + 0xbb6c);
  *(uint *)(param_2 + 6) = bVar6 & 1;
  iVar9 = 0;
  bVar19 = false;
  if (*(char *)(DAT_1011c8478 + 0x4a) != '\0') {
    bVar19 = *(int *)(lVar4 + 0x8294) == 1;
  }
  *(uint *)(param_2 + 0x1a) = (uint)bVar19;
  if ((bVar6 & 1) == 0) {
    iVar9 = *(int *)(lVar4 + 0xc);
  }
  *(int *)((long)param_2 + 0x94) = iVar9;
  iVar2 = *(int *)(lVar4 + 0x10);
  *(int *)(param_2 + 0x13) = iVar2;
  *(undefined4 *)((long)param_2 + 0x9c) = 0x100;
  if (iVar9 == 0) {
    *(uint *)((long)param_2 + 0x34) = (uint)(*(byte *)(lVar4 + 0xbb6c) >> 2 & 1);
    *(uint *)(param_2 + 7) = (uint)(*(byte *)(lVar4 + 0xbb6c) >> 3 & 1);
    *(uint *)((long)param_2 + 0x3c) = (uint)(*(byte *)(lVar4 + 0xbb6c) >> 4 & 1);
    *(uint *)(param_2 + 8) = (uint)(*(byte *)(lVar4 + 0xbb6c) >> 5 & 1);
    *(undefined4 *)((long)param_2 + 100) = *(undefined4 *)(lVar4 + 0x8494);
    *(undefined4 *)(param_2 + 0xd) = *(undefined4 *)(lVar4 + 0x82e4);
    *(undefined4 *)((long)param_2 + 0x6c) = *(undefined4 *)(lVar4 + 0x84a4);
    *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)(lVar4 + 0x84b4);
    *(undefined4 *)((long)param_2 + 0x74) = *(undefined4 *)(lVar4 + 0x84b8);
    *(undefined4 *)(param_2 + 0xf) = *(undefined4 *)(lVar4 + 0x84bc);
    *(undefined4 *)((long)param_2 + 0x7c) = *(undefined4 *)(lVar4 + 0x84c0);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(lVar4 + 0x84ac);
    *(undefined4 *)((long)param_2 + 0x84) = *(undefined4 *)(lVar4 + 0x84a8);
    *(undefined4 *)(param_2 + 0x11) = *(undefined4 *)(lVar4 + 0x828c);
    uVar10 = FUN_10036bd10(*(undefined4 *)(lVar4 + 0x84cc));
    *(undefined4 *)(param_2 + 0x17) = uVar10;
    fVar1 = *(float *)(lVar4 + 500);
    iVar9 = 0;
    if ((fVar1 != 0.0) || (NAN(fVar1))) {
      iVar9 = (-(uint)(fVar1 != DAT_100b39678) & 1) + 1;
    }
    *(int *)((long)param_2 + 0xcc) = iVar9;
    lVar17 = *plVar3;
    lVar5 = plVar3[1];
    if (lVar5 - lVar17 != 0) {
      uVar15 = 1;
      uVar18 = 0;
      do {
        uVar16 = uVar15;
        bVar6 = *(byte *)(lVar17 + 6 + uVar18 * 8);
        uVar8 = (uint)bVar6;
        if ((bVar6 == 0) || (uVar8 == 9)) {
LAB_10036ee80:
          *(uint *)(param_2 + 0x1d) = uVar8;
          *(uint *)((long)param_2 + 0xec) = (uint)*(byte *)(lVar17 + 7 + uVar18 * 8);
        }
        else if (uVar8 == 5) {
          uVar15 = (ulong)*(byte *)(lVar17 + 4 + uVar18 * 8);
          uVar10 = 0;
          if (uVar15 < 0x11) {
            uVar10 = *(undefined4 *)(&DAT_100b3d5a0 + uVar15 * 4);
          }
          *(undefined4 *)((long)param_2 + (ulong)*(byte *)(lVar17 + 7 + uVar18 * 8) * 4 + 0x44) =
               uVar10;
          if ((bVar6 == 0) || (bVar6 == 9)) goto LAB_10036ee80;
        }
        uVar15 = (ulong)((int)uVar16 + 1);
        uVar18 = uVar16;
      } while (uVar16 < (ulong)(lVar5 - lVar17 >> 3));
    }
    uVar8 = *(uint *)(param_2 + 0x1b) | 0xf0000;
    *(uint *)(param_2 + 0x1b) = uVar8;
  }
  else {
    lVar17 = *(long *)(*(long *)(param_1 + 0x540) + 0x30);
    *param_2 = lVar17;
    if (lVar17 == 0) {
      return 0;
    }
    if (iVar2 == 0) {
      return 0;
    }
    uVar8 = *(uint *)(lVar4 + 0xbb00);
    if (uVar8 < *(uint *)(lVar17 + 0x70)) {
      if ((*(long *)(lVar17 + 0x20) != *(long *)(lVar17 + 0x28)) &&
         (uVar13 = *(int *)(*(long *)(lVar17 + 0x28) + -0x14) + 1, uVar8 < uVar13)) {
        uVar8 = uVar13;
      }
      *(uint *)((long)param_2 + 0x9c) = uVar8;
    }
    uVar8 = *(int *)(lVar17 + 0xf0) << 0x10 | *(uint *)(param_2 + 0x1b);
    *(uint *)(param_2 + 0x1b) = uVar8;
    lVar17 = *plVar3;
    uVar15 = (ulong)(plVar3[1] - lVar17) >> 3;
    if ((int)uVar15 != 0) {
      uVar18 = 0;
      do {
        if (-1 < *(int *)(lVar4 + 0x28 + (ulong)*(ushort *)(lVar17 + uVar18 * 8) * 0x14)) {
          bVar6 = *(byte *)(lVar17 + 6 + uVar18 * 8);
          *(uint *)(param_2 + 0x1d) = (uint)bVar6;
          *(uint *)((long)param_2 + 0xec) = (uint)*(byte *)(lVar17 + 7 + uVar18 * 8);
          if (bVar6 == 0) break;
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 < (uVar15 & 0xffffffff));
    }
  }
  if (*(int *)(lVar4 + 0x84e0) == 0) {
    bVar19 = false;
  }
  else {
    bVar19 = *(int *)(lVar4 + 0xbb74) == 1;
  }
  lVar17 = lVar4 + 0x8270;
  *(uint *)(param_2 + 0x12) = (uint)bVar19;
  iVar9 = *(int *)(lVar4 + 8);
  *(int *)(param_2 + 0x14) = iVar9;
  if (iVar9 == 0) {
    uVar10 = FUN_10036c8a0(lVar17);
    *(undefined4 *)((long)param_2 + 0xa4) = uVar10;
    uVar10 = FUN_100359060(lVar17,uVar10,(long)param_2 + 0xac,param_2 + 0x16,(long)param_2 + 0xb4);
    *(undefined4 *)(param_2 + 0x15) = uVar10;
    *(uint *)(param_2 + 0x1b) = *(uint *)(param_2 + 0x1b) | 0xffff;
  }
  else {
    lVar5 = *(long *)(*(long *)(param_1 + 0x540) + 0x40);
    param_2[1] = lVar5;
    if (lVar5 == 0) {
      return 0;
    }
    *(undefined4 *)((long)param_2 + 0xa4) = 8;
    *(undefined4 *)((long)param_2 + 0xac) = *(undefined4 *)(lVar5 + 0xd8);
    *(undefined4 *)(param_2 + 0x15) = *(undefined4 *)(lVar5 + 0xdc);
    *(undefined4 *)(param_2 + 0x16) = *(undefined4 *)(lVar5 + 0xe4);
    *(uint *)(param_2 + 0x1b) = uVar8 | *(uint *)(lVar5 + 0xe0);
  }
  uVar10 = FUN_10036bd30(lVar17,(int)param_2[6] != 0);
  *(undefined4 *)((long)param_2 + 0xbc) = uVar10;
  if (*(char *)(param_2[2] + 1) == '\0') {
    uVar10 = FUN_10036bb90(lVar17,*param_2,param_2[1],(int)param_2[6] != 0,
                           (*(byte *)(lVar4 + 0xbb6c) & 0x40) >> 6);
    *(undefined4 *)(param_2 + 0x18) = uVar10;
    uVar10 = FUN_10036bc50(*(undefined4 *)(lVar4 + 0x1b0),*(undefined4 *)(lVar4 + 0x1b4),lVar17,
                           *param_2,param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 0x18) = 0;
    uVar10 = 0;
  }
  *(undefined4 *)((long)param_2 + 0xc4) = uVar10;
  bVar6 = FUN_100359120(lVar17,*(undefined4 *)((long)param_2 + 0xa4),(int)param_2[0x14] != 0);
  *(uint *)(param_2 + 0x19) = (uint)bVar6;
  lVar17 = *(long *)(param_1 + 0x540);
  uVar8 = (*(uint *)(lVar17 + 0x114) | 0x10) & *(uint *)(lVar17 + 0x110);
  if ((*(int *)(lVar4 + 0x8578) == 0) || (lVar17 = *(long *)(lVar17 + 0x60), lVar17 == 0))
  goto LAB_10036f0bb;
  cVar7 = FUN_10038e330(*(undefined4 *)(lVar17 + 8));
  uVar10 = 1;
  if (cVar7 == '\0') {
    if (uVar8 != 1) {
      uVar13 = *(uint *)(lVar17 + 8);
      if ((int)uVar13 < 0x66) {
        if (uVar13 < 9) {
          uVar14 = 0x10a;
LAB_10036f0ad:
          if ((uVar14 >> (uVar13 & 0x1f) & 1) != 0) goto LAB_10036f0b4;
        }
      }
      else {
        uVar13 = uVar13 - 0x66;
        if (uVar13 < 0xd) {
          uVar14 = 0x1015;
          goto LAB_10036f0ad;
        }
      }
    }
    uVar10 = 0;
  }
LAB_10036f0b4:
  *(undefined4 *)((long)param_2 + 0xd4) = uVar10;
LAB_10036f0bb:
  *(uint *)(param_2 + 0x1c) = uVar8;
  piVar11 = (int *)(lVar4 + 0x8770);
  lVar17 = 0;
  uVar8 = 0;
  do {
    if (piVar11[-0x40] != 0) {
      uVar8 = uVar8 | 1 << ((byte)lVar17 & 0x1f);
    }
    if (*piVar11 != 0) {
      uVar8 = uVar8 | 1 << ((byte)lVar17 + 1 & 0x1f);
    }
    lVar17 = lVar17 + 2;
    piVar11 = piVar11 + 0x80;
  } while (lVar17 != 0x14);
  *(uint *)(param_2 + 0x1b) = uVar8 & *(uint *)(param_2 + 0x1b);
  uVar10 = FUN_1003516c0(*(undefined8 *)(param_1 + 0x540));
  *(undefined4 *)(param_2 + 0x1b) = uVar10;
  lVar17 = DAT_1011c8478;
  puVar12 = &DAT_1011c8478;
  if (0x13f < *(uint *)(DAT_1011c8478 + 4)) {
    if (*(int *)(lVar4 + 0x84d8) == 0x314d3241) {
      *(undefined4 *)((long)param_2 + 0xe4) = 7;
    }
    else if (*(int *)(lVar4 + 0x82ac) != 0) {
      puVar12 = (undefined8 *)(ulong)*(uint *)(lVar4 + 0x82d4);
      *(uint *)((long)param_2 + 0xe4) = *(uint *)(lVar4 + 0x82d4);
    }
  }
  if (*(char *)(lVar17 + 0x4a) == '\0') {
    *(uint *)((long)param_2 + 0x8c) = (uint)(*(int *)(lVar4 + 0x8294) == 1);
  }
  return CONCAT71((int7)((ulong)puVar12 >> 8),1);
}

