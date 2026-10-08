
undefined8 FUN_100b01570(long param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  
  iVar1 = _strcmp(param_2,".");
  if ((iVar1 != 0) && (iVar1 = _strcmp(param_2,".."), iVar1 != 0)) {
    pcVar2 = *(char **)(param_1 + 0x10);
    if (pcVar2 == (char *)0x0) {
      return 1;
    }
    cVar3 = *param_2;
    while (cVar3 != '\0') {
      cVar5 = *pcVar2;
      if (cVar5 == '\0') {
        return 0;
      }
      cVar4 = cVar3;
      if (cVar3 == cVar5) {
        do {
          cVar4 = param_2[1];
          param_2 = param_2 + 1;
          cVar5 = pcVar2[1];
          pcVar2 = pcVar2 + 1;
        } while (cVar4 == cVar5);
      }
      cVar3 = cVar4;
      if (cVar5 != '\0') {
        if (cVar5 == '?') {
          if (cVar4 == '\0') {
            return 0;
          }
          pcVar2 = pcVar2 + 1;
          cVar3 = param_2[1];
          param_2 = param_2 + 1;
        }
        else {
          if (cVar5 != '*') {
            return 0;
          }
          cVar3 = pcVar2[1];
          if (cVar3 == '\0') {
            return 1;
          }
          pcVar2 = pcVar2 + 1;
          while( true ) {
            if (cVar4 == '\0') goto LAB_100b0165d;
            if (cVar4 == cVar3) break;
            cVar4 = param_2[1];
            param_2 = param_2 + 1;
          }
        }
      }
    }
LAB_100b0165d:
    if (*pcVar2 == '\0') {
      return 1;
    }
  }
  return 0;
}

