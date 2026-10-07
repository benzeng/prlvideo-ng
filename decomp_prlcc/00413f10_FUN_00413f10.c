
void FUN_00413f10(long param_1,char *param_2,long param_3,char param_4)

{
  long *plVar1;
  char *__s;
  size_t sVar2;
  size_t sVar3;
  char *pcVar4;
  char *__dest;
  
  plVar1 = *(long **)(param_1 + 0x50);
  if (((plVar1 != (long *)0x0) && (*plVar1 != 0)) && (param_3 != 0)) {
    param_2[param_3] = '\0';
    __s = (char *)FUN_004126c0(param_2,*(undefined8 *)(param_1 + 0x80),(int)param_4);
    sVar2 = strlen(__s);
    pcVar4 = (char *)plVar1[2];
    if (*pcVar4 == '\0') {
      plVar1[2] = (long)__s;
    }
    else {
      if ((*(byte *)(plVar1 + 9) & 0x40) == 0) {
        sVar3 = strlen(pcVar4);
        __dest = malloc(sVar2 + 1 + sVar3);
        pcVar4 = strcpy(__dest,pcVar4);
      }
      else {
        sVar3 = strlen(pcVar4);
        pcVar4 = realloc(pcVar4,sVar2 + 1 + sVar3);
      }
      plVar1[2] = (long)pcVar4;
      strcpy(pcVar4 + sVar3,__s);
      if (param_2 != __s) {
        free(__s);
      }
    }
    if (param_2 != (char *)plVar1[2]) {
      FUN_00410500(plVar1,0x40);
      return;
    }
  }
  return;
}

