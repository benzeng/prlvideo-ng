
long FUN_100723e10(long param_1,char *param_2,ulong param_3)

{
  char *pcVar1;
  char cVar2;
  ulong uVar3;
  
  if (param_3 != 0) {
    uVar3 = 0;
    while (*(char *)(param_1 + uVar3) != '\0') {
      cVar2 = *param_2;
      if (cVar2 != '\0') {
        pcVar1 = param_2;
        do {
          pcVar1 = pcVar1 + 1;
          if (*(char *)(param_1 + uVar3) == cVar2) {
            return param_1 + uVar3;
          }
          cVar2 = *pcVar1;
        } while (cVar2 != '\0');
      }
      uVar3 = uVar3 + 1;
      if (param_3 <= uVar3) {
        return 0;
      }
    }
  }
  return 0;
}

