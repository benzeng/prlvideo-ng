
void FUN_100399360(long *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  bool bVar12;
  
  uVar1 = *(uint *)(*param_1 + 0x10);
  DAT_1011c8480 = DAT_1011c8480 + 1;
  if (uVar1 != 0) {
    uVar9 = 0;
    uVar8 = 0x11d;
    uVar11 = uVar1;
    do {
      if ((uVar11 & 1) != 0) {
        uVar4 = FUN_100351740(*param_1,uVar1,uVar9);
        lVar3 = *(long *)(*(long *)(*param_1 + 8) + (ulong)uVar4 * 0x10);
        if (lVar3 != 0) {
          uVar5 = (ulong)(*(int *)(lVar3 + 8) == 0x23);
          lVar10 = 0;
          if (uVar5 < (ulong)(*(long *)(lVar3 + 0x48) - *(long *)(lVar3 + 0x40) >> 3)) {
            lVar10 = *(long *)(*(long *)(lVar3 + 0x40) + uVar5 * 8);
          }
          if ((*(ushort *)(lVar3 + 0xb0) & 0x800) != 0) {
            (*DAT_1011c56a0)(uVar4 + 0x84c0);
            (*DAT_1011c5768)(*(undefined4 *)(lVar10 + 0x14),0);
            (*DAT_1011c5768)(*(undefined4 *)(lVar10 + 0x14),*(undefined4 *)(lVar10 + 0xc));
          }
          if (((*(char *)(DAT_1011c8478 + 0x84) != '\0') || (0xf < uVar9)) ||
             (DAT_1011c8480 != *(int *)(lVar10 + 8))) {
            FUN_1003dcc70(lVar10 + 0x30,uVar9,param_2,*(undefined4 *)(lVar3 + 8));
            iVar2 = *(int *)(lVar10 + 0x10);
            if (*(int *)(lVar10 + 0x70) != iVar2) {
              *(int *)(lVar10 + 0x70) = iVar2;
              *(uint *)(lVar10 + 0x74) = *(uint *)(lVar10 + 0x74) | 0x201;
            }
            if (*(int *)(lVar10 + 0x28) != iVar2 + -1) {
              *(int *)(lVar10 + 0x28) = iVar2 + -1;
              *(byte *)(lVar10 + 0x2c) = *(byte *)(lVar10 + 0x2c) | 2;
            }
            FUN_1003dca10(lVar10 + 0x24,uVar9,param_2);
            if ((bool)*(char *)(lVar10 + 0x50) != (*(int *)(lVar10 + 0xa8) == 4)) {
              *(bool *)(lVar10 + 0x50) = *(int *)(lVar10 + 0xa8) == 4;
              *(byte *)(lVar10 + 0x74) = *(byte *)(lVar10 + 0x74) | 0x80;
            }
            uVar6 = *(uint *)(lVar3 + 8);
            bVar12 = false;
            if ((int)uVar6 < 0x66) {
              if (uVar6 < 9) {
                uVar7 = 0x10a;
LAB_100399515:
                if ((uVar7 >> (uVar6 & 0x1f) & 1) != 0) {
                  bVar12 = *(int *)(param_2 + (ulong)uVar8 * 4) != 0;
                }
              }
            }
            else {
              uVar6 = uVar6 - 0x66;
              if (uVar6 < 0xd) {
                uVar7 = 0x1015;
                goto LAB_100399515;
              }
            }
            if ((bool)*(char *)(lVar10 + 0x6c) == bVar12) {
              uVar6 = *(uint *)(lVar10 + 0x74);
            }
            else {
              *(bool *)(lVar10 + 0x6c) = bVar12;
              uVar6 = *(uint *)(lVar10 + 0x74) | 0x800;
              *(uint *)(lVar10 + 0x74) = uVar6;
            }
            iVar2 = *(int *)(lVar10 + 0x2c);
            if (iVar2 != 0 || uVar6 != 0) {
              (*DAT_1011c56a0)(uVar4 + 0x84c0);
            }
            if (uVar6 != 0) {
              FUN_100399630(lVar10);
            }
            if (((iVar2 != 0) && (iVar2 = *(int *)(lVar10 + 0x14), iVar2 != 0x84f5)) &&
               (iVar2 != 0x8c2a)) {
              uVar4 = *(uint *)(lVar10 + 0x2c);
              uVar6 = *(int *)(lVar10 + 0x10) - 1;
              if ((uVar4 & 1) != 0) {
                uVar4 = *(uint *)(lVar10 + 0x24);
                if (uVar6 <= *(uint *)(lVar10 + 0x24)) {
                  uVar4 = uVar6;
                }
                (*DAT_1011c6cd8)(iVar2,0x813c,uVar4);
                uVar4 = *(uint *)(lVar10 + 0x2c);
              }
              if ((uVar4 & 2) != 0) {
                if (*(uint *)(lVar10 + 0x28) < uVar6) {
                  uVar6 = *(uint *)(lVar10 + 0x28);
                }
                (*DAT_1011c6cd8)(iVar2,0x813d,uVar6);
              }
              *(undefined4 *)(lVar10 + 0x2c) = 0;
            }
            *(int *)(lVar10 + 8) = DAT_1011c8480;
          }
        }
      }
      uVar9 = uVar9 + 1;
      uVar8 = uVar8 + 0x40;
      uVar4 = uVar11 >> 1;
      uVar11 = uVar11 >> 1;
    } while (uVar4 != 0);
  }
  return;
}

