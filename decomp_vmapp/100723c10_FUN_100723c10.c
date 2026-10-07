
char * FUN_100723c10(char *param_1,char param_2,ulong param_3)

{
  ulong uVar1;
  char *pcVar2;
  char cVar3;
  
  pcVar2 = (char *)0x0;
  if ((param_3 != 0) && (cVar3 = *param_1, cVar3 != '\0')) {
    uVar1 = 0;
    while (cVar3 != param_2) {
      if (param_3 <= uVar1 + 1) {
        return (char *)0x0;
      }
      cVar3 = param_1[uVar1 + 1];
      uVar1 = uVar1 + 1;
      if (cVar3 == '\0') {
        return (char *)0x0;
      }
    }
    pcVar2 = param_1 + uVar1;
  }
  return pcVar2;
}

