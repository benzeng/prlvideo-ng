
void FUN_100398bb0(long *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  undefined1 (*pauVar10) [12];
  uint uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  undefined1 auVar18 [12];
  
  uVar1 = *(uint *)(*param_1 + 0x10);
  if (uVar1 != 0) {
    iVar16 = 0;
    uVar15 = uVar1;
    do {
      if ((uVar15 & 1) != 0) {
        uVar5 = FUN_100351740(*param_1,uVar1,iVar16);
        uVar12 = (ulong)uVar5;
        lVar3 = *(long *)(*(long *)(*param_1 + 8) + uVar12 * 0x10);
        if (lVar3 != 0) {
          iVar7 = *(int *)(lVar3 + 8);
          lVar14 = 0;
          if ((ulong)(iVar7 == 0x23) <
              (ulong)(*(long *)(lVar3 + 0x48) - *(long *)(lVar3 + 0x40) >> 3)) {
            lVar14 = *(long *)(*(long *)(lVar3 + 0x40) + (ulong)(iVar7 == 0x23) * 8);
          }
          if ((*(ushort *)(lVar3 + 0xb0) & 0x800) != 0) {
            (*DAT_1011c56a0)(uVar5 + 0x84c0);
            (*DAT_1011c5768)(*(undefined4 *)(lVar14 + 0x14),0);
            (*DAT_1011c5768)(*(undefined4 *)(lVar14 + 0x14),*(undefined4 *)(lVar14 + 0xc));
            iVar7 = *(int *)(lVar3 + 8);
          }
          iVar2 = *(int *)(lVar14 + 0xa8);
          auVar18 = FUN_100398ed0(iVar16,param_2,iVar7,iVar2 == 4);
          lVar13 = *param_1;
          if (*(long **)(lVar13 + 0x260) == (long *)0x0) {
LAB_100398d50:
            pauVar10 = operator_new(0x28);
            *pauVar10 = auVar18;
            *(undefined8 *)pauVar10[2] = 0;
            *(undefined8 *)(pauVar10[1] + 4) = 0;
            *(undefined1 (**) [12])(pauVar10[2] + 8) = pauVar10;
            uVar6 = FUN_100399090(iVar16,param_2,*(undefined4 *)(lVar3 + 8),iVar2 == 4);
            *(undefined4 *)pauVar10[1] = uVar6;
            FUN_1003518d0(*param_1,pauVar10);
            lVar13 = *param_1;
          }
          else {
            plVar4 = *(long **)(lVar13 + 0x260);
            plVar9 = (long *)(lVar13 + 0x260);
            do {
              while( true ) {
                plVar8 = plVar4;
                uVar17 = auVar18._0_4_;
                uVar11 = auVar18._4_4_;
                if ((uVar17 <= *(uint *)(plVar8 + 4)) &&
                   ((*(uint *)(plVar8 + 4) != uVar17 ||
                    ((uVar11 <= *(uint *)((long)plVar8 + 0x24) &&
                     ((*(uint *)((long)plVar8 + 0x24) != uVar11 ||
                      (auVar18._8_4_ <= *(uint *)(plVar8 + 5))))))))) break;
                plVar4 = (long *)plVar8[1];
                if ((long *)plVar8[1] == (long *)0x0) goto LAB_100398d2d;
              }
              plVar9 = plVar8;
              plVar4 = (long *)*plVar8;
            } while ((long *)*plVar8 != (long *)0x0);
LAB_100398d2d:
            if ((((plVar9 == (long *)(lVar13 + 0x260)) || (uVar17 < *(uint *)(plVar9 + 4))) ||
                ((uVar17 == *(uint *)(plVar9 + 4) &&
                 ((uVar11 < *(uint *)((long)plVar9 + 0x24) ||
                  ((uVar11 == *(uint *)((long)plVar9 + 0x24) &&
                   (auVar18._8_4_ < *(uint *)(plVar9 + 5))))))))) ||
               (pauVar10 = (undefined1 (*) [12])plVar9[6], pauVar10 == (undefined1 (*) [12])0x0))
            goto LAB_100398d50;
          }
          if (*(undefined1 (**) [12])(*(long *)(lVar13 + 0x270) + uVar12 * 8) != pauVar10) {
            *(undefined1 (**) [12])(*(long *)(lVar13 + 0x270) + uVar12 * 8) = pauVar10;
            if (pauVar10 != (undefined1 (*) [12])0x0) {
              FUN_1003dd0f0(lVar13 + 0x248,pauVar10);
            }
            (*DAT_1011c5760)(uVar12,*(undefined4 *)pauVar10[1]);
          }
          iVar7 = *(int *)(lVar14 + 0x10) + -1;
          if (*(int *)(lVar14 + 0x28) != iVar7) {
            *(int *)(lVar14 + 0x28) = iVar7;
            *(byte *)(lVar14 + 0x2c) = *(byte *)(lVar14 + 0x2c) | 2;
          }
          FUN_1003dca10(lVar14 + 0x24,iVar16,param_2);
          if (*(int *)(lVar14 + 0x2c) != 0) {
            (*DAT_1011c56a0)(uVar5 + 0x84c0);
            iVar7 = *(int *)(lVar14 + 0x14);
            if ((iVar7 != 0x84f5) && (iVar7 != 0x8c2a)) {
              uVar5 = *(uint *)(lVar14 + 0x2c);
              uVar11 = *(int *)(lVar14 + 0x10) - 1;
              if ((uVar5 & 1) != 0) {
                uVar5 = *(uint *)(lVar14 + 0x24);
                if (uVar11 <= *(uint *)(lVar14 + 0x24)) {
                  uVar5 = uVar11;
                }
                (*DAT_1011c6cd8)(iVar7,0x813c,uVar5);
                uVar5 = *(uint *)(lVar14 + 0x2c);
              }
              if ((uVar5 & 2) != 0) {
                if (*(uint *)(lVar14 + 0x28) < uVar11) {
                  uVar11 = *(uint *)(lVar14 + 0x28);
                }
                (*DAT_1011c6cd8)(iVar7,0x813d,uVar11);
              }
              *(int *)(lVar14 + 0x2c) = 0;
            }
          }
        }
      }
      iVar16 = iVar16 + 1;
      uVar5 = uVar15 >> 1;
      uVar15 = uVar15 >> 1;
    } while (uVar5 != 0);
  }
  return;
}

