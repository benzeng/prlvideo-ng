
int FUN_1004f2e90(char *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = _open(param_2,0xb00,0x1a4);
  iVar2 = -1;
  if (iVar1 != -1) {
    _close(iVar1);
    iVar2 = _rename(param_1,param_2);
    if (iVar2 == -1) {
      piVar3 = ___error();
      iVar1 = *piVar3;
      _unlink(param_2);
      iVar2 = -1;
      if (iVar1 == 0x14) {
        iVar1 = _rename(param_1,param_2);
        return iVar1;
      }
    }
  }
  return iVar2;
}

