
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c15310(ulong param_1,ulong param_2,ulong param_3,uint *param_4,undefined1 *param_5,
                  long param_6,undefined8 param_7,byte *param_8,int param_9)

{
  uint *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  ulong in_XMM0_Qb;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  ulong in_XMM1_Qb;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 extraout_XMM1_Qb;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  ulong in_XMM2_Qb;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  ulong local_68;
  ulong uStack_60;
  ulong local_50;
  undefined1 local_48 [16];
  
  uVar4 = param_6 - 8;
  auVar9._8_8_ = in_XMM0_Qb & 0xffffffffffff0000 | (ulong)param_8[4];
  auVar9._0_8_ = param_1 & 0xffffffffffff0000 | (ulong)*param_8;
  auVar9 = auVar9 & _DAT_101dae740;
  auVar16._8_8_ = in_XMM1_Qb & 0xffffffffffff0000 | (ulong)param_8[5];
  auVar16._0_8_ = param_2 & 0xffffffffffff0000 | (ulong)param_8[1];
  auVar17._0_8_ = SUB168(auVar16 & _DAT_101dae740,0) << 8;
  auVar17._8_8_ = SUB168(auVar16 & _DAT_101dae740,8) << 8;
  auVar26._8_8_ = in_XMM2_Qb & 0xffffffffffff0000 | (ulong)param_8[6];
  auVar26._0_8_ = param_3 & 0xffffffffffff0000 | (ulong)param_8[2];
  auVar27._0_8_ = SUB168(auVar26 & _DAT_101dae740,0) << 0x10;
  auVar27._8_8_ = SUB168(auVar26 & _DAT_101dae740,8) << 0x10;
  auVar27 = auVar27 | auVar17 | auVar9;
  auVar10._8_8_ = auVar9._8_8_ & 0xffffffffffff0000 | (ulong)param_8[7];
  auVar10._0_8_ = auVar9._0_8_ & 0xffffffffffff0000 | (ulong)param_8[3];
  auVar11._0_8_ = SUB168(auVar10 & _DAT_101dae740,0) << 0x18;
  auVar11._8_8_ = SUB168(auVar10 & _DAT_101dae740,8) << 0x18;
  auVar12 = auVar11 | auVar27;
  uVar2 = auVar12._0_8_;
  auVar21._0_8_ = auVar12._8_8_;
  auVar21._8_4_ = auVar12._0_4_;
  auVar21._12_4_ = auVar12._4_4_;
  if (param_9 == 0) {
    local_50 = auVar21._0_8_;
    if (-1 < (long)uVar4) {
      uVar5 = uVar4 & 0xfffffffffffffff8;
      puVar1 = (uint *)((long)param_4 + uVar5 + 8);
      puVar8 = param_5;
      uVar3 = uVar4;
      uVar6 = auVar21._0_8_;
      uVar7 = uVar2;
      do {
        uVar2 = CONCAT44(0,*param_4);
        local_50 = (ulong)param_4[1];
        local_48._8_4_ = param_4[1];
        local_48._0_8_ = uVar2;
        local_48._12_4_ = 0;
        auVar9 = FUN_100c15a80(local_48,param_7);
        auVar21._0_8_ = auVar9._8_8_;
        auVar12._0_8_ = auVar9._0_8_;
        auVar21._8_8_ = extraout_XMM1_Qb;
        auVar12._8_8_ = extraout_XMM0_Qb;
        uVar7 = uVar7 ^ local_48._0_8_;
        uVar6 = uVar6 ^ local_48._8_8_;
        *puVar8 = (char)uVar7;
        puVar8[1] = (char)(uVar7 >> 8);
        puVar8[2] = (char)(uVar7 >> 0x10);
        puVar8[3] = (char)(uVar7 >> 0x18);
        puVar8[4] = (char)uVar6;
        puVar8[5] = (char)(uVar6 >> 8);
        puVar8[6] = (char)(uVar6 >> 0x10);
        puVar8[7] = (char)(uVar6 >> 0x18);
        param_4 = param_4 + 2;
        puVar8 = puVar8 + 8;
        uVar3 = uVar3 - 8;
        uVar6 = local_50;
        uVar7 = uVar2;
      } while (-1 < (long)uVar3);
      param_5 = param_5 + uVar5 + 8;
      param_6 = uVar4 - uVar5;
      param_4 = puVar1;
    }
    uVar4 = uVar2;
    uStack_60 = local_50;
    if (param_6 != 0) {
      auVar13._8_8_ = auVar12._8_8_ & 0xffffffffffff0000 | (ulong)(byte)param_4[1];
      auVar13._0_8_ = auVar12._0_8_ & 0xffffffffffff0000 | (ulong)(byte)*param_4;
      auVar13 = auVar13 & _DAT_101dae740;
      auVar22._8_8_ = auVar21._8_8_ & 0xffffffffffff0000 | (ulong)*(byte *)((long)param_4 + 5);
      auVar22._0_8_ = auVar21._0_8_ & 0xffffffffffff0000 | (ulong)*(byte *)((long)param_4 + 1);
      auVar23._0_8_ = SUB168(auVar22 & _DAT_101dae740,0) << 8;
      auVar23._8_8_ = SUB168(auVar22 & _DAT_101dae740,8) << 8;
      auVar23 = auVar23 | auVar13;
      auVar14._8_8_ = auVar13._8_8_ & 0xffffffffffff0000 | (ulong)*(byte *)((long)param_4 + 6);
      auVar14._0_8_ = auVar13._0_8_ & 0xffffffffffff0000 | (ulong)*(byte *)((long)param_4 + 2);
      auVar15._0_8_ = SUB168(auVar14 & _DAT_101dae740,0) << 0x10;
      auVar15._8_8_ = SUB168(auVar14 & _DAT_101dae740,8) << 0x10;
      auVar24._8_8_ = auVar23._8_8_ & 0xffffffffffff0000 | (ulong)*(byte *)((long)param_4 + 7);
      auVar24._0_8_ = auVar23._0_8_ & 0xffffffffffff0000 | (ulong)*(byte *)((long)param_4 + 3);
      auVar25._0_8_ = SUB168(auVar24 & _DAT_101dae740,0) << 0x18;
      auVar25._8_8_ = SUB168(auVar24 & _DAT_101dae740,8) << 0x18;
      auVar25 = auVar25 | auVar15 | auVar23;
      local_48 = auVar25;
      FUN_100c15a80(local_48,param_7);
      local_68 = auVar25._0_8_;
      uStack_60 = auVar25._8_8_;
      uVar4 = local_68;
      if (param_6 - 1U < 8) {
        uVar2 = uVar2 ^ local_48._0_8_;
        local_50 = local_50 ^ local_48._8_8_;
        switch(param_6) {
        case 8:
          param_5[7] = (char)(local_50 >> 0x18);
        case 7:
          param_5[6] = (char)(local_50 >> 0x10);
        case 6:
          param_5[5] = (char)(local_50 >> 8);
        case 5:
          param_5[4] = (char)local_50;
        case 4:
          param_5[3] = (char)(uVar2 >> 0x18);
        case 3:
          param_5[2] = (char)(uVar2 >> 0x10);
        case 2:
          param_5[1] = (char)(uVar2 >> 8);
        case 1:
          *param_5 = (char)uVar2;
          uVar4 = local_68;
        }
      }
    }
  }
  else {
    uStack_60 = auVar21._0_8_;
    if (-1 < (long)uVar4) {
      uVar3 = uVar4 & 0xfffffffffffffff8;
      puVar1 = (uint *)((long)param_4 + uVar3 + 8);
      puVar8 = param_5;
      uVar2 = uVar4;
      local_48 = auVar12;
      auVar9 = _DAT_101dae740;
      do {
        auVar18._8_8_ = auVar21._8_8_ & 0xffffffffffff0000 | (ulong)(byte)param_4[1];
        auVar18._0_8_ = auVar21._0_8_ & 0xffffffffffff0000 | (ulong)(byte)*param_4;
        auVar18 = auVar18 & auVar9;
        auVar28._8_8_ = auVar27._8_8_ & 0xffffffffffff0000 | (ulong)*(byte *)((long)param_4 + 5);
        auVar28._0_8_ = auVar27._0_8_ & 0xffffffffffff0000 | (ulong)*(byte *)((long)param_4 + 1);
        auVar29._0_8_ = SUB168(auVar28 & auVar9,0) << 8;
        auVar29._8_8_ = SUB168(auVar28 & auVar9,8) << 8;
        auVar29 = auVar29 | auVar18;
        auVar19._8_8_ = auVar18._8_8_ & 0xffffffffffff0000 | (ulong)*(byte *)((long)param_4 + 6);
        auVar19._0_8_ = auVar18._0_8_ & 0xffffffffffff0000 | (ulong)*(byte *)((long)param_4 + 2);
        auVar20._0_8_ = SUB168(auVar19 & auVar9,0) << 0x10;
        auVar20._8_8_ = SUB168(auVar19 & auVar9,8) << 0x10;
        auVar30._8_8_ = auVar29._8_8_ & 0xffffffffffff0000 | (ulong)*(byte *)((long)param_4 + 7);
        auVar30._0_8_ = auVar29._0_8_ & 0xffffffffffff0000 | (ulong)*(byte *)((long)param_4 + 3);
        auVar31._0_8_ = SUB168(auVar30 & auVar9,0) << 0x18;
        auVar31._8_8_ = SUB168(auVar30 & auVar9,8) << 0x18;
        auVar27 = (auVar31 | auVar20 | auVar29) ^ local_48;
        local_48 = auVar27;
        FUN_100c15910(local_48);
        auVar9 = _DAT_101dae740;
        *puVar8 = local_48[0];
        puVar8[1] = local_48[1];
        puVar8[2] = local_48[2];
        puVar8[3] = local_48[3];
        puVar8[4] = local_48[8];
        puVar8[5] = local_48[9];
        puVar8[6] = local_48[10];
        puVar8[7] = local_48[0xb];
        param_4 = param_4 + 2;
        puVar8 = puVar8 + 8;
        uVar2 = uVar2 - 8;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = local_48._8_8_;
      } while (-1 < (long)uVar2);
      param_5 = param_5 + uVar3 + 8;
      param_6 = uVar4 - uVar3;
      uStack_60 = local_48._8_8_;
      param_4 = puVar1;
      uVar2 = local_48._0_8_;
    }
    local_48._0_8_ = 0;
    local_48._8_8_ = 0;
    uVar4 = uVar2;
    uVar3 = local_48._0_8_;
    switch(param_6) {
    case 0:
      goto switchD_100c15693_caseD_0;
    case 8:
      local_48._0_8_ = (ulong)*(byte *)((long)param_4 + 7) << 0x18;
    case 7:
      local_48._0_8_ = local_48._0_8_ | (ulong)*(byte *)((long)param_4 + 6) << 0x10;
    case 6:
      local_48._0_8_ = local_48._0_8_ | (ulong)*(byte *)((long)param_4 + 5) << 8;
    case 5:
      local_48._0_8_ = local_48._0_8_ | (ulong)(byte)param_4[1];
    case 4:
      uVar3 = (ulong)*(byte *)((long)param_4 + 3) << 0x18;
      local_48._8_8_ = local_48._0_8_;
    case 3:
      local_48._0_8_ = uVar3 | (ulong)*(byte *)((long)param_4 + 2) << 0x10;
    case 2:
      local_48._0_8_ = local_48._0_8_ | (ulong)*(byte *)((long)param_4 + 1) << 8;
    case 1:
      local_48._0_8_ = local_48._0_8_ | (ulong)(byte)*param_4;
      break;
    default:
      local_48._8_8_ = 0;
    }
    local_48._0_8_ = local_48._0_8_ ^ uVar2;
    local_48._8_8_ = local_48._8_8_ ^ uStack_60;
    FUN_100c15910(local_48,param_7);
    *param_5 = (char)local_48._0_8_;
    param_5[1] = SUB81(local_48._0_8_,1);
    param_5[2] = SUB81(local_48._0_8_,2);
    param_5[3] = SUB81(local_48._0_8_,3);
    param_5[4] = (char)local_48._8_8_;
    param_5[5] = SUB81(local_48._8_8_,1);
    param_5[6] = SUB81(local_48._8_8_,2);
    param_5[7] = SUB81(local_48._8_8_,3);
    uVar4 = local_48._0_8_;
    uStack_60 = local_48._8_8_;
  }
switchD_100c15693_caseD_0:
  *param_8 = (byte)uVar4;
  param_8[1] = (byte)(uVar4 >> 8);
  param_8[2] = (byte)(uVar4 >> 0x10);
  param_8[3] = (byte)(uVar4 >> 0x18);
  param_8[4] = (byte)uStack_60;
  param_8[5] = (byte)(uStack_60 >> 8);
  param_8[6] = (byte)(uStack_60 >> 0x10);
  param_8[7] = (byte)(uStack_60 >> 0x18);
  return;
}

