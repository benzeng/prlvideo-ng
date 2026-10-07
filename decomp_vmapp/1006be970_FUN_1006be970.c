
char * FUN_1006be970(long param_1,uint param_2,char param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = (char *)((ulong)param_2 + param_1);
  pcVar2 = (char *)(param_1 + 0xf0);
  if (pcVar2 < pcVar3) {
    while (cVar1 = *pcVar2, cVar1 != -1) {
      if (cVar1 == '\0') {
        pcVar2 = pcVar2 + 1;
      }
      else {
        if ((long)pcVar3 - (long)pcVar2 < 2) {
          return (char *)0x0;
        }
        if ((long)pcVar3 - (long)(pcVar2 + 2) < (long)(ulong)(byte)pcVar2[1]) {
          return (char *)0x0;
        }
        if (cVar1 == param_3) {
          return pcVar2;
        }
        pcVar2 = pcVar2 + (ulong)(byte)pcVar2[1] + 2;
      }
      if (pcVar3 <= pcVar2) {
        return (char *)0x0;
      }
    }
  }
  return (char *)0x0;
}

