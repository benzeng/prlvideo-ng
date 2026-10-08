
void FUN_100daa8d0(long param_1,char *param_2)

{
  uint uVar1;
  size_t sVar2;
  size_t sVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  char *pcVar7;
  char local_32 [2];
  
  local_32[0] = '\0';
  local_32[1] = '\0';
  sVar2 = _strlen(param_2);
  if (*(void **)(param_1 + 0x220) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x220));
  }
  pcVar7 = (char *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x220) = 0;
  if (param_2[sVar2 - 1] == '/') goto LAB_100daa971;
  if (*(char *)(param_1 + 0xbc) != '5') {
    uVar1 = FUN_100da9450(param_1 + 0x84);
    if ((uVar1 & 0xf000) != 0x4000) {
      if (*(char *)(param_1 + 0xbc) != '\0') goto LAB_100daa971;
      sVar3 = _strlen(pcVar7);
      if (*(char *)(sVar3 + 0x1f + param_1) != '/') goto LAB_100daa971;
    }
  }
  local_32[0] = '/';
  local_32[1] = '\0';
LAB_100daa971:
  pcVar5 = local_32;
  sVar3 = _strlen(pcVar5);
  if ((sVar2 + 1 < 0x65) || ((*(byte *)(param_1 + 0x1c) & 1) == 0)) {
    if (sVar2 + 1 + sVar3 < 0x65) {
      pcVar4 = "%s%s";
      lVar6 = 100;
    }
    else {
      pcVar4 = _strrchr(param_2,0x2f);
      if (pcVar4 == (char *)0x0) {
        _printf("!!! \'/\' not found in \"%s\"\n",param_2);
        return;
      }
      ___snprintf_chk(pcVar7,100,0,0xffffffffffffffff,"%s%s",pcVar4 + 1,pcVar5);
      pcVar7 = (char *)(param_1 + 0x179);
      lVar6 = 0x9b;
      if ((long)pcVar4 - (long)param_2 < 0x9b) {
        lVar6 = ((long)pcVar4 - (long)param_2) + 1;
      }
      pcVar4 = "%s";
    }
    ___snprintf_chk(pcVar7,lVar6,0,0xffffffffffffffff,pcVar4,param_2,pcVar5);
  }
  else {
    pcVar5 = _strdup(param_2);
    *(char **)(param_1 + 0x220) = pcVar5;
    _strncpy(pcVar7,pcVar5,100);
  }
  return;
}

