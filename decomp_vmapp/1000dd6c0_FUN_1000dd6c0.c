
char FUN_1000dd6c0(long param_1,uint param_2)

{
  long lVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  
  cVar2 = '\0';
  if (param_2 != 0) {
    lVar1 = 0;
    cVar2 = '\0';
    if ((param_2 & 3) != 0) {
      lVar1 = 0;
      cVar2 = '\0';
      do {
        cVar2 = *(char *)(param_1 + lVar1) + cVar2;
        lVar1 = lVar1 + 1;
      } while ((param_2 & 3) != (uint)lVar1);
    }
    if (2 < param_2 - 1) {
      pcVar3 = (char *)(param_1 + 3 + lVar1);
      iVar4 = (param_2 + 3) - ((int)lVar1 + 3);
      do {
        cVar2 = *pcVar3 + pcVar3[-1] + pcVar3[-2] + pcVar3[-3] + cVar2;
        pcVar3 = pcVar3 + 4;
        iVar4 = iVar4 + -4;
      } while (iVar4 != 0);
    }
  }
  return -cVar2;
}

