
undefined8 FUN_1003f1b50(long *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  int5 iVar4;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  byte *pbVar12;
  char *pcVar13;
  byte bVar14;
  long lVar15;
  size_t sVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  int iVar20;
  uint uVar21;
  undefined2 local_358;
  undefined1 local_356;
  byte local_355;
  undefined1 local_354 [2];
  undefined1 auStack_352 [2];
  undefined4 uStack_350;
  undefined4 uStack_348;
  
  lVar15 = param_1[0xb];
  bVar14 = *(byte *)(lVar15 + 6);
  pbVar12 = (byte *)(lVar15 + 2);
  pbVar1 = (byte *)(lVar15 + 9);
  if (((*(byte *)((long)param_1 + 0x6c) & 2) != 0) ||
     (uVar21 = *(uint *)(param_1 + 0x19), uVar21 == 0xffffffff)) {
    uVar6 = CONCAT11((char)*(undefined2 *)(lVar15 + 7),
                     (char)((ushort)*(undefined2 *)(lVar15 + 7) >> 8));
    uVar21 = 0x10000;
    if (uVar6 != 0) {
      uVar21 = (uint)uVar6;
    }
    lVar15 = param_1[0xb];
  }
  bVar2 = *(byte *)(lVar15 + 1);
  if ((99 < bVar14) && (bVar14 != 0xaa)) {
LAB_1003f1f65:
    lVar15 = *param_1;
    lVar8 = param_1[0xc];
    uVar17 = 0x52400;
LAB_1003f1f72:
    (**(code **)(lVar15 + 0x268))(param_1,uVar17,lVar8);
    return 0xffffffff;
  }
  uVar9 = *pbVar12 & 0xf;
  if ((5 < uVar9) || ((0x27U >> uVar9 & 1) == 0)) {
switchD_1003f1bff_caseD_3:
    lVar15 = *param_1;
    lVar8 = param_1[0xc];
    uVar17 = 0x52601;
    goto LAB_1003f1f72;
  }
  bVar5 = *pbVar1 >> 6;
  if (bVar5 != 0) {
    if (bVar5 == 1) {
      local_358 = 0xa00;
      local_356 = 1;
      lVar15 = param_1[0x25];
      local_355 = *(byte *)(*(long *)(lVar15 + 0x10) + 3);
      iVar20 = 0;
      if (0 < (long)*(int *)(lVar15 + 0x18)) {
        pbVar12 = (byte *)(*(long *)(lVar15 + 0x10) + 7);
        lVar8 = 0;
        iVar20 = 0;
        do {
          iVar10 = iVar20;
          if ((*pbVar12 < 100) && (iVar10 = (int)lVar8, pbVar12[-3] != local_355)) {
            iVar10 = iVar20;
          }
          iVar20 = iVar10;
          lVar8 = lVar8 + 1;
          pbVar12 = pbVar12 + 0xb;
        } while (lVar8 < *(int *)(lVar15 + 0x18));
      }
      lVar8 = (long)iVar20 * 0xb;
      _local_354 = (uint5)(*(byte *)(*(long *)(lVar15 + 0x10) + 5 + lVar8) & 0xf0 |
                          *(byte *)(*(long *)(lVar15 + 0x10) + 5 + lVar8) & 0xf) << 8;
      iVar4 = _local_354;
      lVar15 = *(long *)(lVar15 + 0x10);
      bVar14 = *(byte *)(lVar15 + 0xc + lVar8);
      _local_354 = CONCAT15(bVar14,_local_354);
      bVar5 = *(byte *)(lVar15 + 0xd + lVar8);
      _local_354 = CONCAT16(bVar5,_local_354);
      bVar3 = *(byte *)(lVar15 + 0xe + lVar8);
      _local_354 = CONCAT17(bVar3,_local_354);
      _local_354 = CONCAT12(*(undefined1 *)(lVar15 + 7 + lVar8),SUB52(iVar4,0));
      if ((bVar2 & 2) == 0) {
        uVar9 = (bVar3 - 0x96) + (uint)bVar5 * 0x4b + (uint)bVar14 * 0x1194;
        _local_354 = CONCAT44(uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                              uVar9 * 0x1000000,_local_354);
      }
      sVar16 = 0xc;
      if (uVar21 < 0xd) {
        sVar16 = (ulong)uVar21;
      }
      uVar9 = 0xc;
      if (uVar21 < 0xd) {
        uVar9 = uVar21;
      }
      _memcpy((void *)param_1[9],&local_358,sVar16);
      lVar15 = *param_1;
      goto LAB_1003f2191;
    }
    goto LAB_1003f1f65;
  }
  switch(uVar9) {
  case 0:
    lVar15 = param_1[0x25];
    iVar20 = *(int *)(lVar15 + 0x18);
    iVar10 = 0;
    if (bVar14 == 0xaa) {
LAB_1003f1cd2:
      if (iVar20 < 1) goto LAB_1003f1fbb;
      lVar8 = *(long *)(lVar15 + 0x10);
      pcVar13 = (char *)(lVar8 + 4);
      lVar18 = 0;
      lVar19 = 0;
      do {
        if ((pcVar13[3] == -0x5e) && (*pcVar13 == *(char *)(lVar8 + 3))) {
          lVar18 = (long)(int)lVar19;
          break;
        }
        lVar19 = lVar19 + 1;
        pcVar13 = pcVar13 + 0xb;
      } while (lVar19 < iVar20);
    }
    else {
      iVar10 = 0;
      if (0 < iVar20) {
        lVar8 = *(long *)(lVar15 + 0x10);
        lVar18 = 0;
        lVar19 = 0;
        iVar10 = 0;
        do {
          if (((uint)bVar14 <= (uint)lVar19) && (*(byte *)(lVar8 + 7 + lVar18) < 100)) {
            bVar5 = *(byte *)(lVar8 + 5 + lVar18) & 0xf;
            lVar11 = (long)iVar10;
            local_354[lVar11 * 8 + 1] = local_354[lVar11 * 8 + 1] & 0xf0 | bVar5;
            local_354[lVar11 * 8 + 1] =
                 *(byte *)(*(long *)(lVar15 + 0x10) + 5 + lVar18) & 0xf0 | bVar5;
            lVar8 = *(long *)(lVar15 + 0x10);
            auStack_352[lVar11 * 8] = *(undefined1 *)(lVar8 + 7 + lVar18);
            *(undefined1 *)((long)&uStack_350 + lVar11 * 8 + 1) =
                 *(undefined1 *)(lVar8 + 0xc + lVar18);
            *(undefined1 *)((long)&uStack_350 + lVar11 * 8 + 2) =
                 *(undefined1 *)(lVar8 + 0xd + lVar18);
            *(undefined1 *)((long)&uStack_350 + lVar11 * 8 + 3) =
                 *(undefined1 *)(lVar8 + 0xe + lVar18);
            local_354[lVar11 * 8] = 0;
            auStack_352[lVar11 * 8 + 1] = 0;
            *(undefined1 *)(&uStack_350 + lVar11 * 2) = 0;
            iVar10 = iVar10 + 1;
            iVar20 = *(int *)(lVar15 + 0x18);
          }
          lVar19 = lVar19 + 1;
          lVar18 = lVar18 + 0xb;
        } while (lVar19 < iVar20);
        goto LAB_1003f1cd2;
      }
LAB_1003f1fbb:
      lVar8 = *(long *)(lVar15 + 0x10);
      lVar18 = 0;
    }
    lVar18 = lVar18 * 0xb;
    bVar14 = *(byte *)(lVar8 + 5 + lVar18) & 0xf;
    lVar8 = (long)iVar10;
    local_354[lVar8 * 8 + 1] = local_354[lVar8 * 8 + 1] & 0xf0 | bVar14;
    local_354[lVar8 * 8 + 1] = *(byte *)(*(long *)(lVar15 + 0x10) + 5 + lVar18) & 0xf0 | bVar14;
    auStack_352[lVar8 * 8] = 0xaa;
    lVar15 = *(long *)(lVar15 + 0x10);
    *(undefined1 *)((long)&uStack_350 + lVar8 * 8 + 1) = *(undefined1 *)(lVar15 + 0xc + lVar18);
    *(undefined1 *)((long)&uStack_350 + lVar8 * 8 + 2) = *(undefined1 *)(lVar15 + 0xd + lVar18);
    *(undefined1 *)((long)&uStack_350 + lVar8 * 8 + 3) = *(undefined1 *)(lVar15 + 0xe + lVar18);
    local_354[lVar8 * 8] = 0;
    auStack_352[lVar8 * 8 + 1] = 0;
    *(undefined1 *)(&uStack_350 + lVar8 * 2) = 0;
    local_356 = 1;
    local_355 = (byte)iVar10;
    uVar9 = iVar10 * 8 + 0x1000aU & 0xfffa;
    local_358 = CONCAT11((char)uVar9,(char)(uVar9 >> 8));
    if ((bVar2 & 2) == 0) {
      lVar15 = -1;
      do {
        uVar6 = *(ushort *)((long)&uStack_348 + lVar15 * 8 + 2);
        uVar9 = ((uVar6 >> 8) - 0x96) +
                (uint)(byte)uVar6 * 0x4b +
                (uint)*(byte *)((long)&uStack_348 + lVar15 * 8 + 1) * 0x1194;
        (&uStack_348)[lVar15 * 2] =
             uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 * 0x1000000;
        lVar15 = lVar15 + 1;
      } while (lVar15 < (long)(ulong)local_355);
    }
    uVar9 = iVar10 * 8 + 0xc;
    sVar16 = 0x324;
    if (uVar21 < 0x325) {
      sVar16 = (ulong)uVar21;
    }
    _memcpy((void *)param_1[9],&local_358,sVar16);
    break;
  case 1:
    local_358 = 0xa00;
    local_356 = 1;
    lVar15 = param_1[0x25];
    local_355 = *(byte *)(*(long *)(lVar15 + 0x10) + 3);
    lVar8 = 0;
    if (0 < (long)*(int *)(lVar15 + 0x18)) {
      pcVar13 = (char *)(*(long *)(lVar15 + 0x10) + 7);
      lVar8 = 0;
      lVar18 = 0;
      do {
        if ((*pcVar13 == -0x5e) && (pcVar13[-3] == local_355)) {
          lVar8 = (long)(int)lVar18;
          break;
        }
        lVar18 = lVar18 + 1;
        pcVar13 = pcVar13 + 0xb;
      } while (lVar18 < *(int *)(lVar15 + 0x18));
    }
    lVar8 = lVar8 * 0xb;
    _local_354 = (uint5)(*(byte *)(*(long *)(lVar15 + 0x10) + 5 + lVar8) & 0xf0 |
                        *(byte *)(*(long *)(lVar15 + 0x10) + 5 + lVar8) & 0xf) << 8;
    lVar15 = *(long *)(lVar15 + 0x10);
    bVar14 = *(byte *)(lVar15 + 0xc + lVar8);
    _local_354 = CONCAT15(bVar14,_local_354);
    bVar5 = *(byte *)(lVar15 + 0xd + lVar8);
    _local_354 = CONCAT16(bVar5,_local_354);
    bVar3 = *(byte *)(lVar15 + 0xe + lVar8);
    _local_354 = CONCAT17(bVar3,_local_354);
    if ((bVar2 & 2) == 0) {
      uVar9 = (uint)bVar5 * 0x4b + -0x96 + (uint)bVar3 + (uint)bVar14 * 0x1194;
      _local_354 = CONCAT44(uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                            uVar9 * 0x1000000,_local_354);
    }
    sVar16 = 0xc;
    if (uVar21 < 0xd) {
      sVar16 = (ulong)uVar21;
    }
    _memcpy((void *)param_1[9],&local_358,sVar16);
    uVar9 = 0xc;
    break;
  case 2:
    if (1 < bVar14) goto LAB_1003f1f65;
    uVar9 = CONCAT11((char)**(undefined2 **)(param_1[0x25] + 0x10),
                     (char)((ushort)**(undefined2 **)(param_1[0x25] + 0x10) >> 8)) + 2;
    uVar7 = uVar21;
    if (uVar9 < uVar21) {
      uVar7 = uVar9;
    }
    _memcpy((void *)param_1[9],*(void **)(param_1[0x25] + 0x10),(ulong)uVar7);
    lVar15 = param_1[0x25];
    if (0 < *(int *)(lVar15 + 0x18)) {
      lVar8 = 0;
      do {
        if ((bVar2 & 2) == 0) {
          lVar15 = param_1[9];
          uVar7 = (*(byte *)(lVar15 + 0xb + lVar8 * 8) - 0x96) +
                  (uint)*(byte *)(lVar15 + 10 + lVar8 * 8) * 0x4b +
                  (uint)*(byte *)(lVar15 + 9 + lVar8 * 8) * 0x1194;
          *(uint *)(lVar15 + 8 + lVar8 * 8) =
               uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 * 0x1000000;
          lVar15 = param_1[0x25];
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < *(int *)(lVar15 + 0x18));
    }
    break;
  default:
    goto switchD_1003f1bff_caseD_3;
  case 5:
    ___bzero(param_1[9],uVar21);
    uVar9 = 0x16;
    if (2 < uVar21) {
      *(undefined1 *)(param_1[9] + 1) = 2;
    }
  }
  lVar15 = *param_1;
  if (uVar21 <= uVar9) {
    uVar9 = uVar21;
  }
LAB_1003f2191:
  (**(code **)(lVar15 + 0x278))(param_1,uVar9,uVar21);
  return 0;
}

