
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10043d610(int *param_1,long *param_2,ulong param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined2 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined2 *puVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  undefined2 *puVar15;
  uint uVar16;
  ulong uVar17;
  int iVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  long lVar24;
  bool bVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  uint local_7c;
  ulong local_60;
  ushort local_34;
  ushort local_32;
  
  uVar1 = *(uint *)(param_2 + 1);
  uVar10 = *(uint *)((long)param_2 + 0xc);
  uVar22 = uVar10 + 4;
  if ((uVar22 <= uVar1) || (local_7c = 0, uVar1 - uVar10 == 4)) {
    lVar12 = *param_2;
    local_7c = (uint)*(byte *)(lVar12 + (ulong)(uVar10 + 2)) << 8 |
               (uint)*(byte *)(lVar12 + (ulong)(uVar10 + 1)) << 0x10 |
               (uint)*(byte *)(lVar12 + (ulong)uVar10) << 0x18 |
               (uint)*(byte *)(lVar12 + (ulong)(uVar10 + 3));
    *(uint *)((long)param_2 + 0xc) = uVar22;
    uVar10 = uVar22;
  }
  local_60 = (ulong)uVar10;
  uVar4 = uVar10 + 2;
  uVar22 = 2;
  if (uVar1 < uVar4) {
    uVar22 = uVar1 - uVar10;
  }
  if (uVar22 != 0) {
    _memcpy(&local_32,(void *)(local_60 + *param_2),(ulong)uVar22);
    *(uint *)((long)param_2 + 0xc) = uVar22 + uVar10;
    uVar4 = (uint)local_32;
    local_60 = (ulong)(uVar22 + uVar10);
  }
  iVar2 = param_1[1];
  uVar20 = (ulong)(iVar2 * param_4);
  iVar3 = *param_1;
  lVar12 = (long)iVar3;
  puVar6 = (undefined2 *)(param_3 + uVar20 + lVar12 * 2);
  puVar15 = (undefined2 *)((ulong)(((1 - iVar2) + param_1[3]) * param_4) + (long)puVar6);
  if (puVar6 < puVar15) {
    iVar5 = param_1[2];
    iVar18 = (1 - iVar3) + iVar5;
    uVar11 = (ulong)param_4;
    lVar24 = 0;
    auVar26 = pshufb(ZEXT416(uVar4),_DAT_100b3f5b0);
    do {
      lVar7 = uVar11 * lVar24 + uVar20;
      uVar13 = param_3 + (((iVar5 + 1) - iVar3) + lVar12) * 2 + lVar7;
      uVar8 = lVar7 + param_3 + 2 + lVar12 * 2;
      if (uVar8 < uVar13) {
        uVar8 = uVar13;
      }
      if (0 < iVar18) {
        uVar8 = (lVar24 * -uVar11 + (~param_3 - uVar20) + uVar8 + lVar12 * -2 >> 1) + 1;
        uVar21 = uVar8 & 0xfffffffffffffff0;
        puVar9 = puVar6;
        uVar13 = 0;
        if (uVar21 != 0) {
          puVar9 = puVar6 + uVar21;
          uVar23 = 0;
          do {
            *(undefined1 (*) [16])(puVar6 + uVar23) = auVar26;
            *(undefined1 (*) [16])(puVar6 + uVar23 + 8) = auVar26;
            uVar23 = uVar23 + 0x10;
            uVar13 = uVar21;
          } while ((uVar8 & 0xfffffffffffffff0) != uVar23);
        }
        if (uVar8 != uVar13) {
          do {
            *puVar9 = (short)uVar4;
            puVar9 = puVar9 + 1;
          } while (puVar9 < puVar6 + iVar18);
        }
      }
      puVar6 = (undefined2 *)((long)puVar6 + uVar11);
      lVar24 = lVar24 + 1;
    } while (puVar6 < puVar15);
  }
  if (0 < (int)local_7c) {
    uVar20 = (ulong)param_4;
    iVar5 = 0;
    do {
      uVar10 = (uint)local_60;
      uVar4 = uVar1 - uVar10;
      uVar22 = 2;
      if (uVar10 + 2 <= uVar1) {
        uVar4 = 2;
      }
      if (uVar4 != 0) {
        _memcpy(&local_34,(void *)(local_60 + *param_2),(ulong)uVar4);
        uVar10 = uVar4 + uVar10;
        *(uint *)((long)param_2 + 0xc) = uVar10;
        uVar22 = (uint)local_34;
      }
      auVar26 = _DAT_100b3f5b0;
      uVar4 = uVar10 + 2;
      if ((uVar4 <= uVar1) || (uVar16 = 0, uVar1 - uVar10 == 2)) {
        uVar16 = (uint)CONCAT11(*(undefined1 *)(*param_2 + (ulong)uVar10),
                                *(undefined1 *)(*param_2 + (ulong)(uVar10 + 1)));
        *(uint *)((long)param_2 + 0xc) = uVar4;
        uVar10 = uVar4;
      }
      uVar4 = uVar10 + 2;
      if ((uVar4 <= uVar1) || (uVar19 = 0, uVar1 - uVar10 == 2)) {
        uVar19 = (uint)CONCAT11(*(undefined1 *)(*param_2 + (ulong)uVar10),
                                *(undefined1 *)(*param_2 + (ulong)(uVar10 + 1)));
        *(uint *)((long)param_2 + 0xc) = uVar4;
        uVar10 = uVar4;
      }
      uVar4 = uVar10 + 2;
      if ((uVar4 <= uVar1) || (uVar11 = 0, uVar1 - uVar10 == 2)) {
        uVar11 = (ulong)CONCAT11(*(undefined1 *)(*param_2 + (ulong)uVar10),
                                 *(undefined1 *)(*param_2 + (ulong)(uVar10 + 1)));
        *(uint *)((long)param_2 + 0xc) = uVar4;
        uVar10 = uVar4;
      }
      local_60 = (ulong)uVar10;
      uVar4 = uVar10 + 2;
      if ((uVar4 <= uVar1) || (uVar14 = 0, uVar1 - uVar10 == 2)) {
        uVar14 = (uint)CONCAT11(*(undefined1 *)(*param_2 + local_60),
                                *(undefined1 *)(*param_2 + (ulong)(uVar10 + 1)));
        *(uint *)((long)param_2 + 0xc) = uVar4;
        local_60 = (ulong)uVar4;
      }
      uVar13 = (ulong)((uVar19 + iVar2) * param_4);
      puVar6 = (undefined2 *)(param_3 + uVar13 + (long)(int)(iVar3 + uVar16) * 2);
      puVar15 = (undefined2 *)((ulong)(uVar14 * param_4) + (long)puVar6);
      if (puVar6 < puVar15) {
        lVar12 = (long)(int)(uVar16 + iVar3);
        lVar24 = 0;
        do {
          lVar7 = uVar20 * lVar24 + uVar13;
          uVar8 = param_3 + (uVar11 + lVar12) * 2 + lVar7;
          uVar21 = lVar7 + param_3 + 2 + lVar12 * 2;
          if (uVar21 < uVar8) {
            uVar21 = uVar8;
          }
          if ((int)uVar11 != 0) {
            uVar21 = (lVar24 * -uVar20 + (~param_3 - uVar13) + uVar21 + lVar12 * -2 >> 1) + 1;
            uVar23 = uVar21 & 0xfffffffffffffff0;
            uVar8 = 0;
            puVar9 = puVar6;
            if (uVar23 != 0) {
              puVar9 = puVar6 + uVar23;
              auVar27 = pshufb(ZEXT416(uVar22),auVar26);
              uVar17 = 0;
              do {
                *(undefined1 (*) [16])(puVar6 + uVar17) = auVar27;
                *(undefined1 (*) [16])(puVar6 + uVar17 + 8) = auVar27;
                uVar17 = uVar17 + 0x10;
                uVar8 = uVar23;
              } while ((uVar21 & 0xfffffffffffffff0) != uVar17);
            }
            if (uVar21 != uVar8) {
              do {
                *puVar9 = (short)uVar22;
                puVar9 = puVar9 + 1;
              } while (puVar9 < puVar6 + uVar11);
            }
          }
          puVar6 = (undefined2 *)((long)puVar6 + uVar20);
          lVar24 = lVar24 + 1;
        } while (puVar6 < puVar15);
      }
      bVar25 = iVar5 != local_7c - 1;
      iVar5 = iVar5 + 1;
    } while (bVar25);
  }
  return;
}

