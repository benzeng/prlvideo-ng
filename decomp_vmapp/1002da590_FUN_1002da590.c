
char * FUN_1002da590(uint param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  if (DAT_1011c568c == 0) {
    pcVar3 = "";
  }
  else {
    pcVar3 = &DAT_1011b9db0;
    iVar1 = _snprintf(&DAT_1011b9db0,0x80,"RES(");
    if (param_1 == 0) {
      pcVar3 = &DAT_1011b9db0;
      _snprintf(&DAT_1011b9db0 + iVar1,0x80 - (long)iVar1,"STOP)");
    }
    else {
      if ((param_1 & 0x8000) != 0) {
        iVar2 = _snprintf(&DAT_1011b9db0 + iVar1,0x80 - (long)iVar1,"%s,","RESTART");
        iVar1 = iVar1 + iVar2;
      }
      if ((param_1 & 0x800) != 0) {
        iVar2 = _snprintf(&DAT_1011b9db0 + iVar1,0x80 - (long)iVar1,"%s,","CONTINUE");
        iVar1 = iVar1 + iVar2;
      }
      if ((param_1 & 0x4000) != 0) {
        iVar2 = _snprintf(&DAT_1011b9db0 + iVar1,0x80 - (long)iVar1,"%s,","PRESCAN");
        iVar1 = iVar1 + iVar2;
      }
      if ((param_1 & 0x1000) != 0) {
        iVar2 = _snprintf(&DAT_1011b9db0 + iVar1,0x80 - (long)iVar1,"%s,","TOGGLE");
        iVar1 = iVar1 + iVar2;
      }
      if ((param_1 & 0x2000) != 0) {
        iVar2 = _snprintf(&DAT_1011b9db0 + iVar1,0x80 - (long)iVar1,"%s,","ENQ_EVT");
        iVar1 = iVar1 + iVar2;
      }
      if ((param_1 & 0x400) != 0) {
        iVar2 = _snprintf(&DAT_1011b9db0 + iVar1,0x80 - (long)iVar1,"%s,","INT_NEEDED");
        iVar1 = iVar1 + iVar2;
        iVar2 = _snprintf(&DAT_1011b9db0 + iVar1,0x80 - (long)iVar1,"INT_TARGET:%03x",
                          (ulong)(param_1 & 0x3ff));
        iVar1 = iVar1 + iVar2;
      }
      _snprintf(&DAT_1011b9db0 + iVar1,0x80 - (long)iVar1,")");
      DAT_1011b9e2f = 0;
    }
  }
  return pcVar3;
}

