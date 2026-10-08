
undefined8 FUN_100c8bc20(char *param_1)

{
  int iVar1;
  ulong uVar2;
  char *local_20;
  
  iVar1 = _strncmp(param_1,"MASK:",5);
  if (iVar1 == 0) {
    if (param_1[5] == '\0') {
      return 0;
    }
    uVar2 = _strtoul(param_1 + 5,&local_20,0);
    if (*local_20 != '\0') {
      return 0;
    }
  }
  else {
    iVar1 = _strcmp(param_1,"nombstr");
    uVar2 = 0xffffffffffffd7ff;
    if (iVar1 != 0) {
      iVar1 = _strcmp(param_1,"pkix");
      uVar2 = 0xfffffffffffffffb;
      if (iVar1 != 0) {
        iVar1 = _strcmp(param_1,"utf8only");
        uVar2 = 0x2000;
        if (iVar1 != 0) {
          iVar1 = _strcmp(param_1,"default");
          uVar2 = 0xffffffff;
          if (iVar1 != 0) {
            return 0;
          }
        }
      }
    }
  }
  DAT_10230a630 = uVar2;
  return 1;
}

