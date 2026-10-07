
ulong FUN_10057e440(long *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 local_30 [16];
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_20 = lVar1;
  (**(code **)(*param_1 + 0x1b0))(local_30,param_1);
  uVar2 = FUN_1007ea210(local_30);
  if (lVar1 == local_20) {
    return uVar2 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

