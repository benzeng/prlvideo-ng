
ulong FUN_100db7040(int *param_1,void *param_2,uint param_3)

{
  ulong uVar1;
  int *piVar2;
  char *pcVar3;
  
  uVar1 = _read(*param_1,param_2,(ulong)param_3);
  if ((int)uVar1 < 0) {
    piVar2 = ___error();
    pcVar3 = _strerror(*piVar2);
    FUN_100df99c0("","HostFile",0,"CHostFile::read_(%p, %u) failed: %s",param_2,param_3,pcVar3);
  }
  return uVar1 & 0xffffffff;
}

