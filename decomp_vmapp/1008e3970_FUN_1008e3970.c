
void FUN_1008e3970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  int iVar1;
  long lVar2;
  char in_AL;
  int *piVar3;
  undefined1 local_138 [32];
  undefined8 local_118;
  undefined8 local_110;
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
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_118 = param_13;
  local_110 = param_14;
  local_38 = lVar2;
  piVar3 = ___error();
  iVar1 = *piVar3;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_48 = local_138;
  local_50 = &stack0x00000008;
  local_54 = 0x30;
  local_58 = 0x20;
  local_68 = param_9;
  local_60 = param_10;
  FUN_1008e3be0(&local_80,param_11,param_12,&local_58);
  piVar3 = ___error();
  *piVar3 = iVar1;
  if (lVar2 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

