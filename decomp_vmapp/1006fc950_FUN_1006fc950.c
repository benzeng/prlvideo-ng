
size_t FUN_1006fc950(char *param_1,void *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  int *piVar5;
  char local_438 [1024];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar1;
  iVar2 = _open(param_1,0);
  sVar4 = 0xffffffffffffffff;
  if (iVar2 != -1) {
    iVar3 = _fcntl(iVar2,0x32,local_438);
    _close(iVar2);
    sVar4 = 0xffffffffffffffff;
    if (iVar3 != -1) {
      sVar4 = _strlen(local_438);
      if (sVar4 < 0x400) {
        _memcpy(param_2,local_438,sVar4 + 1);
      }
      else {
        piVar5 = ___error();
        *piVar5 = 0x37;
        sVar4 = 0xffffffffffffffff;
      }
    }
  }
  if (lVar1 == local_38) {
    return sVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

