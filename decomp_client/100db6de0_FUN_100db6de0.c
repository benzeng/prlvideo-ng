
bool FUN_100db6de0(int *param_1,char *param_2,char param_3,char param_4,byte param_5,
                  undefined4 *param_6,char param_7)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  bool bVar4;
  
  bVar4 = param_4 == '\0';
  iVar1 = bVar4 + 0x600 + (uint)bVar4;
  if (param_3 != '\0') {
    iVar1 = (uint)bVar4 + (uint)bVar4;
  }
  iVar1 = _open(param_2,iVar1,0x1b4);
  *param_1 = iVar1;
  if (iVar1 == -1) {
    if (param_6 != (undefined4 *)0x0) {
      *param_6 = 0x80000001;
      piVar2 = ___error();
      if (*piVar2 == 0xd) {
        *param_6 = 0x80000005;
      }
    }
    piVar2 = ___error();
    pcVar3 = _strerror(*piVar2);
    FUN_100df99c0("","HostFile",0,"CHostFile::open(%s) failed: %s",param_2,pcVar3);
    iVar1 = *param_1;
    if (iVar1 == -1) {
      return false;
    }
  }
  _fcntl(iVar1,0x30,(ulong)param_5);
  _fcntl(*param_1,0x2d,(ulong)(param_5 ^ 1));
  if (((param_3 == '\0') && (param_7 == '\x01')) && (iVar1 = _fchmod(*param_1,0x1b6), iVar1 != 0)) {
    piVar2 = ___error();
    pcVar3 = _strerror(*piVar2);
    FUN_100df99c0("","HostFile",0,
                  "CHostFile::open(%s) failed to set the world-writable permission: %s",param_2,
                  pcVar3);
    if (*param_1 != -1) {
      _close(*param_1);
      *param_1 = -1;
      return false;
    }
    return false;
  }
  if (*param_1 != -1) {
    *(char *)(param_1 + 1) = param_4;
    *(byte *)((long)param_1 + 5) = param_5;
  }
  return *param_1 != -1;
}

