
undefined8 FUN_1001088d0(undefined8 param_1)

{
  long lVar1;
  undefined1 local_38 [16];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_28 = lVar1;
  FUN_1007d6bd0(local_38);
  FUN_1007d6a70(param_1,local_38);
  if (lVar1 == local_28) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

