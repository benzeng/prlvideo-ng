
/* WARNING: Removing unreachable block (ram,0x0001006be724) */
/* WARNING: Removing unreachable block (ram,0x0001006be8a3) */
/* WARNING: Removing unreachable block (ram,0x0001006be607) */
/* WARNING: Removing unreachable block (ram,0x0001006be5e9) */
/* WARNING: Removing unreachable block (ram,0x0001006be6cc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_1006be3a0(long param_1,uint *param_2,long *param_3,long *param_4)

{
  ushort *puVar1;
  short *psVar2;
  short sVar3;
  long *plVar4;
  bool bVar5;
  long *plVar6;
  byte bVar7;
  ushort uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  int iVar14;
  long *plVar15;
  long *plVar16;
  uint uVar17;
  ulong uVar18;
  
  if (*param_2 != 0) {
    plVar4 = *(long **)(param_2 + 2);
    bVar5 = true;
    uVar8 = 0;
    iVar14 = 0;
    uVar17 = 0;
    plVar6 = plVar4;
    do {
      uVar18 = (ulong)uVar17;
      if ((*(byte *)(plVar4 + uVar18 * 2 + 1) & 1) == 0) {
        uVar8 = uVar8 + *(short *)((long)plVar4 + uVar18 * 0x10 + 10);
        if ((*(byte *)(plVar4 + uVar18 * 2 + 1) & 2) == 0) {
          iVar14 = iVar14 + 1;
        }
        else {
          if ((bVar5) && (0xd < uVar8)) {
            sVar3 = *(short *)((long)plVar6 + 10);
            plVar15 = plVar6;
            while (sVar3 == 0) {
              if ((*(byte *)(plVar15 + 1) & 2) != 0) goto LAB_1006be900;
              psVar2 = (short *)((long)plVar15 + 0x1a);
              plVar15 = plVar15 + 2;
              sVar3 = *psVar2;
            }
            sVar3 = *(short *)(*plVar15 + 0xc);
            FUN_1006bed40(param_1);
            if ((param_2[1] & 1) == 0) {
              if (sVar3 == -0x227a) {
                plVar15 = plVar6;
                uVar13 = (uint)*(ushort *)((long)plVar6 + 10);
                if (*(ushort *)((long)plVar6 + 10) < 0xf) {
                  do {
                    uVar9 = uVar13;
                    if ((*(byte *)(plVar15 + 1) & 2) != 0) goto LAB_1006be90b;
                    plVar16 = plVar15 + 2;
                    uVar13 = *(ushort *)((long)plVar15 + 0x1a) + uVar9;
                    plVar15 = plVar16;
                  } while (uVar13 < 0xf);
                }
                else {
                  uVar9 = 0;
                  plVar16 = plVar6;
                  if (plVar6 == (long *)0x0) goto LAB_1006be90b;
                }
                lVar10 = *plVar16 + (ulong)(0xe - uVar9);
                if (lVar10 != 0) {
                  uVar13 = 0x36;
                  bVar7 = *(byte *)(lVar10 + 6);
                  while ((bVar7 < 0x3d && ((0x1008080000000001U >> ((ulong)bVar7 & 0x3f) & 1) != 0))
                        ) {
                    uVar13 = uVar13 & 0xffff;
                    plVar15 = plVar6;
                    uVar9 = 0;
                    for (uVar11 = (uint)*(ushort *)((long)plVar6 + 10); uVar11 <= uVar13;
                        uVar11 = *puVar1 + uVar11) {
                      if ((*(byte *)(plVar15 + 1) & 2) != 0) goto LAB_1006be90b;
                      puVar1 = (ushort *)((long)plVar15 + 0x1a);
                      plVar15 = plVar15 + 2;
                      uVar9 = uVar11;
                    }
                    pbVar12 = (byte *)(*plVar15 + (ulong)(uVar13 - uVar9));
                    if (pbVar12 == (byte *)0x0) goto LAB_1006be90b;
                    uVar13 = ((uint)pbVar12[1] << (bVar7 != 0x33 | 2U)) + 8 + uVar13;
                    bVar7 = *pbVar12;
                  }
LAB_1006be8a9:
                  if (bVar7 == 0x11) {
                    param_2[1] = param_2[1] | 1;
                  }
                }
              }
              else if (sVar3 == 0x608) {
                uVar13 = (uint)*(ushort *)((long)plVar6 + 10);
                if (*(ushort *)((long)plVar6 + 10) < 0xf) {
                  do {
                    uVar9 = uVar13;
                    if ((*(byte *)(plVar6 + 1) & 2) != 0) goto LAB_1006be90b;
                    puVar1 = (ushort *)((long)plVar6 + 0x1a);
                    plVar6 = plVar6 + 2;
                    uVar13 = *puVar1 + uVar9;
                  } while (uVar13 < 0xf);
                }
                else {
                  uVar9 = 0;
                  if (plVar6 == (long *)0x0) goto LAB_1006be90b;
                }
                bVar7 = 0;
                if (*plVar6 + (ulong)(0xe - uVar9) != 0) goto LAB_1006be8a9;
              }
              else if (sVar3 == 8) {
                uVar13 = (uint)*(ushort *)((long)plVar6 + 10);
                if (*(ushort *)((long)plVar6 + 10) < 0xf) {
                  do {
                    uVar9 = uVar13;
                    if ((*(byte *)(plVar6 + 1) & 2) != 0) goto LAB_1006be90b;
                    puVar1 = (ushort *)((long)plVar6 + 0x1a);
                    plVar6 = plVar6 + 2;
                    uVar13 = *puVar1 + uVar9;
                  } while (uVar13 < 0xf);
                }
                else {
                  uVar9 = 0;
                  if (plVar6 == (long *)0x0) goto LAB_1006be90b;
                }
                lVar10 = *plVar6 + (ulong)(0xe - uVar9);
                if (lVar10 != 0) {
                  bVar7 = *(byte *)(lVar10 + 9);
                  goto LAB_1006be8a9;
                }
              }
            }
          }
          else {
LAB_1006be900:
            plVar6 = (long *)(*(long *)(param_1 + 0x40) + 0xf4);
            *plVar6 = *plVar6 + 1;
          }
LAB_1006be90b:
          plVar6 = plVar4 + uVar18 * 2 + 2;
          iVar14 = 0;
          bVar5 = true;
          uVar8 = 0;
        }
      }
      else if (iVar14 == 0) {
        plVar15 = plVar4 + uVar18 * 2;
        if ((*(byte *)((long)plVar4 + uVar18 * 0x10 + 9) & 1) == 0) {
          lVar10 = *plVar15;
          param_4[1] = plVar15[1];
          *param_4 = lVar10;
        }
        else {
          uVar13 = *(int *)(param_1 + 0x38) + 0xe;
          lVar10 = *plVar15;
          param_3[1] = plVar15[1];
          *param_3 = lVar10;
          if (uVar13 < (uint)*(ushort *)((long)param_3 + 0xe) + (uint)*(byte *)((long)param_3 + 10))
          {
            *(ushort *)((long)param_3 + 0xe) = (short)uVar13 - (ushort)*(byte *)((long)param_3 + 10)
            ;
          }
        }
        plVar6 = plVar6 + 2;
        iVar14 = 0;
      }
      else {
        bVar5 = false;
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < *param_2);
  }
  return 0;
}

