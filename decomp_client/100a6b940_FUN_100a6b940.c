
byte FUN_100a6b940(long param_1)

{
  long lVar1;
  byte bVar2;
  undefined1 local_30 [16];
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  FUN_100dda450(local_30,param_1 + 0x10);
  bVar2 = FUN_100deade0(local_30);
  if (lVar1 == local_20) {
    return bVar2 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

