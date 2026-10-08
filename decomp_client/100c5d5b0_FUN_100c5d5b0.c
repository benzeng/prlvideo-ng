
uint FUN_100c5d5b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  long lVar1;
  char in_AL;
  int iVar2;
  uint uVar3;
  undefined1 local_108 [24];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  int local_54;
  ulong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 *local_30;
  undefined1 *local_28;
  long local_18;
  
  if (in_AL != '\0') {
    local_d8 = param_1;
    local_c8 = param_2;
    local_b8 = param_3;
    local_a8 = param_4;
    local_98 = param_5;
    local_88 = param_6;
    local_78 = param_7;
    local_68 = param_8;
  }
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_28 = local_108;
  local_30 = &stack0x00000008;
  local_34 = 0x30;
  local_38 = 0x18;
  local_f0 = param_12;
  local_e8 = param_13;
  local_e0 = param_14;
  local_48 = param_10;
  local_40 = param_9;
  local_18 = lVar1;
  iVar2 = FUN_100c5c280(&local_40,0,&local_48,&local_50,&local_54,param_11,&local_38);
  uVar3 = 0xffffffff;
  if ((iVar2 != 0) && (local_54 == 0)) {
    uVar3 = ~-(uint)((local_50 & 0xffffffff80000000) == 0) | (uint)local_50;
  }
  if (lVar1 == local_18) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

