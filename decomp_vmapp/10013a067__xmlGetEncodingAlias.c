
char * _xmlGetEncodingAlias(char *alias)

{
  char cVar1;
  int iVar2;
  char local_88 [108];
  int local_1c;
  
  if ((alias != (char *)0x0) && (DAT_1011b76d0 != 0)) {
    for (local_1c = 0; iVar2 = local_1c, local_1c < 99; local_1c = local_1c + 1) {
      cVar1 = FUN_10013a181((int)alias[local_1c]);
      local_88[iVar2] = cVar1;
      if (local_88[local_1c] == '\0') break;
    }
    local_88[local_1c] = '\0';
    for (local_1c = 0; local_1c < DAT_1011b76d8; local_1c = local_1c + 1) {
      iVar2 = _strcmp(*(char **)((long)local_1c * 0x10 + DAT_1011b76d0 + 8),local_88);
      if (iVar2 == 0) {
        return *(char **)((long)local_1c * 0x10 + DAT_1011b76d0);
      }
    }
  }
  return (char *)0x0;
}

