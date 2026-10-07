
undefined8
FUN_100742ea0(byte *param_1,uint param_2,uint *param_3,uint *param_4,long param_5,byte *param_6)

{
  byte *pbVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  short sVar5;
  uint uVar6;
  size_t sVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  uint *puVar13;
  ulong uVar14;
  uint *puVar15;
  long lVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  uint *local_90;
  byte *local_38;
  
  pbVar17 = param_1 + param_2;
  uVar2 = *param_4;
  bVar4 = true;
  local_38 = (byte *)0x0;
  iVar9 = (int)pbVar17;
  pbVar20 = pbVar17;
  pbVar19 = param_1;
  pbVar21 = param_1;
  if (param_6 != (byte *)0x0) {
    local_38 = *(byte **)param_6;
    pbVar20 = param_6;
    if (param_2 != 0) {
      sVar7 = 0x1000;
      if (param_2 < 0x1001) {
        sVar7 = (size_t)param_2;
      }
      if ((local_38 == (byte *)0x0) || ((*local_38 & 1) == 0)) {
        _memcpy(param_6,param_1,sVar7);
      }
      else {
        ___bzero(param_6,sVar7);
      }
      pbVar20 = param_6 + sVar7;
      pbVar19 = param_1 + sVar7;
    }
    uVar10 = iVar9 - (int)pbVar19;
    if (uVar10 != 0) {
      uVar11 = 0x1000;
      if (uVar10 < 0x1001) {
        uVar11 = uVar10;
      }
      if ((local_38 == (byte *)0x0) ||
         (uVar12 = (long)(((ulong)((long)pbVar19 - (long)param_1 >> 0x3f) >> 0x34) +
                         ((long)pbVar19 - (long)param_1)) >> 0xc,
         (*(uint *)(local_38 + (uVar12 >> 3 & 0x1ffffffc)) >> ((uint)uVar12 & 0x1f) & 1) == 0)) {
        _memcpy(pbVar20,pbVar19,(ulong)uVar11);
      }
      else {
        ___bzero(pbVar20,uVar11);
      }
      pbVar20 = pbVar20 + uVar11;
      pbVar19 = pbVar19 + uVar11;
    }
    uVar10 = iVar9 - (int)pbVar19;
    pbVar21 = param_6;
    if (uVar10 == 0) {
      bVar4 = false;
    }
    else {
      uVar11 = 0x1000;
      if (uVar10 < 0x1001) {
        uVar11 = uVar10;
      }
      if ((local_38 == (byte *)0x0) ||
         (uVar12 = (long)(((ulong)((long)pbVar19 - (long)param_1 >> 0x3f) >> 0x34) +
                         ((long)pbVar19 - (long)param_1)) >> 0xc,
         (*(uint *)(local_38 + (uVar12 >> 3 & 0x1ffffffc)) >> ((uint)uVar12 & 0x1f) & 1) == 0)) {
        _memcpy(pbVar20,pbVar19,(ulong)uVar11);
        bVar4 = true;
      }
      else {
        ___bzero(pbVar20,uVar11);
        bVar4 = false;
      }
      pbVar20 = pbVar20 + uVar11;
      pbVar19 = pbVar19 + uVar11;
    }
  }
  puVar13 = param_3;
  if (pbVar21 < pbVar20) {
    pbVar1 = param_6 + 0x1000;
    uVar12 = 0;
    local_90 = (uint *)0x0;
    uVar11 = 0;
    uVar10 = 0;
    pbVar23 = pbVar21;
    do {
      pbVar18 = pbVar20;
      if (((pbVar19 < pbVar17) && (param_6 != (byte *)0x0)) && (param_6 + 0x2000 <= pbVar23)) {
        if (local_38 == (byte *)0x0) {
          _memcpy(param_6,pbVar1,0x1000);
LAB_100743760:
          _memcpy(pbVar1,param_6 + 0x2000,0x1000);
        }
        else {
          uVar6 = (uint)(uVar12 >> 0xc);
          uVar14 = (ulong)(uVar6 + 1 >> 5);
          bVar8 = (byte)(uVar6 + 1);
          if ((*(uint *)(local_38 + uVar14 * 4) >> (bVar8 & 0x1f) & 1) == 0) {
            _memcpy(param_6,pbVar1,0x1000);
          }
          else if ((*(uint *)(local_38 + (uVar12 >> 0x11) * 4) >> (uVar6 & 0x1f) & 1) == 0) {
            ___bzero(param_6,0x1000);
          }
          if ((*(uint *)(local_38 + (ulong)(uVar6 + 2 >> 5) * 4) >> (uVar6 + 2 & 0x1f) & 1) == 0)
          goto LAB_100743760;
          if ((*(uint *)(local_38 + uVar14 * 4) & 1 << (bVar8 & 0x1f)) == 0) {
            ___bzero(pbVar1,0x1000);
          }
        }
        pbVar18 = pbVar20 + -0x1000;
        uVar6 = iVar9 - (int)pbVar19;
        if (uVar6 == 0) {
          bVar4 = false;
        }
        else {
          sVar7 = (size_t)uVar6;
          if (0x1000 < uVar6) {
            sVar7 = 0x1000;
          }
          if ((local_38 == (byte *)0x0) ||
             (uVar14 = (long)(((ulong)((long)pbVar19 - (long)param_1 >> 0x3f) >> 0x34) +
                             ((long)pbVar19 - (long)param_1)) >> 0xc,
             (*(uint *)(local_38 + (uVar14 >> 3 & 0x1ffffffc)) >> ((uint)uVar14 & 0x1f) & 1) == 0))
          {
            _memcpy(pbVar18,pbVar19,sVar7);
            bVar4 = true;
          }
          else if (bVar4) {
            ___bzero(pbVar18,sVar7);
            bVar4 = false;
          }
          else {
            bVar4 = false;
          }
          pbVar18 = pbVar20 + (sVar7 - 0x1000);
          pbVar19 = pbVar19 + sVar7;
        }
        pbVar23 = pbVar23 + -0x1000;
        uVar12 = (ulong)((int)uVar12 + 0x1000);
      }
      uVar10 = uVar10 * 2;
      puVar15 = puVar13;
      if (uVar10 == 0) {
        if (local_90 != (uint *)0x0) {
          *local_90 = uVar11;
        }
        uVar11 = 0;
        uVar10 = 1;
        puVar15 = puVar13 + 1;
        local_90 = puVar13;
      }
      if ((byte *)(((ulong)uVar2 - 1) + (long)param_3) <= (byte *)((long)puVar15 + 1)) {
        return 0xffffffff;
      }
      pbVar22 = pbVar23 + 0x12;
      if (pbVar18 < pbVar22) {
LAB_10074341c:
        pbVar22 = pbVar23 + 1;
        *(byte *)puVar15 = *pbVar23;
        puVar13 = (uint *)((long)puVar15 + 1);
      }
      else {
        uVar14 = (ulong)pbVar23[2] ^ (ulong)pbVar23[1] << 2 ^ (ulong)*pbVar23 << 4;
        lVar3 = *(long *)(param_5 + uVar14 * 8);
        pbVar20 = (byte *)(lVar3 - uVar12);
        *(byte **)(param_5 + uVar14 * 8) = pbVar23 + uVar12;
        if (((pbVar20 < pbVar21) || (pbVar23 <= pbVar20)) ||
           ((0x1000 < (ulong)((long)pbVar23 - (long)pbVar20) ||
            (((*pbVar23 != *pbVar20 || (pbVar23[1] != *(byte *)(lVar3 + (1 - uVar12)))) ||
             (pbVar23[2] != *(byte *)(lVar3 + (2 - uVar12)))))))) goto LAB_10074341c;
        sVar5 = (short)((long)pbVar23 - (long)pbVar20);
        if (pbVar23[3] == *(byte *)(lVar3 + (3 - uVar12))) {
          if (pbVar23[4] != *(byte *)(lVar3 + (4 - uVar12))) {
            pbVar22 = pbVar23 + 4;
            sVar5 = sVar5 + 0xfff;
            goto LAB_100743625;
          }
          if (pbVar23[5] != *(byte *)(lVar3 + (5 - uVar12))) {
            pbVar22 = pbVar23 + 5;
            sVar5 = sVar5 + 0x1fff;
            goto LAB_100743625;
          }
          if (pbVar23[6] != *(byte *)(lVar3 + (6 - uVar12))) {
            pbVar22 = pbVar23 + 6;
            sVar5 = sVar5 + 0x2fff;
            goto LAB_100743625;
          }
          if (pbVar23[7] != *(byte *)(lVar3 + (7 - uVar12))) {
            pbVar22 = pbVar23 + 7;
            sVar5 = sVar5 + 0x3fff;
            goto LAB_100743625;
          }
          if (pbVar23[8] != *(byte *)(lVar3 + (8 - uVar12))) {
            pbVar22 = pbVar23 + 8;
            sVar5 = sVar5 + 0x4fff;
            goto LAB_100743625;
          }
          if (pbVar23[9] != *(byte *)(lVar3 + (9 - uVar12))) {
            pbVar22 = pbVar23 + 9;
            sVar5 = sVar5 + 0x5fff;
            goto LAB_100743625;
          }
          if (pbVar23[10] != *(byte *)(lVar3 + (10 - uVar12))) {
            pbVar22 = pbVar23 + 10;
            sVar5 = sVar5 + 0x6fff;
            goto LAB_100743625;
          }
          if (pbVar23[0xb] != *(byte *)(lVar3 + (0xb - uVar12))) {
            pbVar22 = pbVar23 + 0xb;
            sVar5 = sVar5 + 0x7fff;
            goto LAB_100743625;
          }
          if (pbVar23[0xc] != *(byte *)(lVar3 + (0xc - uVar12))) {
            pbVar22 = pbVar23 + 0xc;
            sVar5 = sVar5 + -0x7001;
            goto LAB_100743625;
          }
          if (pbVar23[0xd] != *(byte *)(lVar3 + (0xd - uVar12))) {
            pbVar22 = pbVar23 + 0xd;
            sVar5 = sVar5 + -0x6001;
            goto LAB_100743625;
          }
          if (pbVar23[0xe] != *(byte *)(lVar3 + (0xe - uVar12))) {
            pbVar22 = pbVar23 + 0xe;
            sVar5 = sVar5 + -0x5001;
            goto LAB_100743625;
          }
          if (pbVar23[0xf] != *(byte *)(lVar3 + (0xf - uVar12))) {
            pbVar22 = pbVar23 + 0xf;
            sVar5 = sVar5 + -0x4001;
            goto LAB_100743625;
          }
          if (pbVar23[0x10] != *(byte *)(lVar3 + (0x10 - uVar12))) {
            pbVar22 = pbVar23 + 0x10;
            sVar5 = sVar5 + -0x3001;
            goto LAB_100743625;
          }
          if (pbVar23[0x11] != *(byte *)(lVar3 + (0x11 - uVar12))) {
            pbVar22 = pbVar23 + 0x11;
            sVar5 = sVar5 + -0x2001;
            goto LAB_100743625;
          }
          pbVar20 = pbVar18 + -4;
          if (pbVar23 + 0x40e <= pbVar20) {
            pbVar20 = pbVar23 + 0x40a;
          }
          if (pbVar20 < pbVar22) {
            lVar16 = 0;
          }
          else {
            lVar16 = 0;
            do {
              if (*(int *)pbVar22 != *(int *)((lVar3 - uVar12) + 0x12 + lVar16 * 4)) break;
              pbVar22 = pbVar22 + 4;
              lVar16 = lVar16 + 1;
            } while (pbVar22 <= pbVar20);
          }
          uVar11 = uVar11 | uVar10;
          *(short *)puVar15 = sVar5 + -0x1001;
          *(byte *)((long)puVar15 + 2) = (byte)lVar16;
          puVar13 = (uint *)((long)puVar15 + 3);
        }
        else {
          pbVar22 = pbVar23 + 3;
          sVar5 = sVar5 + -1;
LAB_100743625:
          uVar11 = uVar11 | uVar10;
          *(short *)puVar15 = sVar5;
          puVar13 = (uint *)((long)puVar15 + 2);
        }
      }
      pbVar20 = pbVar18;
      pbVar23 = pbVar22;
    } while (pbVar22 < pbVar18);
    if (local_90 != (uint *)0x0) {
      *local_90 = uVar11;
    }
  }
  *param_4 = (int)puVar13 - (int)param_3;
  if (param_6 != (byte *)0x0) {
    *(byte **)param_6 = local_38;
  }
  return 0;
}

