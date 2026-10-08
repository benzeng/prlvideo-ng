
undefined8 FUN_100dda480(undefined8 param_1)

{
  long lVar1;
  undefined8 local_28 [2];
  long local_18;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_18 = lVar1;
  FUN_100deb410(param_1,local_28);
  if (lVar1 == local_18) {
    return local_28[0];
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

