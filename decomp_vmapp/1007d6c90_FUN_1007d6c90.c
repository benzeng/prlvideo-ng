
undefined8 FUN_1007d6c90(undefined8 param_1)

{
  long lVar1;
  undefined8 local_28 [2];
  long local_18;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_18 = lVar1;
  FUN_1007ea840(param_1,local_28);
  if (lVar1 == local_18) {
    return local_28[0];
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

