
char * FUN_100718340(int param_1,char *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined6 uVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  long lVar8;
  int iVar9;
  size_t sVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  undefined4 *puVar15;
  char *pcVar16;
  ulong uVar17;
  short sVar18;
  int iVar23;
  int iVar24;
  undefined1 auVar19 [16];
  int iVar25;
  short sVar26;
  int iVar27;
  int iVar33;
  int iVar34;
  undefined1 auVar28 [16];
  int iVar35;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  char local_a8 [4];
  undefined4 local_a4 [19];
  char local_58 [32];
  long local_38;
  undefined1 auVar20 [16];
  undefined1 uVar21;
  undefined2 uVar22;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  lVar3 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar3;
  if ((param_1 - 1U < 7) && (param_2 != (char *)0x0)) {
    iVar9 = _strcasecmp("NR_CPUS",param_2);
    lVar13 = 0;
    if (iVar9 != 0) {
      iVar9 = _strcasecmp("CPU_TOTAL",param_2);
      lVar13 = 1;
      if (iVar9 != 0) {
        iVar9 = _strcasecmp("servers_total",param_2);
        lVar13 = 2;
        if (iVar9 != 0) {
          iVar9 = FUN_100742250(DAT_10116db38);
          pcVar16 = (char *)0x0;
          if (iVar9 == 0) {
            ___snprintf_chk(local_a8,0x4f,0,0x50,"%d%s",param_1,param_2);
            lVar8 = DAT_10116db48;
            lVar13 = DAT_10116db48 + 0x7a0;
            if (*(char *)(DAT_10116db48 + 0x7a0) == '\0') {
              ___bzero(lVar13,0x1878);
              *(undefined4 *)(lVar8 + 0x805) = 0x1878;
              _memset_pattern16((void *)(lVar8 + 0x7a1),&DAT_100b4a970,0x60);
              *(undefined1 *)(lVar8 + 0x7a0) = 1;
              pcVar16 = (char *)0x0;
            }
            else {
              sVar10 = _strlen(local_a8);
              uVar14 = 0;
              if (sVar10 != 0) {
                iVar9 = 0;
                iVar23 = 0;
                iVar24 = 0;
                iVar25 = 0;
                iVar27 = 0;
                iVar33 = 0;
                iVar34 = 0;
                iVar35 = 0;
                uVar14 = 0;
                if ((sVar10 & 0xfffffffffffffff8) != 0) {
                  puVar15 = local_a4;
                  uVar17 = sVar10 & 0xfffffffffffffff8;
                  iVar9 = 0;
                  iVar23 = 0;
                  iVar24 = 0;
                  iVar25 = 0;
                  iVar27 = 0;
                  iVar33 = 0;
                  iVar34 = 0;
                  iVar35 = 0;
                  do {
                    uVar1 = puVar15[-1];
                    uVar21 = (undefined1)((uint)uVar1 >> 0x18);
                    uVar22 = CONCAT11(uVar21,uVar21);
                    uVar21 = (undefined1)((uint)uVar1 >> 0x10);
                    uVar4 = CONCAT35(CONCAT21(uVar22,uVar21),CONCAT14(uVar21,uVar1));
                    uVar21 = (undefined1)((uint)uVar1 >> 8);
                    uVar5 = CONCAT51(CONCAT41((int)((ulong)uVar4 >> 0x20),uVar21),uVar21);
                    sVar18 = CONCAT11((char)uVar1,(char)uVar1);
                    uVar14 = CONCAT62(uVar5,sVar18);
                    auVar20._8_4_ = 0;
                    auVar20._0_8_ = uVar14;
                    auVar20._12_2_ = uVar22;
                    auVar20._14_2_ = uVar22;
                    uVar22 = (undefined2)((ulong)uVar4 >> 0x20);
                    auVar19._12_4_ = auVar20._12_4_;
                    auVar19._8_2_ = 0;
                    auVar19._0_8_ = uVar14;
                    auVar19._10_2_ = uVar22;
                    auVar32._10_6_ = auVar19._10_6_;
                    auVar32._8_2_ = uVar22;
                    auVar32._0_8_ = uVar14;
                    uVar22 = (undefined2)uVar5;
                    auVar6._4_8_ = auVar32._8_8_;
                    auVar6._2_2_ = uVar22;
                    auVar6._0_2_ = uVar22;
                    uVar1 = *puVar15;
                    uVar21 = (undefined1)((uint)uVar1 >> 0x18);
                    uVar22 = CONCAT11(uVar21,uVar21);
                    uVar21 = (undefined1)((uint)uVar1 >> 0x10);
                    uVar4 = CONCAT35(CONCAT21(uVar22,uVar21),CONCAT14(uVar21,uVar1));
                    uVar21 = (undefined1)((uint)uVar1 >> 8);
                    uVar5 = CONCAT51(CONCAT41((int)((ulong)uVar4 >> 0x20),uVar21),uVar21);
                    sVar26 = CONCAT11((char)uVar1,(char)uVar1);
                    uVar14 = CONCAT62(uVar5,sVar26);
                    auVar30._8_4_ = 0;
                    auVar30._0_8_ = uVar14;
                    auVar30._12_2_ = uVar22;
                    auVar30._14_2_ = uVar22;
                    uVar22 = (undefined2)((ulong)uVar4 >> 0x20);
                    auVar29._12_4_ = auVar30._12_4_;
                    auVar29._8_2_ = 0;
                    auVar29._0_8_ = uVar14;
                    auVar29._10_2_ = uVar22;
                    auVar28._10_6_ = auVar29._10_6_;
                    auVar28._8_2_ = uVar22;
                    auVar28._0_8_ = uVar14;
                    uVar22 = (undefined2)uVar5;
                    auVar7._4_8_ = auVar28._8_8_;
                    auVar7._2_2_ = uVar22;
                    auVar7._0_2_ = uVar22;
                    iVar9 = ((int)sVar18 >> 8) + iVar9;
                    iVar23 = (auVar6._0_4_ >> 0x18) + iVar23;
                    iVar24 = (auVar32._8_4_ >> 0x18) + iVar24;
                    iVar25 = (auVar19._12_4_ >> 0x18) + iVar25;
                    iVar27 = ((int)sVar26 >> 8) + iVar27;
                    iVar33 = (auVar7._0_4_ >> 0x18) + iVar33;
                    iVar34 = (auVar28._8_4_ >> 0x18) + iVar34;
                    iVar35 = (auVar29._12_4_ >> 0x18) + iVar35;
                    puVar15 = puVar15 + 2;
                    uVar17 = uVar17 - 8;
                    uVar14 = sVar10 & 0xfffffffffffffff8;
                  } while (uVar17 != 0);
                }
                auVar31._0_4_ = iVar24 + iVar34 + iVar9 + iVar27;
                auVar31._4_4_ = iVar25 + iVar35 + iVar23 + iVar33;
                auVar31._8_4_ = iVar9 + iVar27 + iVar24 + iVar34;
                auVar31._12_4_ = iVar23 + iVar33 + iVar25 + iVar35;
                auVar32 = phaddd(auVar31,auVar31);
                uVar12 = auVar32._0_4_;
                lVar11 = sVar10 - uVar14;
                if (lVar11 != 0) {
                  pcVar16 = (char *)((long)local_a4 + (uVar14 - 4));
                  do {
                    uVar12 = uVar12 + (int)*pcVar16;
                    pcVar16 = pcVar16 + 1;
                    lVar11 = lVar11 + -1;
                  } while (lVar11 != 0);
                }
                uVar14 = (ulong)(uVar12 % 0x17);
              }
              uVar12 = *(uint *)(lVar8 + 0x7a1 + uVar14 * 4);
              pcVar16 = (char *)0x0;
              if (uVar12 != 1) {
                uVar2 = *(uint *)(lVar8 + 0x801);
                do {
                  uVar14 = (ulong)uVar12;
                  pcVar16 = (char *)0x0;
                  if (((ulong)uVar2 <= uVar14 + 10) ||
                     (sVar10 = (size_t)*(char *)(uVar14 + 0x71 + lVar13),
                     (ulong)uVar2 < uVar14 + 10 + sVar10)) break;
                  iVar9 = _strncmp((char *)(uVar14 + 0x72 + lVar13),local_a8,sVar10);
                  if (iVar9 == 0) {
                    ___snprintf_chk(local_58,0x20,0,0x20,"%d",
                                    *(undefined4 *)(uVar14 + 0x6d + lVar13),param_2);
                    pcVar16 = _strdup(local_58);
                    break;
                  }
                  uVar12 = *(uint *)(lVar8 + 0x809 + uVar14);
                  pcVar16 = (char *)0x0;
                } while (uVar12 != 1);
              }
            }
            FUN_100742310(DAT_10116db38);
          }
          goto LAB_10071858d;
        }
      }
    }
    pcVar16 = (char *)(*(code *)(&PTR_FUN_100bce358)[lVar13 * 2])(param_1);
  }
  else {
    pcVar16 = (char *)0x0;
    FUN_10071e690(0xfffffffd,0);
  }
LAB_10071858d:
  if (lVar3 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return pcVar16;
}

