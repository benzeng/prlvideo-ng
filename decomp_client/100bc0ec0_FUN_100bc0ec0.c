
int FUN_100bc0ec0(int param_1,char param_2)

{
  long lVar1;
  key_t kVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 local_138 [264];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_30 = lVar1;
  if (param_1 < 0x80) {
    kVar2 = _ftok("/Library",(int)param_2);
    iVar3 = _semget(kVar2,param_1,0x7b0);
    if (iVar3 == -1) {
      piVar5 = ___error();
      if (*piVar5 == 0x11) {
        iVar3 = _semget(kVar2,param_1,0x1b0);
        if (iVar3 != -1) goto LAB_100bc0fcf;
      }
      piVar5 = ___error();
      pcVar6 = _strerror(*piVar5);
      pcVar7 = "Can\'t create mutex - %s";
    }
    else {
      if (0 < param_1) {
        _memset_pattern16(local_138,&DAT_101da26e0,(ulong)(param_1 - 1) * 2 + 2);
      }
      iVar4 = _semctl(iVar3,0,9,local_138);
      if (iVar4 != -1) goto LAB_100bc0fcf;
      piVar5 = ___error();
      pcVar6 = _strerror(*piVar5);
      pcVar7 = "Initialize mutex failed - %s";
    }
    iVar3 = -1;
    FUN_100b9d470(0xffffffff,pcVar7,pcVar6);
  }
  else {
    FUN_100b9d470(0xfffffffd,0);
    iVar3 = -1;
  }
LAB_100bc0fcf:
  if (lVar1 == local_30) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

