
bool FUN_100db7240(char *param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  iVar1 = _rename(param_1,param_2);
  if (iVar1 != 0) {
    piVar2 = ___error();
    pcVar3 = _strerror(*piVar2);
    FUN_100df99c0("","HostFile",0,"CHostFile::rename(%s -> %s) failed: %s",param_1,param_2,pcVar3);
  }
  return iVar1 == 0;
}

