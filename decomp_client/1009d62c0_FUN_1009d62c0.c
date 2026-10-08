
undefined1 FUN_1009d62c0(long param_1,undefined4 *param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined1 uVar4;
  ulong local_6c0;
  size_t local_6b8;
  rusage local_6b0;
  long local_620;
  undefined4 local_618;
  undefined4 local_610 [2];
  undefined4 local_608;
  undefined4 local_604;
  pid_t local_600;
  undefined4 local_5fc;
  undefined4 local_5f8;
  undefined4 local_5f4;
  undefined4 local_5f0;
  undefined4 local_5ec;
  undefined4 local_5e8;
  int local_2c8;
  undefined4 local_2c0 [162];
  int local_38 [3];
  pid_t local_2c;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_620 = param_1 + 8;
  local_618 = *(undefined4 *)(param_1 + 0x10);
  local_20 = lVar1;
  ___bzero(local_610,0x348);
  local_2c8 = 1;
  cVar2 = FUN_1009cf2f0(&local_620,0x340);
  if (cVar2 == '\0') {
    uVar4 = 0;
  }
  else {
    *param_2 = 0xf;
    *(ulong *)(param_2 + 1) = CONCAT44(local_618,local_610[0]);
    local_608 = 0x340;
    local_604 = 7;
    local_600 = _getpid();
    iVar3 = _getrusage(0,&local_6b0);
    if (iVar3 != -1) {
      local_5f8 = (undefined4)local_6b0.ru_utime.tv_sec;
      local_5f4 = (undefined4)local_6b0.ru_stime.tv_sec;
    }
    local_38[0] = 1;
    local_38[1] = 0xe;
    local_38[2] = 1;
    local_2c = local_600;
    local_6b8 = 0x288;
    iVar3 = _sysctl(local_38,4,local_2c0,&local_6b8,(void *)0x0,0);
    if (iVar3 == 0) {
      local_5fc = local_2c0[0];
    }
    local_6b8 = 8;
    _sysctlbyname("hw.cpufrequency_max",&local_6c0,&local_6b8,(void *)0x0,0);
    local_5f0 = (undefined4)(local_6c0 / 1000000);
    local_6b8 = 8;
    local_5e8 = local_5f0;
    _sysctlbyname("hw.cpufrequency",&local_6c0,&local_6b8,(void *)0x0,0);
    local_5ec = (undefined4)(local_6c0 / 1000000);
    uVar4 = 1;
  }
  if (local_2c8 != 2) {
    FUN_1009cf3f0(local_620,local_618,&local_608,0x340);
  }
  if (lVar1 == local_20) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

