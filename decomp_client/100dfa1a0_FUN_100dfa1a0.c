
char * FUN_100dfa1a0(void)

{
  int iVar1;
  uid_t uVar2;
  long lVar3;
  char *pcVar4;
  
  if (DAT_1023197b0 == '\0') {
    if (DAT_102319fb0 != '\x01') {
      iVar1 = FUN_100dfaf30(&DAT_102319fb1);
      if ((iVar1 == 0) && (DAT_102319fb1 != '\0')) {
        DAT_102319fb1 = '\x01';
      }
      DAT_102319fb0 = '\x01';
    }
    if (DAT_102319fb1 != '\0') {
      pcVar4 = (char *)FUN_100df96a0();
      return pcVar4;
    }
    uVar2 = _geteuid();
    lVar3 = _getpwuid(uVar2);
    pcVar4 = "";
    if ((lVar3 != 0) && (*(long *)(lVar3 + 0x30) != 0)) {
      pcVar4 = &DAT_1023197b0;
      _snprintf(&DAT_1023197b0,0x400,"%s/Library/Logs");
      DAT_102319baf = 0;
    }
  }
  else {
    pcVar4 = &DAT_1023197b0;
  }
  return pcVar4;
}

