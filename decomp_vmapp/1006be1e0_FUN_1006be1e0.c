
ulong FUN_1006be1e0(long param_1,iovec *param_2,int param_3)

{
  ulong uVar1;
  int *piVar2;
  
  do {
    uVar1 = _writev(*(int *)(param_1 + 0x58),param_2,param_3);
    if (-1 < (int)uVar1) break;
    piVar2 = ___error();
  } while (*piVar2 == 4);
  return uVar1 & 0xffffffff;
}

