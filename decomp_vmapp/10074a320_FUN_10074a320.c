
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10074a320(long param_1,ulong *param_2,ulong *param_3,uint param_4)

{
  long lVar1;
  uint *puVar2;
  uint *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong uVar20;
  ulong *puVar21;
  ulong *puVar22;
  char *pcVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  long lVar27;
  ulong uVar28;
  ulong *puVar29;
  ulong *puVar30;
  uint uVar31;
  ulong *puVar32;
  ulong *puVar33;
  ulong *puVar34;
  long lVar35;
  long lVar36;
  ulong uVar37;
  uint uVar38;
  ulong uVar39;
  ulong *puVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  
  uVar16 = _UNK_100b3f6cc;
  uVar26 = _UNK_100b3f6c8;
  uVar31 = _UNK_100b3f6c4;
  uVar38 = DAT_100b3f6c0;
  puVar34 = *(ulong **)(param_1 + 0x4008);
  uVar39 = (ulong)*(uint *)(param_1 + 0x4018);
  puVar32 = (ulong *)(ulong)*(uint *)(param_1 + 0x4000);
  if (puVar32 < (ulong *)0x80000001) {
    puVar30 = (ulong *)((long)puVar34 + uVar39);
    if (param_2 < (ulong *)((long)puVar34 + uVar39)) {
      puVar30 = param_2;
    }
    if (puVar32 <= puVar30) goto LAB_10074a437;
  }
  uVar24 = *(uint *)(param_1 + 0x4000) - 0x10000;
  lVar27 = 0;
  uVar41 = uVar24 ^ DAT_100b3f6c0;
  uVar42 = uVar24 ^ _UNK_100b3f6c4;
  uVar43 = uVar24 ^ _UNK_100b3f6c8;
  uVar44 = uVar24 ^ _UNK_100b3f6cc;
  do {
    puVar2 = (uint *)(param_1 + lVar27 * 4);
    uVar8 = puVar2[1];
    uVar9 = puVar2[2];
    uVar10 = puVar2[3];
    puVar3 = (uint *)(param_1 + 0x10 + lVar27 * 4);
    uVar11 = *puVar3;
    uVar12 = puVar3[1];
    uVar13 = puVar3[2];
    uVar14 = puVar3[3];
    puVar3 = (uint *)(param_1 + lVar27 * 4);
    *puVar3 = ~-(uint)((int)(*puVar2 ^ uVar38) < (int)uVar41) & *puVar2 - uVar24;
    puVar3[1] = ~-(uint)((int)(uVar8 ^ uVar31) < (int)uVar42) & uVar8 - uVar24;
    puVar3[2] = ~-(uint)((int)(uVar9 ^ uVar26) < (int)uVar43) & uVar9 - uVar24;
    puVar3[3] = ~-(uint)((int)(uVar10 ^ uVar16) < (int)uVar44) & uVar10 - uVar24;
    puVar2 = (uint *)(param_1 + 0x10 + lVar27 * 4);
    *puVar2 = ~-(uint)((int)(uVar11 ^ uVar38) < (int)uVar41) & uVar11 - uVar24;
    puVar2[1] = ~-(uint)((int)(uVar12 ^ uVar31) < (int)uVar42) & uVar12 - uVar24;
    puVar2[2] = ~-(uint)((int)(uVar13 ^ uVar26) < (int)uVar43) & uVar13 - uVar24;
    puVar2[3] = ~-(uint)((int)(uVar14 ^ uVar16) < (int)uVar44) & uVar14 - uVar24;
    lVar27 = lVar27 + 8;
  } while (lVar27 != 0x1000);
  *(undefined4 *)(param_1 + 0x4000) = 0x10000;
  uVar38 = *(uint *)(param_1 + 0x4018);
  if (0x10000 < uVar38) {
    *(undefined4 *)(param_1 + 0x4018) = 0x10000;
    uVar38 = 0x10000;
  }
  puVar34 = (ulong *)((long)puVar34 + (uVar39 - uVar38));
  *(ulong **)(param_1 + 0x4008) = puVar34;
  puVar32 = (ulong *)0x10000;
  uVar39 = (ulong)uVar38;
LAB_10074a437:
  iVar25 = (int)puVar32;
  iVar17 = 0;
  if (param_4 < 0x7e000001) {
    lVar27 = (long)(int)param_4;
    puVar30 = param_2;
    puVar33 = param_3;
    if ((0xc < (int)param_4) &&
       (*(int *)(param_1 + (*param_2 * 0xcf1bbcdcbb >> 0x1a & 0x3ffc)) = iVar25, 1 < lVar27 + -0xc))
    {
      uVar28 = (long)puVar34 + (uVar39 - (long)param_2);
      puVar4 = (ulong *)((long)param_2 + lVar27 + -0xc);
      puVar5 = (ulong *)((long)param_2 + lVar27 + -5);
      iVar25 = (int)param_2 - iVar25;
      puVar21 = (ulong *)((long)param_2 + 2);
      puVar6 = (ulong *)(lVar27 + -8 + (long)param_2);
      puVar7 = (ulong *)(lVar27 + -6 + (long)param_2);
LAB_10074a4e4:
      uVar20 = *(ulong *)((long)puVar30 + 1);
      uVar37 = 1;
      puVar40 = (ulong *)((long)puVar30 + 1);
      uVar38 = 0x41;
      do {
        puVar22 = puVar21;
        uVar18 = uVar20 * 0xcf1bbcdcbb >> 0x1a & 0x3ffc;
        lVar35 = (ulong)*(uint *)(param_1 + uVar18) - (long)puVar32;
        uVar20 = *puVar22;
        *(int *)(param_1 + uVar18) = (int)puVar40 - iVar25;
        if (puVar40 <= (ulong *)((long)param_2 + lVar35 + 0xffff)) {
          uVar18 = lVar35 >> 0x3f & uVar28;
          if (*(int *)((long)param_2 + uVar18 + lVar35) == (int)*puVar40) goto LAB_10074a591;
        }
        puVar21 = (ulong *)(uVar37 + (long)puVar22);
        uVar37 = (ulong)(uVar38 >> 6);
        puVar40 = puVar22;
        uVar38 = uVar38 + 1;
        if (puVar4 < puVar21) break;
      } while( true );
    }
LAB_10074abaf:
    uVar39 = (long)param_2 + (lVar27 - (long)puVar30);
    if (uVar39 < 0xf) {
      *(char *)puVar33 = (char)uVar39 * '\x10';
    }
    else {
      uVar28 = uVar39 - 0xf;
      *(char *)puVar33 = -0x10;
      puVar34 = (ulong *)((long)puVar33 + 1);
      if (0xfe < uVar28) {
        do {
          puVar32 = puVar34;
          *(char *)puVar32 = -1;
          uVar28 = uVar28 - 0xff;
          puVar34 = (ulong *)((long)puVar33 + 2);
          puVar33 = puVar32;
        } while (0xfe < uVar28);
        uVar28 = (ulong)((long)param_2 + ((lVar27 + -0x10e) - (long)puVar30)) % 0xff;
      }
      *(char *)puVar34 = (char)uVar28;
      puVar33 = puVar34;
    }
    _memcpy((char *)((long)puVar33 + 1),puVar30,uVar39);
    iVar17 = ((int)uVar39 + 1 + (int)puVar33) - (int)param_3;
    iVar25 = *(int *)(param_1 + 0x4000);
  }
  *(ulong **)(param_1 + 0x4008) = param_2;
  *(uint *)(param_1 + 0x4018) = param_4;
  *(uint *)(param_1 + 0x4000) = iVar25 + param_4;
  return iVar17;
LAB_10074a591:
  lVar36 = (long)param_2 + lVar35;
  puVar21 = param_2;
  if (lVar35 < 0) {
    puVar21 = puVar34;
  }
  if ((puVar30 < puVar40) && (puVar21 < (ulong *)(uVar18 + lVar35 + (long)param_2))) {
    lVar36 = 0;
    do {
      lVar1 = lVar36;
      if ((*(char *)((long)puVar40 + lVar36 + -1) !=
           *(char *)((long)param_2 + uVar18 + lVar36 + lVar35 + -1)) ||
         (lVar1 = lVar36 + -1, (ulong *)((long)puVar40 + lVar36 + -1) <= puVar30)) break;
      lVar15 = lVar36 + uVar18 + lVar35 + -1;
      lVar36 = lVar1;
    } while (puVar21 < (ulong *)((long)param_2 + lVar15));
    puVar40 = (ulong *)((long)puVar40 + lVar1);
    lVar36 = (long)param_2 + lVar1 + lVar35;
  }
  puVar22 = (ulong *)((long)puVar33 + 1);
  uVar38 = (uint)((long)puVar40 - (long)puVar30);
  if (uVar38 < 0xf) {
    *(char *)puVar33 = (char)(uVar38 << 4);
    puVar19 = puVar33;
  }
  else {
    uVar31 = uVar38 - 0xf;
    *(char *)puVar33 = -0x10;
    if (0xfe < (int)uVar31) {
      uVar26 = ((int)puVar40 - (int)puVar30) - 0x10e;
      puVar19 = puVar33;
      if ((uVar26 / 0xff + 1 & 7) != 0) {
        iVar17 = -((((int)puVar40 - (int)puVar30) - 0x10eU) / 0xff + 1 & 7);
        puVar29 = puVar33;
        do {
          puVar19 = puVar22;
          puVar22 = (ulong *)((long)puVar29 + 2);
          *(char *)puVar19 = -1;
          uVar31 = uVar31 - 0xff;
          iVar17 = iVar17 + 1;
          puVar29 = puVar19;
        } while (iVar17 != 0);
      }
      if (6 < uVar26 / 0xff) {
        do {
          *(char *)puVar22 = -1;
          *(char *)((long)puVar19 + 2) = -1;
          *(char *)((long)puVar22 + 2) = -1;
          *(char *)((long)puVar19 + 4) = -1;
          *(char *)((long)puVar22 + 4) = -1;
          *(char *)((long)puVar19 + 6) = -1;
          *(char *)((long)puVar22 + 6) = -1;
          puVar22 = puVar22 + 1;
          *(char *)(puVar19 + 1) = -1;
          uVar31 = uVar31 - 0x7f8;
          puVar19 = puVar19 + 1;
        } while (0xfe < (int)uVar31);
      }
      uVar31 = (uVar38 - 0x10e) % 0xff;
    }
    *(char *)puVar22 = (char)uVar31;
    puVar19 = puVar22;
    puVar22 = (ulong *)((long)puVar22 + 1);
  }
  puVar19 = (ulong *)(((long)puVar40 - (long)puVar30 & 0xffffffffU) + 1 + (long)puVar19);
  do {
    *puVar22 = *puVar30;
    puVar22 = puVar22 + 1;
    puVar30 = puVar30 + 1;
  } while (puVar22 < puVar19);
  do {
    *(short *)puVar19 = (short)puVar40 - (short)lVar36;
    if (puVar21 == puVar34) {
      puVar21 = (ulong *)((long)puVar34 + (uVar39 - (lVar36 + uVar18)) + (long)puVar40);
      if (puVar5 < puVar21) {
        puVar21 = puVar5;
      }
      puVar30 = (ulong *)((long)puVar40 + 4);
      puVar22 = (ulong *)(lVar36 + 4 + uVar18);
      iVar17 = (int)puVar30;
      if (puVar30 < (ulong *)((long)puVar21 - 7U)) {
LAB_10074a860:
        if (*puVar22 == *puVar30) break;
        uVar37 = *puVar30 ^ *puVar22;
        uVar20 = 0;
        if (uVar37 != 0) {
          for (; (uVar37 >> uVar20 & 1) == 0; uVar20 = uVar20 + 1) {
          }
        }
        uVar38 = ((int)puVar30 + (int)(uVar20 >> 3)) - iVar17;
        goto LAB_10074a90f;
      }
LAB_10074a87c:
      if ((puVar30 < (ulong *)((long)puVar21 - 3U)) && ((int)*puVar22 == (int)*puVar30)) {
        puVar30 = (ulong *)((long)puVar30 + 4);
        puVar22 = (ulong *)((long)puVar22 + 4);
      }
      if ((puVar30 < (ulong *)((long)puVar21 - 1U)) && ((short)*puVar22 == (short)*puVar30)) {
        puVar30 = (ulong *)((long)puVar30 + 2);
        puVar22 = (ulong *)((long)puVar22 + 2);
      }
      if ((puVar30 < puVar21) && ((char)*puVar22 == (char)*puVar30)) {
        puVar30 = (ulong *)((long)puVar30 + 1);
      }
      uVar38 = (int)puVar30 - iVar17;
LAB_10074a90f:
      uVar31 = uVar38 + 4;
      puVar30 = (ulong *)((long)puVar40 + (ulong)uVar31);
      if (puVar30 == puVar21) {
        puVar30 = puVar21;
        puVar22 = param_2;
        if (puVar21 < puVar4) {
LAB_10074a940:
          if (*puVar22 == *puVar30) goto code_r0x00010074a94b;
          uVar37 = *puVar30 ^ *puVar22;
          uVar20 = 0;
          if (uVar37 != 0) {
            for (; (uVar37 >> uVar20 & 1) == 0; uVar20 = uVar20 + 1) {
            }
          }
          uVar20 = (long)puVar30 + ((uVar20 >> 3) - (long)puVar21);
          goto LAB_10074a9be;
        }
LAB_10074a959:
        if ((puVar30 < puVar6) && ((int)*puVar22 == (int)*puVar30)) {
          puVar30 = (ulong *)((long)puVar30 + 4);
          puVar22 = (ulong *)((long)puVar22 + 4);
        }
        if ((puVar30 < puVar7) && ((short)*puVar22 == (short)*puVar30)) {
          puVar30 = (ulong *)((long)puVar30 + 2);
          puVar22 = (ulong *)((long)puVar22 + 2);
        }
        if ((puVar30 < puVar5) && ((char)*puVar22 == (char)*puVar30)) {
          puVar30 = (ulong *)((long)puVar30 + 1);
        }
        uVar20 = (long)puVar30 - (long)puVar21;
LAB_10074a9be:
        uVar38 = uVar38 + (int)uVar20;
        puVar30 = (ulong *)((long)puVar40 + (uVar20 & 0xffffffff) + (ulong)uVar31);
      }
    }
    else {
      puVar30 = (ulong *)((long)puVar40 + 4);
      puVar22 = (ulong *)(lVar36 + 4);
      puVar21 = puVar30;
      if (puVar30 < puVar4) {
LAB_10074a7b0:
        if (*puVar22 == *puVar21) goto code_r0x00010074a7bf;
        uVar37 = *puVar21 ^ *puVar22;
        uVar20 = 0;
        if (uVar37 != 0) {
          for (; (uVar37 >> uVar20 & 1) == 0; uVar20 = uVar20 + 1) {
          }
        }
        puVar21 = (ulong *)((long)puVar21 + (uVar20 >> 3));
        goto LAB_10074a8e1;
      }
LAB_10074a7cd:
      if ((puVar21 < puVar6) && ((int)*puVar22 == (int)*puVar21)) {
        puVar21 = (ulong *)((long)puVar21 + 4);
        puVar22 = (ulong *)((long)puVar22 + 4);
      }
      if ((puVar21 < puVar7) && ((short)*puVar22 == (short)*puVar21)) {
        puVar21 = (ulong *)((long)puVar21 + 2);
        puVar22 = (ulong *)((long)puVar22 + 2);
      }
      if ((puVar21 < puVar5) && ((char)*puVar22 == (char)*puVar21)) {
        puVar21 = (ulong *)((long)puVar21 + 1);
      }
LAB_10074a8e1:
      uVar38 = (int)puVar21 - (int)puVar30;
      puVar30 = (ulong *)((long)puVar40 + (ulong)(uVar38 + 4));
    }
    puVar21 = (ulong *)((long)puVar19 + 2);
    if (uVar38 < 0xf) {
      *(char *)puVar33 = (char)*puVar33 + (char)uVar38;
      puVar33 = puVar21;
    }
    else {
      *(char *)puVar33 = (char)*puVar33 + '\x0f';
      uVar31 = uVar38 - 0xf;
      if (0x1fd < uVar31) {
        uVar38 = uVar38 - 0x20d;
        if ((uVar38 / 0x1fe + 1 & 7) != 0) {
          iVar17 = -(uVar38 / 0x1fe + 1 & 7);
          puVar33 = puVar19;
          do {
            puVar19 = puVar21;
            *(undefined2 *)puVar19 = 0xffff;
            puVar21 = (ulong *)((long)puVar33 + 4);
            uVar31 = uVar31 - 0x1fe;
            iVar17 = iVar17 + 1;
            puVar33 = puVar19;
          } while (iVar17 != 0);
        }
        if (6 < uVar38 / 0x1fe) {
          pcVar23 = (char *)((long)puVar19 + 0x11);
          do {
            *(char *)puVar21 = -1;
            *(char *)((long)puVar21 + 1) = -1;
            pcVar23[-0xd] = -1;
            pcVar23[-0xc] = -1;
            *(char *)((long)puVar21 + 4) = -1;
            *(char *)((long)puVar21 + 5) = -1;
            pcVar23[-9] = -1;
            pcVar23[-8] = -1;
            *(char *)(puVar21 + 1) = -1;
            *(char *)((long)puVar21 + 9) = -1;
            pcVar23[-5] = -1;
            pcVar23[-4] = -1;
            *(char *)((long)puVar21 + 0xc) = -1;
            *(char *)((long)puVar21 + 0xd) = -1;
            pcVar23[-1] = -1;
            pcVar23[0] = -1;
            puVar21 = puVar21 + 2;
            uVar31 = uVar31 - 0xff0;
            pcVar23 = pcVar23 + 0x10;
          } while (0x1fd < uVar31);
        }
        uVar31 = uVar38 % 0x1fe;
      }
      if (0xfe < uVar31) {
        uVar31 = uVar31 - 0xff;
        *(char *)puVar21 = -1;
        puVar21 = (ulong *)((long)puVar21 + 1);
      }
      *(char *)puVar21 = (char)uVar31;
      puVar33 = (ulong *)((long)puVar21 + 1);
    }
    if (puVar4 < puVar30) goto LAB_10074abaf;
    *(int *)(param_1 + ((ulong)(*(long *)((long)puVar30 + -2) * 0xcf1bbcdcbb) >> 0x1a & 0x3ffc)) =
         ((int)puVar30 + -2) - iVar25;
    uVar20 = *puVar30 * 0xcf1bbcdcbb >> 0x1a & 0x3ffc;
    lVar36 = (ulong)*(uint *)(param_1 + uVar20) - (long)puVar32;
    puVar21 = param_2;
    if (lVar36 < 0) {
      puVar21 = puVar34;
    }
    *(int *)(param_1 + uVar20) = (int)puVar30 - iVar25;
    if (((ulong *)((long)param_2 + lVar36 + 0xffff) < puVar30) ||
       (uVar18 = lVar36 >> 0x3f & uVar28, *(int *)((long)param_2 + uVar18 + lVar36) != (int)*puVar30
       )) goto LAB_10074ab84;
    lVar36 = lVar36 + (long)param_2;
    puVar19 = (ulong *)((long)puVar33 + 1);
    *(char *)puVar33 = '\0';
    puVar40 = puVar30;
  } while( true );
  puVar30 = puVar30 + 1;
  puVar22 = puVar22 + 1;
  if ((ulong *)((long)puVar21 - 7U) <= puVar30) goto LAB_10074a87c;
  goto LAB_10074a860;
code_r0x00010074a94b:
  puVar30 = puVar30 + 1;
  puVar22 = puVar22 + 1;
  if (puVar4 <= puVar30) goto LAB_10074a959;
  goto LAB_10074a940;
code_r0x00010074a7bf:
  puVar21 = puVar21 + 1;
  puVar22 = puVar22 + 1;
  if (puVar4 <= puVar21) goto LAB_10074a7cd;
  goto LAB_10074a7b0;
LAB_10074ab84:
  puVar21 = (ulong *)((long)puVar30 + 2);
  if (puVar4 < puVar21) goto LAB_10074abaf;
  goto LAB_10074a4e4;
}

