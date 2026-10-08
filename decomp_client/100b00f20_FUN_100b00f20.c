
undefined8 * FUN_100b00f20(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  utsname local_520;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  iVar2 = _uname(&local_520);
  if (iVar2 == 0) {
    iVar2 = _strcmp(local_520.machine,"x86_64");
    if (iVar2 == 0) {
      pcVar4 = "64";
      goto LAB_100b00f6d;
    }
  }
  pcVar4 = "32";
LAB_100b00f6d:
  uVar3 = QString::fromAscii_helper(pcVar4,2);
  *param_1 = uVar3;
  if (lVar1 == local_20) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

