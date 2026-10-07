
bool FUN_100761740(int *param_1,off_t param_2)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  iVar1 = _ftruncate(*param_1,param_2);
  if (iVar1 != 0) {
    piVar2 = ___error();
    pcVar3 = _strerror(*piVar2);
    FUN_1008e3970("","HostFile",0,"CHostFile::resize(%llu) failed: %s",param_2,pcVar3);
  }
  return iVar1 == 0;
}

