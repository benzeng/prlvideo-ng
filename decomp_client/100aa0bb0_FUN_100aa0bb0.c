
uint FUN_100aa0bb0(void)

{
  int iVar1;
  uint uVar2;
  rlimit local_18;
  
  iVar1 = _getrlimit(8,&local_18);
  if ((iVar1 == 0) && (0x3ff < (uint)local_18.rlim_max)) {
    uVar2 = 0x10000;
    if ((uint)local_18.rlim_max < 0x10001) {
      uVar2 = (uint)local_18.rlim_max;
    }
  }
  else {
    uVar2 = 0x400;
  }
  return uVar2;
}

