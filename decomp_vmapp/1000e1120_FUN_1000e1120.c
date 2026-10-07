
char * FUN_1000e1120(long param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  if ((char *)((ulong)*(byte *)(param_1 + 1) + 2 + param_1) < param_2) {
    pcVar2 = (char *)(param_1 + (ulong)*(byte *)(param_1 + 1));
    do {
      if ((*pcVar2 == '\0') && (pcVar2[1] == '\0')) {
        if (param_2 <= pcVar2 + 2) {
          return (char *)0x0;
        }
        return pcVar2 + 2;
      }
      pcVar1 = pcVar2 + 3;
      pcVar2 = pcVar2 + 1;
    } while (pcVar1 < param_2);
  }
  return (char *)0x0;
}

