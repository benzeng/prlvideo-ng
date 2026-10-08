
ulong FUN_100dc8c10(void)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  size_t local_28;
  ulong local_20;
  
  local_20 = 0;
  local_28 = 8;
  iVar1 = _sysctlbyname("machdep.tsc.frequency",&local_20,&local_28,(void *)0x0,0);
  if (iVar1 < 0) {
    FUN_100df99c0("","HostUtils",0,"sysctl machdep.tsc.frequency is not supported");
  }
  if (local_20 == 0) {
    uVar2 = FUN_100dc8a60();
    iVar1 = 3;
    while (1 < iVar1) {
      iVar1 = iVar1 + -1;
      uVar3 = FUN_100dc8a60();
      if ((uVar3 != 0) && (uVar3 <= uVar2)) {
        uVar2 = uVar3;
      }
    }
    pcVar4 = "[TSC frequency] use frequency obtained via TSC calibration: %llu Hz";
  }
  else {
    pcVar4 = "[TSC frequency] host OS: %llu Hz";
    uVar2 = local_20;
  }
  FUN_100df99c0("","HostUtils",0,pcVar4,uVar2);
  return uVar2;
}

