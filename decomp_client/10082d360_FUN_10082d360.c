
long FUN_10082d360(long param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  if ((param_2 != (char *)0x0) &&
     (iVar1 = _strcmp(param_2,"CVmDesktopUIEmuGate"), lVar2 = param_1, iVar1 != 0)) {
    iVar1 = _strcmp(param_2,"CVMCToolCli");
    if (iVar1 != 0) {
      lVar2 = FUN_10082aa90(param_1,param_2);
      return lVar2;
    }
    lVar2 = 0;
    if (param_1 != 0) {
      lVar2 = param_1 + 0x48;
    }
  }
  return lVar2;
}

