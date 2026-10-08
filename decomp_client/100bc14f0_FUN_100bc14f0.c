
/* WARNING: Type propagation algorithm not settling */

ulong FUN_100bc14f0(void)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  ulong uVar5;
  uint local_b8;
  uint local_b4;
  size_t local_b0;
  size_t local_a8 [17];
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_b4 = 0;
  local_b8 = 0;
  local_a8[0] = 4;
  local_20 = lVar1;
  iVar2 = _sysctlbyname("hw.physicalcpu",&local_b8,local_a8,(void *)0x0,0);
  if (iVar2 == 0) {
    ___snprintf_chk(local_a8,0x7f,0,0x80,"%s.%s.%s","machdep","cpu","logical_per_package");
    local_b0 = 4;
    iVar2 = _sysctlbyname((char *)local_a8,&local_b4,&local_b0,(void *)0x0,0);
    if ((iVar2 == 0) && (local_b4 != 0)) {
      uVar5 = (ulong)local_b8 / (ulong)local_b4;
      if ((0 < (int)uVar5) && (local_b8 % local_b4 == 0)) goto LAB_100bc160e;
    }
  }
  piVar3 = ___error();
  pcVar4 = _strerror(*piVar3);
  FUN_100b9d470(0xffffffff,"Can\'t get CPU\'s information: %s",pcVar4);
  uVar5 = 0;
LAB_100bc160e:
  if (lVar1 == local_20) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

