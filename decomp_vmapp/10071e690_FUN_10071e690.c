
undefined4
FUN_10071e690(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9,char *param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  long lVar1;
  char in_AL;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 *local_40;
  undefined1 *local_38;
  long local_28;
  
  if (in_AL != '\0') {
    local_c8 = param_1;
    local_b8 = param_2;
    local_a8 = param_3;
    local_98 = param_4;
    local_88 = param_5;
    local_78 = param_6;
    local_68 = param_7;
    local_58 = param_8;
  }
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  DAT_1011bdc30 = param_9;
  local_e8 = param_11;
  local_e0 = param_12;
  local_d8 = param_13;
  local_d0 = param_14;
  local_28 = lVar1;
  if ((param_10 == (char *)0x0) || (*param_10 == '\0')) {
    DAT_1011bdc34 = 0;
  }
  else {
    local_38 = local_f8;
    local_40 = &stack0x00000008;
    local_44 = 0x30;
    local_48 = 0x10;
    ___vsnprintf_chk(&DAT_1011bdc34,0xff,0,0x100,param_10,&local_48);
  }
  if (lVar1 == local_28) {
    return param_9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

