
undefined8 FUN_1003477a0(byte *param_1,long param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  long local_68 [9];
  
  lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_68[8] = lVar6;
  uVar7 = 9;
  if (0x13 < (ulong)*(uint *)(param_2 + 4)) {
    uVar3 = *(uint *)(param_2 + 0xc);
    if ((((ulong)uVar3 <= (ulong)*(uint *)(param_2 + 4) - 0x14 >> 2) && (uVar7 = 4, uVar3 < 9)) &&
       (uVar4 = *(uint *)(param_2 + 0x10), uVar4 <= 8 - uVar3)) {
      local_68[6] = 0;
      local_68[7] = 0;
      local_68[4] = 0;
      local_68[5] = 0;
      local_68[2] = 0;
      local_68[3] = 0;
      local_68[0] = 0;
      local_68[1] = 0;
      if (uVar3 != 0) {
        pbVar2 = param_1 + 0x27f0;
        uVar13 = 0;
        do {
          uVar5 = *(uint *)(param_2 + 0x14 + (ulong)uVar13 * 4);
          if (uVar5 != 0) {
            uVar7 = 7;
            pbVar11 = *(byte **)pbVar2;
            pbVar12 = pbVar2;
            if (*(byte **)pbVar2 == (byte *)0x0) goto LAB_100347968;
            do {
              while (pbVar10 = pbVar11, uVar5 <= *(uint *)(pbVar10 + 0x20)) {
                pbVar11 = *(byte **)pbVar10;
                pbVar12 = pbVar10;
                if (*(byte **)pbVar10 == (byte *)0x0) goto LAB_100347883;
              }
              pbVar1 = pbVar10 + 8;
              pbVar10 = pbVar12;
              pbVar11 = *(byte **)pbVar1;
            } while (*(byte **)pbVar1 != (byte *)0x0);
LAB_100347883:
            if ((pbVar10 == pbVar2) || (uVar5 < *(uint *)(pbVar10 + 0x20))) goto LAB_100347968;
            local_68[uVar13] = *(long *)(pbVar10 + 0x28);
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar3);
      }
      uVar13 = *(uint *)(param_2 + 8);
      lVar8 = 0;
      if (uVar13 != 0) {
        uVar7 = 7;
        if (*(byte **)(param_1 + 0xa830) == (byte *)0x0) goto LAB_100347968;
        pbVar2 = *(byte **)(param_1 + 0xa830);
        pbVar11 = param_1 + 0xa830;
        do {
          while (pbVar12 = pbVar2, uVar13 <= *(uint *)(pbVar12 + 0x20)) {
            pbVar2 = *(byte **)pbVar12;
            pbVar11 = pbVar12;
            if (*(byte **)pbVar12 == (byte *)0x0) goto LAB_100347900;
          }
          pbVar10 = pbVar12 + 8;
          pbVar12 = pbVar11;
          pbVar2 = *(byte **)pbVar10;
        } while (*(byte **)pbVar10 != (byte *)0x0);
LAB_100347900:
        if ((pbVar12 == param_1 + 0xa830) || (uVar13 < *(uint *)(pbVar12 + 0x20)))
        goto LAB_100347968;
        lVar8 = *(long *)(pbVar12 + 0x28);
      }
      if (*(long *)(param_1 + 0x50) != lVar8) {
        *(long *)(param_1 + 0x50) = lVar8;
        *param_1 = *param_1 | 0x10;
      }
      uVar7 = 0;
      if (uVar4 + uVar3 != 0) {
        uVar9 = 0;
        do {
          lVar8 = 0;
          if (uVar9 < uVar3) {
            lVar8 = local_68[uVar9];
          }
          if (*(long *)(param_1 + uVar9 * 8 + 0x358) != lVar8) {
            *(long *)(param_1 + uVar9 * 8 + 0x358) = lVar8;
            *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1 << ((byte)uVar9 & 0x1f);
            *param_1 = *param_1 | 8;
          }
          uVar9 = uVar9 + 1;
          uVar7 = 0;
        } while (uVar9 < uVar4 + uVar3);
      }
    }
  }
LAB_100347968:
  if (lVar6 != local_68[8]) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
}

