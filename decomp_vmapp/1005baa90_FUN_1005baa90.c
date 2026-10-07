
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1005baa90(long param_1,long *******param_2)

{
  undefined8 *******pppppppuVar1;
  int *piVar2;
  long *plVar3;
  long ******pppppplVar4;
  long *******ppppppplVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  int *piVar10;
  int *piVar11;
  long *******ppppppplVar12;
  long *******ppppppplVar13;
  undefined8 *******pppppppuVar14;
  undefined8 uVar15;
  bool bVar16;
  long *******local_258;
  long *******local_250;
  long local_248;
  long *******local_240;
  long *******local_238;
  undefined8 local_230;
  undefined1 local_221;
  undefined1 local_220 [16];
  undefined1 local_210 [16];
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  int *local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  QDateTime local_1c8 [8];
  undefined8 *******local_1c0;
  undefined8 *******local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  int *local_188;
  undefined8 local_180;
  undefined8 local_178;
  QDateTime local_170 [8];
  undefined8 *******local_168;
  undefined8 *******local_160;
  undefined8 local_158;
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  undefined *local_110 [3];
  QDateTime local_f8 [8];
  undefined8 *******local_f0;
  undefined8 *******local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  int *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  QDateTime local_b0 [8];
  undefined8 *******local_a8;
  undefined8 *******local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  int *local_70;
  undefined8 local_68;
  undefined8 local_60;
  QDateTime local_58 [8];
  undefined8 *******local_50;
  undefined8 *******local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_240 = (long *******)&local_238;
  local_230 = 0;
  local_238 = (long *******)0x0;
  local_248 = 0;
  local_258 = (long *******)&local_258;
  local_250 = (long *******)&local_258;
  FUN_1007d6870(&local_d8);
  puVar6 = PTR_shared_null_100ba2188;
  local_c8 = (int *)PTR_shared_null_100ba2188;
  QDateTime::QDateTime(local_b0);
  local_a8 = &local_a8;
  local_98 = 0;
  local_a0 = local_a8;
  FUN_1007d6870(local_120);
  local_110[0] = puVar6;
  QDateTime::QDateTime(local_f8);
  local_f0 = &local_f0;
  local_e0 = 0;
  uVar15 = 0x80021011;
  local_e8 = local_f0;
  if (param_2 != (long *******)0x0) {
    plVar9 = *(long **)(param_1 + 0x70);
    while (plVar9 != (long *)(param_1 + 0x78)) {
      FUN_1007d6920(local_130,plVar9 + 5);
      ppppppplVar5 = local_238;
      ppppppplVar13 = (long *******)&local_238;
      if (local_238 == (long *******)0x0) {
LAB_1005bacb0:
        FUN_1007d6920(local_140,plVar9 + 5);
        FUN_1005bb880();
        FUN_1005d5ed0(&local_a8);
        FUN_1007d6920(local_150,plVar9 + 4);
        FUN_1005bb880();
        FUN_1005d52c0(&local_a8,local_120);
        local_1f8 = local_d0;
        local_200 = local_d8;
        local_1e8 = local_d0;
        local_1f0 = local_d8;
        local_1e0 = local_c8;
        if (*local_c8 != -1) {
          if (*local_c8 == 0) {
            QListData::detach((int)&local_1e0);
            iVar7 = local_1e0[2];
            if (iVar7 != local_1e0[3]) {
              piVar10 = local_c8 + (long)local_c8[2] * 2 + 4;
              piVar11 = local_1e0 + (long)iVar7 * 2 + 4;
              lVar8 = (long)local_1e0[3] * 8 + (long)iVar7 * -8;
              do {
                piVar2 = *(int **)piVar10;
                *(int **)piVar11 = piVar2;
                if (1 < *piVar2 + 1U) {
                  LOCK();
                  *piVar2 = *piVar2 + 1;
                  local_221 = *piVar2 != 0;
                  UNLOCK();
                }
                piVar11 = piVar11 + 2;
                piVar10 = piVar10 + 2;
                lVar8 = lVar8 + -8;
              } while (lVar8 != 0);
            }
          }
          else {
            LOCK();
            *local_c8 = *local_c8 + 1;
            local_221 = *local_c8 != 0;
            UNLOCK();
          }
        }
        local_1d0 = local_b8;
        local_1d8 = local_c0;
        QDateTime::QDateTime(local_1c8,local_b0);
        local_1c0 = &local_1c0;
        local_1b0 = 0;
        pppppppuVar14 = local_a0;
        local_1b8 = local_1c0;
        if ((undefined8 ********)local_a0 != &local_a8) {
          do {
            FUN_1005d52c0(&local_1c0,pppppppuVar14 + 2);
            pppppppuVar1 = pppppppuVar14 + 1;
            pppppppuVar14 = (undefined8 *******)*pppppppuVar1;
          } while ((undefined8 ********)*pppppppuVar1 != &local_a8);
        }
        local_1a0 = local_1f8;
        local_1a8 = local_200;
        local_190 = local_1e8;
        local_198 = local_1f0;
        local_188 = local_1e0;
        if (*local_1e0 != -1) {
          if (*local_1e0 == 0) {
            QListData::detach((int)&local_188);
            iVar7 = local_188[2];
            if (iVar7 != local_188[3]) {
              piVar10 = local_1e0 + (long)local_1e0[2] * 2 + 4;
              piVar11 = local_188 + (long)iVar7 * 2 + 4;
              lVar8 = (long)local_188[3] * 8 + (long)iVar7 * -8;
              do {
                piVar2 = *(int **)piVar10;
                *(int **)piVar11 = piVar2;
                if (1 < *piVar2 + 1U) {
                  LOCK();
                  *piVar2 = *piVar2 + 1;
                  local_221 = *piVar2 != 0;
                  UNLOCK();
                }
                piVar11 = piVar11 + 2;
                piVar10 = piVar10 + 2;
                lVar8 = lVar8 + -8;
              } while (lVar8 != 0);
            }
          }
          else {
            LOCK();
            *local_1e0 = *local_1e0 + 1;
            local_221 = *local_1e0 != 0;
            UNLOCK();
          }
        }
        local_178 = local_1d0;
        local_180 = local_1d8;
        QDateTime::QDateTime(local_170,local_1c8);
        local_168 = &local_168;
        local_158 = 0;
        pppppppuVar14 = local_1b8;
        local_160 = local_168;
        if ((undefined8 ********)local_1b8 != &local_1c0) {
          do {
            FUN_1005d52c0(&local_168,pppppppuVar14 + 2);
            pppppppuVar1 = pppppppuVar14 + 1;
            pppppppuVar14 = (undefined8 *******)*pppppppuVar1;
          } while ((undefined8 ********)*pppppppuVar1 != &local_1c0);
        }
        local_88 = local_1a0;
        local_90 = local_1a8;
        local_78 = local_190;
        local_80 = local_198;
        local_70 = local_188;
        if (*local_188 != -1) {
          if (*local_188 == 0) {
            QListData::detach((int)&local_70);
            iVar7 = local_70[2];
            if (iVar7 != local_70[3]) {
              piVar10 = local_188 + (long)local_188[2] * 2 + 4;
              piVar11 = local_70 + (long)iVar7 * 2 + 4;
              lVar8 = (long)local_70[3] * 8 + (long)iVar7 * -8;
              do {
                piVar2 = *(int **)piVar10;
                *(int **)piVar11 = piVar2;
                if (1 < *piVar2 + 1U) {
                  LOCK();
                  *piVar2 = *piVar2 + 1;
                  local_221 = *piVar2 != 0;
                  UNLOCK();
                }
                piVar11 = piVar11 + 2;
                piVar10 = piVar10 + 2;
                lVar8 = lVar8 + -8;
              } while (lVar8 != 0);
            }
          }
          else {
            LOCK();
            *local_188 = *local_188 + 1;
            local_221 = *local_188 != 0;
            UNLOCK();
          }
        }
        local_60 = local_178;
        local_68 = local_180;
        QDateTime::QDateTime(local_58,local_170);
        local_40 = 0;
        pppppppuVar14 = local_160;
        local_50 = &local_50;
        local_48 = &local_50;
        if ((undefined8 ********)local_160 != &local_168) {
          do {
            FUN_1005d52c0(&local_50,pppppppuVar14 + 2);
            pppppppuVar1 = pppppppuVar14 + 1;
            pppppppuVar14 = (undefined8 *******)*pppppppuVar1;
          } while ((undefined8 ********)*pppppppuVar1 != &local_168);
        }
        local_88 = local_1a0;
        local_90 = local_1a8;
        FUN_1005d6240(&local_240,&local_90);
        FUN_1005d5e30(&local_50);
        QDateTime::~QDateTime(local_58);
        FUN_100013180(&local_70);
        FUN_1005d5e30(&local_168);
        QDateTime::~QDateTime(local_170);
        FUN_100013180(&local_188);
        FUN_1005d5e30(&local_1c0);
        QDateTime::~QDateTime(local_1c8);
        FUN_100013180(&local_1e0);
      }
      else {
        do {
          while (ppppppplVar12 = ppppppplVar5, iVar7 = FUN_1007ea6f0(ppppppplVar12 + 4,local_130),
                iVar7 < 0) {
            ppppppplVar5 = (long *******)ppppppplVar12[1];
            if ((long *******)ppppppplVar12[1] == (long *******)0x0) goto LAB_1005bac3f;
          }
          ppppppplVar13 = ppppppplVar12;
          ppppppplVar5 = (long *******)*ppppppplVar12;
        } while ((long *******)*ppppppplVar12 != (long *******)0x0);
LAB_1005bac3f:
        if (((long ********)ppppppplVar13 == &local_238) ||
           (iVar7 = FUN_1007ea6f0(local_130,ppppppplVar13 + 4), iVar7 < 0)) goto LAB_1005bacb0;
        FUN_1007d6920(local_210,plVar9 + 4);
        FUN_1005bb880();
        FUN_1005d52c0(ppppppplVar13 + 0xc,local_120);
      }
      plVar3 = (long *)plVar9[1];
      if ((long *)plVar9[1] == (long *)0x0) {
        do {
          plVar3 = (long *)plVar9[2];
          bVar16 = (long *)*plVar3 != plVar9;
          plVar9 = plVar3;
        } while (bVar16);
      }
      else {
        do {
          plVar9 = plVar3;
          plVar3 = (long *)*plVar9;
        } while ((long *)*plVar9 != (long *)0x0);
      }
    }
    FUN_1007d6870(local_220);
    uVar15 = 0x80021025;
    if (local_238 != (long *******)0x0) {
      ppppppplVar5 = local_238;
      ppppppplVar13 = (long *******)&local_238;
      do {
        while (ppppppplVar12 = ppppppplVar5, iVar7 = FUN_1007ea6f0(ppppppplVar12 + 4,local_220),
              iVar7 < 0) {
          ppppppplVar5 = (long *******)ppppppplVar12[1];
          if ((long *******)ppppppplVar12[1] == (long *******)0x0) goto LAB_1005bb281;
        }
        ppppppplVar13 = ppppppplVar12;
        ppppppplVar5 = (long *******)*ppppppplVar12;
      } while ((long *******)*ppppppplVar12 != (long *******)0x0);
LAB_1005bb281:
      uVar15 = 0x80021025;
      if (((long ********)ppppppplVar13 != &local_238) &&
         (iVar7 = FUN_1007ea6f0(local_220,ppppppplVar13 + 4), -1 < iVar7)) {
        ppppppplVar5 = ppppppplVar13 + 6;
        FUN_1005bbae0(param_1,ppppppplVar5,&local_240);
        pppppplVar4 = *ppppppplVar5;
        param_2[1] = ppppppplVar13[7];
        *param_2 = pppppplVar4;
        FUN_10051afa0(param_2 + 2,ppppppplVar13 + 8);
        pppppplVar4 = ppppppplVar13[9];
        param_2[4] = ppppppplVar13[10];
        param_2[3] = pppppplVar4;
        QDateTime::operator=((QDateTime *)(param_2 + 5),(QDateTime *)(ppppppplVar13 + 0xb));
        uVar15 = 0;
        if (ppppppplVar5 != param_2) {
          uVar15 = 0;
          FUN_1005d5780(param_2 + 6,ppppppplVar13[0xd],ppppppplVar13 + 0xc,0);
        }
      }
    }
  }
  FUN_1005d5e30(&local_f0);
  QDateTime::~QDateTime(local_f8);
  FUN_100013180(local_110);
  FUN_1005d5e30(&local_a8);
  QDateTime::~QDateTime(local_b0);
  FUN_100013180(&local_c8);
  if (local_248 != 0) {
    pppppplVar4 = *local_250;
    pppppplVar4[1] = (long *****)local_258[1];
    *local_258[1] = (long *****)pppppplVar4;
    local_248 = 0;
    ppppppplVar13 = local_250;
    while ((long ********)ppppppplVar13 != &local_258) {
      ppppppplVar5 = (long *******)ppppppplVar13[1];
      FUN_1005d5e30(ppppppplVar13 + 8);
      QDateTime::~QDateTime((QDateTime *)(ppppppplVar13 + 7));
      FUN_100013180(ppppppplVar13 + 4);
      operator_delete(ppppppplVar13);
      ppppppplVar13 = ppppppplVar5;
    }
  }
  FUN_1005d5f70(&local_240,local_238);
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar15;
}

