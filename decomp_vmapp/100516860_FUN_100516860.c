
size_t FUN_100516860(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  
  if (param_2 == 0) {
    sVar3 = 0;
  }
  else {
    sVar3 = _strlen(param_1);
    do {
      iVar2 = (int)sVar3;
      sVar3 = (size_t)iVar2;
      pcVar4 = param_1 + (iVar2 + -1);
      do {
        if ((long)sVar3 < 1) {
          return 0;
        }
        cVar1 = *pcVar4;
        sVar3 = sVar3 - 1;
      } while ((cVar1 != '/') && (pcVar4 = pcVar4 + -1, cVar1 != '\\'));
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return sVar3;
}

