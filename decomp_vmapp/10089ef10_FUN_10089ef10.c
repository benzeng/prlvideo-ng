
bool FUN_10089ef10(FILE *param_1,void *param_2,uint param_3)

{
  size_t sVar1;
  bool bVar2;
  
  bVar2 = true;
  if (param_1 != (FILE *)0x0) {
    sVar1 = _fwrite(param_2,1,(long)(int)param_3,param_1);
    bVar2 = sVar1 == param_3;
  }
  return bVar2;
}

