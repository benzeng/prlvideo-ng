
char * FUN_100ba2a40(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char cVar3;
  
  cVar3 = *param_1;
  if (cVar3 != '\0') {
    do {
      pcVar2 = param_2;
      cVar1 = *param_2;
      if (*param_2 == '\0') {
        return param_1;
      }
      while (cVar1 != cVar3) {
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 1;
        if (cVar1 == '\0') {
          return param_1;
        }
      }
      if (*pcVar2 == '\0') {
        return param_1;
      }
      cVar3 = param_1[1];
      param_1 = param_1 + 1;
    } while (cVar3 != '\0');
  }
  return (char *)0x0;
}

