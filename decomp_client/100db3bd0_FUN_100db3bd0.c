
int FUN_100db3bd0(uint param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = _fcntl(param_1,0x28,0);
  iVar2 = 0;
  if (iVar1 != 0) {
    piVar3 = ___error();
    if (*piVar3 == 0x19) {
      FUN_100df99c0("","AbstractFile",0,"hdd: switch to synchronous fdatasync()");
      DAT_1023191b0 = FUN_100db3bb0;
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

