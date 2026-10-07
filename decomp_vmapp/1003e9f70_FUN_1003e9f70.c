
/* WARNING: Removing unreachable block (ram,0x0001003ea05e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003e9f70(long *param_1)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  code *UNRECOVERED_JUMPTABLE;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  uint *puVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar27;
  int iVar28;
  int iVar29;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  int local_34;
  
  pcVar1 = (char *)param_1[0xb];
  if (*pcVar1 == -0x58) {
    uVar3 = *(uint *)(pcVar1 + 6);
    uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
    lVar7 = param_1[0xb];
    if (((*(byte *)(lVar7 + 1) & 8) == 0) || (-1 < *(char *)(lVar7 + 10))) goto LAB_1003e9fbe;
  }
  else {
    uVar3 = (uint)CONCAT11((char)*(undefined2 *)(pcVar1 + 7),
                           (char)((ushort)*(undefined2 *)(pcVar1 + 7) >> 8));
    lVar7 = param_1[0xb];
LAB_1003e9fbe:
    uVar4 = *(uint *)(lVar7 + 2);
    uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    local_34 = 0;
    if (uVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001003ea00d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x260))(param_1);
      return;
    }
    if ((ulong)param_1[0x14] < (ulong)uVar4) {
      lVar7 = param_1[0xc];
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x268);
      uVar13 = 0x52100;
      goto LAB_1003ea3be;
    }
    iVar5 = 0;
    if ((*(uint *)((long)param_1 + 0x6c) & 2) == 0) {
      iVar5 = 0;
      if ((int)param_1[0x19] != -1) {
        iVar5 = (int)param_1[0x19];
      }
    }
    iVar5 = FUN_1003e1900(*(uint *)((long)param_1 + 0x6c),iVar5,*(undefined1 *)param_1[0xb]);
    if (iVar5 != -1) {
      uVar20 = 0;
      uVar17 = uVar4;
      while( true ) {
        lVar7 = param_1[0x25];
        uVar16 = (ulong)*(byte *)(*(long *)(lVar7 + 0x10) + 3);
        iVar5 = 0;
        if (uVar16 != 0) {
          puVar14 = (uint *)(lVar7 + 0x24);
          uVar8 = 0;
          uVar19 = 0;
          do {
            if ((puVar14[-1] <= uVar17) && (uVar17 <= *puVar14)) {
              uVar19 = uVar8 & 0xffffffff;
            }
            uVar8 = uVar8 + 1;
            puVar14 = (uint *)((long)puVar14 + 0x12);
          } while (uVar16 != uVar8);
          iVar5 = 0;
          uVar18 = (uint)uVar19;
          if (0 < (int)uVar18) {
            uVar10 = uVar18 - 1;
            uVar16 = (ulong)uVar10 + 1;
            uVar15 = uVar16 & 0x1fffffff8;
            iVar5 = 0;
            iVar21 = 0;
            iVar22 = 0;
            iVar23 = 0;
            iVar24 = 0;
            iVar27 = 0;
            iVar28 = 0;
            iVar29 = 0;
            uVar8 = 0;
            if (uVar15 != 0) {
              piVar9 = (int *)(lVar7 + 0x2c);
              iVar5 = 0;
              iVar21 = 0;
              iVar22 = 0;
              iVar23 = 0;
              uVar12 = 0;
              iVar24 = 0;
              iVar27 = 0;
              iVar28 = 0;
              iVar29 = 0;
              do {
                auVar26._8_4_ = (int)uVar12;
                auVar26._0_8_ = uVar12;
                auVar26._12_4_ = (int)(uVar12 >> 0x20);
                lVar11 = auVar26._8_8_;
                iVar5 = iVar5 + *piVar9 + (int)DAT_100b406e0;
                iVar21 = iVar21 + *(int *)(lVar7 + 0x2c + (lVar11 + 1) * 0x12) + DAT_100b406e0._4_4_
                ;
                iVar22 = iVar22 + *(int *)(lVar7 + 0x2c + (uVar12 + _DAT_100b4afd0) * 0x12) +
                         DAT_100b406e0._8_4_;
                iVar23 = iVar23 + *(int *)(lVar7 + 0x2c + (lVar11 + _UNK_100b4afd8) * 0x12) +
                         DAT_100b406e0._12_4_;
                iVar24 = iVar24 + *(int *)(lVar7 + 0x2c + (uVar12 + _DAT_100b4aff0) * 0x12) +
                         (int)DAT_100b406e0;
                iVar27 = iVar27 + *(int *)(lVar7 + 0x2c + (lVar11 + _UNK_100b4aff8) * 0x12) +
                         DAT_100b406e0._4_4_;
                iVar28 = iVar28 + *(int *)(lVar7 + 0x2c + (uVar12 + _DAT_100b4afe0) * 0x12) +
                         DAT_100b406e0._8_4_;
                iVar29 = iVar29 + *(int *)(lVar7 + 0x2c + (lVar11 + _UNK_100b4afe8) * 0x12) +
                         DAT_100b406e0._12_4_;
                uVar12 = uVar12 + 8;
                piVar9 = piVar9 + 0x24;
                uVar8 = uVar15;
              } while (((ulong)uVar10 + 1 & 0xfffffffffffffff8) != uVar12);
            }
            auVar25._0_4_ = iVar22 + iVar28 + iVar5 + iVar24;
            auVar25._4_4_ = iVar23 + iVar29 + iVar21 + iVar27;
            auVar25._8_4_ = iVar5 + iVar24 + iVar22 + iVar28;
            auVar25._12_4_ = iVar21 + iVar27 + iVar23 + iVar29;
            auVar26 = phaddd(auVar25,auVar25);
            iVar5 = auVar26._0_4_;
            if (uVar16 != uVar8) {
              iVar21 = (int)uVar8;
              if ((uVar19 & 3) != 0) {
                piVar9 = (int *)(lVar7 + 0x2c + uVar8 * 0x12);
                iVar22 = -(uVar18 & 3);
                do {
                  iVar5 = iVar5 + 0x96 + *piVar9;
                  uVar8 = uVar8 + 1;
                  piVar9 = (int *)((long)piVar9 + 0x12);
                  iVar22 = iVar22 + 1;
                } while (iVar22 != 0);
              }
              if (2 < uVar10 - iVar21) {
                iVar21 = (uVar18 + 3) - ((int)uVar8 + 3);
                piVar9 = (int *)(lVar7 + 0x62 + uVar8 * 0x12);
                do {
                  iVar5 = *piVar9 + 600 +
                          iVar5 + *(int *)((long)piVar9 + -0x36) + piVar9[-9] +
                          *(int *)((long)piVar9 + -0x12);
                  piVar9 = piVar9 + 0x12;
                  iVar21 = iVar21 + -4;
                } while (iVar21 != 0);
              }
            }
          }
        }
        (**(code **)(*(long *)param_1[6] + 0x60))
                  ((long *)param_1[6],(uVar17 - iVar5) * 0x930 + 0x10,0);
        cVar2 = (**(code **)(*(long *)param_1[6] + 0x30))
                          ((long *)param_1[6],(uVar20 & 0x1fffff) * 0x800 + param_1[9],0x800,
                           &local_34);
        if (cVar2 == '\0') {
          local_34 = 0;
          uVar6 = (**(code **)(*(long *)param_1[6] + 0xb0))();
          *(undefined4 *)((long)param_1 + 0xc4) = uVar6;
        }
        if (local_34 != 0x800) break;
        uVar20 = uVar20 + 1;
        uVar17 = (int)uVar20 + uVar4;
        if (uVar3 <= uVar20) {
          param_1[0x26] = (ulong)(uVar17 + 1);
          (**(code **)(*param_1 + 0x278))(param_1,(int)uVar20 << 0xb,uVar3 << 0xb);
          return;
        }
      }
      if (local_34 == 0) {
        if (*(int *)((long)param_1 + 0x7c) == 0) {
          (**(code **)(*param_1 + 0x288))(param_1);
          lVar7 = *param_1;
          lVar11 = param_1[0xc];
          uVar13 = 0x31100;
        }
        else {
          lVar7 = *param_1;
          lVar11 = param_1[0xc];
          uVar13 = 0x23a00;
        }
      }
      else {
        lVar7 = *param_1;
        lVar11 = param_1[0xc];
        uVar13 = 0x31108;
      }
      (**(code **)(lVar7 + 0x268))(param_1,uVar13,lVar11);
      return;
    }
  }
  lVar7 = param_1[0xc];
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x268);
  uVar13 = 0x52400;
LAB_1003ea3be:
                    /* WARNING: Could not recover jumptable at 0x0001003ea3cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar13,lVar7);
  return;
}

