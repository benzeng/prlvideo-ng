
void FUN_1003662d0(long *param_1,long param_2,long param_3,long *param_4,int param_5)

{
  long lVar1;
  int *piVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  byte bVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  int iVar21;
  long lVar22;
  int iVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  uint local_84;
  undefined4 local_50;
  int local_4c;
  uint local_48;
  int local_44;
  undefined4 local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  
  plVar6 = *(long **)(param_3 + 0x20);
  lVar26 = *plVar6;
  lVar18 = plVar6[1];
  lVar7 = *param_4;
  uVar4 = *(uint *)(param_1 + 0x46);
  uVar14 = *(uint *)(param_2 + 0x28) & 0x3fffffff;
  if ((*(uint *)(param_2 + 0x28) & 0x40000000) == 0) {
    uVar14 = 1;
  }
  *(uint *)(param_1 + 0x42) = uVar14;
  *(undefined4 *)((long)param_1 + 0x214) = 0xffffffff;
  uVar14 = *(uint *)(param_1 + 0x44);
  *(uint *)(param_1 + 0x45) = uVar14;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)((long)param_1 + 0x224) = 0;
  *(undefined4 *)((long)param_1 + 0x22c) = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  lVar25 = *(long *)(lVar7 + 0x240);
  iVar21 = (int)((ulong)(*(long *)(lVar7 + 0x248) - lVar25) >> 2) * -0x49249249;
  if (iVar21 != 0) {
    uVar24 = (ulong)(lVar18 - lVar26) >> 3 & 0xffffffff;
    lVar20 = 0;
    lVar18 = 0;
    do {
      lVar22 = lVar20 * 0x1c;
      uVar19 = 0;
      do {
        uVar17 = (lVar18 + uVar19) % uVar24;
        if (((uint)*(byte *)(lVar26 + 6 + uVar17 * 8) == *(uint *)(lVar25 + 0xc + lVar22)) &&
           ((uint)*(byte *)(lVar26 + 7 + uVar17 * 8) == *(uint *)(lVar25 + 0x10 + lVar22))) {
          lVar18 = lVar18 + 1 + uVar19;
          goto LAB_100366445;
        }
        uVar19 = uVar19 + 1;
      } while (uVar24 != uVar19);
      *(uint *)(param_1 + 0x46) =
           *(uint *)(param_1 + 0x46) | 1 << (*(byte *)(lVar25 + 4 + lVar22) & 0x1f);
LAB_100366445:
      uVar19 = (ulong)*(ushort *)(lVar26 + uVar17 * 8);
      lVar8 = *(long *)(param_3 + 0x128 + uVar19 * 0x10);
      if (lVar8 != 0) {
        lVar1 = lVar26 + uVar17 * 8;
        piVar2 = (int *)(param_2 + 0x20 + uVar19 * 0x14);
        local_84 = *(uint *)(param_2 + 0x24 + uVar19 * 0x14);
        if (local_84 == 0) {
LAB_1003664e0:
          uVar19 = (ulong)local_84;
          uVar14 = *(uint *)(param_1 + 0x42);
          iVar23 = *(int *)(lVar8 + 0xc);
          if (uVar14 == 0) goto LAB_100366509;
          if (local_84 == 0) {
            uVar11 = FUN_100390910(lVar1);
            uVar19 = 0;
            switch(uVar11) {
            case 0x1401:
              uVar13 = (ulong)*(byte *)(lVar26 + 4 + uVar17 * 8);
              uVar19 = 0;
              if (uVar13 < 0x11) {
                uVar19 = (ulong)*(uint *)(&DAT_100b3d440 + uVar13 * 4);
              }
              break;
            case 0x1402:
            case 0x1403:
            case 0x140b:
              uVar19 = (ulong)*(byte *)(lVar26 + 4 + uVar17 * 8);
              iVar15 = 0;
              if (uVar19 < 0x11) {
                iVar15 = *(int *)(&DAT_100b3d440 + uVar19 * 4);
              }
              uVar19 = (ulong)(uint)(iVar15 * 2);
              break;
            case 0x1406:
              uVar19 = (ulong)*(byte *)(lVar26 + 4 + uVar17 * 8);
              iVar15 = 0;
              if (uVar19 < 0x11) {
                iVar15 = *(int *)(&DAT_100b3d440 + uVar19 * 4);
              }
              uVar19 = (ulong)(uint)(iVar15 << 2);
            }
          }
switchD_1003665b4_caseD_1404:
          local_84 = (uint)uVar19;
          uVar10 = (int)((uint)(iVar23 - *piVar2) / uVar19) * uVar14;
          if (*(uint *)(param_1 + 0x42) <= uVar10) {
            uVar10 = *(uint *)(param_1 + 0x42);
          }
          *(uint *)(param_1 + 0x42) = uVar10;
        }
        else {
          uVar14 = *(uint *)(param_2 + 0x28 + uVar19 * 0x14);
          if ((int)uVar14 < 0) {
            uVar14 = uVar14 & 0x3fffffff;
            if (uVar14 == 0) goto LAB_1003664e0;
            iVar23 = *(int *)(lVar8 + 0xc);
            uVar19 = (ulong)local_84;
            goto switchD_1003665b4_caseD_1404;
          }
          iVar23 = *(int *)(lVar8 + 0xc);
LAB_100366509:
          uVar10 = ((iVar23 - local_84 * param_5) - *piVar2) / local_84;
          uVar14 = *(uint *)((long)param_1 + 0x214);
          if (uVar10 < *(uint *)((long)param_1 + 0x214)) {
            uVar14 = uVar10;
          }
          *(uint *)((long)param_1 + 0x214) = uVar14;
          uVar14 = 0;
        }
        bVar9 = *(byte *)(lVar26 + 4 + uVar17 * 8);
        if ((ulong)bVar9 == 4) {
          uVar11 = 0x80e1;
          if (*(char *)(DAT_1011c8478 + 0x49) != '\0') {
LAB_1003666a8:
            uVar11 = *(undefined4 *)(&DAT_100b3d440 + (ulong)bVar9 * 4);
          }
        }
        else {
          uVar11 = 0;
          if (bVar9 < 0x11) goto LAB_1003666a8;
        }
        iVar12 = FUN_100390910(lVar1);
        iVar15 = iVar12;
        if (*(char *)(DAT_1011c8478 + 0x2d) != '\0') {
          iVar15 = 0x1402;
        }
        if (iVar12 != 0x140b) {
          iVar15 = iVar12;
        }
        uVar5 = **(undefined4 **)(lVar8 + 0x58);
        uVar3 = *(ushort *)(lVar26 + 2 + uVar17 * 8);
        iVar12 = *piVar2;
        bVar9 = FUN_100390950(lVar1);
        local_48 = local_84;
        local_3c = (uint)bVar9;
        local_50 = uVar5;
        local_4c = (uint)uVar3 + iVar12;
        local_44 = iVar15;
        local_40 = uVar11;
        local_38 = uVar14;
        local_34 = iVar23;
        (**(code **)(*param_1 + 0x40))
                  (param_1,*(undefined4 *)(lVar25 + 4 + lVar22),&local_50,param_5,
                   *(char *)(lVar26 + 6 + uVar17 * 8) == '\n');
      }
      if ((int)lVar20 == iVar21 + -1) goto code_r0x000100366785;
      lVar20 = lVar20 + 1;
      lVar25 = *(long *)(lVar7 + 0x240);
      lVar26 = *plVar6;
    } while( true );
  }
  uVar16 = 0xffffffff;
  uVar10 = 0;
LAB_1003667b0:
  *(uint *)(param_1 + 0x45) = uVar14 & uVar16;
  *(uint *)(param_1 + 0x46) = ~uVar4 & uVar10;
  return;
code_r0x000100366785:
  uVar14 = *(uint *)(param_1 + 0x45);
  uVar10 = *(uint *)(param_1 + 0x46);
  uVar16 = ~*(uint *)(param_1 + 0x44);
  goto LAB_1003667b0;
}

