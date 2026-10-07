
ulong FUN_100778570(void)

{
  int iVar1;
  size_t local_18;
  ulong local_10;
  
  local_18 = 8;
  iVar1 = _sysctlbyname("hw.busfrequency",&local_10,&local_18,(void *)0x0,0);
  if (iVar1 == 0) {
    if (1999999999 < local_10) {
      return local_10 / 1000000;
    }
    if (1000000 < local_10) {
      return local_10 / 4000000;
    }
    FUN_1008e3970("","HostUtils",0,"Warning: HW_BUS_FREQ sysctl() returned %llu");
  }
  else {
    FUN_1008e3970("","HostUtils",0,"Warning: HW_BUS_FREQ sysctl() failed");
  }
  return 0x14d;
}

