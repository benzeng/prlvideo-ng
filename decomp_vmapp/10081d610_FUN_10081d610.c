
char * FUN_10081d610(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  if (param_1 < 0) {
    pcVar2 = "dynamic";
  }
  else if (param_1 < 0x29) {
    pcVar2 = (&PTR_s_<<ERROR>>_100bd26f0)[param_1];
  }
  else {
    iVar1 = FUN_100885600(DAT_1011c0600);
    if (param_1 + -0x29 <= iVar1) {
      pcVar2 = (char *)FUN_100885620(DAT_1011c0600,param_1 + -0x29);
      return pcVar2;
    }
    pcVar2 = "ERROR";
  }
  return pcVar2;
}

