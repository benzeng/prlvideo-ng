
undefined8
FUN_10036a210(long param_1,long param_2,long param_3,int param_4,int param_5,char param_6,
             int param_7)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  int iVar20;
  bool bVar21;
  char local_59 [41];
  
  uVar5 = *(int *)(param_2 + 0x860) - 1;
  if ((uVar5 < 0xd) && ((0x1e1fU >> (uVar5 & 0x1f) & 1) != 0)) {
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)((long)&PTR___mh_execute_header_100b3d4d0 + (long)(int)uVar5 * 4);
    uVar7 = 3;
    if (param_4 != 0) {
      *(int *)(param_1 + 0xc) = param_4;
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x18);
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      if (*(int *)(param_3 + 0x11c) != -1) {
        iVar6 = param_7;
        if (*(char *)(DAT_1011c8478 + 0x86) == '\0') {
          iVar6 = 0;
        }
        (*DAT_1011c6d38)(*(int *)(param_3 + 0x11c),iVar6);
      }
      lVar10 = *(long *)(param_2 + 0x648);
      if ((lVar10 != 0) &&
         (iVar6 = (int)((ulong)(*(long *)(param_3 + 0x90) - *(long *)(param_3 + 0x88)) >> 3),
         iVar6 != 0)) {
        lVar19 = 0;
        do {
          puVar4 = *(undefined4 **)
                    (lVar10 + 0x10 + (ulong)*(uint *)(*(long *)(param_3 + 0x88) + lVar19 * 8) * 8);
          if (puVar4 != (undefined4 *)0x0) {
            iVar2 = *(int *)(*(long *)(param_3 + 0x88) + 4 + lVar19 * 8);
            plVar8 = (long *)FUN_1003443e0(param_2,*puVar4);
            lVar18 = *plVar8;
            if (lVar18 == 0) {
              lVar18 = (long)iVar2 * 0x20;
              local_59[0x11] = '\0';
              local_59[0x12] = '\0';
              local_59[0x13] = '\0';
              local_59[0x14] = '\0';
              local_59[0x15] = '\0';
              local_59[0x16] = '\0';
              local_59[0x17] = '\0';
              local_59[0x18] = '\0';
              local_59[0x19] = '\0';
              local_59[0x1a] = '\0';
              local_59[0x1b] = '\0';
              local_59[0x1c] = '\0';
              local_59[0x1d] = '\0';
              local_59[0x1e] = '\0';
              local_59[0x1f] = '\0';
              local_59[0x20] = '\0';
              local_59[1] = '\0';
              local_59[2] = '\0';
              local_59[3] = '\0';
              local_59[4] = '\0';
              local_59[5] = '\0';
              local_59[6] = '\0';
              local_59[7] = '\0';
              local_59[8] = '\0';
              local_59[9] = '\0';
              local_59[10] = '\0';
              local_59[0xb] = '\0';
              local_59[0xc] = '\0';
              local_59[0xd] = '\0';
              local_59[0xe] = '\0';
              local_59[0xf] = '\0';
              local_59[0x10] = '\0';
              *(undefined8 *)(param_1 + 0x3c + lVar18) = 0;
              *(undefined8 *)(param_1 + 0x34 + lVar18) = 0;
              *(undefined8 *)(param_1 + 0x2c + lVar18) = 0;
              *(undefined8 *)(param_1 + 0x24 + lVar18) = 0;
            }
            else {
              iVar16 = (int)plVar8[1];
              iVar9 = puVar4[1] + *(int *)((long)plVar8 + 0xc);
              if (puVar4[3] == 1) {
                iVar9 = iVar9 + iVar16 * param_5;
                iVar15 = puVar4[4];
                bVar21 = iVar15 == 0;
                if (bVar21) {
                  iVar16 = 0;
                }
LAB_10036a3db:
                if (bVar21) {
                  iVar15 = param_4;
                }
              }
              else {
                if (param_6 == '\0') {
                  bVar21 = iVar16 == 0;
                  iVar15 = 0;
                  goto LAB_10036a3db;
                }
                iVar9 = iVar9 + iVar16 * param_7;
                iVar15 = param_4;
              }
              uVar5 = puVar4[2];
              uVar13 = *(uint *)(&DAT_100b3cfd4 + (ulong)uVar5 * 8);
              uVar17 = uVar13 >> 0x10 & 0xff;
              if ((ulong)uVar5 == 0) {
                uVar17 = 0x80e1;
              }
              uVar11 = uVar13 >> 8 & 0xff;
              if (uVar11 < 8) {
                iVar20 = *(int *)(&DAT_100b3d4b0 + (ulong)uVar11 * 4);
              }
              else {
                iVar20 = 0x500;
                if (uVar5 - 0x4d < 2) {
                  iVar20 = 0x8368;
                }
              }
              uVar5 = uVar13 >> 4 & 1;
              iVar3 = *(int *)(lVar18 + 0xc);
              lVar14 = (long)iVar2 * 0x20;
              piVar1 = (int *)(param_1 + 0x28 + lVar14);
              if ((((*(int *)(param_1 + 0x24 + lVar14) == **(int **)(lVar18 + 0x58)) &&
                   (*piVar1 == iVar9)) && (*(int *)(param_1 + 0x2c + lVar14) == iVar16)) &&
                 (((*(int *)(param_1 + 0x30 + lVar14) == iVar20 &&
                   (*(uint *)(param_1 + 0x34 + lVar14) == uVar17)) &&
                  ((*(uint *)(param_1 + 0x38 + lVar14) == uVar5 &&
                   ((*(int *)(param_1 + 0x3c + lVar14) == iVar15 &&
                    (*(int *)(param_1 + 0x40 + lVar14) == iVar3)))))))) {
                uVar5 = 1 << ((byte)iVar2 & 0x1f);
              }
              else {
                *(int *)(param_1 + 0x24 + lVar14) = **(int **)(lVar18 + 0x58);
                *piVar1 = iVar9;
                *(int *)(param_1 + 0x2c + lVar14) = iVar16;
                *(int *)(param_1 + 0x30 + lVar14) = iVar20;
                *(uint *)(param_1 + 0x34 + lVar14) = uVar17;
                *(uint *)(param_1 + 0x38 + lVar14) = uVar5;
                *(int *)(param_1 + 0x3c + lVar14) = iVar15;
                *(int *)(param_1 + 0x40 + lVar14) = iVar3;
                uVar5 = 1 << ((byte)iVar2 & 0x1f);
                *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | uVar5;
              }
              *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | uVar5;
            }
          }
          lVar19 = lVar19 + 1;
        } while (iVar6 != (int)lVar19);
      }
      uVar5 = *(uint *)(param_1 + 0x18);
      if (uVar5 == 0) {
        if ((((*(int *)(param_1 + 0x24) != *(int *)(param_1 + 4)) || (*(int *)(param_1 + 0x28) != 0)
             ) || (*(int *)(param_1 + 0x2c) != 0)) ||
           (((*(int *)(param_1 + 0x30) != 0x1406 || (*(int *)(param_1 + 0x34) != 1)) ||
            ((*(int *)(param_1 + 0x38) != 0 ||
             ((*(int *)(param_1 + 0x3c) != *(int *)(param_1 + 0xc) ||
              (*(int *)(param_1 + 0x40) != 4)))))))) {
          *(int *)(param_1 + 0x24) = *(int *)(param_1 + 4);
          *(undefined4 *)(param_1 + 0x28) = 0;
          *(undefined4 *)(param_1 + 0x2c) = 0;
          *(undefined4 *)(param_1 + 0x30) = 0x1406;
          *(undefined4 *)(param_1 + 0x34) = 1;
          *(undefined4 *)(param_1 + 0x38) = 0;
          *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0xc);
          *(undefined4 *)(param_1 + 0x40) = 4;
          *(undefined4 *)(param_1 + 0x1c) = 1;
        }
        *(undefined4 *)(param_1 + 0x18) = 1;
        uVar5 = 1;
      }
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & ~uVar5;
      *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(param_1 + 0x228);
      *(undefined4 *)(param_1 + 0x228) = 0;
      *(undefined4 *)(param_1 + 0x22c) = 0;
      uVar5 = *(uint *)(param_2 + 0x2748);
      uVar7 = 0;
      if (uVar5 != 0) {
        iVar6 = FUN_10035cf50(*(undefined8 *)(param_1 + 0x278),param_2,local_59);
        uVar7 = 5;
        if ((iVar6 == 0) && (uVar7 = 0, local_59[0] == '\0')) {
          uVar13 = 0;
          do {
            uVar17 = 0;
            if (uVar5 != 0) {
              for (; (uVar5 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
              }
            }
            if (uVar5 == 0) {
              uVar17 = 0xffffffff;
            }
            uVar5 = ~(1 << ((byte)uVar17 & 0x1f)) & uVar5;
            lVar10 = *(long *)(param_2 + 0x2708 + (ulong)uVar17 * 0x10);
            iVar6 = **(int **)(lVar10 + 0x58);
            iVar2 = *(int *)(*(long *)(lVar10 + 0x60) + 0x1c);
            uVar11 = *(int *)(lVar10 + 0xc) - iVar2 & 0xfffffffc;
            lVar10 = (ulong)uVar13 * 0x10;
            piVar1 = (int *)(param_1 + 0x238 + lVar10);
            if ((((*(uint *)(param_1 + 0x234 + lVar10) == uVar17) && (*piVar1 == iVar6)) &&
                (*(int *)(param_1 + 0x23c + lVar10) == iVar2)) &&
               (*(uint *)(param_1 + 0x240 + lVar10) == uVar11)) {
              uVar12 = 1 << ((byte)uVar13 & 0x1f);
            }
            else {
              uVar12 = 1 << ((byte)uVar13 & 0x1f);
              *(uint *)(param_1 + 0x22c) = *(uint *)(param_1 + 0x22c) | uVar12;
              *(uint *)(param_1 + 0x234 + lVar10) = uVar17;
              *piVar1 = iVar6;
              *(int *)(param_1 + 0x23c + lVar10) = iVar2;
              *(uint *)(param_1 + 0x240 + lVar10) = uVar11;
            }
            uVar12 = uVar12 | *(uint *)(param_1 + 0x228);
            *(uint *)(param_1 + 0x228) = uVar12;
            uVar13 = uVar13 + 1;
          } while (uVar5 != 0);
          *(uint *)(param_1 + 0x230) = *(uint *)(param_1 + 0x230) & ~uVar12;
        }
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = 0x500;
    uVar7 = 2;
  }
  return uVar7;
}

