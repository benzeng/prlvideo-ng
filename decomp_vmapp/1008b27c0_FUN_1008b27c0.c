
void FUN_1008b27c0(char *param_1,undefined8 param_2,int param_3,byte *param_4)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  long lVar4;
  
  FUN_10087d250(param_1,"DEK-Info: ",0x400);
  FUN_10087d250(param_1,param_2,0x400);
  FUN_10087d250(param_1,",",0x400);
  sVar2 = _strlen(param_1);
  iVar1 = (int)sVar2;
  if (iVar1 + param_3 * 2 < 0x400) {
    lVar4 = 0;
    if (0 < param_3) {
      pcVar3 = param_1 + (long)iVar1 + 1;
      lVar4 = (long)param_3;
      do {
        pcVar3[-1] = "0123456789ABCDEF"[*param_4 >> 4];
        *pcVar3 = "0123456789ABCDEF"[(ulong)*param_4 & 0xf];
        param_4 = param_4 + 1;
        pcVar3 = pcVar3 + 2;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      lVar4 = (long)param_3 * 2;
    }
    param_1[lVar4 + iVar1] = '\n';
    param_1[lVar4 + iVar1 + 1] = '\0';
  }
  return;
}

