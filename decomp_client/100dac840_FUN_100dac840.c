
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100dac840(char *param_1)

{
  char cVar1;
  char *pcVar2;
  size_t sVar3;
  char *pcVar4;
  int *piVar5;
  char *pcVar6;
  ulong uVar7;
  undefined *puVar8;
  
  if ((param_1 == (char *)0x0) || (cVar1 = *param_1, cVar1 == '\0')) {
    _DAT_102318990 = 0x2e;
    puVar8 = &DAT_102318990;
  }
  else {
    sVar3 = _strlen(param_1);
    pcVar6 = param_1 + (sVar3 - 1);
    if (sVar3 != 1 && -1 < (long)(sVar3 - 1)) {
      do {
        if (*pcVar6 != '/') break;
        pcVar6 = pcVar6 + -1;
      } while (param_1 < pcVar6);
    }
    pcVar2 = pcVar6;
    if ((pcVar6 == param_1) && (cVar1 == '/')) {
      _DAT_102318990 = 0x2f;
      puVar8 = &DAT_102318990;
    }
    else {
      do {
        pcVar4 = pcVar2;
        if (pcVar4 <= param_1) break;
        pcVar2 = pcVar4 + -1;
      } while (pcVar4[-1] != '/');
      uVar7 = ((long)pcVar6 - (long)pcVar4) + 1;
      if ((uVar7 & 0xffffffff) < 0x401) {
        puVar8 = &DAT_102318990;
        ___strncpy_chk(&DAT_102318990,pcVar4,uVar7,0x400);
        (&DAT_102318991)[(long)pcVar6 - (long)pcVar4] = 0;
      }
      else {
        piVar5 = ___error();
        *piVar5 = 0x3f;
        puVar8 = (undefined *)0x0;
      }
    }
  }
  return puVar8;
}

