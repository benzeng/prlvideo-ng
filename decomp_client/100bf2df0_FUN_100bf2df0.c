
void FUN_100bf2df0(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  ulong uVar4;
  ulong local_20;
  
  if (DAT_102316038 == '\0') {
    DAT_102316038 = '\x01';
    pcVar3 = _getenv("OPENSSL_ia32cap");
    if (pcVar3 == (char *)0x0) {
      local_20 = _OPENSSL_ia32_cpuid();
    }
    else {
      cVar1 = *pcVar3;
      iVar2 = _sscanf(pcVar3 + (cVar1 == '~'),"%lli",&local_20);
      if (iVar2 == 0) {
        local_20 = _strtoul(pcVar3 + (cVar1 == '~'),(char **)0x0,0);
      }
      if (cVar1 == '~') {
        uVar4 = _OPENSSL_ia32_cpuid();
        local_20 = ~local_20 & uVar4;
      }
    }
    DAT_102311d58 = (uint)local_20 | 0x400;
    DAT_102311d5c = (undefined4)(local_20 >> 0x20);
  }
  return;
}

