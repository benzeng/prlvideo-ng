
void FUN_100daafc0(long param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  char local_428 [1032];
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (*(long *)(param_1 + 0x220) == 0) {
    lVar3 = param_1 + 0x20;
    if (*(char *)(param_1 + 0x179) == '\0') {
      pcVar2 = "%.100s";
    }
    else {
      lVar3 = param_1 + 0x179;
      pcVar2 = "%.155s/%.100s";
    }
    ___snprintf_chk(local_428,0x400,0,0x400,pcVar2,lVar3);
    _strdup(local_428);
  }
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

