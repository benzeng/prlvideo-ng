
off_t FUN_100db6f80(int *param_1,off_t param_2,byte param_3)

{
  off_t oVar1;
  int *piVar2;
  char *pcVar3;
  
  oVar1 = _lseek(*param_1,param_2,(uint)param_3);
  if (oVar1 == -1) {
    piVar2 = ___error();
    pcVar3 = _strerror(*piVar2);
    FUN_100df99c0("","HostFile",0,"CHostFile::seek(%llu) failed: %s",param_2,pcVar3);
    oVar1 = -1;
  }
  return oVar1;
}

