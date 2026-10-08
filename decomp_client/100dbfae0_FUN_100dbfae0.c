
undefined8 * FUN_100dbfae0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  size_t sVar4;
  undefined8 uVar5;
  char local_1028 [4096];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_28 = lVar1;
  iVar3 = _proc_pidpath(*(int *)(*param_2 + 0x28),local_1028,0x1000);
  if (iVar3 < 1) {
    piVar2 = (int *)param_2[0xf];
    *param_1 = piVar2;
    if (1 < *piVar2 + 1U) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
  }
  else {
    sVar4 = _strlen(local_1028);
    uVar5 = QString::fromAscii_helper(local_1028,(int)sVar4);
    *param_1 = uVar5;
  }
  if (lVar1 == local_28) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

