
QAssociativeIterable * FUN_1003af4c0(QAssociativeIterable *param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  byte bVar8;
  undefined8 auStack_258 [15];
  undefined8 local_1e0 [2];
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170 [2];
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  code *local_150;
  code *local_148;
  code *local_140;
  code *local_138;
  code *local_130;
  code *local_128;
  code *local_120;
  code *local_118;
  code *local_110;
  code *local_108;
  undefined8 local_100 [2];
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  code *local_d8;
  code *local_d0;
  code *local_c8;
  code *local_c0;
  code *local_b8;
  code *local_b0;
  code *local_a8;
  code *local_a0;
  code *local_98;
  undefined8 local_90 [2];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  bVar8 = 0;
  iVar3 = QVariant::userType();
  if (iVar3 == 0x1c) {
    local_170[0] = QVariant::constData();
    local_160 = 10;
    local_15c = 0;
    local_158 = 0x29;
    local_154 = 0;
    local_150 = FUN_1003afcf0;
    local_148 = FUN_1003afd50;
    local_140 = FUN_1003afe00;
    local_138 = FUN_1003afe50;
    local_130 = FUN_1003afe80;
    local_128 = FUN_1003afee0;
    local_120 = FUN_1003aff00;
    local_118 = FUN_1003aff20;
    local_110 = FUN_1003aff40;
    local_108 = FUN_1003aff60;
    puVar5 = local_170;
  }
  else if (iVar3 == 8) {
    local_100[0] = QVariant::constData();
    local_f0 = 10;
    local_ec = 0;
    local_e8 = 0x29;
    local_e4 = 0;
    local_e0 = FUN_1003afa90;
    local_d8 = FUN_1003afad0;
    local_d0 = FUN_1003afb70;
    local_c8 = FUN_1003afbb0;
    local_c0 = FUN_1003afbe0;
    local_b8 = FUN_1003afc40;
    local_b0 = FUN_1003afc60;
    local_a8 = FUN_1003afc80;
    local_a0 = FUN_1003afca0;
    local_98 = FUN_1003afcc0;
    puVar5 = local_100;
  }
  else {
    if (DAT_102273e30 == 0) {
      DAT_102273e30 =
           FUN_1003af8d0("QtMetaTypePrivate::QAssociativeIterableImpl",0xffffffffffffffff,1);
    }
    uVar1 = DAT_102273e30;
    uVar4 = QVariant::userType();
    if (uVar1 == uVar4) {
      puVar5 = (undefined8 *)QVariant::constData();
      puVar7 = local_1e0;
      for (lVar6 = 0xe; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + (ulong)bVar8 * -2 + 1;
        puVar7 = puVar7 + (ulong)bVar8 * -2 + 1;
      }
    }
    else {
      local_90[0] = 0;
      local_28 = 0;
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_48 = 0;
      local_50 = 0;
      local_58 = 0;
      local_60 = 0;
      local_68 = 0;
      local_70 = 0;
      local_78 = 0;
      local_80 = 0;
      cVar2 = QVariant::convert(param_2,(void *)(ulong)uVar1);
      if (cVar2 == '\0') {
        local_1e0[0] = 0;
        local_178 = 0;
        local_180 = 0;
        local_188 = 0;
        local_190 = 0;
        local_198 = 0;
        local_1a0 = 0;
        local_1a8 = 0;
        local_1b0 = 0;
        local_1b8 = 0;
        local_1c0 = 0;
        local_1c8 = 0;
        local_1d0 = 0;
      }
      else {
        puVar5 = local_90;
        puVar7 = local_1e0;
        for (lVar6 = 0xe; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + (ulong)bVar8 * -2 + 1;
          puVar7 = puVar7 + (ulong)bVar8 * -2 + 1;
        }
      }
    }
    puVar5 = local_1e0;
  }
  puVar7 = auStack_258;
  for (lVar6 = 0xe; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + (ulong)bVar8 * -2 + 1;
    puVar7 = puVar7 + (ulong)bVar8 * -2 + 1;
  }
  QAssociativeIterable::QAssociativeIterable(param_1);
  return param_1;
}

