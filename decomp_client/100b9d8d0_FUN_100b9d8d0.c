
ulong FUN_100b9d8d0(char *param_1,void *param_2,size_t param_3)

{
  uint uVar1;
  FILE *pFVar2;
  size_t sVar3;
  ulong uVar4;
  
  pFVar2 = _fopen(param_1,"wb");
  if (pFVar2 != (FILE *)0x0) {
    uVar4 = 0;
    if (0 < (long)param_3) {
      sVar3 = _fwrite(param_2,param_3,1,pFVar2);
      if (sVar3 != 1) {
        uVar1 = FUN_100b9d470(0xfffffffc,"Can\'t write to file %s",param_1);
        uVar4 = (ulong)uVar1;
      }
    }
    _fclose(pFVar2);
    return uVar4;
  }
  uVar4 = FUN_100b9d470(0xfffffffc,"Can\'t open file %s",param_1);
  return uVar4;
}

