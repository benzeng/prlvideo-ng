
void FUN_10083da20(byte *param_1,undefined1 *param_2,long param_3,undefined8 param_4,byte *param_5,
                  int param_6)

{
  ulong uVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
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
  
  lVar15 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar10 = (uint)param_5[3] |
           (uint)param_5[2] << 8 | (uint)param_5[1] << 0x10 | (uint)*param_5 << 0x18;
  uVar8 = (uint)param_5[7] |
          (uint)param_5[6] << 8 | (uint)param_5[5] << 0x10 | (uint)param_5[4] << 0x18;
  uVar1 = param_3 - 8;
  local_38 = lVar15;
  if (param_6 == 0) {
    if (-1 < (long)uVar1) {
      uVar7 = uVar1 & 0xfffffffffffffff8;
      pbVar2 = param_1 + uVar7 + 8;
      uVar16 = uVar1;
      puVar13 = param_2;
      uVar14 = uVar8;
      uVar11 = uVar10;
      do {
        uVar10 = (uint)param_1[3] |
                 (uint)param_1[2] << 8 | (uint)param_1[1] << 0x10 | (uint)*param_1 << 0x18;
        uVar8 = (uint)param_1[7] |
                (uint)param_1[6] << 8 | (uint)param_1[5] << 0x10 | (uint)param_1[4] << 0x18;
        local_40 = uVar10;
        local_3c = uVar8;
        FUN_10083d660(&local_40,param_4);
        uVar11 = uVar11 ^ local_40;
        uVar14 = uVar14 ^ local_3c;
        *puVar13 = (char)(uVar11 >> 0x18);
        puVar13[1] = (char)(uVar11 >> 0x10);
        puVar13[2] = (char)(uVar11 >> 8);
        puVar13[3] = (char)uVar11;
        puVar13[4] = (char)(uVar14 >> 0x18);
        puVar13[5] = (char)(uVar14 >> 0x10);
        puVar13[6] = (char)(uVar14 >> 8);
        puVar13[7] = (char)uVar14;
        param_1 = param_1 + 8;
        puVar13 = puVar13 + 8;
        uVar16 = uVar16 - 8;
        uVar14 = uVar8;
        uVar11 = uVar10;
      } while (-1 < (long)uVar16);
      param_2 = param_2 + uVar7 + 8;
      param_3 = uVar1 - uVar7;
      lVar15 = *(long *)PTR____stack_chk_guard_100ba2320;
      param_1 = pbVar2;
    }
    uVar14 = uVar10;
    uVar11 = uVar8;
    if (param_3 != 0) {
      uVar14 = (uint)param_1[3] |
               (uint)param_1[2] << 8 | (uint)param_1[1] << 0x10 | (uint)*param_1 << 0x18;
      uVar11 = (uint)param_1[7] |
               (uint)param_1[6] << 8 | (uint)param_1[5] << 0x10 | (uint)param_1[4] << 0x18;
      local_40 = uVar14;
      local_3c = uVar11;
      FUN_10083d660(&local_40,param_4);
      if (param_3 - 1U < 8) {
        uVar10 = uVar10 ^ local_40;
        uVar8 = uVar8 ^ local_3c;
        switch(param_3) {
        case 8:
          param_2[7] = (char)uVar8;
        case 7:
          param_2[6] = (char)(uVar8 >> 8);
        case 6:
          param_2[5] = (char)(uVar8 >> 0x10);
        case 5:
          param_2[4] = (char)(uVar8 >> 0x18);
        case 4:
          param_2[3] = (char)uVar10;
        case 3:
          param_2[2] = (char)(uVar10 >> 8);
        case 2:
          param_2[1] = (char)(uVar10 >> 0x10);
        case 1:
          *param_2 = (char)(uVar10 >> 0x18);
        }
      }
    }
  }
  else {
    if (-1 < (long)uVar1) {
      uVar7 = uVar1 & 0xfffffffffffffff8;
      pbVar2 = param_1 + uVar7 + 8;
      puVar13 = param_2;
      uVar16 = uVar1;
      local_3c = uVar8;
      local_40 = uVar10;
      do {
        local_40 = ((uint)param_1[3] |
                   (uint)param_1[2] << 8 | (uint)param_1[1] << 0x10 | (uint)*param_1 << 0x18) ^
                   local_40;
        local_3c = ((uint)param_1[7] |
                   (uint)param_1[6] << 8 | (uint)param_1[5] << 0x10 | (uint)param_1[4] << 0x18) ^
                   local_3c;
        FUN_10083d2a0(&local_40,param_4);
        *puVar13 = (char)(local_40 >> 0x18);
        puVar13[1] = (char)(local_40 >> 0x10);
        puVar13[2] = (char)(local_40 >> 8);
        puVar13[3] = (char)local_40;
        puVar13[4] = (char)(local_3c >> 0x18);
        puVar13[5] = (char)(local_3c >> 0x10);
        puVar13[6] = (char)(local_3c >> 8);
        puVar13[7] = (char)local_3c;
        param_1 = param_1 + 8;
        puVar13 = puVar13 + 8;
        uVar16 = uVar16 - 8;
      } while (-1 < (long)uVar16);
      param_2 = param_2 + uVar7 + 8;
      param_3 = uVar1 - uVar7;
      lVar15 = *(long *)PTR____stack_chk_guard_100ba2320;
      param_1 = pbVar2;
      uVar8 = local_3c;
      uVar10 = local_40;
    }
    uVar5 = 0;
    uVar4 = 0;
    uVar9 = 0;
    uVar6 = uVar5;
    uVar12 = 0;
    uVar3 = 0;
    uVar14 = uVar10;
    uVar11 = uVar8;
    switch(param_3) {
    case 0:
      goto switchD_10083dd0b_caseD_0;
    case 8:
      uVar4 = (uint)param_1[7];
    case 7:
      uVar5 = uVar4 | (uint)param_1[6] << 8;
    case 6:
      uVar5 = uVar5 | (uint)param_1[5] << 0x10;
    case 5:
      uVar6 = uVar5 | (uint)param_1[4] << 0x18;
    case 4:
      uVar5 = (uint)param_1[3];
      uVar12 = uVar6;
    case 3:
      uVar5 = uVar5 | (uint)param_1[2] << 8;
      uVar3 = uVar12;
    case 2:
      uVar9 = uVar3;
      uVar5 = uVar5 | (uint)param_1[1] << 0x10;
    case 1:
      uVar5 = uVar5 | (uint)*param_1 << 0x18;
      break;
    default:
      uVar9 = 0;
    }
    local_40 = uVar5 ^ uVar10;
    local_3c = uVar9 ^ uVar8;
    FUN_10083d2a0(&local_40,param_4);
    *param_2 = (char)(local_40 >> 0x18);
    param_2[1] = (char)(local_40 >> 0x10);
    param_2[2] = (char)(local_40 >> 8);
    param_2[3] = (char)local_40;
    param_2[4] = (char)(local_3c >> 0x18);
    param_2[5] = (char)(local_3c >> 0x10);
    param_2[6] = (char)(local_3c >> 8);
    param_2[7] = (char)local_3c;
    uVar14 = local_40;
    uVar11 = local_3c;
  }
switchD_10083dd0b_caseD_0:
  *param_5 = (byte)(uVar14 >> 0x18);
  param_5[1] = (byte)(uVar14 >> 0x10);
  param_5[2] = (byte)(uVar14 >> 8);
  param_5[3] = (byte)uVar14;
  param_5[4] = (byte)(uVar11 >> 0x18);
  param_5[5] = (byte)(uVar11 >> 0x10);
  param_5[6] = (byte)(uVar11 >> 8);
  param_5[7] = (byte)uVar11;
  if (lVar15 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

