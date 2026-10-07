
uint FUN_10027bf60(long param_1,int param_2)

{
  long *plVar1;
  byte *pbVar2;
  char *pcVar3;
  int *piVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  char cVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  bool bVar23;
  uint local_68;
  int local_5c;
  long local_48 [2];
  undefined4 local_38;
  
  lVar9 = *(long *)(param_1 + 0x18);
  lVar12 = (long)(param_2 << 8);
  uVar5 = *(ushort *)(lVar9 + 0x3818 + lVar12);
  uVar6 = *(ushort *)(lVar9 + 0x3810 + lVar12);
  uVar17 = (uint)uVar6;
  if (uVar6 == uVar5) {
    return 0;
  }
  lVar22 = (long)param_2;
  uVar7 = *(ushort *)(lVar9 + 6 + lVar22 * 6);
  uVar18 = (uint)uVar7;
  if ((uVar6 < uVar7) && (uVar5 < uVar7)) {
LAB_10027bfd0:
    uVar18 = (uint)uVar5;
    *(undefined1 *)(param_1 + 0x51fe) = 0;
    if (DAT_1011ccc18 != (code *)0x0) {
      (*DAT_1011ccc18)(0,0x15,0);
    }
    lVar21 = lVar22 * 0x2850;
    uVar16 = (uint)uVar7;
    local_48[0] = 0;
    local_48[1] = 0;
    local_38 = 0;
    FUN_10008d2d0(local_48,*(undefined8 *)(param_1 + 0x158 + lVar21),(ulong)uVar7 << 4);
    uVar5 = *(ushort *)(lVar12 + 0x3840 + *(long *)(param_1 + 0x18));
    local_5c = 0xff;
    if (*(char *)(param_1 + 0x150) != '\0') {
      iVar14 = (uint)*(ushort *)(param_1 + 0x51fc) + (uVar5 & 0x7f);
      *(undefined2 *)(param_1 + 0x51fc) = 0;
      local_5c = 0x7f;
      if (iVar14 != 0) {
        local_5c = iVar14;
      }
    }
    piVar4 = (int *)(param_1 + 0x160 + lVar21);
    bVar23 = false;
    local_68 = 0;
    do {
      uVar20 = 0;
      iVar14 = 0;
      uVar19 = uVar17;
      if (!bVar23) {
        uVar20 = 0;
        iVar14 = 1;
        do {
          uVar15 = (ulong)uVar19;
          uVar19 = uVar19 + 1;
          if (uVar19 == uVar16) {
            uVar19 = 0;
          }
          uVar8 = *(uint *)(local_48[0] + 8 + uVar15 * 0x10);
          if (((uVar8 & 0x20100000) != 0x20000000) &&
             (uVar20 = uVar20 + (uVar8 & 0xffff), (uVar8 & 0x1000000) != 0)) goto LAB_10027c114;
          iVar14 = iVar14 + 1;
        } while (uVar19 != uVar18);
        iVar14 = 0;
        uVar19 = uVar18;
      }
LAB_10027c114:
      if (0x200 - *piVar4 <= iVar14) {
        local_68 = 1;
        FUN_10027bd00(param_1,param_2);
      }
      uVar8 = *(uint *)(param_1 + 0x51f8);
      uVar10 = 0;
      while (uVar17 != uVar19) {
        uVar15 = (ulong)uVar17;
        uVar17 = uVar17 + 1;
        if (uVar17 == uVar16) {
          uVar17 = 0;
        }
        cVar11 = FUN_10027baa0(piVar4,uVar15 * 0x10 + local_48[0],uVar17);
        if (cVar11 != '\0') {
          uVar10 = 1;
          FUN_10027bd00(param_1,param_2);
        }
      }
      local_68 = local_68 | uVar10;
      local_5c = (local_5c + -1) - uVar20 / uVar8;
      bVar23 = uVar19 == uVar18;
    } while ((0 < local_5c) && (uVar17 = uVar19, !bVar23));
    uVar20 = FUN_10027bd00(param_1);
    if (((uVar5 & 0x80) != 0) && (local_5c < 0)) {
      *(short *)(param_1 + 0x51fc) = (short)(-local_5c >> ((byte)(uVar5 >> 8) & 3));
    }
    lVar13 = *(long *)(param_1 + 0x18);
    uVar5 = *(ushort *)(lVar13 + 0x3810 + lVar12);
    uVar15 = (ulong)uVar5;
    if (uVar5 != uVar19) {
      do {
        pbVar2 = (byte *)(local_48[0] + 0xc + uVar15 * 0x10);
        *pbVar2 = *pbVar2 | 1;
        uVar17 = (int)uVar15 + 1;
        uVar15 = (ulong)uVar17;
        if (uVar17 == uVar16) {
          uVar15 = 0;
        }
      } while ((uint)uVar15 != uVar19);
    }
    *(short *)(lVar13 + 0x3810 + lVar12) = (short)uVar19;
    uVar17 = *(uint *)(param_1 + 0x170 + lVar21);
    if (uVar17 != uVar19) {
      iVar14 = FUN_1008e38f0(&DAT_101115cac);
      if (iVar14 != 0) {
        FUN_1008e3970("","LocalDevices",0,"Error on queue %d: fullpkt_tdh != tdt (%d != %d)",param_2
                      ,uVar17,uVar19);
      }
      plVar1 = (long *)(*(long *)(param_1 + 0x178 + lVar21) + 0xf4);
      *plVar1 = *plVar1 + 1;
      *(undefined4 *)(param_1 + 0x160 + lVar21) = *(undefined4 *)(param_1 + 0x164 + lVar21);
      *(undefined2 *)(param_1 + 0x168 + lVar21) = 0;
      *(uint *)(param_1 + 0x170 + lVar21) = uVar19;
      *(undefined1 *)(param_1 + 0x16a + lVar21) = 1;
      lVar13 = *(long *)(param_1 + 0x18);
      uVar19 = (uint)*(ushort *)(lVar13 + 0x3810 + lVar12);
    }
    uVar17 = 0;
    uVar18 = (uint)*(ushort *)(lVar13 + 4 + lVar22 * 6);
    if ((uVar19 & 0xffff) < uVar18) {
      uVar17 = (uint)*(ushort *)(lVar13 + 6 + lVar22 * 6);
    }
    if ((((DAT_1011b89d3 != '\0') || (*(char *)(param_1 + 0x51fe) != '\0')) ||
        (uVar16 * 3 >> 2 <= ((uVar19 & 0xffff) - uVar18) + uVar17)) &&
       ((pcVar3 = (char *)(lVar9 + 2 + lVar22 * 6), *(char *)(lVar9 + 0x1f) != '\0' ||
        (*pcVar3 == '\0')))) {
      *pcVar3 = '\x01';
      FUN_100279c80(*(undefined8 *)(param_1 + 8),1);
    }
    uVar20 = uVar20 | local_68;
    FUN_10008d3f0(local_48);
  }
  else {
    if (uVar7 == 0) {
      FUN_10027b690(param_1,param_2);
      uVar7 = *(ushort *)(lVar9 + 6 + lVar22 * 6);
      uVar18 = (uint)uVar7;
      if ((uVar17 < uVar18) && (uVar5 < uVar7)) goto LAB_10027bfd0;
    }
    uVar20 = 0;
    if (DAT_1011b89d4 == '\0') {
      DAT_1011b89d4 = '\x01';
      FUN_1008e3970("","LocalDevices",0,
                    "E1000 Invalid queue pointers detected: head = 0x%x, tail = 0x%x, size = 0x%x",
                    uVar17,uVar5,uVar18);
    }
    *(ushort *)(*(long *)(param_1 + 0x18) + 0x3810 + lVar12) = uVar5;
  }
  return uVar20;
}

