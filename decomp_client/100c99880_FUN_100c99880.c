
undefined8 FUN_100c99880(undefined8 param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 local_210 [16];
  undefined8 local_200;
  undefined1 local_1c0 [40];
  undefined8 local_198;
  int local_158 [2];
  undefined1 **local_150;
  undefined1 *local_148 [15];
  undefined1 *local_d0 [23];
  long local_18;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_158[0] = param_2;
  local_18 = lVar1;
  if (param_2 == 2) {
    local_150 = local_148;
    local_148[0] = local_210;
    local_200 = param_3;
  }
  else {
    uVar2 = 0xffffffff;
    if (param_2 != 1) goto LAB_100c99903;
    local_150 = local_d0;
    local_d0[0] = local_1c0;
    local_198 = param_3;
  }
  uVar2 = FUN_100c60360(param_1,local_158);
LAB_100c99903:
  if (lVar1 == local_18) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

