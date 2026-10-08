
undefined4 FUN_1009d1800(mach_port_name_t param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  size_t local_70;
  undefined4 local_64;
  size_t local_60;
  int local_58 [14];
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  uVar3 = 0x1000007;
  if (*(mach_port_name_t *)PTR__mach_task_self__1021e1c58 != param_1) {
    local_60 = 0xc;
    iVar2 = _sysctlnametomib("sysctl.proc_cputype",local_58,&local_60);
    uVar3 = 0x1000007;
    if (iVar2 == 0) {
      _pid_for_task(param_1,local_58 + local_60);
      local_60 = local_60 + 1;
      local_70 = 4;
      _sysctl(local_58,(u_int)local_60,&local_64,&local_70,(void *)0x0,0);
      uVar3 = local_64;
    }
  }
  if (lVar1 == local_20) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

