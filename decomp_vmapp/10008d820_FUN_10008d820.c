
uint FUN_10008d820(long *param_1,ulong param_2,uint param_3,long *param_4)

{
  uint *puVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  bool bVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  bool bVar19;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar18 = param_2;
  lVar16 = lVar2;
  if (param_2 >> 0x1c < 0xb) {
LAB_10008d873:
    puVar14 = (ulong *)*param_1;
    if (param_3 + uVar18 <= *puVar14) {
      if (((0x10000 < param_3) && (param_1[1] == 0)) &&
         (uVar8 = 0x210000 - ((uint)uVar18 & 0x1fffff), uVar8 < param_3)) {
        param_3 = uVar8;
      }
      if ((DAT_1011c3740 != 0) && (*(int *)(DAT_1011c3740 + 0x10) != 0)) {
        FUN_1000d60e0(DAT_1011c3740,uVar18,(ulong)param_3);
        puVar14 = (ulong *)*param_1;
      }
      uVar11 = uVar18 >> 0xc;
      uVar8 = (uint)((ulong)param_3 + uVar18 + 0xfffffffffff >> 0xc);
      uVar15 = (uint)uVar11;
      if (((param_3 != 0) && (uVar13 = puVar14[0x17], uVar13 != 0)) && (uVar15 <= uVar8)) {
        uVar12 = uVar11 & 0xffffffff;
        while( true ) {
          uVar5 = uVar12 >> 5;
          if ((*(uint *)(uVar13 + uVar5 * 4) >> ((byte)uVar12 & 0x1f) & 1) == 0) {
            uVar9 = *(uint *)(uVar13 + uVar5 * 4);
            do {
              puVar1 = (uint *)(uVar13 + uVar5 * 4);
              LOCK();
              uVar17 = *puVar1;
              bVar19 = uVar9 == uVar17;
              if (bVar19) {
                *puVar1 = 1 << ((byte)uVar12 & 0x1f) | uVar9;
                uVar17 = uVar9;
              }
              uVar9 = uVar17;
              UNLOCK();
            } while (!bVar19);
          }
          uVar9 = (int)uVar12 + 1;
          uVar12 = (ulong)uVar9;
          if (uVar8 < uVar9) break;
          uVar13 = puVar14[0x17];
        }
      }
      uVar8 = uVar8 + 1;
      uVar9 = (uint)uVar18 & 0xfff;
      if (uVar15 < uVar8) {
        uVar13 = uVar11 & 0xffffffff;
        bVar19 = true;
        do {
          piVar3 = (int *)param_1[2];
          iVar10 = *piVar3;
          uVar17 = (uint)uVar13;
          piVar7 = piVar3;
          if (0x1ff < iVar10) {
            piVar7 = _malloc(0x810);
            if (piVar7 == (int *)0x0) {
              uVar8 = 0;
              FUN_1008e3970("","vm",0,"GuestMem::SgMap::map(%#llx, %u) - chunk allocation failed",
                            param_2,param_3);
              if (bVar19) {
                *param_4 = 0;
                lVar16 = *(long *)PTR____stack_chk_guard_100ba2320;
                goto LAB_10008dc63;
              }
              param_3 = (uVar17 - uVar15) * 0x1000 - uVar9;
              lVar16 = *(long *)PTR____stack_chk_guard_100ba2320;
              uVar8 = uVar17;
              goto LAB_10008da9a;
            }
            *piVar7 = 0;
            piVar7[2] = 0;
            piVar7[3] = 0;
            *(int **)(piVar3 + 2) = piVar7;
            param_1[2] = (long)piVar7;
            iVar10 = *piVar7;
          }
          *piVar7 = iVar10 + 1;
          bVar6 = bVar19;
          if (bVar19) {
            bVar6 = false;
          }
          *(uint *)(param_1[2] + 0x10 + (long)iVar10 * 4) = -(uint)!bVar19 | uVar17;
          uVar13 = (ulong)(uVar17 + 1);
          bVar19 = bVar6;
        } while (uVar17 + 1 < uVar8);
        lVar16 = *(long *)PTR____stack_chk_guard_100ba2320;
      }
LAB_10008da9a:
      if (param_1[1] == 0) {
        lVar4 = *(long *)(*(long *)(*param_1 + 0x60) + 0x20);
        if ((lVar4 == 0) || (lVar4 + (uVar18 & 0xffffffff000) == 0)) {
          FUN_1008e3970("","vm",0,"GuestMem::SgMap::map(%#llx, %u) - map request failed",param_2,
                        param_3);
          *param_4 = 0;
          uVar8 = 0;
          goto LAB_10008dc63;
        }
        uVar11 = (uVar11 << 0x10 | uVar18 >> 0x3c) >> 3;
        uVar11 = uVar11 << 0x33 | ((uVar18 >> 0x3c) << 0x3d | uVar11) >> 0xd;
        *param_4 = lVar4 + ((ulong)uVar9 | uVar18 & 0xffffffff000);
      }
      else {
        *param_4 = param_1[1] + uVar18;
      }
      FUN_10008c590(*param_1,uVar11,uVar8 - uVar15);
      uVar8 = param_3;
      goto LAB_10008dc63;
    }
  }
  else if (0xffffffff < param_2) {
    uVar18 = param_2 - 0x50000000;
    goto LAB_10008d873;
  }
  FUN_1008e3970("","vm",0,"GuestMem::SgMap::map(%#llx, %u) - invalid parameters",param_2,
                (ulong)param_3);
  *param_4 = 0;
  uVar8 = 0;
LAB_10008dc63:
  if (lVar16 != lVar2) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar8;
}

