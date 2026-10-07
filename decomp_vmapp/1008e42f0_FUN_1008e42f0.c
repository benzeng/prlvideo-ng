
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1008e42f0(void)

{
  int iVar1;
  char *pcVar2;
  
  if (DAT_1011b562c == '\0') {
    if (DAT_1011c3520 != '\x01') {
      iVar1 = FUN_1008e4890(&DAT_1011c3521);
      if ((iVar1 == 0) && (DAT_1011c3521 != '\0')) {
        DAT_1011c3521 = '\x01';
      }
      DAT_1011c3520 = '\x01';
    }
    if (DAT_1011c3521 == '\0') {
      pcVar2 = &DAT_1011c3120;
      if (DAT_1011c3120 == '\0') {
        _DAT_1011c3120 = 0x7972617262694c2f;
        _DAT_1011c312c = 0x73;
        _DAT_1011c3128 = 0x676f4c2f;
      }
    }
    else {
      pcVar2 = (char *)FUN_1008e3750();
    }
    _strncpy(&DAT_1011b562c,pcVar2,0x400);
    DAT_1011b5a2b = 0;
    _snprintf(&DAT_1011b5a2c,0x400,"%s/%s",pcVar2,"parallels.log");
    iVar1 = DAT_1011b5610;
    DAT_1011b5e2b = 0;
    DAT_1011b5610 = -1;
    if (iVar1 != -1) {
      _close(iVar1);
    }
  }
  return &DAT_1011b562c;
}

