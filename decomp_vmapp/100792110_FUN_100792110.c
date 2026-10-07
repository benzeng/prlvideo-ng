
byte FUN_100792110(long param_1)

{
  long lVar1;
  byte bVar2;
  undefined1 local_30 [16];
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_20 = lVar1;
  FUN_1007d6c60(local_30,param_1 + 0x10);
  bVar2 = FUN_1007ea210(local_30);
  if (lVar1 == local_20) {
    return bVar2 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

