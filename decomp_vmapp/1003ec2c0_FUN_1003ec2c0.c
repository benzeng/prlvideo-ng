
/* WARNING: Removing unreachable block (ram,0x0001003ec4de) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003ec2c0(long *param_1)

{
  byte bVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  code *UNRECOVERED_JUMPTABLE;
  long lVar7;
  uint uVar8;
  byte bVar9;
  int *piVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;
  undefined8 uVar15;
  uint *puVar16;
  ulong uVar17;
  byte bVar18;
  ulong uVar19;
  ulong uVar20;
  byte bVar21;
  ulong uVar22;
  int iVar23;
  uint uVar24;
  ulong uVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar33;
  int iVar34;
  int iVar35;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  int local_34;
  
  pcVar2 = (char *)param_1[0xb];
  if (*pcVar2 == -0x47) {
    uVar12 = ((byte)pcVar2[5] - 0x96) +
             (uint)(byte)pcVar2[4] * 0x4b + (uint)(byte)pcVar2[3] * 0x1194;
    uVar4 = ((byte)pcVar2[8] - 0x96) + (uint)(byte)pcVar2[7] * 0x4b + (uint)(byte)pcVar2[6] * 0x1194
    ;
    uVar5 = uVar4 - uVar12;
    if (uVar12 <= uVar4) goto LAB_1003ec33f;
  }
  else {
    uVar5 = *(uint *)(pcVar2 + 2);
    uVar12 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    uVar5 = *(uint *)(param_1[0xb] + 5);
    uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8;
LAB_1003ec33f:
    uVar19 = (ulong)uVar12;
    if (uVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001003ec383. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x260))(param_1);
      return;
    }
    if ((ulong)param_1[0x14] < uVar19) {
      lVar7 = param_1[0xc];
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x268);
      uVar15 = 0x52100;
      goto LAB_1003ec484;
    }
    local_34 = 0;
    lVar7 = param_1[0xb];
    bVar18 = *(byte *)(lVar7 + 9);
    bVar9 = *(byte *)(lVar7 + 1) >> 2;
    bVar1 = *(byte *)(lVar7 + 10);
    bVar21 = bVar1 & 7;
    if ((*(byte *)((long)param_1 + 0x6c) & 2) == 0) {
      iVar23 = (int)param_1[0x19];
      uVar4 = 0;
      if (iVar23 == -1) goto LAB_1003ec3ca;
    }
    else {
LAB_1003ec3ca:
      uVar4 = 0;
      if ((bVar18 & 0x10) == 0) {
        iVar14 = 0;
      }
      else {
        switch(bVar9 & 7) {
        case 0:
          iVar14 = 0x800;
          break;
        case 1:
          iVar14 = 0x930;
          bVar18 = 0;
          break;
        case 2:
          bVar18 = bVar18 & 0xbf;
          iVar14 = 0x800;
          break;
        case 3:
          bVar18 = bVar18 & 0xbe;
          iVar14 = 0x920;
          break;
        case 4:
          iVar14 = 0x800;
          bVar18 = 0;
          break;
        case 5:
          bVar18 = bVar18 & 0xbe;
          iVar14 = 0x918;
          break;
        default:
          iVar14 = 0;
        }
      }
      if ((bVar18 & 0x80) != 0) {
        iVar14 = iVar14 + 0xc;
        *(undefined1 *)(param_1[9] + 1) = 0;
        *(undefined1 *)(param_1[9] + 0xb) = 0;
        lVar7 = param_1[9];
        *(undefined2 *)(lVar7 + 9) = 0xffff;
        *(undefined8 *)(lVar7 + 1) = 0xffffffffffffffff;
        uVar4 = 0xc;
      }
      if ((bVar18 & 0x40) != 0) {
        iVar14 = iVar14 + 4;
        uVar4 = uVar4 + 4;
        *(undefined4 *)(param_1[9] + 0xc) = 0;
      }
      if ((bVar18 & 0x20) != 0) {
        iVar14 = iVar14 + 8;
        uVar4 = uVar4 + 8;
      }
      iVar23 = iVar14 + 0x118;
      if ((bVar18 & 8) == 0) {
        iVar23 = iVar14;
      }
      if (((bVar21 == 4) || (bVar21 == 2)) || (bVar21 == 1)) {
        iVar23 = iVar23 + 0x60;
      }
      iVar23 = iVar23 * uVar5;
    }
    if ((bVar1 & 6) == 0) {
      iVar14 = 0x60;
      if (bVar21 != 1) {
        iVar14 = 0;
      }
      if ((bVar9 & 7) == 1) {
        uVar22 = 0;
        do {
          lVar7 = param_1[0x25];
          uVar17 = (ulong)*(byte *)(*(long *)(lVar7 + 0x10) + 3);
          iVar26 = 0;
          uVar4 = (uint)uVar19;
          if (uVar17 != 0) {
            puVar16 = (uint *)(lVar7 + 0x24);
            uVar19 = 0;
            uVar25 = 0;
            do {
              if ((puVar16[-1] <= uVar4) && (uVar4 <= *puVar16)) {
                uVar25 = uVar19 & 0xffffffff;
              }
              uVar19 = uVar19 + 1;
              puVar16 = (uint *)((long)puVar16 + 0x12);
            } while (uVar17 != uVar19);
            iVar26 = 0;
            uVar24 = (uint)uVar25;
            if (0 < (int)uVar24) {
              uVar8 = uVar24 - 1;
              uVar19 = (ulong)uVar8 + 1;
              uVar20 = uVar19 & 0x1fffffff8;
              iVar26 = 0;
              iVar27 = 0;
              iVar28 = 0;
              iVar29 = 0;
              iVar30 = 0;
              iVar33 = 0;
              iVar34 = 0;
              iVar35 = 0;
              uVar17 = 0;
              if (uVar20 != 0) {
                piVar10 = (int *)(lVar7 + 0x2c);
                iVar26 = 0;
                iVar27 = 0;
                iVar28 = 0;
                iVar29 = 0;
                uVar13 = 0;
                iVar30 = 0;
                iVar33 = 0;
                iVar34 = 0;
                iVar35 = 0;
                do {
                  auVar32._8_4_ = (int)uVar13;
                  auVar32._0_8_ = uVar13;
                  auVar32._12_4_ = (int)(uVar13 >> 0x20);
                  lVar11 = auVar32._8_8_;
                  iVar26 = iVar26 + *piVar10 + (int)DAT_100b406e0;
                  iVar27 = iVar27 + *(int *)(lVar7 + 0x2c + (lVar11 + 1) * 0x12) +
                           DAT_100b406e0._4_4_;
                  iVar28 = iVar28 + *(int *)(lVar7 + 0x2c + (uVar13 + _DAT_100b4afd0) * 0x12) +
                           DAT_100b406e0._8_4_;
                  iVar29 = iVar29 + *(int *)(lVar7 + 0x2c + (lVar11 + _UNK_100b4afd8) * 0x12) +
                           DAT_100b406e0._12_4_;
                  iVar30 = iVar30 + *(int *)(lVar7 + 0x2c + (uVar13 + _DAT_100b4aff0) * 0x12) +
                           (int)DAT_100b406e0;
                  iVar33 = iVar33 + *(int *)(lVar7 + 0x2c + (lVar11 + _UNK_100b4aff8) * 0x12) +
                           DAT_100b406e0._4_4_;
                  iVar34 = iVar34 + *(int *)(lVar7 + 0x2c + (uVar13 + _DAT_100b4afe0) * 0x12) +
                           DAT_100b406e0._8_4_;
                  iVar35 = iVar35 + *(int *)(lVar7 + 0x2c + (lVar11 + _UNK_100b4afe8) * 0x12) +
                           DAT_100b406e0._12_4_;
                  uVar13 = uVar13 + 8;
                  piVar10 = piVar10 + 0x24;
                  uVar17 = uVar20;
                } while (((ulong)uVar8 + 1 & 0xfffffffffffffff8) != uVar13);
              }
              auVar31._0_4_ = iVar28 + iVar34 + iVar26 + iVar30;
              auVar31._4_4_ = iVar29 + iVar35 + iVar27 + iVar33;
              auVar31._8_4_ = iVar26 + iVar30 + iVar28 + iVar34;
              auVar31._12_4_ = iVar27 + iVar33 + iVar29 + iVar35;
              auVar32 = phaddd(auVar31,auVar31);
              iVar26 = auVar32._0_4_;
              if (uVar19 != uVar17) {
                iVar27 = (int)uVar17;
                if ((uVar25 & 3) != 0) {
                  piVar10 = (int *)(lVar7 + 0x2c + uVar17 * 0x12);
                  iVar28 = -(uVar24 & 3);
                  do {
                    iVar26 = iVar26 + 0x96 + *piVar10;
                    uVar17 = uVar17 + 1;
                    piVar10 = (int *)((long)piVar10 + 0x12);
                    iVar28 = iVar28 + 1;
                  } while (iVar28 != 0);
                }
                if (2 < uVar8 - iVar27) {
                  iVar27 = (uVar24 + 3) - ((int)uVar17 + 3);
                  piVar10 = (int *)(lVar7 + 0x62 + uVar17 * 0x12);
                  do {
                    iVar26 = *piVar10 + 600 +
                             iVar26 + *(int *)((long)piVar10 + -0x36) + piVar10[-9] +
                             *(int *)((long)piVar10 + -0x12);
                    piVar10 = piVar10 + 0x12;
                    iVar27 = iVar27 + -4;
                  } while (iVar27 != 0);
                }
              }
            }
          }
          (**(code **)(*(long *)param_1[6] + 0x60))((long *)param_1[6],(uVar4 - iVar26) * 0x930,0);
          uVar24 = (int)uVar22 * (iVar14 + 0x930);
          cVar3 = (**(code **)(*(long *)param_1[6] + 0x30))
                            ((long *)param_1[6],param_1[9] + (ulong)uVar24,0x930,&local_34);
          if (cVar3 == '\0') {
            local_34 = 0;
            uVar6 = (**(code **)(*(long *)param_1[6] + 0xb0))();
            *(undefined4 *)((long)param_1 + 0xc4) = uVar6;
          }
          if (local_34 != 0x930) {
            if (local_34 == 0) {
              if (*(int *)((long)param_1 + 0x7c) == 0) goto LAB_1003ec966;
              lVar7 = *param_1;
              lVar11 = param_1[0xc];
              uVar15 = 0x23a00;
            }
            else {
LAB_1003ec987:
              lVar7 = *param_1;
              lVar11 = param_1[0xc];
              uVar15 = 0x31108;
            }
            goto LAB_1003ec995;
          }
          if (bVar21 == 1) {
            (**(code **)(*(long *)param_1[0x27] + 0x60))
                      ((long *)param_1[0x27],(uVar4 - iVar26) * iVar14,0);
            uVar19 = (ulong)(uVar24 + 0x930);
            cVar3 = (**(code **)(*(long *)param_1[0x27] + 0x30))
                              ((long *)param_1[0x27],param_1[9] + uVar19,iVar14,&local_34);
            FUN_1003e97b0(uVar19 + param_1[9]);
            if (cVar3 == '\0') {
              local_34 = 0;
            }
            if (local_34 != iVar14) {
              if (local_34 == 0) {
                if (*(int *)((long)param_1 + 0x7c) == 0) {
                  uVar15 = 0x31100;
                }
                else {
                  uVar15 = 0x23a00;
                }
                (**(code **)(*param_1 + 0x268))(param_1,uVar15,param_1[0xc]);
                return;
              }
              goto LAB_1003ec987;
            }
          }
          uVar22 = uVar22 + 1;
          uVar4 = (int)uVar22 + uVar12;
          uVar19 = (ulong)uVar4;
        } while (uVar22 < uVar5);
        param_1[0x26] = (ulong)(uVar4 + 1);
        lVar7 = *param_1;
      }
      else {
        (**(code **)(*(long *)param_1[6] + 0x60))((long *)param_1[6],uVar19 * 0x930,0);
        lVar7 = param_1[9];
        param_1[9] = (ulong)uVar4 + lVar7;
        cVar3 = (**(code **)(*(long *)param_1[6] + 0x30))
                          ((long *)param_1[6],(ulong)uVar4 + lVar7,iVar23,&local_34);
        if (cVar3 == '\0') {
          local_34 = 0;
          uVar6 = (**(code **)(*(long *)param_1[6] + 0xb0))();
          *(undefined4 *)((long)param_1 + 0xc4) = uVar6;
        }
        if (local_34 != iVar23) {
LAB_1003ec966:
          (**(code **)(*param_1 + 0x288))(param_1);
          lVar7 = *param_1;
          lVar11 = param_1[0xc];
          uVar15 = 0x31100;
LAB_1003ec995:
          (**(code **)(lVar7 + 0x268))(param_1,uVar15,lVar11);
          return;
        }
        lVar7 = *param_1;
      }
      (**(code **)(lVar7 + 0x278))(param_1,iVar23,iVar23);
      return;
    }
  }
  lVar7 = param_1[0xc];
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x268);
  uVar15 = 0x52400;
LAB_1003ec484:
                    /* WARNING: Could not recover jumptable at 0x0001003ec495. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar15,lVar7);
  return;
}

