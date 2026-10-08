
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100c742e0(long param_1,int param_2,char *param_3,int param_4)

{
  long lVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  size_t sVar7;
  char *pcVar8;
  ulong uVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  char *pcVar13;
  undefined8 uVar14;
  long lVar15;
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  long lVar18;
  byte *pbVar19;
  undefined8 uVar20;
  int iVar21;
  int iVar22;
  ulong uVar23;
  int iVar24;
  uint uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  int local_84;
  int local_6c;
  long local_60;
  undefined1 local_58 [32];
  long local_38;
  
  lVar11 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar11;
  iVar6 = 0;
  if (param_4 != 0) {
    if (param_4 == -1) {
      sVar7 = _strlen(param_3);
      param_4 = (int)sVar7;
    }
    if ((byte)(*param_3 - 0x30U) < 3) {
      if (1 < param_4) {
        iVar22 = param_4 + -2;
        iVar6 = 0;
        if (iVar22 != 0 && 1 < param_4) {
          lVar11 = (long)*param_3 + -0x30;
          puVar10 = local_58;
          local_6c = (int)param_3[1];
          param_3 = param_3 + 2;
          iVar3 = (int)lVar11;
          local_84 = 0x18;
          local_60 = 0;
          auVar27 = _DAT_101dae8b0;
          auVar28 = _DAT_101dae6c0;
          iVar21 = 0;
LAB_100c747d0:
          pcVar13 = param_3;
          if (local_6c == 0x20) {
            uVar23 = 0;
LAB_100c74410:
            do {
              param_3 = pcVar13;
              bVar4 = false;
              if (iVar22 < 1) goto LAB_100c74566;
              cVar2 = *param_3;
              local_6c = (int)cVar2;
              if ((local_6c == 0x20) || (cVar2 == '.')) {
                pcVar13 = param_3 + 1;
                goto LAB_100c74563;
              }
              if (9 < (byte)(cVar2 - 0x30U)) goto LAB_100c74853;
              iVar22 = iVar22 + -1;
              uVar23 = (long)local_6c + -0x30 + uVar23 * 10;
              pcVar13 = param_3 + 1;
            } while (uVar23 < 0x1999999999999991);
            bVar4 = false;
            pcVar8 = param_3;
            param_3 = param_3 + 1;
            while (0 < iVar22) {
              pcVar13 = pcVar8 + 2;
              cVar2 = *param_3;
              local_6c = (int)cVar2;
              if ((local_6c == 0x20) || (cVar2 == '.')) goto LAB_100c74563;
              if (9 < (byte)(cVar2 - 0x30U)) goto LAB_100c74853;
              if (!bVar4) {
                if ((local_60 == 0) && (local_60 = FUN_100c26720(), local_60 == 0)) {
                  local_60 = 0;
                  goto LAB_100c748b9;
                }
                iVar6 = FUN_100c26db0(local_60,uVar23);
                bVar4 = true;
                if (iVar6 == 0) goto LAB_100c748b9;
              }
              iVar6 = FUN_100c2bb00(local_60,10);
              if (iVar6 == 0) goto LAB_100c748b9;
              iVar22 = iVar22 + -1;
              iVar6 = FUN_100c2b920(local_60,(long)local_6c + -0x30);
              pcVar8 = param_3;
              param_3 = pcVar13;
              auVar27 = _DAT_101dae8b0;
              auVar28 = _DAT_101dae6c0;
              if (iVar6 == 0) goto LAB_100c748b9;
            }
            goto LAB_100c74566;
          }
          uVar23 = 0;
          if (local_6c == 0x2e) goto LAB_100c74410;
          uVar14 = 0x83;
          uVar20 = 0x7a;
          goto LAB_100c748b0;
        }
        goto LAB_100c74382;
      }
      FUN_100c62ee0(0xd,100,0x8a,"a_object.c",0x71);
    }
    else {
      FUN_100c62ee0(0xd,100,0x7a,"a_object.c",0x6c);
    }
LAB_100c74380:
    iVar6 = 0;
  }
  goto LAB_100c74382;
LAB_100c74563:
  param_3 = pcVar13;
  iVar22 = iVar22 + -1;
LAB_100c74566:
  if (iVar21 == 0) {
    if ((iVar3 < 2) && (0x27 < uVar23)) {
      uVar14 = 0x93;
      uVar20 = 0x9b;
      goto LAB_100c748b0;
    }
    if (!bVar4) {
      uVar23 = uVar23 + lVar11 * 0x28;
      uVar9 = 0;
      goto LAB_100c746b0;
    }
    iVar6 = FUN_100c2b920(local_60,(long)(iVar3 * 0x28));
    if (iVar6 != 0) goto LAB_100c745c9;
    goto LAB_100c748b9;
  }
  uVar9 = 0;
  if (!bVar4) {
LAB_100c746b0:
    do {
      puVar10[uVar9] = (byte)uVar23 & 0x7f;
      uVar9 = uVar9 + 1;
      uVar23 = uVar23 >> 7;
    } while (uVar23 != 0);
LAB_100c746c4:
    iVar24 = (int)uVar9;
    iVar6 = iVar24 + iVar21;
    if (param_1 == 0) goto LAB_100c747b7;
    if (param_2 < iVar6) {
      FUN_100c62ee0(0xd,100,0x6b,"a_object.c",0xbf);
      goto LAB_100c748b9;
    }
    if (1 < iVar24) {
      lVar12 = (long)iVar24;
      lVar18 = (long)iVar21;
      if (iVar24 == 1) {
LAB_100c7477b:
        pbVar19 = (byte *)(lVar18 + param_1);
        do {
          lVar18 = lVar12 + -1;
          lVar12 = lVar12 + -1;
          *pbVar19 = puVar10[lVar18] | 0x80;
          pbVar19 = pbVar19 + 1;
        } while (1 < lVar12);
      }
      else {
        lVar15 = (long)iVar24;
        uVar23 = lVar15 - 1U & 0xfffffffffffffff0;
        lVar1 = lVar15 + -1 + lVar18;
        if ((uVar23 != 0) &&
           ((puVar10 + 1 < (undefined1 *)(param_1 + lVar18) ||
            ((undefined1 *)(param_1 + -2 + lVar15 + lVar18) < puVar10 + lVar15 + -1)))) {
          lVar18 = lVar18 + (lVar15 - 1U & 0xfffffffffffffff0);
          lVar12 = lVar12 - uVar23;
          pauVar17 = (undefined1 (*) [16])(iVar21 + param_1);
          pauVar16 = (undefined1 (*) [16])(puVar10 + lVar15 + -0x10);
          do {
            auVar26 = pshufb(*pauVar16 | auVar27,auVar28);
            *pauVar17 = auVar26;
            pauVar17 = pauVar17 + 1;
            pauVar16 = pauVar16 + -1;
            uVar23 = uVar23 - 0x10;
          } while (uVar23 != 0);
        }
        if (lVar1 != lVar18) goto LAB_100c7477b;
      }
      iVar21 = iVar21 + -1 + iVar24;
    }
    iVar6 = iVar21 + 1;
    *(undefined1 *)(param_1 + iVar21) = *puVar10;
LAB_100c747b7:
    iVar21 = iVar6;
    if (iVar22 < 1) goto LAB_100c74820;
    goto LAB_100c747d0;
  }
LAB_100c745c9:
  iVar6 = FUN_100c26610(local_60);
  iVar24 = (int)((ulong)((long)(iVar6 + 6) * -0x6db6db6d) >> 0x20) + 6 + iVar6;
  uVar25 = (iVar24 >> 2) - (iVar24 >> 0x1f);
  if ((int)uVar25 <= local_84) {
LAB_100c7463b:
    uVar9 = 0;
    auVar27 = _DAT_101dae8b0;
    auVar28 = _DAT_101dae6c0;
    if (0xc < iVar6 + 0xcU) {
      lVar12 = 0;
      do {
        uVar5 = FUN_100c2b840(local_60,0x80);
        puVar10[lVar12] = uVar5;
        lVar12 = lVar12 + 1;
      } while (uVar25 != (uint)lVar12);
      uVar9 = (ulong)uVar25;
      auVar27 = _DAT_101dae8b0;
      auVar28 = _DAT_101dae6c0;
    }
    goto LAB_100c746c4;
  }
  if (puVar10 != local_58) {
    FUN_100bf3910(puVar10);
  }
  local_84 = uVar25 + 0x20;
  puVar10 = (undefined1 *)FUN_100bf3540(local_84,"a_object.c",0xad);
  if (puVar10 != (undefined1 *)0x0) goto LAB_100c7463b;
  puVar10 = (undefined1 *)0x0;
LAB_100c748cb:
  FUN_100bf3910(puVar10);
LAB_100c748d3:
  iVar6 = 0;
  lVar11 = *(long *)PTR____stack_chk_guard_1021e1840;
  if (local_60 == 0) goto LAB_100c74382;
  FUN_100c266b0(local_60);
  goto LAB_100c74380;
LAB_100c74853:
  uVar14 = 0x82;
  uVar20 = 0x87;
LAB_100c748b0:
  FUN_100c62ee0(0xd,100,uVar14,"a_object.c",uVar20);
LAB_100c748b9:
  if (puVar10 == local_58) goto LAB_100c748d3;
  goto LAB_100c748cb;
LAB_100c74820:
  if (puVar10 != local_58) {
    FUN_100bf3910(puVar10);
  }
  if (local_60 != 0) {
    FUN_100c266b0(local_60);
  }
  lVar11 = *(long *)PTR____stack_chk_guard_1021e1840;
LAB_100c74382:
  if (lVar11 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}

