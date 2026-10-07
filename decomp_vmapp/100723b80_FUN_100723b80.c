
char * FUN_100723b80(char *param_1,char *param_2,long param_3)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar3 = (char *)_strlen(param_2);
  pcVar5 = param_1;
  if ((*param_2 != '\0') && (pcVar5 = (char *)0x0, *param_1 != '\0')) {
    pcVar5 = (char *)0x0;
    pcVar4 = param_1;
    do {
      if (param_1 + (param_3 - (long)pcVar4) < pcVar3) {
        return (char *)0x0;
      }
      iVar2 = _memcmp(pcVar4,param_2,(size_t)pcVar3);
      if (iVar2 == 0) {
        return pcVar4;
      }
      pcVar1 = pcVar4 + 1;
      pcVar4 = pcVar4 + 1;
    } while (*pcVar1 != '\0');
  }
  return pcVar5;
}

