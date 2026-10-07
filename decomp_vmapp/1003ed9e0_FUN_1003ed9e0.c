
/* WARNING: Removing unreachable block (ram,0x0001003edbde) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003ed9e0(long *param_1)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  code *UNRECOVERED_JUMPTABLE;
  long lVar5;
  byte bVar6;
  ulong uVar7;
  int *piVar8;
  byte bVar9;
  long lVar10;
  byte bVar11;
  ulong uVar12;
  byte bVar13;
  undefined8 uVar14;
  ulong uVar15;
  int iVar16;
  uint *puVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar31;
  int iVar32;
  int iVar33;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  int local_34;
  
  pcVar1 = (char *)param_1[0xb];
  if (*pcVar1 == -0x47) {
    uVar23 = ((byte)pcVar1[5] - 0x96) +
             (uint)(byte)pcVar1[4] * 0x4b + (uint)(byte)pcVar1[3] * 0x1194;
    uVar3 = ((byte)pcVar1[8] - 0x96) + (uint)(byte)pcVar1[7] * 0x4b + (uint)(byte)pcVar1[6] * 0x1194
    ;
    uVar4 = uVar3 - uVar23;
    if (uVar23 <= uVar3) goto LAB_1003eda60;
  }
  else {
    uVar4 = *(uint *)(pcVar1 + 2);
    uVar23 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    uVar4 = *(uint *)(param_1[0xb] + 5);
    uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8;
LAB_1003eda60:
    uVar7 = (ulong)uVar23;
    if (uVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001003eda9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x260))(param_1);
      return;
    }
    if ((ulong)param_1[0x14] < uVar7) {
      lVar5 = param_1[0xc];
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x268);
      uVar14 = 0x52100;
      goto LAB_1003edba8;
    }
    local_34 = 0;
    lVar5 = param_1[0xb];
    bVar13 = *(byte *)(lVar5 + 9);
    bVar9 = *(byte *)(lVar5 + 1) >> 2;
    if (((*(byte *)((long)param_1 + 0x6c) & 2) != 0) || (iVar16 = (int)param_1[0x19], iVar16 == -1))
    {
      bVar11 = *(byte *)(lVar5 + 10) & 7;
      iVar16 = 0;
      if ((bVar13 & 0x10) != 0) {
        iVar16 = 0;
        switch(bVar9 & 7) {
        case 0:
          bVar6 = *(byte *)((long)param_1 + 0xec) & 0xf;
          iVar16 = 0x800;
          if (bVar6 < 0xe) {
            iVar16 = *(int *)(&DAT_100b40740 + (ulong)bVar6 * 4);
          }
          break;
        case 1:
          iVar16 = 0x930;
          bVar13 = 0;
          break;
        case 2:
          bVar13 = bVar13 & 0xbf;
          iVar16 = 0x800;
          break;
        case 3:
          bVar13 = bVar13 & 0xbe;
          iVar16 = 0x920;
          break;
        case 4:
          iVar16 = 0x800;
          bVar13 = 0;
          break;
        case 5:
          bVar13 = bVar13 & 0xbe;
          iVar16 = 0x918;
        }
      }
      iVar24 = iVar16 + 0xc;
      if ((bVar13 & 0x80) == 0) {
        iVar24 = iVar16;
      }
      iVar16 = iVar24 + 4;
      if ((bVar13 & 0x40) == 0) {
        iVar16 = iVar24;
      }
      iVar24 = iVar16 + 8;
      if ((bVar13 & 0x20) == 0) {
        iVar24 = iVar16;
      }
      iVar16 = iVar24 + 0x118;
      if ((bVar13 & 8) == 0) {
        iVar16 = iVar24;
      }
      if (((bVar11 == 4) || (bVar11 == 2)) || (bVar11 == 1)) {
        iVar16 = iVar16 + 0x60;
      }
    }
    if ((*(byte *)(lVar5 + 10) & 6) == 0) {
      if ((bVar9 & 7) == 1) {
        uVar22 = 0;
        do {
          lVar5 = param_1[0x25];
          uVar12 = (ulong)*(byte *)(*(long *)(lVar5 + 0x10) + 3);
          iVar24 = 0;
          uVar3 = (uint)uVar7;
          if (uVar12 != 0) {
            puVar17 = (uint *)(lVar5 + 0x24);
            uVar7 = 0;
            uVar21 = 0;
            do {
              if ((puVar17[-1] <= uVar3) && (uVar3 <= *puVar17)) {
                uVar21 = uVar7 & 0xffffffff;
              }
              uVar7 = uVar7 + 1;
              puVar17 = (uint *)((long)puVar17 + 0x12);
            } while (uVar12 != uVar7);
            iVar24 = 0;
            uVar20 = (uint)uVar21;
            if (0 < (int)uVar20) {
              uVar19 = uVar20 - 1;
              uVar7 = (ulong)uVar19 + 1;
              uVar15 = uVar7 & 0x1fffffff8;
              iVar24 = 0;
              iVar25 = 0;
              iVar26 = 0;
              iVar27 = 0;
              iVar28 = 0;
              iVar31 = 0;
              iVar32 = 0;
              iVar33 = 0;
              uVar12 = 0;
              if (uVar15 != 0) {
                piVar8 = (int *)(lVar5 + 0x2c);
                iVar24 = 0;
                iVar25 = 0;
                iVar26 = 0;
                iVar27 = 0;
                uVar18 = 0;
                iVar28 = 0;
                iVar31 = 0;
                iVar32 = 0;
                iVar33 = 0;
                do {
                  auVar30._8_4_ = (int)uVar18;
                  auVar30._0_8_ = uVar18;
                  auVar30._12_4_ = (int)(uVar18 >> 0x20);
                  lVar10 = auVar30._8_8_;
                  iVar24 = iVar24 + *piVar8 + (int)DAT_100b406e0;
                  iVar25 = iVar25 + *(int *)(lVar5 + 0x2c + (lVar10 + 1) * 0x12) +
                           DAT_100b406e0._4_4_;
                  iVar26 = iVar26 + *(int *)(lVar5 + 0x2c + (uVar18 + _DAT_100b4afd0) * 0x12) +
                           DAT_100b406e0._8_4_;
                  iVar27 = iVar27 + *(int *)(lVar5 + 0x2c + (lVar10 + _UNK_100b4afd8) * 0x12) +
                           DAT_100b406e0._12_4_;
                  iVar28 = iVar28 + *(int *)(lVar5 + 0x2c + (uVar18 + _DAT_100b4aff0) * 0x12) +
                           (int)DAT_100b406e0;
                  iVar31 = iVar31 + *(int *)(lVar5 + 0x2c + (lVar10 + _UNK_100b4aff8) * 0x12) +
                           DAT_100b406e0._4_4_;
                  iVar32 = iVar32 + *(int *)(lVar5 + 0x2c + (uVar18 + _DAT_100b4afe0) * 0x12) +
                           DAT_100b406e0._8_4_;
                  iVar33 = iVar33 + *(int *)(lVar5 + 0x2c + (lVar10 + _UNK_100b4afe8) * 0x12) +
                           DAT_100b406e0._12_4_;
                  uVar18 = uVar18 + 8;
                  piVar8 = piVar8 + 0x24;
                  uVar12 = uVar15;
                } while (((ulong)uVar19 + 1 & 0xfffffffffffffff8) != uVar18);
              }
              auVar29._0_4_ = iVar26 + iVar32 + iVar24 + iVar28;
              auVar29._4_4_ = iVar27 + iVar33 + iVar25 + iVar31;
              auVar29._8_4_ = iVar24 + iVar28 + iVar26 + iVar32;
              auVar29._12_4_ = iVar25 + iVar31 + iVar27 + iVar33;
              auVar30 = phaddd(auVar29,auVar29);
              iVar24 = auVar30._0_4_;
              if (uVar7 != uVar12) {
                iVar25 = (int)uVar12;
                if ((uVar21 & 3) != 0) {
                  piVar8 = (int *)(lVar5 + 0x2c + uVar12 * 0x12);
                  iVar26 = -(uVar20 & 3);
                  do {
                    iVar24 = iVar24 + 0x96 + *piVar8;
                    uVar12 = uVar12 + 1;
                    piVar8 = (int *)((long)piVar8 + 0x12);
                    iVar26 = iVar26 + 1;
                  } while (iVar26 != 0);
                }
                if (2 < uVar19 - iVar25) {
                  iVar25 = (uVar20 + 3) - ((int)uVar12 + 3);
                  piVar8 = (int *)(lVar5 + 0x62 + uVar12 * 0x12);
                  do {
                    iVar24 = *piVar8 + 600 +
                             iVar24 + *(int *)((long)piVar8 + -0x36) + piVar8[-9] +
                             *(int *)((long)piVar8 + -0x12);
                    piVar8 = piVar8 + 0x12;
                    iVar25 = iVar25 + -4;
                  } while (iVar25 != 0);
                }
              }
            }
          }
          lVar5 = *(long *)(lVar5 + 0x720);
          iVar24 = FUN_1003f13b0(lVar5,(ulong)(uint)((int)uVar22 * 0x930) + param_1[9],
                                 uVar3 - iVar24,1,0x930,&local_34);
          if (iVar24 != 0) {
            local_34 = 0;
            *(undefined4 *)((long)param_1 + 0xc4) = *(undefined4 *)(lVar5 + 0x1fe8);
LAB_1003edf70:
            if (*(int *)((long)param_1 + 0x7c) == 0) {
              uVar14 = 0x31100;
            }
            else {
              uVar14 = 0x23a00;
            }
            (**(code **)(*param_1 + 0x268))(param_1,uVar14,param_1[0xc]);
            return;
          }
          if (local_34 != 0x930) {
            if (local_34 == 0) goto LAB_1003edf70;
            lVar5 = *param_1;
            lVar10 = param_1[0xc];
            uVar14 = 0x31108;
            goto LAB_1003edfa4;
          }
          uVar22 = uVar22 + 1;
          uVar3 = (int)uVar22 + uVar23;
          uVar7 = (ulong)uVar3;
        } while (uVar22 < uVar4);
        param_1[0x27] = (ulong)(uVar3 + 1);
        lVar5 = *param_1;
      }
      else {
        (**(code **)(*(long *)param_1[6] + 0x60))((long *)param_1[6],uVar7 * 0x930,0);
        cVar2 = (**(code **)(*(long *)param_1[6] + 0x30))
                          ((long *)param_1[6],param_1[9],iVar16,&local_34);
        if (cVar2 == '\0') {
          local_34 = 0;
        }
        if (local_34 != iVar16) {
          (**(code **)(*param_1 + 0x288))(param_1);
          lVar5 = *param_1;
          lVar10 = param_1[0xc];
          uVar14 = 0x31100;
LAB_1003edfa4:
          (**(code **)(lVar5 + 0x268))(param_1,uVar14,lVar10);
          return;
        }
        lVar5 = *param_1;
      }
      (**(code **)(lVar5 + 0x278))(param_1,iVar16,iVar16);
      return;
    }
  }
  lVar5 = param_1[0xc];
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x268);
  uVar14 = 0x52400;
LAB_1003edba8:
                    /* WARNING: Could not recover jumptable at 0x0001003edbb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar14,lVar5);
  return;
}

