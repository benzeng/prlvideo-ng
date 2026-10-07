
char * FUN_1002da2a0(uint *param_1)

{
  char *pcVar1;
  
  if (DAT_1011c568c == 0) {
    pcVar1 = "";
  }
  else {
    pcVar1 = &DAT_1011b9bb0;
    _snprintf(&DAT_1011b9bb0,0x80,"CTRL_CTX(DROP:%08x ADD:%08x)",(ulong)*param_1,(ulong)param_1[1]);
    DAT_1011b9c2f = 0;
  }
  return pcVar1;
}

