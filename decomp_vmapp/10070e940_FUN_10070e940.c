
int FUN_10070e940(undefined8 param_1,long *param_2,pthread_mutex_t *param_3)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  undefined1 local_454 [4];
  char *local_450;
  uint local_448;
  undefined8 local_440;
  char local_438 [1024];
  long local_38;
  
  lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
  param_2[1] = 0;
  *param_2 = -1;
  local_38 = lVar6;
  if (param_3 != (pthread_mutex_t *)0x0) {
    _pthread_mutex_lock(param_3);
  }
  uVar7 = 0;
  if (((((DAT_1011bdae0 & 1) == 0) || (uVar7 = 1, (DAT_1011bdae0 & 2) == 0)) ||
      (uVar7 = 2, (DAT_1011bdae0 & 4) == 0)) ||
     ((uVar7 = 3, (DAT_1011bdae0 & 8) == 0 || (uVar7 = 4, (DAT_1011bdae0 & 0x10) == 0)))) {
    local_448 = uVar7;
    uVar2 = _getpid();
    uVar5 = FUN_10070f6b0(uVar2);
    _snprintf(local_438,0x3ff,"prf%u_%u",(ulong)uVar2,(ulong)uVar7,uVar5);
    if (DAT_10116da00 == '\0') {
      iVar3 = ___cxa_guard_acquire(&DAT_10116da00);
      if (iVar3 != 0) {
        iVar3 = _getpagesize();
        uVar1 = (long)iVar3 + 0x8cf0b;
        DAT_10116d9f8 = (int)uVar1 - (int)(uVar1 % (ulong)(long)iVar3);
        ___cxa_guard_release(&DAT_10116da00);
      }
    }
    iVar4 = FUN_10070f740(local_438,DAT_10116d9f8);
    if (iVar4 == -1) {
      uVar2 = _getpid();
      uVar5 = FUN_10070f6b0(uVar2);
      _snprintf(local_438,0x3ff,"prf%u_%u",(ulong)uVar2,(ulong)uVar7,uVar5);
      iVar3 = -0xf;
    }
    else {
      local_450 = local_438;
      local_440 = param_1;
      iVar3 = FUN_10070eb60(iVar4,param_2 + 1,local_454,&local_450);
      if (iVar3 == 0) {
        *param_2 = (long)iVar4;
        DAT_1011bdae0 = DAT_1011bdae0 | (long)(1 << ((byte)local_448 & 0x1f));
        iVar3 = 0;
      }
    }
    lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
  else {
    local_448 = 0xffffffff;
    iVar3 = -0x13;
  }
  if (param_3 != (pthread_mutex_t *)0x0) {
    _pthread_mutex_unlock(param_3);
  }
  if (lVar6 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

