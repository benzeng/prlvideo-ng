
bool FUN_1007d6bf0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  undefined1 local_38 [16];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_28 = lVar1;
  FUN_1007d6880(local_38,param_1);
  cVar2 = FUN_1007ea210(local_38);
  if (cVar2 == '\0') {
    FUN_1007ea6d0(local_38,param_2);
  }
  if (lVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return cVar2 == '\0';
}

