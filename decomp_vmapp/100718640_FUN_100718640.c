
int FUN_100718640(int param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined6 uVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  long lVar7;
  int iVar8;
  uint uVar9;
  size_t sVar10;
  long lVar11;
  long lVar12;
  char *pcVar13;
  undefined4 *puVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  uint *puVar18;
  undefined8 uVar19;
  short sVar20;
  int iVar25;
  int iVar26;
  undefined1 auVar21 [16];
  int iVar27;
  short sVar28;
  int iVar29;
  int iVar35;
  int iVar36;
  undefined1 auVar30 [16];
  int iVar37;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  char local_88 [4];
  undefined4 local_84 [19];
  long local_38;
  undefined1 auVar22 [16];
  undefined1 uVar23;
  undefined2 uVar24;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  
  lVar11 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar11;
  if (DAT_1011ccb40 == 0) {
    uVar19 = 0xfffffffa;
  }
  else {
    if ((param_1 - 1U < 7) && (param_2 != 0)) {
      iVar8 = FUN_100742250(DAT_10116db38);
      if (iVar8 != 0) goto LAB_10071890a;
      uVar16 = 0;
      ___snprintf_chk(local_88,0x4f,0,0x50,"%d%s",param_1,param_2);
      lVar7 = DAT_10116db48;
      lVar1 = DAT_10116db48 + 0x7a0;
      if (*(char *)(DAT_10116db48 + 0x7a0) == '\0') {
        ___bzero(lVar1,0x1878);
        *(undefined4 *)(lVar7 + 0x805) = 0x1878;
        _memset_pattern16((void *)(lVar7 + 0x7a1),&DAT_100b4a970,0x60);
        *(undefined1 *)(lVar7 + 0x7a0) = 1;
      }
      sVar10 = _strlen(local_88);
      if (sVar10 != 0) {
        iVar8 = 0;
        iVar25 = 0;
        iVar26 = 0;
        iVar27 = 0;
        iVar29 = 0;
        iVar35 = 0;
        iVar36 = 0;
        iVar37 = 0;
        uVar15 = 0;
        if ((sVar10 & 0xfffffffffffffff8) != 0) {
          puVar14 = local_84;
          uVar17 = sVar10 & 0xfffffffffffffff8;
          iVar8 = 0;
          iVar25 = 0;
          iVar26 = 0;
          iVar27 = 0;
          iVar29 = 0;
          iVar35 = 0;
          iVar36 = 0;
          iVar37 = 0;
          do {
            uVar2 = puVar14[-1];
            uVar23 = (undefined1)((uint)uVar2 >> 0x18);
            uVar24 = CONCAT11(uVar23,uVar23);
            uVar23 = (undefined1)((uint)uVar2 >> 0x10);
            uVar19 = CONCAT35(CONCAT21(uVar24,uVar23),CONCAT14(uVar23,uVar2));
            uVar23 = (undefined1)((uint)uVar2 >> 8);
            uVar4 = CONCAT51(CONCAT41((int)((ulong)uVar19 >> 0x20),uVar23),uVar23);
            sVar20 = CONCAT11((char)uVar2,(char)uVar2);
            uVar15 = CONCAT62(uVar4,sVar20);
            auVar22._8_4_ = 0;
            auVar22._0_8_ = uVar15;
            auVar22._12_2_ = uVar24;
            auVar22._14_2_ = uVar24;
            uVar24 = (undefined2)((ulong)uVar19 >> 0x20);
            auVar21._12_4_ = auVar22._12_4_;
            auVar21._8_2_ = 0;
            auVar21._0_8_ = uVar15;
            auVar21._10_2_ = uVar24;
            auVar34._10_6_ = auVar21._10_6_;
            auVar34._8_2_ = uVar24;
            auVar34._0_8_ = uVar15;
            uVar24 = (undefined2)uVar4;
            auVar5._4_8_ = auVar34._8_8_;
            auVar5._2_2_ = uVar24;
            auVar5._0_2_ = uVar24;
            uVar2 = *puVar14;
            uVar23 = (undefined1)((uint)uVar2 >> 0x18);
            uVar24 = CONCAT11(uVar23,uVar23);
            uVar23 = (undefined1)((uint)uVar2 >> 0x10);
            uVar19 = CONCAT35(CONCAT21(uVar24,uVar23),CONCAT14(uVar23,uVar2));
            uVar23 = (undefined1)((uint)uVar2 >> 8);
            uVar4 = CONCAT51(CONCAT41((int)((ulong)uVar19 >> 0x20),uVar23),uVar23);
            sVar28 = CONCAT11((char)uVar2,(char)uVar2);
            uVar15 = CONCAT62(uVar4,sVar28);
            auVar32._8_4_ = 0;
            auVar32._0_8_ = uVar15;
            auVar32._12_2_ = uVar24;
            auVar32._14_2_ = uVar24;
            uVar24 = (undefined2)((ulong)uVar19 >> 0x20);
            auVar31._12_4_ = auVar32._12_4_;
            auVar31._8_2_ = 0;
            auVar31._0_8_ = uVar15;
            auVar31._10_2_ = uVar24;
            auVar30._10_6_ = auVar31._10_6_;
            auVar30._8_2_ = uVar24;
            auVar30._0_8_ = uVar15;
            uVar24 = (undefined2)uVar4;
            auVar6._4_8_ = auVar30._8_8_;
            auVar6._2_2_ = uVar24;
            auVar6._0_2_ = uVar24;
            iVar8 = ((int)sVar20 >> 8) + iVar8;
            iVar25 = (auVar5._0_4_ >> 0x18) + iVar25;
            iVar26 = (auVar34._8_4_ >> 0x18) + iVar26;
            iVar27 = (auVar21._12_4_ >> 0x18) + iVar27;
            iVar29 = ((int)sVar28 >> 8) + iVar29;
            iVar35 = (auVar6._0_4_ >> 0x18) + iVar35;
            iVar36 = (auVar30._8_4_ >> 0x18) + iVar36;
            iVar37 = (auVar31._12_4_ >> 0x18) + iVar37;
            puVar14 = puVar14 + 2;
            uVar17 = uVar17 - 8;
            uVar15 = sVar10 & 0xfffffffffffffff8;
          } while (uVar17 != 0);
        }
        auVar33._0_4_ = iVar26 + iVar36 + iVar8 + iVar29;
        auVar33._4_4_ = iVar27 + iVar37 + iVar25 + iVar35;
        auVar33._8_4_ = iVar8 + iVar29 + iVar26 + iVar36;
        auVar33._12_4_ = iVar25 + iVar35 + iVar27 + iVar37;
        auVar34 = phaddd(auVar33,auVar33);
        uVar16 = auVar34._0_4_;
        lVar11 = sVar10 - uVar15;
        if (lVar11 != 0) {
          pcVar13 = (char *)((long)local_84 + (uVar15 - 4));
          do {
            uVar16 = uVar16 + (int)*pcVar13;
            pcVar13 = pcVar13 + 1;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        uVar16 = uVar16 % 0x17;
      }
      uVar9 = *(uint *)(lVar7 + 0x7a1 + (ulong)uVar16 * 4);
      puVar18 = (uint *)0x0;
      if (uVar9 != 1) {
        uVar3 = *(uint *)(lVar7 + 0x801);
        puVar18 = (uint *)0x0;
        do {
          uVar15 = (ulong)uVar9;
          if ((ulong)uVar3 <= uVar15 + 10) break;
          sVar10 = (size_t)*(char *)(lVar7 + 0x811 + uVar15);
          puVar18 = (uint *)0x0;
          if ((ulong)uVar3 < uVar15 + 10 + sVar10) break;
          iVar8 = _strncmp((char *)(uVar15 + 0x72 + lVar1),local_88,sVar10);
          if (iVar8 == 0) {
            *(undefined4 *)(uVar15 + 0x6d + lVar1) = param_3;
            iVar8 = 0;
            lVar11 = *(long *)PTR____stack_chk_guard_100ba2320;
            goto LAB_10071895a;
          }
          puVar18 = (uint *)(lVar7 + 0x809 + uVar15);
          uVar9 = *puVar18;
        } while (uVar9 != 1);
      }
      lVar12 = FUN_100719000(lVar1,puVar18,local_88,uVar16);
      lVar11 = *(long *)PTR____stack_chk_guard_100ba2320;
      if (lVar12 == 0) {
        iVar8 = FUN_10071e780();
        if (iVar8 == -0xc) {
          ___bzero(lVar1,0x1878);
          *(undefined4 *)(lVar7 + 0x805) = 0x1878;
          _memset_pattern16((void *)(lVar7 + 0x7a1),&DAT_100b4a970,0x60);
          *(undefined1 *)(lVar7 + 0x7a0) = 1;
          lVar12 = FUN_100719000(lVar1,0,local_88,uVar16);
          if (lVar12 != 0) goto LAB_1007188e6;
          iVar8 = FUN_10071e690(0xfffffffe,0);
        }
        else {
          iVar8 = FUN_10071e780();
        }
      }
      else {
LAB_1007188e6:
        *(undefined4 *)(lVar12 + 4) = param_3;
        iVar8 = 0;
      }
LAB_10071895a:
      FUN_100742310(DAT_10116db38);
      goto LAB_10071890a;
    }
    uVar19 = 0xfffffffd;
  }
  iVar8 = FUN_10071e690(uVar19,0);
LAB_10071890a:
  if (lVar11 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar8;
}

