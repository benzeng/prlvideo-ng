
void FUN_1007d8b40(int *param_1)

{
  long lVar1;
  ssize_t sVar2;
  undefined1 local_68 [64];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_28 = lVar1;
  do {
    sVar2 = _read(*param_1,local_68,0x40);
  } while (sVar2 == 0x40);
  if (lVar1 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

