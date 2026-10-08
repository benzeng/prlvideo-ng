
void FUN_100dd5ef0(uint param_1,undefined8 param_2)

{
  int iVar1;
  char **ppcVar2;
  char **ppcVar3;
  uint uVar4;
  long lVar5;
  void *local_438 [128];
  long local_38;
  
  lVar5 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar5;
  iVar1 = _backtrace(local_438,0x80);
  if (1 < iVar1) {
    ppcVar2 = _backtrace_symbols(local_438,iVar1);
    uVar4 = param_1 & 0xf;
    if ((uVar4 == 0) || ((int)uVar4 <= DAT_10230ffd0)) {
      FUN_100df99c0("","HostUtils",param_1,"%s %d stack frames follows",param_2,iVar1 + -1);
    }
    iVar1 = iVar1 + -1;
    ppcVar3 = ppcVar2;
    do {
      ppcVar3 = ppcVar3 + 1;
      if ((uVar4 == 0) || ((int)uVar4 <= DAT_10230ffd0)) {
        FUN_100df99c0("","HostUtils",param_1,"%s\t%s",param_2,*ppcVar3);
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    _free(ppcVar2);
    lVar5 = *(long *)PTR____stack_chk_guard_1021e1840;
  }
  if (lVar5 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

