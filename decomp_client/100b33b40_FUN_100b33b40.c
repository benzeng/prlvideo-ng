
int FUN_100b33b40(long param_1)

{
  uid_t uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = _getuid();
  if (uVar1 == 0) {
    iVar3 = FUN_100dd6480(param_1 + 0x78);
    iVar2 = 0;
    iVar4 = -0x7ffdbfff;
  }
  else {
    iVar2 = FUN_100b351b0();
    iVar4 = iVar2;
    iVar3 = iVar2;
  }
  if (-1 < iVar3) {
    *(undefined1 *)(param_1 + 100) = 0;
    iVar4 = iVar2;
  }
  return iVar4;
}

