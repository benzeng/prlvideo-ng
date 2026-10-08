
void FUN_100c0a0a0(uint *param_1,undefined1 *param_2,long param_3,undefined8 param_4,uint *param_5,
                  int param_6)

{
  ulong uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  uint local_40;
  uint local_3c;
  long local_38;
  
  lVar15 = *(long *)PTR____stack_chk_guard_1021e1840;
  uVar11 = *param_5;
  uVar12 = param_5[1];
  uVar1 = param_3 - 8;
  local_38 = lVar15;
  if (param_6 == 0) {
    if (-1 < (long)uVar1) {
      uVar8 = uVar1 & 0xfffffffffffffff8;
      puVar2 = (uint *)((long)param_1 + uVar8 + 8);
      uVar16 = uVar1;
      puVar13 = param_2;
      uVar4 = uVar11;
      uVar14 = uVar12;
      do {
        uVar11 = *param_1;
        uVar12 = param_1[1];
        local_40 = uVar11;
        local_3c = uVar12;
        FUN_100c07a60(&local_40,param_4,0);
        uVar4 = uVar4 ^ local_40;
        uVar14 = uVar14 ^ local_3c;
        *puVar13 = (char)uVar4;
        puVar13[1] = (char)(uVar4 >> 8);
        puVar13[2] = (char)(uVar4 >> 0x10);
        puVar13[3] = (char)(uVar4 >> 0x18);
        puVar13[4] = (char)uVar14;
        puVar13[5] = (char)(uVar14 >> 8);
        puVar13[6] = (char)(uVar14 >> 0x10);
        puVar13[7] = (char)(uVar14 >> 0x18);
        param_1 = param_1 + 2;
        puVar13 = puVar13 + 8;
        uVar16 = uVar16 - 8;
        uVar4 = uVar11;
        uVar14 = uVar12;
      } while (-1 < (long)uVar16);
      param_2 = param_2 + uVar8 + 8;
      param_3 = uVar1 - uVar8;
      lVar15 = *(long *)PTR____stack_chk_guard_1021e1840;
      param_1 = puVar2;
    }
    uVar4 = uVar11;
    uVar14 = uVar12;
    if (param_3 != 0) {
      uVar4 = *param_1;
      uVar14 = param_1[1];
      local_40 = uVar4;
      local_3c = uVar14;
      FUN_100c07a60(&local_40,param_4,0);
      if (param_3 - 1U < 8) {
        uVar11 = uVar11 ^ local_40;
        uVar12 = uVar12 ^ local_3c;
        switch(param_3) {
        case 8:
          param_2[7] = (char)(uVar12 >> 0x18);
        case 7:
          param_2[6] = (char)(uVar12 >> 0x10);
        case 6:
          param_2[5] = (char)(uVar12 >> 8);
        case 5:
          param_2[4] = (char)uVar12;
        case 4:
          param_2[3] = (char)(uVar11 >> 0x18);
        case 3:
          param_2[2] = (char)(uVar11 >> 0x10);
        case 2:
          param_2[1] = (char)(uVar11 >> 8);
        case 1:
          *param_2 = (char)uVar11;
        }
      }
    }
  }
  else {
    if (-1 < (long)uVar1) {
      uVar8 = uVar1 & 0xfffffffffffffff8;
      puVar2 = (uint *)((long)param_1 + uVar8 + 8);
      puVar13 = param_2;
      uVar16 = uVar1;
      local_40 = uVar11;
      local_3c = uVar12;
      do {
        local_40 = *param_1 ^ local_40;
        local_3c = param_1[1] ^ local_3c;
        FUN_100c07a60(&local_40,param_4,1);
        *puVar13 = (char)local_40;
        puVar13[1] = (char)(local_40 >> 8);
        puVar13[2] = (char)(local_40 >> 0x10);
        puVar13[3] = (char)(local_40 >> 0x18);
        puVar13[4] = (char)local_3c;
        puVar13[5] = (char)(local_3c >> 8);
        puVar13[6] = (char)(local_3c >> 0x10);
        puVar13[7] = (char)(local_3c >> 0x18);
        param_1 = param_1 + 2;
        puVar13 = puVar13 + 8;
        uVar16 = uVar16 - 8;
      } while (-1 < (long)uVar16);
      param_2 = param_2 + uVar8 + 8;
      param_3 = uVar1 - uVar8;
      lVar15 = *(long *)PTR____stack_chk_guard_1021e1840;
      param_1 = puVar2;
      uVar11 = local_40;
      uVar12 = local_3c;
    }
    uVar7 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar4 = uVar11;
    uVar3 = 0;
    uVar14 = uVar12;
    switch(param_3) {
    case 0:
      goto switchD_100c0a38d_caseD_0;
    case 8:
      uVar5 = (uint)*(byte *)((long)param_1 + 7) << 0x18;
    case 7:
      uVar5 = uVar5 | (uint)*(byte *)((long)param_1 + 6) << 0x10;
    case 6:
      uVar5 = uVar5 | (uint)*(byte *)((long)param_1 + 5) << 8;
    case 5:
      uVar6 = uVar5 | (byte)param_1[1];
    case 4:
      uVar5 = (uint)*(byte *)((long)param_1 + 3) << 0x18;
      uVar9 = uVar6;
    case 3:
      uVar7 = uVar5 | (uint)*(byte *)((long)param_1 + 2) << 0x10;
      uVar3 = uVar9;
    case 2:
      uVar10 = uVar3;
      uVar7 = uVar7 | (uint)*(byte *)((long)param_1 + 1) << 8;
    case 1:
      uVar7 = uVar7 | (byte)*param_1;
      break;
    default:
      uVar10 = 0;
    }
    local_40 = uVar7 ^ uVar11;
    local_3c = uVar10 ^ uVar12;
    FUN_100c07a60(&local_40,param_4,1);
    *param_2 = (char)local_40;
    param_2[1] = (char)(local_40 >> 8);
    param_2[2] = (char)(local_40 >> 0x10);
    param_2[3] = (char)(local_40 >> 0x18);
    param_2[4] = (char)local_3c;
    param_2[5] = (char)(local_3c >> 8);
    param_2[6] = (char)(local_3c >> 0x10);
    param_2[7] = (char)(local_3c >> 0x18);
    uVar4 = local_40;
    uVar14 = local_3c;
  }
switchD_100c0a38d_caseD_0:
  *(char *)param_5 = (char)uVar4;
  *(char *)((long)param_5 + 1) = (char)(uVar4 >> 8);
  *(char *)((long)param_5 + 2) = (char)(uVar4 >> 0x10);
  *(char *)((long)param_5 + 3) = (char)(uVar4 >> 0x18);
  *(char *)(param_5 + 1) = (char)uVar14;
  *(char *)((long)param_5 + 5) = (char)(uVar14 >> 8);
  *(char *)((long)param_5 + 6) = (char)(uVar14 >> 0x10);
  *(char *)((long)param_5 + 7) = (char)(uVar14 >> 0x18);
  if (lVar15 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

