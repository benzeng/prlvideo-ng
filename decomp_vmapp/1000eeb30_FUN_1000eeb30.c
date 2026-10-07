
undefined8 FUN_1000eeb30(long param_1)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  
  uVar1 = *(uint *)(param_1 + 0x4e);
  if ((uVar1 & 0x10) == 0) {
    pcVar3 = "CPUID validation error: Time Stamp Counter (TSC) is not supported (0x%x)";
  }
  else if ((uVar1 & 0x1000000) == 0) {
    pcVar3 = "CPUID validation error: FXSAVE/FXRSTOR instructions are not supported (0x%x)";
  }
  else {
    if ((uVar1 & 0x10000) != 0) {
      if (0x80000007 < *(uint *)(param_1 + 0x62)) {
        if ((*(uint *)(param_1 + 0x72) & 0xff) < 0x20) {
          FUN_1008e3970("","vm",0,
                        "CPUID validation error: physical address width is less than 4GB (0x%x)");
          return 0;
        }
        uVar2 = *(uint *)(param_1 + 0x72) >> 8 & 0xff;
        if (uVar2 < 0x20) {
          FUN_1008e3970("","vm",0,
                        "CPUID validation error: virtual address width is less than 4GB (0x%x)",
                        uVar2);
          return 0;
        }
      }
      if ((uVar1 & 0x800) != 0) {
        return 1;
      }
      if ((*(uint *)(param_1 + 0x6a) & 0x800) != 0) {
        return 1;
      }
      FUN_1008e3970("","vm",0,
                    "CPUID validation error: SYSENTER/SYSEXIT and SYSCALL/SYSRET are not supported (0x%x, 0x%x)"
                    ,uVar1,*(uint *)(param_1 + 0x6a));
      return 0;
    }
    pcVar3 = "CPUID validation error: PAT is not supported (0x%x)";
  }
  FUN_1008e3970("","vm",0,pcVar3,uVar1);
  return 0;
}

