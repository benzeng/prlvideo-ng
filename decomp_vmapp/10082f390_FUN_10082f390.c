
void FUN_10082f390(uint *param_1,undefined1 *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,uint *param_7,int param_8)

{
  ulong uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  uint local_40;
  uint local_3c;
  long local_38;
  
  lVar16 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar11 = *param_7;
  uVar10 = param_7[1];
  uVar1 = param_3 - 8;
  local_38 = lVar16;
  if (param_8 == 0) {
    if (-1 < (long)uVar1) {
      uVar14 = uVar1 & 0xfffffffffffffff8;
      puVar2 = (uint *)((long)param_1 + uVar14 + 8);
      puVar12 = param_2;
      uVar15 = uVar1;
      uVar13 = uVar10;
      uVar4 = uVar11;
      do {
        uVar11 = *param_1;
        uVar10 = param_1[1];
        local_40 = uVar11;
        local_3c = uVar10;
        FUN_10082ed70(&local_40,param_4,param_5,param_6);
        uVar4 = uVar4 ^ local_40;
        uVar13 = uVar13 ^ local_3c;
        *puVar12 = (char)uVar4;
        puVar12[1] = (char)(uVar4 >> 8);
        puVar12[2] = (char)(uVar4 >> 0x10);
        puVar12[3] = (char)(uVar4 >> 0x18);
        puVar12[4] = (char)uVar13;
        puVar12[5] = (char)(uVar13 >> 8);
        puVar12[6] = (char)(uVar13 >> 0x10);
        puVar12[7] = (char)(uVar13 >> 0x18);
        param_1 = param_1 + 2;
        puVar12 = puVar12 + 8;
        uVar15 = uVar15 - 8;
        uVar13 = uVar10;
        uVar4 = uVar11;
      } while (-1 < (long)uVar15);
      param_2 = param_2 + uVar14 + 8;
      param_3 = uVar1 - uVar14;
      lVar16 = *(long *)PTR____stack_chk_guard_100ba2320;
      param_1 = puVar2;
    }
    uVar13 = uVar11;
    uVar4 = uVar10;
    if (param_3 != 0) {
      uVar13 = *param_1;
      uVar4 = param_1[1];
      local_40 = uVar13;
      local_3c = uVar4;
      FUN_10082ed70(&local_40,param_4,param_5,param_6);
      if (param_3 - 1U < 8) {
        uVar11 = uVar11 ^ local_40;
        uVar10 = uVar10 ^ local_3c;
        switch(param_3) {
        case 8:
          param_2[7] = (char)(uVar10 >> 0x18);
        case 7:
          param_2[6] = (char)(uVar10 >> 0x10);
        case 6:
          param_2[5] = (char)(uVar10 >> 8);
        case 5:
          param_2[4] = (char)uVar10;
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
      uVar14 = uVar1 & 0xfffffffffffffff8;
      puVar2 = (uint *)((long)param_1 + uVar14 + 8);
      puVar12 = param_2;
      uVar15 = uVar1;
      local_3c = uVar10;
      local_40 = uVar11;
      do {
        local_40 = *param_1 ^ local_40;
        local_3c = param_1[1] ^ local_3c;
        FUN_10082ec50(&local_40,param_4,param_5,param_6);
        *puVar12 = (char)local_40;
        puVar12[1] = (char)(local_40 >> 8);
        puVar12[2] = (char)(local_40 >> 0x10);
        puVar12[3] = (char)(local_40 >> 0x18);
        puVar12[4] = (char)local_3c;
        puVar12[5] = (char)(local_3c >> 8);
        puVar12[6] = (char)(local_3c >> 0x10);
        puVar12[7] = (char)(local_3c >> 0x18);
        param_1 = param_1 + 2;
        puVar12 = puVar12 + 8;
        uVar15 = uVar15 - 8;
      } while (-1 < (long)uVar15);
      param_2 = param_2 + uVar14 + 8;
      param_3 = uVar1 - uVar14;
      lVar16 = *(long *)PTR____stack_chk_guard_100ba2320;
      param_1 = puVar2;
      uVar10 = local_3c;
      uVar11 = local_40;
    }
    uVar7 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar13 = uVar11;
    uVar4 = uVar10;
    uVar3 = 0;
    switch(param_3) {
    case 0:
      goto switchD_10082f6a5_caseD_0;
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
      uVar8 = uVar6;
    case 3:
      uVar7 = uVar5 | (uint)*(byte *)((long)param_1 + 2) << 0x10;
      uVar3 = uVar8;
    case 2:
      uVar9 = uVar3;
      uVar7 = uVar7 | (uint)*(byte *)((long)param_1 + 1) << 8;
    case 1:
      uVar7 = uVar7 | (byte)*param_1;
      break;
    default:
      uVar9 = 0;
    }
    local_40 = uVar7 ^ uVar11;
    local_3c = uVar9 ^ uVar10;
    FUN_10082ec50(&local_40,param_4,param_5,param_6);
    *param_2 = (char)local_40;
    param_2[1] = (char)(local_40 >> 8);
    param_2[2] = (char)(local_40 >> 0x10);
    param_2[3] = (char)(local_40 >> 0x18);
    param_2[4] = (char)local_3c;
    param_2[5] = (char)(local_3c >> 8);
    param_2[6] = (char)(local_3c >> 0x10);
    param_2[7] = (char)(local_3c >> 0x18);
    uVar13 = local_40;
    uVar4 = local_3c;
  }
switchD_10082f6a5_caseD_0:
  *(char *)param_7 = (char)uVar13;
  *(char *)((long)param_7 + 1) = (char)(uVar13 >> 8);
  *(char *)((long)param_7 + 2) = (char)(uVar13 >> 0x10);
  *(char *)((long)param_7 + 3) = (char)(uVar13 >> 0x18);
  *(char *)(param_7 + 1) = (char)uVar4;
  *(char *)((long)param_7 + 5) = (char)(uVar4 >> 8);
  *(char *)((long)param_7 + 6) = (char)(uVar4 >> 0x10);
  *(char *)((long)param_7 + 7) = (char)(uVar4 >> 0x18);
  if (lVar16 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

