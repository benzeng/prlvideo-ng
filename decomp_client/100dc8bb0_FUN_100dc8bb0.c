
undefined8 FUN_100dc8bb0(void)

{
  int iVar1;
  size_t local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 8;
  iVar1 = _sysctlbyname("machdep.tsc.frequency",&local_10,&local_18,(void *)0x0,0);
  if (iVar1 < 0) {
    FUN_100df99c0("","HostUtils",0,"sysctl machdep.tsc.frequency is not supported");
  }
  return local_10;
}

