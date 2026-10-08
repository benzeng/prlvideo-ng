
uint FUN_100af23c0(void)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int local_52c;
  int local_528;
  int local_524;
  utsname local_520;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  iVar2 = _uname(&local_520);
  uVar3 = 0xffffffff;
  if (iVar2 == 0) {
    local_524 = -1;
    local_528 = -1;
    local_52c = -1;
    iVar2 = _sscanf(local_520.release,"%d.%d.%d",&local_524,&local_528,&local_52c);
    if (iVar2 == 3) {
      uVar3 = local_528 * 0x100 + local_524 * 0x10000 + local_52c;
      uVar3 = -(uint)(uVar3 == 0) | uVar3;
    }
  }
  if (lVar1 == local_20) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

