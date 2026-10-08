
undefined8 FUN_10083ae30(undefined8 param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((param_2 != (char *)0x0) &&
     (iVar1 = _strcmp(param_2,"CVmEdWebAndEMail"), uVar2 = param_1, iVar1 != 0)) {
    uVar2 = FUN_10083a3f0(param_1,param_2);
    return uVar2;
  }
  return uVar2;
}

