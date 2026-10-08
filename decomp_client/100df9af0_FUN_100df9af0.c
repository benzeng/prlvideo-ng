
void FUN_100df9af0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined4 param_14,undefined8 param_15)

{
  int iVar1;
  char in_AL;
  int *piVar2;
  undefined1 local_138 [48];
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 *local_50;
  undefined1 *local_48;
  long local_38;
  
  if (in_AL != '\0') {
    local_108 = param_1;
    local_f8 = param_2;
    local_e8 = param_3;
    local_d8 = param_4;
    local_c8 = param_5;
    local_b8 = param_6;
    local_a8 = param_7;
    local_98 = param_8;
  }
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  piVar2 = ___error();
  iVar1 = *piVar2;
  local_48 = local_138;
  local_50 = &stack0x00000010;
  local_54 = 0x30;
  local_58 = 0x30;
  local_80 = param_9;
  local_78 = param_10;
  local_70 = param_11;
  local_68 = param_12;
  local_60 = param_13;
  FUN_100df9c30(&local_80,param_14,param_15,&local_58);
  piVar2 = ___error();
  *piVar2 = iVar1;
  if (*(long *)PTR____stack_chk_guard_1021e1840 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

