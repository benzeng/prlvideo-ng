
void FUN_100367930(long param_1,int param_2,long *param_3,int param_4,int param_5,int param_6,
                  long param_7)

{
  int *piVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  int iVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  
  plVar3 = *(long **)(param_7 + 0x20);
  lVar19 = *plVar3;
  lVar21 = plVar3[1];
  lVar4 = *param_3;
  uVar8 = *(uint *)(param_1 + 0x220);
  uVar2 = *(uint *)(param_1 + 0x230);
  *(uint *)(param_1 + 0x228) = uVar8;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x22c) = 0;
  lVar15 = *(long *)(lVar4 + 0x240);
  iVar18 = (int)((ulong)(*(long *)(lVar4 + 0x248) - lVar15) >> 2) * -0x49249249;
  uVar12 = 0;
  uVar17 = 0;
  if (iVar18 != 0) {
    uVar20 = (ulong)(lVar21 - lVar19) >> 3 & 0xffffffff;
    uVar17 = 0;
    lVar9 = 0;
    lVar21 = 0;
    do {
      lVar10 = lVar9 * 0x1c;
      uVar16 = 0;
      do {
        uVar14 = (lVar21 + uVar16) % uVar20;
        if (((uint)*(byte *)(lVar19 + 6 + uVar14 * 8) == *(uint *)(lVar15 + 0xc + lVar10)) &&
           ((uint)*(byte *)(lVar19 + 7 + uVar14 * 8) == *(uint *)(lVar15 + 0x10 + lVar10))) {
          bVar5 = *(byte *)(lVar19 + 4 + uVar14 * 8);
          if ((ulong)bVar5 == 4) {
            iVar13 = 0x80e1;
            if (*(char *)(DAT_1011c8478 + 0x49) != '\0') {
LAB_100367a9e:
              iVar13 = *(int *)(&DAT_100b3d440 + (ulong)bVar5 * 4);
            }
          }
          else {
            iVar13 = 0;
            if (bVar5 < 0x11) goto LAB_100367a9e;
          }
          iVar6 = (uint)*(ushort *)(lVar19 + 2 + uVar14 * 8) + param_4;
          iVar7 = FUN_100390910();
          bVar5 = FUN_100390950(lVar19 + uVar14 * 8);
          uVar8 = *(uint *)(lVar15 + 4 + lVar10);
          lVar15 = (ulong)uVar8 * 0x20;
          piVar1 = (int *)(param_1 + 0x14 + lVar15);
          bVar11 = (byte)uVar8;
          if (((((*(int *)(param_1 + 0x10 + lVar15) == param_2) && (iVar6 == *piVar1)) &&
               (*(int *)(param_1 + 0x18 + lVar15) == param_5)) &&
              ((iVar7 == *(int *)(param_1 + 0x1c + lVar15) &&
               (iVar13 == *(int *)(param_1 + 0x20 + lVar15))))) &&
             (((uint)bVar5 == *(uint *)(param_1 + 0x24 + lVar15) &&
              ((*(int *)(param_1 + 0x28 + lVar15) == 0 &&
               (*(int *)(param_1 + 0x2c + lVar15) == param_6)))))) {
            uVar8 = 1 << (bVar11 & 0x1f);
          }
          else {
            *(int *)(param_1 + 0x10 + lVar15) = param_2;
            *piVar1 = iVar6;
            *(int *)(param_1 + 0x18 + lVar15) = param_5;
            *(int *)(param_1 + 0x1c + lVar15) = iVar7;
            *(int *)(param_1 + 0x20 + lVar15) = iVar13;
            *(uint *)(param_1 + 0x24 + lVar15) = (uint)bVar5;
            *(undefined4 *)(param_1 + 0x28 + lVar15) = 0;
            *(int *)(param_1 + 0x2c + lVar15) = param_6;
            uVar8 = 1 << (bVar11 & 0x1f);
            *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) | uVar8;
          }
          lVar21 = lVar21 + 1 + uVar16;
          uVar17 = *(uint *)(param_1 + 0x220) | uVar8;
          *(uint *)(param_1 + 0x220) = uVar17;
          if (*(char *)(lVar19 + 6 + uVar14 * 8) == '\n') {
            *(uint *)(param_1 + 0x22c) = *(uint *)(param_1 + 0x22c) | uVar8;
          }
          goto LAB_100367bc0;
        }
        uVar16 = uVar16 + 1;
      } while (uVar20 != uVar16);
      *(uint *)(param_1 + 0x230) =
           *(uint *)(param_1 + 0x230) | 1 << (*(byte *)(lVar15 + 4 + lVar10) & 0x1f);
LAB_100367bc0:
      if ((int)lVar9 == iVar18 + -1) goto code_r0x000100367bcd;
      lVar9 = lVar9 + 1;
      lVar15 = *(long *)(lVar4 + 0x240);
      lVar19 = *plVar3;
    } while( true );
  }
LAB_100367bdf:
  *(uint *)(param_1 + 0x228) = ~uVar17 & uVar8;
  *(uint *)(param_1 + 0x230) = ~uVar2 & uVar12;
  return;
code_r0x000100367bcd:
  uVar8 = *(uint *)(param_1 + 0x228);
  uVar12 = *(uint *)(param_1 + 0x230);
  goto LAB_100367bdf;
}

