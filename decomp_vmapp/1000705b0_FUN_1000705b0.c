
void FUN_1000705b0(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_20 = lVar1;
  FUN_1007d6bd0(&local_30);
  param_2[1] = local_28;
  *param_2 = local_30;
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

