
undefined8 FUN_0040bbb0(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 local_488 [256];
  undefined8 local_88;
  undefined2 local_80;
  undefined2 local_7e;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 *local_58;
  uint local_50;
  byte local_4c;
  undefined4 local_48;
  int local_44;
  undefined2 local_40;
  undefined2 local_3e;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_48 = 0x8000;
  local_44 = 0;
  local_40 = 0x20;
  local_3e = 0;
  local_3c = 0;
  local_38 = 1;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 2;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  iVar2 = FUN_0040bac0(&local_48);
  uVar1 = local_2c;
  if ((-1 < iVar2) && (local_44 == 0)) {
    if (0x400 < local_2c) {
      FUN_0040fffa(&DAT_0041913e,"prlcc",0,
                   "Error: %s:%d The command size is to large %d (max %zu bytes)",
                   "PrlTgReqUtilityToolCmd",0x97,local_2c,0x400);
      return 0;
    }
    puVar4 = &local_88;
    for (lVar3 = 8; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    local_58 = local_488;
    local_88._0_4_ = 0x8000;
    local_80 = 0x20;
    local_7e = 1;
    local_4c = local_4c | 1;
    local_78 = 1;
    local_74 = 1;
    local_68 = 2;
    local_50 = uVar1;
    iVar2 = FUN_0040bac0(&local_88);
    if ((-1 < iVar2) && (local_88._4_4_ == 0)) {
      *param_1 = local_70;
      *param_2 = local_488[0];
      return 1;
    }
  }
  return 0;
}

