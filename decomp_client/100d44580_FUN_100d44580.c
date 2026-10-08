
int FUN_100d44580(void)

{
  int iVar1;
  int iVar2;
  size_t local_20;
  ulong local_18;
  
  local_18 = 0;
  local_20 = 8;
  iVar1 = _sysctlbyname("hw.memsize",&local_18,&local_20,(void *)0x0,0);
  iVar2 = (int)(local_18 >> 0x14);
  if (iVar1 != 0) {
    iVar2 = 0;
  }
  iVar1 = 0x200;
  if (iVar2 != 0) {
    iVar1 = iVar2;
  }
  return iVar1;
}

