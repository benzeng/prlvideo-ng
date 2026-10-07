
void FUN_1008890a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  long lVar1;
  char in_AL;
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 *local_30;
  undefined1 *local_28;
  long local_18;
  
  if (in_AL != '\0') {
    local_b8 = param_1;
    local_a8 = param_2;
    local_98 = param_3;
    local_88 = param_4;
    local_78 = param_5;
    local_68 = param_6;
    local_58 = param_7;
    local_48 = param_8;
  }
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_28 = local_e8;
  local_30 = &stack0x00000008;
  local_34 = 0x30;
  local_38 = 8;
  local_e0 = param_10;
  local_d8 = param_11;
  local_d0 = param_12;
  local_c8 = param_13;
  local_c0 = param_14;
  local_18 = lVar1;
  FUN_100889150(param_9,&local_38);
  if (lVar1 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

