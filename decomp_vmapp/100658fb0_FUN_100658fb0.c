
ulong FUN_100658fb0(void)

{
  int iVar1;
  ulong uVar2;
  ulong local_18;
  size_t local_10;
  
  local_18 = 0;
  local_10 = 8;
  iVar1 = _sysctlbyname("hw.memsize",&local_18,&local_10,(void *)0x0,0);
  uVar2 = 0x200;
  if (iVar1 == 0) {
    uVar2 = local_18 >> 0x14;
  }
  return uVar2;
}

