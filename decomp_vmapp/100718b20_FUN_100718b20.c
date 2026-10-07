
char * FUN_100718b20(undefined4 param_1)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined6 uVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  long lVar10;
  int iVar11;
  size_t sVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  char *pcVar16;
  undefined4 *puVar17;
  ulong uVar18;
  long lVar19;
  short sVar20;
  int iVar28;
  int iVar29;
  undefined1 auVar21 [16];
  int iVar30;
  undefined1 auVar23 [16];
  short sVar31;
  int iVar32;
  int iVar42;
  int iVar43;
  undefined1 auVar33 [16];
  int iVar44;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar41 [16];
  char *pcVar45;
  int local_80;
  char local_78 [4];
  undefined4 local_74 [7];
  char local_58 [32];
  long local_38;
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 uVar26;
  undefined2 uVar27;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  
  lVar19 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar19;
  iVar11 = FUN_100742250(DAT_10116db38);
  pcVar45 = (char *)0x0;
  if (iVar11 == 0) {
    pcVar45 = "VE_TOTAL";
    ___snprintf_chk(local_78,0x1f,0,0x20,"%d%s",param_1,"VE_TOTAL");
    lVar10 = DAT_10116db48;
    lVar1 = DAT_10116db48 + 0x7a0;
    if (*(char *)(DAT_10116db48 + 0x7a0) == '\0') {
      local_80 = 0;
      ___bzero(lVar1,0x1878);
      *(undefined4 *)(lVar10 + 0x805) = 0x1878;
      _memset_pattern16((void *)(lVar10 + 0x7a1),&DAT_100b4a970,0x60);
      *(undefined1 *)(lVar10 + 0x7a0) = 1;
    }
    else {
      sVar12 = _strlen(local_78);
      local_80 = 0;
      uVar15 = 0;
      if (sVar12 != 0) {
        iVar11 = 0;
        iVar28 = 0;
        iVar29 = 0;
        iVar30 = 0;
        iVar32 = 0;
        iVar42 = 0;
        iVar43 = 0;
        iVar44 = 0;
        uVar15 = 0;
        if ((sVar12 & 0xfffffffffffffff8) != 0) {
          puVar17 = local_74;
          uVar18 = sVar12 & 0xfffffffffffffff8;
          iVar11 = 0;
          iVar28 = 0;
          iVar29 = 0;
          iVar30 = 0;
          iVar32 = 0;
          iVar42 = 0;
          iVar43 = 0;
          iVar44 = 0;
          do {
            uVar2 = puVar17[-1];
            uVar26 = (undefined1)((uint)uVar2 >> 0x18);
            uVar27 = CONCAT11(uVar26,uVar26);
            uVar26 = (undefined1)((uint)uVar2 >> 0x10);
            uVar4 = CONCAT35(CONCAT21(uVar27,uVar26),CONCAT14(uVar26,uVar2));
            uVar26 = (undefined1)((uint)uVar2 >> 8);
            uVar5 = CONCAT51(CONCAT41((int)((ulong)uVar4 >> 0x20),uVar26),uVar26);
            sVar20 = CONCAT11((char)uVar2,(char)uVar2);
            uVar15 = CONCAT62(uVar5,sVar20);
            auVar22._8_4_ = 0;
            auVar22._0_8_ = uVar15;
            auVar22._12_2_ = uVar27;
            auVar22._14_2_ = uVar27;
            uVar27 = (undefined2)((ulong)uVar4 >> 0x20);
            auVar21._12_4_ = auVar22._12_4_;
            auVar21._8_2_ = 0;
            auVar21._0_8_ = uVar15;
            auVar21._10_2_ = uVar27;
            auVar37._10_6_ = auVar21._10_6_;
            auVar37._8_2_ = uVar27;
            auVar37._0_8_ = uVar15;
            uVar27 = (undefined2)uVar5;
            auVar6._4_8_ = auVar37._8_8_;
            auVar6._2_2_ = uVar27;
            auVar6._0_2_ = uVar27;
            uVar2 = *puVar17;
            uVar26 = (undefined1)((uint)uVar2 >> 0x18);
            uVar27 = CONCAT11(uVar26,uVar26);
            uVar26 = (undefined1)((uint)uVar2 >> 0x10);
            uVar4 = CONCAT35(CONCAT21(uVar27,uVar26),CONCAT14(uVar26,uVar2));
            uVar26 = (undefined1)((uint)uVar2 >> 8);
            uVar5 = CONCAT51(CONCAT41((int)((ulong)uVar4 >> 0x20),uVar26),uVar26);
            sVar31 = CONCAT11((char)uVar2,(char)uVar2);
            uVar15 = CONCAT62(uVar5,sVar31);
            auVar35._8_4_ = 0;
            auVar35._0_8_ = uVar15;
            auVar35._12_2_ = uVar27;
            auVar35._14_2_ = uVar27;
            uVar27 = (undefined2)((ulong)uVar4 >> 0x20);
            auVar34._12_4_ = auVar35._12_4_;
            auVar34._8_2_ = 0;
            auVar34._0_8_ = uVar15;
            auVar34._10_2_ = uVar27;
            auVar33._10_6_ = auVar34._10_6_;
            auVar33._8_2_ = uVar27;
            auVar33._0_8_ = uVar15;
            uVar27 = (undefined2)uVar5;
            auVar7._4_8_ = auVar33._8_8_;
            auVar7._2_2_ = uVar27;
            auVar7._0_2_ = uVar27;
            iVar11 = ((int)sVar20 >> 8) + iVar11;
            iVar28 = (auVar6._0_4_ >> 0x18) + iVar28;
            iVar29 = (auVar37._8_4_ >> 0x18) + iVar29;
            iVar30 = (auVar21._12_4_ >> 0x18) + iVar30;
            iVar32 = ((int)sVar31 >> 8) + iVar32;
            iVar42 = (auVar7._0_4_ >> 0x18) + iVar42;
            iVar43 = (auVar33._8_4_ >> 0x18) + iVar43;
            iVar44 = (auVar34._12_4_ >> 0x18) + iVar44;
            puVar17 = puVar17 + 2;
            uVar18 = uVar18 - 8;
            uVar15 = sVar12 & 0xfffffffffffffff8;
          } while (uVar18 != 0);
        }
        auVar36._0_4_ = iVar29 + iVar43 + iVar11 + iVar32;
        auVar36._4_4_ = iVar30 + iVar44 + iVar28 + iVar42;
        auVar36._8_4_ = iVar11 + iVar32 + iVar29 + iVar43;
        auVar36._12_4_ = iVar28 + iVar42 + iVar30 + iVar44;
        auVar37 = phaddd(auVar36,auVar36);
        uVar14 = auVar37._0_4_;
        lVar13 = sVar12 - uVar15;
        if (lVar13 != 0) {
          pcVar16 = (char *)((long)local_74 + (uVar15 - 4));
          do {
            uVar14 = uVar14 + (int)*pcVar16;
            pcVar16 = pcVar16 + 1;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
        }
        uVar15 = (ulong)(uVar14 % 0x17);
      }
      uVar14 = *(uint *)(lVar10 + 0x7a1 + uVar15 * 4);
      if (uVar14 != 1) {
        uVar3 = *(uint *)(lVar10 + 0x801);
        do {
          uVar15 = (ulong)uVar14;
          if (((ulong)uVar3 <= uVar15 + 10) ||
             (sVar12 = (size_t)*(char *)(uVar15 + 0x71 + lVar1), (ulong)uVar3 < uVar15 + 10 + sVar12
             )) break;
          iVar11 = _strncmp((char *)(uVar15 + 0x72 + lVar1),local_78,sVar12);
          if (iVar11 == 0) {
            local_80 = 0;
            ___snprintf_chk(local_58,0x20,0,0x20,"%d",*(undefined4 *)(uVar15 + 0x6d + lVar1),pcVar45
                           );
            pcVar45 = _strdup(local_58);
            lVar19 = *(long *)PTR____stack_chk_guard_100ba2320;
            if (pcVar45 != (char *)0x0) {
              local_80 = _atoi(pcVar45);
              _free(pcVar45);
            }
            goto LAB_100718d1e;
          }
          uVar14 = *(uint *)(lVar10 + 0x809 + uVar15);
        } while (uVar14 != 1);
        lVar19 = *(long *)PTR____stack_chk_guard_100ba2320;
      }
    }
LAB_100718d1e:
    pcVar16 = "nr_vms";
    ___snprintf_chk(local_78,0x1f,0,0x20,"%d%s",param_1,"nr_vms");
    lVar10 = DAT_10116db48;
    lVar1 = DAT_10116db48 + 0x7a0;
    if (*(char *)(DAT_10116db48 + 0x7a0) == '\0') {
      ___bzero(lVar1,0x1878);
      *(undefined4 *)(lVar10 + 0x805) = 0x1878;
      _memset_pattern16((void *)(lVar10 + 0x7a1),&DAT_100b4a970,0x60);
      *(undefined1 *)(lVar10 + 0x7a0) = 1;
    }
    else {
      sVar12 = _strlen(local_78);
      uVar15 = 0;
      if (sVar12 != 0) {
        iVar11 = 0;
        iVar28 = 0;
        iVar29 = 0;
        iVar30 = 0;
        iVar32 = 0;
        iVar42 = 0;
        iVar43 = 0;
        iVar44 = 0;
        uVar15 = 0;
        if ((sVar12 & 0xfffffffffffffff8) != 0) {
          puVar17 = local_74;
          uVar18 = sVar12 & 0xfffffffffffffff8;
          iVar11 = 0;
          iVar28 = 0;
          iVar29 = 0;
          iVar30 = 0;
          iVar32 = 0;
          iVar42 = 0;
          iVar43 = 0;
          iVar44 = 0;
          do {
            uVar2 = puVar17[-1];
            uVar26 = (undefined1)((uint)uVar2 >> 0x18);
            uVar27 = CONCAT11(uVar26,uVar26);
            uVar26 = (undefined1)((uint)uVar2 >> 0x10);
            uVar4 = CONCAT35(CONCAT21(uVar27,uVar26),CONCAT14(uVar26,uVar2));
            uVar26 = (undefined1)((uint)uVar2 >> 8);
            uVar5 = CONCAT51(CONCAT41((int)((ulong)uVar4 >> 0x20),uVar26),uVar26);
            sVar20 = CONCAT11((char)uVar2,(char)uVar2);
            uVar15 = CONCAT62(uVar5,sVar20);
            auVar25._8_4_ = 0;
            auVar25._0_8_ = uVar15;
            auVar25._12_2_ = uVar27;
            auVar25._14_2_ = uVar27;
            uVar27 = (undefined2)((ulong)uVar4 >> 0x20);
            auVar24._12_4_ = auVar25._12_4_;
            auVar24._8_2_ = 0;
            auVar24._0_8_ = uVar15;
            auVar24._10_2_ = uVar27;
            auVar23._10_6_ = auVar24._10_6_;
            auVar23._8_2_ = uVar27;
            auVar23._0_8_ = uVar15;
            uVar27 = (undefined2)uVar5;
            auVar8._4_8_ = auVar23._8_8_;
            auVar8._2_2_ = uVar27;
            auVar8._0_2_ = uVar27;
            uVar2 = *puVar17;
            uVar26 = (undefined1)((uint)uVar2 >> 0x18);
            uVar27 = CONCAT11(uVar26,uVar26);
            uVar26 = (undefined1)((uint)uVar2 >> 0x10);
            uVar4 = CONCAT35(CONCAT21(uVar27,uVar26),CONCAT14(uVar26,uVar2));
            uVar26 = (undefined1)((uint)uVar2 >> 8);
            uVar5 = CONCAT51(CONCAT41((int)((ulong)uVar4 >> 0x20),uVar26),uVar26);
            sVar31 = CONCAT11((char)uVar2,(char)uVar2);
            uVar15 = CONCAT62(uVar5,sVar31);
            auVar40._8_4_ = 0;
            auVar40._0_8_ = uVar15;
            auVar40._12_2_ = uVar27;
            auVar40._14_2_ = uVar27;
            uVar27 = (undefined2)((ulong)uVar4 >> 0x20);
            auVar39._12_4_ = auVar40._12_4_;
            auVar39._8_2_ = 0;
            auVar39._0_8_ = uVar15;
            auVar39._10_2_ = uVar27;
            auVar38._10_6_ = auVar39._10_6_;
            auVar38._8_2_ = uVar27;
            auVar38._0_8_ = uVar15;
            uVar27 = (undefined2)uVar5;
            auVar9._4_8_ = auVar38._8_8_;
            auVar9._2_2_ = uVar27;
            auVar9._0_2_ = uVar27;
            iVar11 = ((int)sVar20 >> 8) + iVar11;
            iVar28 = (auVar8._0_4_ >> 0x18) + iVar28;
            iVar29 = (auVar23._8_4_ >> 0x18) + iVar29;
            iVar30 = (auVar24._12_4_ >> 0x18) + iVar30;
            iVar32 = ((int)sVar31 >> 8) + iVar32;
            iVar42 = (auVar9._0_4_ >> 0x18) + iVar42;
            iVar43 = (auVar38._8_4_ >> 0x18) + iVar43;
            iVar44 = (auVar39._12_4_ >> 0x18) + iVar44;
            puVar17 = puVar17 + 2;
            uVar18 = uVar18 - 8;
            uVar15 = sVar12 & 0xfffffffffffffff8;
          } while (uVar18 != 0);
        }
        auVar41._0_4_ = iVar29 + iVar43 + iVar11 + iVar32;
        auVar41._4_4_ = iVar30 + iVar44 + iVar28 + iVar42;
        auVar41._8_4_ = iVar11 + iVar32 + iVar29 + iVar43;
        auVar41._12_4_ = iVar28 + iVar42 + iVar30 + iVar44;
        auVar37 = phaddd(auVar41,auVar41);
        uVar14 = auVar37._0_4_;
        lVar13 = sVar12 - uVar15;
        if (lVar13 != 0) {
          pcVar45 = (char *)((long)local_74 + (uVar15 - 4));
          do {
            uVar14 = uVar14 + (int)*pcVar45;
            pcVar45 = pcVar45 + 1;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
        }
        uVar15 = (ulong)(uVar14 % 0x17);
      }
      uVar14 = *(uint *)(lVar10 + 0x7a1 + uVar15 * 4);
      if (uVar14 != 1) {
        uVar3 = *(uint *)(lVar10 + 0x801);
        do {
          uVar15 = (ulong)uVar14;
          if (((ulong)uVar3 <= uVar15 + 10) ||
             (sVar12 = (size_t)*(char *)(uVar15 + 0x71 + lVar1), (ulong)uVar3 < uVar15 + 10 + sVar12
             )) break;
          iVar11 = _strncmp((char *)(uVar15 + 0x72 + lVar1),local_78,sVar12);
          if (iVar11 == 0) {
            ___snprintf_chk(local_58,0x20,0,0x20,"%d",*(undefined4 *)(uVar15 + 0x6d + lVar1),pcVar16
                           );
            pcVar45 = _strdup(local_58);
            if (pcVar45 != (char *)0x0) {
              iVar11 = _atoi(pcVar45);
              local_80 = iVar11 + local_80;
              _free(pcVar45);
            }
            break;
          }
          uVar14 = *(uint *)(lVar10 + 0x809 + uVar15);
        } while (uVar14 != 1);
      }
    }
    FUN_100742310(DAT_10116db38);
    pcVar45 = (char *)0x0;
    if (local_80 != 0) {
      ___snprintf_chk(local_58,0x20,0,0x20,"%d",local_80,pcVar16);
      pcVar45 = _strdup(local_58);
    }
  }
  if (lVar19 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return pcVar45;
}

