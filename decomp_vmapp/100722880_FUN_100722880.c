
undefined4 FUN_100722880(char *param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = _strncmp(param_1,"VZSRV",0x4f);
  lVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = _strncmp(param_1,"VZGROUP",0x4f);
    lVar2 = 1;
    if (iVar1 != 0) {
      iVar1 = _strncmp(param_1,"VZAKEY",0x4f);
      lVar2 = 2;
      if (iVar1 != 0) {
        iVar1 = _strncmp(param_1,"PRLSRV",0x4f);
        lVar2 = 3;
        if (iVar1 != 0) {
          iVar1 = _strncmp(param_1,"PRLDSK",0x4f);
          lVar2 = 4;
          if (iVar1 != 0) {
            iVar1 = _strncmp(param_1,"PCSSTOR",0x4f);
            lVar2 = 5;
            if (iVar1 != 0) {
              iVar1 = _strncmp(param_1,"VDI",0x4f);
              lVar2 = 6;
              if (iVar1 != 0) {
                return 0;
              }
            }
          }
        }
      }
    }
  }
  return (&DAT_100bce3c8)[lVar2 * 4];
}

