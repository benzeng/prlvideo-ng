
int FUN_1006ab620(long param_1)

{
  uid_t uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = _getuid();
  if (uVar1 == 0) {
    iVar3 = FUN_100785e20(param_1 + 0x78);
    iVar2 = 0;
    iVar4 = -0x7ffdbffe;
  }
  else {
    iVar2 = FUN_10042eec0();
    iVar4 = iVar2;
    iVar3 = iVar2;
  }
  if (-1 < iVar3) {
    *(undefined1 *)(param_1 + 100) = 1;
    iVar4 = iVar2;
  }
  return iVar4;
}

