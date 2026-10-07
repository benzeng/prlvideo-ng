
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100701810(char *param_1)

{
  char cVar1;
  size_t sVar2;
  int *piVar3;
  char *pcVar4;
  long lVar5;
  undefined *puVar6;
  
  if ((param_1 == (char *)0x0) || (cVar1 = *param_1, cVar1 == '\0')) {
    _DAT_1011bd680 = 0x2e;
    puVar6 = &DAT_1011bd680;
  }
  else {
    sVar2 = _strlen(param_1);
    pcVar4 = param_1 + (sVar2 - 1);
    if (sVar2 != 1 && -1 < (long)(sVar2 - 1)) {
      do {
        if (*pcVar4 != '/') break;
        pcVar4 = pcVar4 + -1;
      } while (param_1 < pcVar4);
    }
    for (; (param_1 < pcVar4 && (*pcVar4 != '/')); pcVar4 = pcVar4 + -1) {
    }
    if (pcVar4 == param_1) {
      _DAT_1011bd680 = cVar1 == '/' | 0x2e;
      puVar6 = &DAT_1011bd680;
    }
    else {
      do {
        pcVar4 = pcVar4 + -1;
        lVar5 = (long)pcVar4 - (long)param_1;
        if (pcVar4 < param_1 || lVar5 == 0) break;
      } while (*pcVar4 == '/');
      if ((lVar5 + 1U & 0xffffffff) < 0x401) {
        puVar6 = &DAT_1011bd680;
        ___strncpy_chk(&DAT_1011bd680,param_1,lVar5 + 1U,0x400);
        (&DAT_1011bd681)[lVar5] = 0;
      }
      else {
        piVar3 = ___error();
        *piVar3 = 0x3f;
        puVar6 = (undefined *)0x0;
      }
    }
  }
  return puVar6;
}

