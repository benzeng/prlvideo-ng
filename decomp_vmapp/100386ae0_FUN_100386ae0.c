
undefined8 FUN_100386ae0(long *param_1,long param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  long lVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  int iVar20;
  int iVar21;
  undefined4 local_5c;
  int local_58 [8];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_58[4] = 0;
  local_58[5] = 0;
  local_58[6] = 0;
  local_58[7] = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  (*DAT_1011c5738)(0x8d40,(int)param_1[2]);
  uVar19 = 0;
  if (param_3 == 0) {
LAB_100386f61:
    (*DAT_1011c5bc0)(0x8db9);
  }
  else {
    bVar4 = false;
    do {
      iVar17 = (int)uVar19;
      bVar5 = bVar4;
      if (((param_3 & 1) != 0) && (lVar6 = FUN_100344150(param_2,uVar19), lVar6 != 0)) {
        lVar3 = *(long *)(lVar6 + 8);
        lVar7 = (**(code **)(**(long **)(lVar6 + 0x20) + 0x10))();
        if (lVar7 == 0) {
          lVar7 = (**(code **)(**(long **)(lVar6 + 0x20) + 0x28))();
          if (lVar7 != 0) {
            lVar7 = 0;
            if ((ulong)*(uint *)(lVar6 + 0x10) <
                (ulong)(*(long *)(lVar3 + 0x48) - *(long *)(lVar3 + 0x40) >> 3)) {
              lVar7 = *(long *)(*(long *)(lVar3 + 0x40) + (ulong)*(uint *)(lVar6 + 0x10) * 8);
            }
            iVar21 = iVar17 + 0x8ce0;
            iVar20 = *(int *)(lVar7 + 0x14);
            if (iVar20 < 0x8c18) {
              if (iVar20 < 0x8513) {
                if (1 < iVar20 - 0xde0U) {
                  if (iVar20 == 0x806f) goto LAB_100386eca;
                  if (iVar20 != 0x84f5) goto LAB_100386f23;
                }
LAB_100386f0d:
                (*DAT_1011c75b0)(0x8d40,iVar21,*(undefined4 *)(lVar7 + 0xc),0);
              }
              else {
                if (iVar20 != 0x8513) goto LAB_100386f23;
LAB_100386eca:
                uVar12 = *(undefined4 *)(lVar7 + 0xc);
                if (iVar20 == 0x8513) {
                  puVar13 = &DAT_1011c5de8;
                  uVar10 = uVar12;
                  uVar12 = 0x8515;
                }
                else {
                  uVar10 = 0;
                  puVar13 = &DAT_1011c5e18;
                }
                (*(code *)*puVar13)(0x8d40,iVar21,uVar12,uVar10,0);
              }
            }
            else if (iVar20 < 0x8c1a) {
              if (iVar20 == 0x8c18) goto LAB_100386eca;
            }
            else if (iVar20 < 0x9100) {
              if ((iVar20 == 0x8c1a) || (iVar20 == 0x9009)) goto LAB_100386eca;
            }
            else {
              if (iVar20 == 0x9102) goto LAB_100386eca;
              if (iVar20 == 0x9100) goto LAB_100386f0d;
            }
LAB_100386f23:
            local_58[uVar19] = iVar21;
            *(byte *)(lVar3 + 0xa8) = *(byte *)(lVar3 + 0xa8) | 1;
            **(uint **)(lVar3 + 0x90) = **(uint **)(lVar3 + 0x90) & 0xfffffffe;
            *(undefined1 *)(lVar3 + 0xd0) = 0;
          }
        }
        else {
          lVar11 = 0;
          if ((ulong)*(uint *)(lVar6 + 0x10) <
              (ulong)(*(long *)(lVar3 + 0x48) - *(long *)(lVar3 + 0x40) >> 3)) {
            lVar11 = *(long *)(*(long *)(lVar3 + 0x40) + (ulong)*(uint *)(lVar6 + 0x10) * 8);
          }
          uVar9 = *(uint *)(lVar7 + 8);
          uVar18 = *(uint *)(lVar7 + 0xc);
          iVar20 = *(int *)(lVar7 + 0x10);
          iVar14 = iVar17 + 0x8ce0;
          iVar21 = *(int *)(lVar11 + 0x14);
          if (iVar21 < 0x8c18) {
            if (iVar21 < 0x8513) {
              if (1 < iVar21 - 0xde0U) {
                if (iVar21 == 0x806f) goto LAB_100386d13;
                if (iVar21 != 0x84f5) goto LAB_100386dfc;
              }
LAB_100386dd7:
              (*DAT_1011c75b0)(0x8d40,iVar14,*(undefined4 *)(lVar11 + 0xc),uVar9);
              goto LAB_100386dfc;
            }
            if (iVar21 != 0x8513) goto LAB_100386dfc;
LAB_100386d13:
            if (iVar20 != 1) {
              (*DAT_1011c75b0)(0x8d40,iVar14,*(undefined4 *)(lVar11 + 0xc),uVar9);
              goto LAB_100386dfc;
            }
            uVar8 = *(uint *)(lVar11 + 0xc);
            if (iVar21 == 0x8513) {
              puVar13 = &DAT_1011c5de8;
              uVar16 = uVar8;
              uVar8 = uVar18 + 0x8515;
              uVar2 = uVar9;
            }
            else {
              puVar13 = &DAT_1011c5e18;
              uVar16 = uVar9;
              uVar2 = uVar18;
            }
            (*(code *)*puVar13)(0x8d40,iVar14,uVar8,uVar16,uVar2);
            local_58[uVar19] = iVar14;
LAB_100386e08:
            lVar7 = *(long *)(lVar3 + 0x90);
            do {
              uVar8 = 0;
              if (*(int *)(lVar3 + 0x24) != 5) {
                uVar8 = uVar18;
              }
              uVar16 = 1 << ((byte)uVar8 & 0x1f);
              if ((*(ushort *)(lVar3 + 0xb0) & 1) != 0) {
                uVar16 = 1;
              }
              *(uint *)(lVar3 + 0xa8) = *(uint *)(lVar3 + 0xa8) | uVar16;
              puVar1 = (uint *)(lVar7 + (ulong)uVar8 * 4);
              *puVar1 = *puVar1 & ~(1 << ((byte)uVar9 & 0x1f));
              uVar18 = uVar18 + 1;
              iVar20 = iVar20 + -1;
            } while (iVar20 != 0);
          }
          else {
            if (iVar21 < 0x8c1a) {
              if (iVar21 == 0x8c18) goto LAB_100386d13;
            }
            else if (iVar21 < 0x9100) {
              if ((iVar21 == 0x8c1a) || (iVar21 == 0x9009)) goto LAB_100386d13;
            }
            else {
              if (iVar21 == 0x9102) goto LAB_100386d13;
              if (iVar21 == 0x9100) goto LAB_100386dd7;
            }
LAB_100386dfc:
            local_58[uVar19] = iVar14;
            if (iVar20 != 0) goto LAB_100386e08;
          }
          if ((*(ushort *)(lVar3 + 0xb0) & 2) != 0) {
            *(undefined1 *)(lVar3 + 0xac) = 1;
          }
          *(undefined1 *)(lVar3 + 0xd0) = 0;
          uVar9 = *(uint *)(lVar6 + 0x14);
          if ((int)uVar9 < 0x66) {
            if (uVar9 < 9) {
              uVar18 = 0x10a;
LAB_100386ea1:
              bVar5 = true;
              if ((uVar18 >> (uVar9 & 0x1f) & 1) == 0) {
                bVar5 = bVar4;
              }
            }
          }
          else {
            uVar9 = uVar9 - 0x66;
            if (uVar9 < 0xd) {
              uVar18 = 0x1015;
              goto LAB_100386ea1;
            }
          }
        }
      }
      param_3 = param_3 >> 1;
      uVar19 = (ulong)(iVar17 + 1);
      bVar4 = bVar5;
    } while (param_3 != 0);
    if (!bVar5) goto LAB_100386f61;
    (*DAT_1011c5c78)(0x8db9);
  }
  uVar9 = *(uint *)(param_1 + 4);
  *(uint *)(param_1 + 4) = (uint)uVar19;
  if ((uint)uVar19 < uVar9) {
    do {
      (*DAT_1011c75b0)(0x8d40,(int)uVar19 + 0x8ce0,0,0);
      uVar18 = (int)uVar19 + 1;
      uVar19 = (ulong)uVar18;
    } while (uVar9 != uVar18);
    uVar19 = (ulong)uVar9;
  }
  (*DAT_1011c5c08)(uVar19,local_58);
  if ((int)param_1[4] == 0) {
    (*DAT_1011c68d8)(0);
  }
  lVar6 = *(long *)(param_2 + 0x50);
  if ((lVar6 == 0) || (lVar3 = *(long *)(lVar6 + 0x20), lVar3 == 0)) {
    (*DAT_1011c75b0)(0x8d40,0x821a,0,0);
    if ((int)param_1[4] == 0) {
      iVar17 = (int)param_1[6];
      if (iVar17 == 0) {
        *(undefined8 *)((long)param_1 + 0x34) = 0x100000001;
        *(undefined8 *)((long)param_1 + 0x3c) = 0x805800000de1;
        (**(code **)(*param_1 + 0x30))(param_1);
        (*DAT_1011c5e90)(1,param_1 + 6);
        (*DAT_1011c5768)(*(undefined4 *)((long)param_1 + 0x3c),(int)param_1[6]);
        (*DAT_1011c6c98)(*(undefined4 *)((long)param_1 + 0x3c),0,(int)param_1[8],
                         *(undefined4 *)((long)param_1 + 0x34),(int)param_1[7],0,0x1908,0x8035,0);
        (*DAT_1011c5768)(*(undefined4 *)((long)param_1 + 0x3c),0);
        iVar17 = (int)param_1[6];
      }
      local_5c = 0x8ce0;
      (*DAT_1011c5de8)(0x8d40,0x8ce0,*(undefined4 *)((long)param_1 + 0x3c),iVar17,0);
      (*DAT_1011c5c08)(1,&local_5c);
      *(undefined4 *)(param_1 + 4) = 1;
    }
    goto LAB_10038723a;
  }
  lVar7 = *(long *)(lVar6 + 8);
  lVar6 = *(long *)(*(long *)(lVar7 + 0x40) + (ulong)*(uint *)(lVar6 + 0x10) * 8);
  iVar17 = *(int *)(lVar3 + 8);
  iVar21 = *(int *)(lVar3 + 0xc);
  iVar20 = *(int *)(lVar3 + 0x10);
  uVar15 = 0x821a;
  if ((*(byte *)(lVar6 + 0xac) & 2) == 0) {
    (*DAT_1011c75b0)(0x8d40,0x8d20,0,0);
    uVar15 = 0x8d00;
  }
  iVar14 = *(int *)(lVar6 + 0x14);
  if (iVar14 < 0x8c18) {
    if (iVar14 < 0x8513) {
      if (1 < iVar14 - 0xde0U) {
        if (iVar14 == 0x806f) goto LAB_1003871b9;
        if (iVar14 != 0x84f5) goto LAB_10038721b;
      }
    }
    else {
      if (iVar14 != 0x8513) goto LAB_10038721b;
LAB_1003871b9:
      if (iVar20 == 1) {
        iVar20 = *(int *)(lVar6 + 0xc);
        if (iVar14 == 0x8513) {
          puVar13 = &DAT_1011c5de8;
          iVar14 = iVar20;
          iVar20 = iVar21 + 0x8515;
          iVar21 = iVar17;
        }
        else {
          puVar13 = &DAT_1011c5e18;
          iVar14 = iVar17;
        }
        (*(code *)*puVar13)(0x8d40,uVar15,iVar20,iVar14,iVar21);
        goto LAB_10038721b;
      }
    }
LAB_100387207:
    (*DAT_1011c75b0)(0x8d40,uVar15,*(undefined4 *)(lVar6 + 0xc),iVar17);
  }
  else if (iVar14 < 0x8c1a) {
    if (iVar14 == 0x8c18) goto LAB_1003871b9;
  }
  else if (iVar14 < 0x9100) {
    if ((iVar14 == 0x8c1a) || (iVar14 == 0x9009)) goto LAB_1003871b9;
  }
  else {
    if (iVar14 == 0x9102) goto LAB_1003871b9;
    if (iVar14 == 0x9100) goto LAB_100387207;
  }
LAB_10038721b:
  if ((*(ushort *)(lVar7 + 0xb0) & 2) != 0) {
    *(undefined1 *)(lVar7 + 0xac) = 1;
  }
  *(undefined1 *)(lVar7 + 0xd0) = 0;
LAB_10038723a:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}

