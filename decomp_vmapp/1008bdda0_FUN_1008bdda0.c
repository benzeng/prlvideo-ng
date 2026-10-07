
undefined8 FUN_1008bdda0(undefined8 param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_218 [16];
  undefined8 local_208;
  undefined1 local_1c8 [40];
  undefined8 local_1a0;
  int local_160 [2];
  undefined1 **local_158;
  undefined1 *local_150 [15];
  undefined1 *local_d8 [23];
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_160[0] = param_2;
  local_20 = lVar1;
  if (param_2 == 2) {
    local_158 = local_150;
    local_150[0] = local_218;
    local_208 = param_3;
  }
  else {
    iVar2 = -1;
    if (param_2 != 1) goto LAB_1008bde2b;
    local_158 = local_d8;
    local_d8[0] = local_1c8;
    local_1a0 = param_3;
  }
  iVar2 = FUN_100885160(param_1,local_160);
LAB_1008bde2b:
  uVar3 = 0;
  if (iVar2 != -1) {
    uVar3 = FUN_100885620(param_1,iVar2);
  }
  if (lVar1 == local_20) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

