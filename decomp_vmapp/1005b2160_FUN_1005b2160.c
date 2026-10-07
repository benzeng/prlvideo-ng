
void FUN_1005b2160(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_28 = param_1[0xc];
  local_20 = param_1[0xd];
  local_18 = lVar1;
  FUN_1005b21b0(*param_1,&local_28,param_2);
  if (lVar1 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

