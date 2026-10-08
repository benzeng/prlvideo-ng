
int FUN_1008abf28(FILE *param_1,void *param_2,int param_3)

{
  int iVar1;
  size_t sVar2;
  int local_30;
  
  if ((param_1 == (FILE *)0x0) || (param_2 == (void *)0x0)) {
    local_30 = -1;
  }
  else {
    sVar2 = _fwrite(param_2,(long)param_3,1,param_1);
    if (((int)sVar2 == 0) && (iVar1 = _ferror(param_1), iVar1 != 0)) {
      FUN_1008ab73e(0,"fwrite()");
      return -1;
    }
    local_30 = (int)sVar2 * param_3;
  }
  return local_30;
}

