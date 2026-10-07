
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10070f450(undefined4 param_1)

{
  long lVar1;
  int iVar2;
  size_t local_2b0;
  undefined1 local_2a8 [648];
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_20 = lVar1;
  if (DAT_1011bdb00 == '\0') {
    iVar2 = ___cxa_guard_acquire(&DAT_1011bdb00);
    if (iVar2 != 0) {
      _DAT_1011bdaf0 = 1;
      _DAT_1011bdaf4 = 0xe;
      _DAT_1011bdaf8 = 1;
      _DAT_1011bdafc = param_1;
      ___cxa_guard_release(&DAT_1011bdb00);
    }
  }
  local_2b0 = 0x288;
  iVar2 = _sysctl((int *)&DAT_1011bdaf0,4,local_2a8,&local_2b0,(void *)0x0,0);
  ___error();
  if (lVar1 == local_20) {
    return iVar2 == 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

