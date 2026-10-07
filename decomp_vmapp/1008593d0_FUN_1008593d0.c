
ulong FUN_1008593d0(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,
                   undefined8 param_5)

{
  ulong *puVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  uint uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  if (param_2 == param_3) {
    uVar9 = FUN_100859620(param_1,param_2,param_4,param_5);
    return uVar9;
  }
  FUN_10084ca60(param_5);
  plVar5 = (long *)FUN_10084cc20(param_5);
  uVar9 = 0;
  if (plVar5 != (long *)0x0) {
    lVar15 = param_2[1];
    lVar12 = param_3[1];
    iVar4 = (int)lVar15 + 4 + (int)lVar12;
    if ((iVar4 <= *(int *)((long)plVar5 + 0xc)) || (lVar6 = FUN_10084b900(plVar5,iVar4), lVar6 != 0)
       ) {
      *(int *)(plVar5 + 1) = iVar4;
      if (0 < iVar4) {
        ___bzero(*plVar5,(ulong)(uint)((int)lVar15 + 3 + (int)lVar12) * 8 + 8);
      }
      iVar4 = (int)param_3[1];
      if (0 < iVar4) {
        uVar9 = 0;
        lVar15 = 0x18;
        do {
          uVar2 = *(undefined8 *)(*param_3 + uVar9 * 8);
          uVar14 = 0;
          if ((int)(uVar9 | 1) != iVar4) {
            uVar14 = *(undefined8 *)(*param_3 + (uVar9 | 1) * 8);
          }
          uVar7 = (ulong)*(uint *)(param_2 + 1);
          lVar12 = 1;
          lVar6 = lVar15;
          if (0 < (int)*(uint *)(param_2 + 1)) {
            do {
              uVar11 = 0;
              if ((int)lVar12 != (int)uVar7) {
                uVar11 = *(undefined8 *)(*param_2 + lVar12 * 8);
              }
              _bn_GF2m_mul_2x2(&local_58,uVar11,*(undefined8 *)(*param_2 + -8 + lVar12 * 8),uVar14,
                               uVar2);
              lVar13 = *plVar5;
              puVar1 = (ulong *)(lVar13 + -0x18 + lVar6);
              *puVar1 = *puVar1 ^ local_58;
              puVar1 = (ulong *)(lVar13 + -0x10 + lVar6);
              *puVar1 = *puVar1 ^ local_50;
              puVar1 = (ulong *)(lVar13 + -8 + lVar6);
              *puVar1 = *puVar1 ^ local_48;
              *(ulong *)(lVar13 + lVar6) = *(ulong *)(lVar13 + lVar6) ^ local_40;
              uVar7 = (ulong)(int)param_2[1];
              lVar13 = lVar12 + 1;
              lVar12 = lVar12 + 2;
              lVar6 = lVar6 + 0x10;
            } while (lVar13 < (long)uVar7);
            iVar4 = (int)param_3[1];
          }
          uVar9 = uVar9 + 2;
          lVar15 = lVar15 + 0x10;
        } while ((long)uVar9 < (long)iVar4);
      }
      uVar9 = (ulong)(int)plVar5[1];
      if (0 < (long)uVar9) {
        plVar8 = (long *)(*plVar5 + -8 + uVar9 * 8);
        do {
          uVar3 = (uint)uVar9;
          uVar10 = uVar3;
          if (*plVar8 != 0) break;
          plVar8 = plVar8 + -1;
          uVar10 = uVar3 - 1;
          uVar9 = (ulong)uVar10;
        } while (1 < (int)uVar3);
        *(uint *)(plVar5 + 1) = uVar10;
      }
      iVar4 = FUN_100858e10(param_1,plVar5,param_4);
      uVar9 = (ulong)(iVar4 != 0);
    }
  }
  FUN_10084cb40(param_5);
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

