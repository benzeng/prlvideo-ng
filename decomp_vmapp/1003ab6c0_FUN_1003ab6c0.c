
void FUN_1003ab6c0(long param_1)

{
  int *piVar1;
  long lVar2;
  byte bVar3;
  undefined1 uVar4;
  uint uVar5;
  long lVar6;
  byte bVar7;
  uint uVar8;
  ulong uVar9;
  byte bVar10;
  uint uVar11;
  undefined **ppuVar12;
  byte bVar13;
  uint uVar14;
  long *plVar15;
  byte bVar16;
  byte bVar17;
  bool bVar18;
  undefined8 local_80;
  long local_78;
  long local_70;
  undefined8 *local_68;
  undefined8 **local_60;
  undefined8 **local_58;
  undefined8 *local_50;
  undefined8 **local_48;
  undefined8 **local_40;
  undefined1 local_38;
  
  lVar6 = **(long **)(param_1 + 0x50);
  bVar13 = 0;
  bVar10 = 0xf;
  if (lVar6 == 0) {
    bVar17 = 0xf;
    bVar13 = 0;
  }
  else {
    bVar17 = 0xf;
    do {
      if ((bVar17 == 0) && (bVar13 == 0xf)) {
        bVar17 = 0;
        bVar13 = 0xf;
        break;
      }
      bVar16 = *(byte *)(lVar6 + 0x28);
      bVar3 = 0xf;
      if (bVar16 < 0x17) {
        if ((0x7ff80eU >> (bVar16 & 0x1f) & 1) == 0) {
          if ((0x7f0U >> (bVar16 & 0x1f) & 1) == 0) {
            if (bVar16 == 0) {
              ppuVar12 = &PTR_s_operand__101119860;
              if ((ulong)*(byte *)(lVar6 + 0x2b) < 0x29) {
                ppuVar12 = &PTR_s_R_1011195d0 + (ulong)*(byte *)(lVar6 + 0x2b) * 2;
              }
              bVar3 = *(byte *)((long)ppuVar12 + 9) & 0xf;
            }
          }
          else {
            bVar3 = 3;
          }
        }
        else {
          bVar3 = 8;
        }
      }
      if (*(byte *)(lVar6 + 0x2c) == 1) {
        bVar3 = bVar3 & 0xb;
      }
      else if (*(byte *)(lVar6 + 0x2c) - 2 < 6) {
        bVar3 = bVar3 & 8;
      }
      bVar13 = bVar13 | bVar3;
      bVar17 = bVar17 & bVar3;
      lVar6 = **(long **)(lVar6 + 0x18);
    } while (lVar6 != 0);
  }
  plVar15 = (long *)**(undefined8 **)(param_1 + 0x68);
  bVar16 = 0;
  do {
    if (plVar15 == (long *)0x0) {
LAB_1003ab8d3:
      bVar3 = 0;
      if ((bVar10 & bVar17) != 0) {
        bVar3 = bVar16;
        bVar17 = bVar10 & bVar17;
      }
      bVar3 = bVar3 | bVar13;
      if (**(long **)(param_1 + 0x50) != 0) {
        bVar3 = bVar3 & 0xfb;
        bVar17 = bVar17 & 0xfb;
      }
      if (bVar17 == 0) {
        bVar17 = bVar3 & 0xfb;
      }
      *(byte *)(param_1 + 0x7c) = bVar17;
      *(undefined8 *)(param_1 + 0x90) = 0;
      *(undefined8 *)(param_1 + 0x88) = 0;
      plVar15 = (long *)**(long **)(param_1 + 0x68);
      if (plVar15 != (long *)0x0) {
        piVar1 = (int *)(param_1 + 0x88);
        do {
          if ((*(byte *)((long)plVar15 + 0x39) & 1) == 0) {
            bVar13 = *(byte *)((long)plVar15 + 0x35);
            if ((bVar13 & 1) == 0) {
              bVar10 = 8;
              if (((bVar13 & 0x10) == 0) &&
                 (((bVar13 & 4) == 0 || ((*(ushort *)(*plVar15 + 0x54) & 0x2000) == 0)))) {
                lVar6 = FUN_1003a7de0(*(undefined2 *)(*plVar15 + 0x4c));
                uVar9 = (ulong)((long)plVar15 - *(long *)(*plVar15 + 0x40)) >> 6;
                if (((*(ushort *)(lVar6 + 0x1c) & 0xf) <= (uint)uVar9) ||
                   (bVar10 = *(byte *)(*plVar15 + 0x4e), bVar10 == 0)) {
                  bVar13 = *(byte *)(lVar6 + 0x10 + (uVar9 & 0xffffffff) * 2);
                  bVar10 = 0xf;
                  if (bVar13 != 0) {
                    bVar10 = bVar13;
                  }
                }
              }
              if ((bVar10 & 2) == 0) {
                *piVar1 = *piVar1 + 1;
              }
              if ((bVar10 & 1) == 0) {
                *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
              }
              if ((bVar10 & 4) == 0) {
                *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
              }
              if ((bVar10 & 8) == 0) {
                *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
              }
            }
          }
          else {
            lVar6 = FUN_1003a7de0(*(undefined2 *)(*plVar15 + 0x4c));
            uVar9 = (ulong)((long)plVar15 - *(long *)(*plVar15 + 0x40)) >> 6;
            if (((*(ushort *)(lVar6 + 0x1c) & 0xf) <= (uint)uVar9) ||
               (bVar13 = *(byte *)(*plVar15 + 0x4e), bVar13 == 0)) {
              bVar10 = *(byte *)(lVar6 + 0x10 + (uVar9 & 0xffffffff) * 2);
              bVar13 = 0xf;
              if (bVar10 != 0) {
                bVar13 = bVar10;
              }
            }
            uVar5 = FUN_1003aa890();
            while ((char)uVar5 != '\0') {
              uVar8 = 0;
              bVar18 = (uVar5 & 0xff) != 0;
              if (bVar18) {
                for (; ((uVar5 & 0xff) >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
                }
              }
              if (!bVar18) {
                uVar8 = 0xffffffff;
              }
              uVar11 = *(uint *)((long)plVar15 + (ulong)uVar8 * 4 + 0x28);
              bVar10 = 0xf;
              if (uVar11 != 0) {
                if (uVar11 == 0xffffffff) {
                  bVar10 = 7;
                }
                else if (uVar11 == 0x80000000) {
                  bVar10 = 3;
                }
                else {
                  bVar10 = 3;
                  uVar14 = uVar11 >> 0x17 & 0xff;
                  if ((uVar14 != 0xff) && ((uVar14 != 0 || ((uVar11 & 0x7fffff) == 0)))) {
                    bVar10 = 0xb;
                  }
                }
              }
              bVar10 = bVar10 & bVar13;
              if ((bVar10 & 2) == 0) {
                *piVar1 = *piVar1 + 1;
              }
              if ((bVar10 & 1) == 0) {
                *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
              }
              uVar5 = ~(1 << ((byte)uVar8 & 0x1f)) & uVar5 & 0xff;
              if ((bVar10 & 4) == 0) {
                *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
              }
              if ((bVar10 & 8) == 0) {
                *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
              }
            }
          }
          plVar15 = *(long **)plVar15[3];
        } while (plVar15 != (long *)0x0);
        bVar17 = *(byte *)(param_1 + 0x7c);
      }
      if (((7 < bVar17 - 1) || ((0x8bU >> (bVar17 - 1 & 0x1f) & 1) == 0)) &&
         (*(long *)(param_1 + 0x50) == param_1 + 0x48)) {
        local_80 = 0;
        local_60 = &local_68;
        local_48 = &local_50;
        local_38 = 0;
        lVar6 = param_1 + 0x18;
        lVar2 = *(long *)(param_1 + 0x28);
        *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(param_1 + 0x20);
        *(long *)(*(long *)(param_1 + 0x20) + 0x10) = lVar2;
        *(undefined8 **)(param_1 + 0x80) = &local_80;
        *(undefined8 **)(param_1 + 0x20) = &local_80;
        *(undefined8 **)(param_1 + 0x28) = &local_80;
        local_78 = lVar6;
        local_70 = lVar6;
        local_68 = &local_80;
        local_58 = local_60;
        local_50 = &local_80;
        local_40 = local_48;
        uVar4 = FUN_1003abbe0();
        *(undefined1 *)(param_1 + 0x7c) = uVar4;
        *(undefined8 *)(param_1 + 0x80) = 0;
        *(undefined8 **)(*(long *)(param_1 + 0x20) + 0x10) = &local_80;
        *(long *)(param_1 + 0x20) = lVar6;
        *(long *)(param_1 + 0x28) = lVar6;
      }
      return;
    }
    if ((bVar10 == 0) && (bVar16 == 0xf)) {
      bVar16 = 0xf;
      bVar10 = 0;
      goto LAB_1003ab8d3;
    }
    if ((*(byte *)((long)plVar15 + 0x39) & 1) == 0) {
      bVar3 = *(byte *)((long)plVar15 + 0x35);
      if ((bVar3 & 1) == 0) {
        bVar7 = 8;
        if (((bVar3 & 0x10) == 0) &&
           (((bVar3 & 4) == 0 || ((*(ushort *)(*plVar15 + 0x54) & 0x2000) == 0)))) {
          lVar6 = FUN_1003a7de0(*(undefined2 *)(*plVar15 + 0x4c));
          uVar9 = (ulong)((long)plVar15 - *(long *)(*plVar15 + 0x40)) >> 6;
          if (((*(ushort *)(lVar6 + 0x1c) & 0xf) <= (uint)uVar9) ||
             (bVar7 = *(byte *)(*plVar15 + 0x4e), bVar7 == 0)) {
            bVar3 = *(byte *)(lVar6 + 0x10 + (uVar9 & 0xffffffff) * 2);
            bVar7 = 0xf;
            if (bVar3 != 0) {
              bVar7 = bVar3;
            }
          }
        }
        bVar16 = bVar16 | bVar7;
        bVar10 = bVar10 & bVar7;
      }
    }
    else {
      uVar5 = FUN_1003aa890(*plVar15);
      while ((char)uVar5 != '\0') {
        uVar8 = 0;
        bVar18 = (uVar5 & 0xff) != 0;
        if (bVar18) {
          for (; ((uVar5 & 0xff) >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
          }
        }
        if (!bVar18) {
          uVar8 = 0xffffffff;
        }
        uVar5 = ~(1 << ((byte)uVar8 & 0x1f)) & uVar5 & 0xff;
        uVar8 = *(uint *)((long)plVar15 + (ulong)uVar8 * 4 + 0x28);
        bVar3 = 0xf;
        if (uVar8 != 0) {
          if (uVar8 == 0xffffffff) {
            bVar3 = 7;
          }
          else if (uVar8 == 0x80000000) {
            bVar3 = 3;
          }
          else {
            bVar3 = 3;
            uVar11 = uVar8 >> 0x17 & 0xff;
            if ((uVar11 != 0xff) && ((uVar11 != 0 || ((uVar8 & 0x7fffff) == 0)))) {
              bVar3 = 0xb;
            }
          }
        }
        bVar16 = bVar16 | bVar3;
        bVar10 = bVar10 & bVar3;
      }
    }
    plVar15 = *(long **)plVar15[3];
  } while( true );
}

