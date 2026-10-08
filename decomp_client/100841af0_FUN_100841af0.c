
long FUN_100841af0(long param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  if ((param_2 != (char *)0x0) &&
     (iVar1 = _strcmp(param_2,"CNewVmWizWebStorePage"), lVar2 = param_1, iVar1 != 0)) {
    iVar1 = _strcmp(param_2,"CNewVmWizPageDataMixin");
    if (iVar1 != 0) {
      lVar2 = FUN_10085a100(param_1,param_2);
      return lVar2;
    }
    lVar2 = 0;
    if (param_1 != 0) {
      lVar2 = param_1 + 0x40;
    }
  }
  return lVar2;
}

