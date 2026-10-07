
bool FUN_100761940(char *param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  iVar1 = _unlink(param_1);
  if (iVar1 != 0) {
    piVar2 = ___error();
    pcVar3 = _strerror(*piVar2);
    FUN_1008e3970("","HostFile",0,"CHostFile::unlink(%s) failed: %s",param_1,pcVar3);
  }
  return iVar1 == 0;
}

