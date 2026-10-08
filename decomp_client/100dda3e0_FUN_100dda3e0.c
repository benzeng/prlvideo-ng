
bool FUN_100dda3e0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  undefined1 local_38 [16];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_28 = lVar1;
  FUN_100dda070(local_38,param_1);
  cVar2 = FUN_100deade0(local_38);
  if (cVar2 == '\0') {
    FUN_100deb2a0(local_38,param_2);
  }
  if (lVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return cVar2 == '\0';
}

