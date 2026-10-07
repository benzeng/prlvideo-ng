
int FUN_100708aa0(uint param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = _fcntl(param_1,0x28,0);
  iVar2 = 0;
  if (iVar1 != 0) {
    piVar3 = ___error();
    if (*piVar3 == 0x19) {
      FUN_1008e3970("","AbstractFile",0,"hdd: switch to synchronous fdatasync()");
      DAT_1011bdaa0 = FUN_100708a80;
      iVar2 = _syscall(0xbb,(ulong)param_1);
      return iVar2;
    }
    piVar3 = ___error();
    iVar2 = 0;
    if (8 < *piVar3) {
      iVar2 = iVar1;
    }
  }
  return iVar2;
}

