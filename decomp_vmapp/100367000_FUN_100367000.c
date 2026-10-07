
void FUN_100367000(long param_1,long param_2,long *param_3,int param_4,uint param_5)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  int iVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  
  plVar5 = *(long **)(param_2 + 0x20);
  lVar21 = *plVar5;
  lVar20 = plVar5[1];
  lVar6 = *param_3;
  uVar19 = *(uint *)(param_1 + 0x220);
  uVar2 = *(uint *)(param_1 + 0x230);
  *(uint *)(param_1 + 0x228) = uVar19;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x22c) = 0;
  lVar13 = *(long *)(param_2 + 0x128);
  if (lVar13 == 0) {
    *(undefined4 *)(param_1 + 0x218) = 0;
    return;
  }
  iVar3 = **(int **)(lVar13 + 0x58);
  iVar4 = *(int *)(lVar13 + 0xc);
  uVar15 = 0;
  *(uint *)(param_1 + 0x214) = (uint)(iVar4 - param_4) / param_5;
  lVar13 = *(long *)(lVar6 + 0x240);
  iVar14 = (int)((ulong)(*(long *)(lVar6 + 0x248) - lVar13) >> 2) * -0x49249249;
  uVar10 = 0xffffffff;
  if (iVar14 != 0) {
    uVar18 = (ulong)(lVar20 - lVar21) >> 3;
    lVar11 = 0;
    lVar20 = 0;
    do {
      lVar12 = lVar11 * 0x1c;
      uVar22 = 0;
      do {
        uVar16 = (lVar20 + uVar22) % (uVar18 & 0xffffffff);
        if (((uint)*(byte *)(lVar21 + 6 + uVar16 * 8) == *(uint *)(lVar13 + 0xc + lVar12)) &&
           ((uint)*(byte *)(lVar21 + 7 + uVar16 * 8) == *(uint *)(lVar13 + 0x10 + lVar12))) {
          iVar8 = FUN_100390910();
          iVar17 = iVar8;
          if (*(char *)(DAT_1011c8478 + 0x2d) != '\0') {
            iVar17 = 0x1402;
          }
          if (iVar8 != 0x140b) {
            iVar17 = iVar8;
          }
          bVar7 = *(byte *)(lVar21 + 4 + uVar16 * 8);
          if ((ulong)bVar7 == 4) {
            iVar8 = 0x80e1;
            if (*(char *)(DAT_1011c8478 + 0x49) != '\0') {
LAB_1003671cb:
              iVar8 = *(int *)(&DAT_100b3d440 + (ulong)bVar7 * 4);
            }
          }
          else {
            iVar8 = 0;
            if (bVar7 < 0x11) goto LAB_1003671cb;
          }
          iVar9 = (uint)*(ushort *)(lVar21 + 2 + uVar16 * 8) + param_4;
          bVar7 = FUN_100390950(lVar21 + uVar16 * 8);
          uVar19 = *(uint *)(lVar13 + 4 + lVar12);
          uVar15 = 1 << ((byte)uVar19 & 0x1f);
          *(uint *)(param_1 + 0x220) = *(uint *)(param_1 + 0x220) | uVar15;
          lVar13 = (ulong)uVar19 * 0x20;
          piVar1 = (int *)(param_1 + 0x14 + lVar13);
          if (((((iVar3 != *(int *)(param_1 + 0x10 + lVar13)) || (iVar9 != *piVar1)) ||
               (*(uint *)(param_1 + 0x18 + lVar13) != param_5)) ||
              ((iVar17 != *(int *)(param_1 + 0x1c + lVar13) ||
               (iVar8 != *(int *)(param_1 + 0x20 + lVar13))))) ||
             (((uint)bVar7 != *(uint *)(param_1 + 0x24 + lVar13) ||
              ((*(int *)(param_1 + 0x28 + lVar13) != 0 ||
               (iVar4 != *(int *)(param_1 + 0x2c + lVar13))))))) {
            *(int *)(param_1 + 0x10 + lVar13) = iVar3;
            *piVar1 = iVar9;
            *(uint *)(param_1 + 0x18 + lVar13) = param_5;
            *(int *)(param_1 + 0x1c + lVar13) = iVar17;
            *(int *)(param_1 + 0x20 + lVar13) = iVar8;
            *(uint *)(param_1 + 0x24 + lVar13) = (uint)bVar7;
            *(undefined4 *)(param_1 + 0x28 + lVar13) = 0;
            *(int *)(param_1 + 0x2c + lVar13) = iVar4;
            *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) | uVar15;
          }
          lVar20 = lVar20 + 1 + uVar22;
          if (*(char *)(lVar21 + 6 + uVar16 * 8) == '\n') {
            *(uint *)(param_1 + 0x22c) = *(uint *)(param_1 + 0x22c) | uVar15;
          }
          goto LAB_1003672c7;
        }
        uVar22 = uVar22 + 1;
      } while ((uVar18 & 0xffffffff) != uVar22);
      *(uint *)(param_1 + 0x230) =
           *(uint *)(param_1 + 0x230) | 1 << (*(byte *)(lVar13 + 4 + lVar12) & 0x1f);
LAB_1003672c7:
      if ((int)lVar11 == iVar14 + -1) goto code_r0x0001003672d4;
      lVar11 = lVar11 + 1;
      lVar13 = *(long *)(lVar6 + 0x240);
      lVar21 = *plVar5;
    } while( true );
  }
LAB_1003672ef:
  *(uint *)(param_1 + 0x228) = uVar19 & uVar10;
  *(uint *)(param_1 + 0x230) = ~uVar2 & uVar15;
  return;
code_r0x0001003672d4:
  uVar19 = *(uint *)(param_1 + 0x228);
  uVar15 = *(uint *)(param_1 + 0x230);
  uVar10 = ~*(uint *)(param_1 + 0x220);
  goto LAB_1003672ef;
}

