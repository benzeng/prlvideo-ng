
void FUN_1004bdc30(long *param_1,ulong param_2,undefined4 param_3,undefined4 param_4,long param_5,
                  long param_6,int param_7,uint param_8)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  double dVar5;
  code *pcVar6;
  long *plVar7;
  char cVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  double *pdVar12;
  ulong uVar13;
  uint *puVar14;
  long lVar15;
  undefined8 uVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  ulong uVar23;
  uint uVar24;
  double dVar25;
  long lVar26;
  undefined8 uStack_160;
  int aiStack_158 [2];
  long alStack_150 [2];
  uint auStack_140 [4];
  undefined8 uStack_130;
  undefined1 auStack_128 [24];
  double local_110;
  uint local_104;
  long *local_100;
  undefined8 local_f8;
  ulong local_f0;
  ulong local_e8;
  long local_e0;
  undefined4 local_d4;
  long local_d0;
  long local_c8;
  undefined4 local_bc;
  long local_b8;
  undefined8 local_b0;
  long local_a8;
  long local_a0;
  long *local_98;
  long local_90;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_48;
  long local_40;
  long local_38;
  
  lVar26 = (long)param_7;
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_b0 = DAT_1011c4a88;
  lVar18 = (param_2 & 0xffffffff) * 0x8f0;
  uVar24 = *(uint *)(*param_1 + 0x980 + lVar18);
  uVar21 = *(uint *)(*param_1 + 0x984 + lVar18);
  local_40 = 0;
  local_bc = param_3;
  local_b8 = param_5;
  local_a8 = param_6;
  if (*(char *)((long)param_1 + 0x24a) != '\0') {
    if (0 < param_7) {
      piVar11 = (int *)(param_6 + 0xc);
      pdVar12 = &local_110 + lVar26 * -4;
      iVar20 = param_7;
      do {
        iVar22 = piVar11[-3];
        pdVar12[-3] = (double)(int)(iVar22 + uVar24);
        iVar1 = piVar11[-2];
        pdVar12[-2] = (double)(int)(iVar1 + uVar21);
        pdVar12[-1] = (double)(piVar11[-1] - iVar22);
        *pdVar12 = (double)(*piVar11 - iVar1);
        piVar11 = piVar11 + 4;
        pdVar12 = pdVar12 + 4;
        iVar20 = iVar20 + -1;
      } while (iVar20 != 0);
    }
    (&uStack_130)[lVar26 * -4] = 0x1004bdd47;
    (*DAT_1011ccc58)(auStack_128 + lVar26 * -0x20,param_7,&local_40);
    if (local_40 != 0) {
      (&uStack_130)[lVar26 * -4] = 0x1004bdd69;
      cVar8 = (*DAT_1011ccc60)();
      lVar18 = local_40;
      if (cVar8 == '\0') {
        local_48 = 0;
        local_f0 = (ulong)uVar21;
        local_e8 = (ulong)uVar24;
        local_e0 = lVar26;
        local_d4 = param_4;
        (&uStack_130)[lVar26 * -4] = 0x1004bddb0;
        (*DAT_1011ccc90)(lVar18,&local_48);
        pcVar6 = DAT_1011ccd98;
        lVar18 = param_1[2];
        lVar15 = *(long *)(lVar18 + 0x1018);
        if (lVar15 != 0) {
          (&uStack_130)[lVar26 * -4] = 0x1004bdddb;
          uVar9 = (*DAT_1011ccc38)();
          uVar2 = *(undefined4 *)(lVar15 + 8);
          (&uStack_130)[lVar26 * -4] = 0x1004bdde7;
          (*pcVar6)(uVar9,uVar2,local_68);
          dVar25 = (double)param_1[0x48] * (double)local_58._0_8_;
          dVar5 = (double)param_1[0x48] * (double)local_58._8_8_;
          local_58._8_4_ = SUB84(dVar5,0);
          local_58._0_8_ = dVar25;
          local_58._12_4_ = (int)((ulong)dVar5 >> 0x20);
          if (*(char *)(lVar15 + 0x20) != '\0') {
            if (*(char *)(lVar15 + 0x21) != '\0') {
              (&uStack_130)[lVar26 * -4] = 0x1004bde29;
              FUN_1004bcf20(param_1,lVar15,(int)dVar25,(int)dVar5);
            }
            if (*(long *)(lVar15 + 0x18) != 0) {
              lVar19 = *param_1;
              (&uStack_130)[lVar26 * -4] = 0x1004bde3f;
              FUN_1002adb30(lVar19);
              local_78 = *(int *)(lVar15 + 0x58) - (int)local_e8;
              local_74 = *(int *)(lVar15 + 0x5c) - (int)local_f0;
              local_70 = *(int *)(lVar15 + 0x60) - (int)local_e8;
              local_6c = *(int *)(lVar15 + 100) - (int)local_f0;
              lVar19 = *param_1;
              auStack_140[lVar26 * -8 + 2] = param_8;
              auStack_140[lVar26 * -8] = (uint)local_e0;
              alStack_150[lVar26 * -4 + 1] = local_a8;
              alStack_150[lVar26 * -4] = local_b8;
              (&uStack_130)[lVar26 * -4] = 0;
              aiStack_158[lVar26 * -8] = 0;
              uVar9 = local_bc;
              uVar2 = local_d4;
              (&uStack_160)[lVar26 * -4] = 0x1004bdeca;
              FUN_1002b0580(lVar19,uVar9,uVar2,0x2600,&local_78,0);
              if ((param_8 & 2) != 0) {
                lVar19 = *param_1;
                uVar16 = *(undefined8 *)(lVar15 + 0x18);
                (&uStack_130)[lVar26 * -4] = 0x1004bdee1;
                FUN_1002b0fc0(lVar19,uVar16);
              }
              if (*(char *)(lVar15 + 0x21) != '\0') {
                (&uStack_130)[lVar26 * -4] = 0x1004bdef0;
                uVar10 = (*DAT_1011ccc38)();
                uVar2 = *(undefined4 *)(lVar15 + 8);
                uVar9 = *(undefined4 *)(lVar15 + 0xc);
                (&uStack_130)[lVar26 * -4] = 0x1004bdf0d;
                (*DAT_1011ccd18)(uVar10,uVar2,uVar9,1,0);
                if (*(int *)(lVar15 + 0x10) != 0) {
                  uVar2 = *(undefined4 *)(lVar15 + 8);
                  (&uStack_130)[lVar26 * -4] = 0x1004bdf23;
                  (*DAT_1011ccce0)(uVar10,uVar2);
                  *(undefined4 *)(lVar15 + 0x10) = 0;
                }
                *(undefined1 *)(lVar15 + 0x21) = 0;
              }
            }
          }
        }
        local_d0 = lVar18;
        local_c8 = lVar15;
        if (*(int *)(lVar18 + 0x1028) != 0) {
          local_98 = param_1 + 0x45;
          local_104 = param_8 & 2;
          dVar25 = 0.0;
          do {
            lVar15 = param_1[2];
            uVar2 = *(undefined4 *)(*(long *)(lVar18 + 0x1020) + (long)dVar25 * 4);
            (&uStack_130)[lVar26 * -4] = 0x1004be366;
            lVar15 = FUN_1004b9ef0(lVar15,uVar2);
            if ((lVar15 != 0) &&
               ((((*(uint *)(lVar15 + 0x48) & 0x20) == 0 || (*(long *)(lVar15 + 0x70) == 0)) &&
                ((*(uint *)(lVar15 + 0x48) & 0x41) == 0)))) {
              if ((((*(uint *)(lVar15 + 0x28) | 2) == 2) && (*(char *)(lVar15 + 0x34) != '\0')) &&
                 ((local_c8 == 0 || (*(char *)(lVar15 + 0x24) != '\0')))) {
                if (*(char *)(lVar15 + 0x23) != '\0') {
                  lVar19 = param_1[1];
                  uVar2 = *(undefined4 *)(lVar15 + 0x38);
                  (&uStack_130)[lVar26 * -4] = 0x1004be3e9;
                  FUN_1004b7870(lVar19,uVar2);
                  *(undefined1 *)(lVar15 + 0x23) = 0;
                }
                lVar19 = param_1[2];
                (&uStack_130)[lVar26 * -4] = 0x1004be3fb;
                uVar16 = FUN_1004b9f40(lVar19,lVar15);
                local_90 = 0;
                plVar17 = &local_48;
                if ((*(uint *)(lVar15 + 0x48) & 0x8000) == 0) {
                  plVar17 = &local_40;
                }
                lVar19 = *plVar17;
                (&uStack_130)[lVar26 * -4] = 0x1004be432;
                (*DAT_1011ccc68)(lVar19,uVar16,&local_90);
                lVar19 = local_90;
                (&uStack_130)[lVar26 * -4] = 0x1004be442;
                cVar8 = (*DAT_1011ccc60)(lVar19);
                lVar19 = local_90;
                if (cVar8 == '\0') {
                  local_f8 = uVar16;
                  if (*(char *)(lVar15 + 0x21) != '\0') {
                    iVar20 = *(int *)(lVar15 + 0x60);
                    iVar22 = *(int *)(lVar15 + 100);
                    iVar1 = *(int *)(lVar15 + 0x58);
                    iVar3 = *(int *)(lVar15 + 0x5c);
                    (&uStack_130)[lVar26 * -4] = 0x1004bdfa0;
                    FUN_1004bcf20(param_1,lVar15,iVar20 - iVar1,iVar22 - iVar3);
                  }
                  lVar18 = local_90;
                  if (*(long *)(lVar15 + 0x18) != 0) {
                    local_110 = dVar25;
                    local_100 = param_1;
                    local_a0 = lVar15;
                    (&uStack_130)[lVar26 * -4] = 0x1004bdfd0;
                    uVar16 = (*DAT_1011ccc98)(lVar18);
                    (&uStack_130)[lVar26 * -4] = 0x1004bdfdf;
                    pdVar12 = (double *)(*DAT_1011ccca8)(uVar16);
                    lVar18 = 0;
                    iVar20 = 0;
                    uVar23 = 0x10;
                    if (pdVar12 != (double *)0x0) {
                      do {
                        uVar13 = uVar23;
                        plVar17 = local_98;
                        puVar14 = (uint *)*local_98;
                        lVar15 = (long)(int)puVar14[1];
                        if (lVar15 <= (long)(uVar13 - 0x10)) {
                          uVar24 = puVar14[2];
                          if ((long)((ulong)uVar24 & 0x7fffffff) < (long)uVar13) {
                            lVar19 = 8;
                            uVar23 = uVar13 & 0xffffffff;
                          }
                          else {
                            uVar21 = uVar24 & 0x7fffffff;
                            uVar23 = (ulong)uVar21;
                            lVar19 = 0;
                            if (-1 < (int)uVar24) {
                              bVar4 = (long)uVar13 < (long)(ulong)(uVar21 >> 1);
                              uVar23 = (ulong)uVar21;
                              if (bVar4 && (long)uVar13 < lVar15) {
                                uVar23 = uVar13 & 0xffffffff;
                              }
                              lVar19 = (ulong)(bVar4 && (long)uVar13 < lVar15) << 3;
                            }
                          }
                          (&uStack_130)[lVar26 * -4] = 0x1004be07c;
                          FUN_1004beb50(plVar17,uVar13 & 0xffffffff,uVar23,lVar19);
                          puVar14 = (uint *)*plVar17;
                        }
                        plVar17 = local_98;
                        if (1 < *puVar14) {
                          uVar24 = puVar14[2];
                          if ((uVar24 & 0x7fffffff) == 0) {
                            (&uStack_130)[lVar26 * -4] = 0x1004be0bf;
                            puVar14 = (uint *)QArrayData::allocate(0x10,8,0,2);
                            *local_98 = (long)puVar14;
                          }
                          else {
                            uVar21 = puVar14[1];
                            (&uStack_130)[lVar26 * -4] = 0x1004be0a4;
                            FUN_1004beb50(plVar17,uVar21,uVar24 & 0x7fffffff,0);
                            puVar14 = (uint *)*plVar17;
                          }
                        }
                        iVar20 = (int)(*pdVar12 - (double)*(int *)(local_a0 + 0x58));
                        lVar15 = *(long *)(puVar14 + 4);
                        *(int *)((long)puVar14 + lVar18 + lVar15) = iVar20;
                        dVar25 = pdVar12[3];
                        iVar22 = (int)((double)*(int *)(local_a0 + 100) - (pdVar12[1] + dVar25));
                        *(int *)((long)puVar14 + lVar18 + 4 + lVar15) = iVar22;
                        *(int *)((long)puVar14 + lVar18 + 8 + lVar15) =
                             (int)((double)iVar20 + pdVar12[2]);
                        *(int *)((long)puVar14 + lVar18 + 0xc + lVar15) =
                             (int)((double)iVar22 + dVar25);
                        (&uStack_130)[lVar26 * -4] = 0x1004be14c;
                        pdVar12 = (double *)(*DAT_1011ccca8)(uVar16);
                        lVar18 = lVar18 + 0x10;
                        uVar23 = uVar13 + 1;
                      } while (pdVar12 != (double *)0x0);
                      iVar20 = (int)uVar13 + -0xf;
                    }
                    (&uStack_130)[lVar26 * -4] = 0x1004be173;
                    (*DAT_1011ccca0)(uVar16);
                    lVar15 = local_a0;
                    plVar17 = local_100;
                    local_88 = *(int *)(local_a0 + 0x58) - (int)local_e8;
                    local_84 = *(int *)(local_a0 + 0x5c) - (int)local_f0;
                    local_80 = *(int *)(local_a0 + 0x60) - (int)local_e8;
                    local_7c = *(int *)(local_a0 + 100) - (int)local_f0;
                    lVar18 = *local_100;
                    uVar16 = *(undefined8 *)(local_a0 + 0x18);
                    (&uStack_130)[lVar26 * -4] = 0x1004be1bf;
                    FUN_1002adb30(lVar18,uVar16);
                    plVar7 = local_98;
                    lVar18 = *plVar17;
                    puVar14 = (uint *)plVar17[0x45];
                    if (1 < *puVar14) {
                      uVar24 = puVar14[2];
                      if ((uVar24 & 0x7fffffff) == 0) {
                        (&uStack_130)[lVar26 * -4] = 0x1004be236;
                        puVar14 = (uint *)QArrayData::allocate(0x10,8,0,2);
                        *local_98 = (long)puVar14;
                      }
                      else {
                        uVar21 = puVar14[1];
                        (&uStack_130)[lVar26 * -4] = 0x1004be1f1;
                        FUN_1004beb50(plVar7,uVar21,uVar24 & 0x7fffffff,0);
                        puVar14 = (uint *)*plVar7;
                      }
                    }
                    lVar19 = *(long *)(puVar14 + 4);
                    auStack_140[lVar26 * -8 + 2] = param_8;
                    auStack_140[lVar26 * -8] = (uint)local_e0;
                    alStack_150[lVar26 * -4 + 1] = local_a8;
                    alStack_150[lVar26 * -4] = local_b8;
                    aiStack_158[lVar26 * -8] = iVar20;
                    (&uStack_130)[lVar26 * -4] = 0;
                    uVar9 = local_bc;
                    uVar2 = local_d4;
                    (&uStack_160)[lVar26 * -4] = 0x1004be2a2;
                    FUN_1002b0580(lVar18,uVar9,uVar2,0x2600,&local_88,(long)puVar14 + lVar19);
                    param_1 = local_100;
                    *(undefined1 *)(lVar15 + 0x22) = 1;
                    if (local_104 != 0) {
                      *(undefined1 *)(lVar15 + 0x22) = 0;
                      lVar18 = *local_100;
                      uVar16 = *(undefined8 *)(lVar15 + 0x18);
                      (&uStack_130)[lVar26 * -4] = 0x1004be2cb;
                      FUN_1002b0fc0(lVar18,uVar16);
                    }
                    lVar18 = local_d0;
                    if (*(char *)(lVar15 + 0x21) != '\0') {
                      (&uStack_130)[lVar26 * -4] = 0x1004be2e4;
                      uVar10 = (*DAT_1011ccc38)();
                      uVar2 = *(undefined4 *)(lVar15 + 8);
                      uVar9 = *(undefined4 *)(lVar15 + 0xc);
                      (&uStack_130)[lVar26 * -4] = 0x1004be301;
                      (*DAT_1011ccd18)(uVar10,uVar2,uVar9,1,0);
                      if (*(int *)(lVar15 + 0x10) != 0) {
                        uVar2 = *(undefined4 *)(lVar15 + 8);
                        (&uStack_130)[lVar26 * -4] = 0x1004be317;
                        (*DAT_1011ccce0)(uVar10,uVar2);
                        *(undefined4 *)(lVar15 + 0x10) = 0;
                      }
                      *(undefined1 *)(lVar15 + 0x21) = 0;
                    }
                    lVar15 = local_90;
                    (&uStack_130)[lVar26 * -4] = 0x1004be335;
                    (*DAT_1011ccc48)(lVar15);
                    dVar25 = local_110;
                    uVar16 = local_f8;
                    goto LAB_1004be473;
                  }
                  (&uStack_130)[lVar26 * -4] = 0x1004be20a;
                  (*DAT_1011ccc48)(lVar18);
                  uVar16 = local_f8;
                  (&uStack_130)[lVar26 * -4] = 0x1004be214;
                  (*DAT_1011ccc48)(uVar16);
                  lVar18 = local_d0;
                }
                else {
                  (&uStack_130)[lVar26 * -4] = 0x1004be45b;
                  (*DAT_1011ccc48)(lVar19);
                  (&uStack_130)[lVar26 * -4] = 0x1004be461;
                  (*DAT_1011ccc48)(uVar16);
                }
              }
              else {
                lVar19 = param_1[2];
                (&uStack_130)[lVar26 * -4] = 0x1004be470;
                uVar16 = FUN_1004b9f40(lVar19,lVar15);
LAB_1004be473:
                lVar15 = local_40;
                local_90 = 0;
                (&uStack_130)[lVar26 * -4] = 0x1004be495;
                (*DAT_1011ccc80)(lVar15,uVar16,&local_90);
                (&uStack_130)[lVar26 * -4] = 0x1004be4a5;
                (*DAT_1011ccc48)(uVar16);
                lVar15 = local_40;
                (&uStack_130)[lVar26 * -4] = 0x1004be4ac;
                (*DAT_1011ccc48)(lVar15);
                local_40 = local_90;
              }
            }
            uVar24 = SUB84(dVar25,0) + 1;
            dVar25 = (double)(ulong)uVar24;
          } while (uVar24 < *(uint *)(lVar18 + 0x1028));
        }
        uVar16 = local_b0;
        lVar18 = *param_1;
        (&uStack_130)[lVar26 * -4] = 0x1004be4d6;
        FUN_1002adb30(lVar18,uVar16);
        lVar18 = local_40;
        (&uStack_130)[lVar26 * -4] = 0x1004be4e3;
        (*DAT_1011ccc48)(lVar18);
        if (local_48 != 0) {
          (&uStack_130)[lVar26 * -4] = 0x1004be4ee;
          (*DAT_1011ccc48)();
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    (&uStack_130)[lVar26 * -4] = &UNK_1004be512;
    ___stack_chk_fail();
  }
  return;
}

