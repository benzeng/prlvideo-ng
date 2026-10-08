
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100dfa450(void)

{
  int iVar1;
  char *pcVar2;
  
  if (DAT_102310004 == '\0') {
    if (DAT_102319fb0 != '\x01') {
      iVar1 = FUN_100dfaf30(&DAT_102319fb1);
      if ((iVar1 == 0) && (DAT_102319fb1 != '\0')) {
        DAT_102319fb1 = '\x01';
      }
      DAT_102319fb0 = '\x01';
    }
    if (DAT_102319fb1 == '\0') {
      pcVar2 = &DAT_102319bb0;
      if (DAT_102319bb0 == '\0') {
        _DAT_102319bb0 = 0x7972617262694c2f;
        _DAT_102319bbc = 0x73;
        _DAT_102319bb8 = 0x676f4c2f;
      }
    }
    else {
      pcVar2 = (char *)FUN_100df97a0();
    }
    _strncpy(&DAT_102310004,pcVar2,0x400);
    DAT_102310403 = 0;
    _snprintf(&DAT_102310404,0x400,"%s/%s",pcVar2,"parallels.log");
    iVar1 = DAT_10230ffe8;
    DAT_102310803 = 0;
    DAT_10230ffe8 = -1;
    if (iVar1 != -1) {
      _close(iVar1);
    }
  }
  return &DAT_102310404;
}

