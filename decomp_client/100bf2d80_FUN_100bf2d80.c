
char * FUN_100bf2d80(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  if (param_1 < 0) {
    pcVar2 = "dynamic";
  }
  else if (param_1 < 0x29) {
    pcVar2 = (&PTR_s_<<ERROR>>_102242a30)[param_1];
  }
  else {
    iVar1 = FUN_100c60800(DAT_102315ff0);
    if (param_1 + -0x29 <= iVar1) {
      pcVar2 = (char *)FUN_100c60820(DAT_102315ff0,param_1 + -0x29);
      return pcVar2;
    }
    pcVar2 = "ERROR";
  }
  return pcVar2;
}

