
char * FUN_1008e4150(void)

{
  int iVar1;
  uid_t uVar2;
  long lVar3;
  char *pcVar4;
  
  if (DAT_1011c2d20 == '\0') {
    if (DAT_1011c3520 != '\x01') {
      iVar1 = FUN_1008e4890(&DAT_1011c3521);
      if ((iVar1 == 0) && (DAT_1011c3521 != '\0')) {
        DAT_1011c3521 = '\x01';
      }
      DAT_1011c3520 = '\x01';
    }
    if (DAT_1011c3521 != '\0') {
      pcVar4 = (char *)FUN_1008e3650();
      return pcVar4;
    }
    uVar2 = _geteuid();
    lVar3 = _getpwuid(uVar2);
    pcVar4 = "";
    if ((lVar3 != 0) && (*(long *)(lVar3 + 0x30) != 0)) {
      pcVar4 = &DAT_1011c2d20;
      _snprintf(&DAT_1011c2d20,0x400,"%s/Library/Logs");
      DAT_1011c311f = 0;
    }
  }
  else {
    pcVar4 = &DAT_1011c2d20;
  }
  return pcVar4;
}

