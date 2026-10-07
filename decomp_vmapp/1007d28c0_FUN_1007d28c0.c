
long FUN_1007d28c0(long param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  if ((param_2 != (char *)0x0) &&
     (iVar1 = _strcmp(param_2,"IOService::IOClient"), lVar2 = param_1, iVar1 != 0)) {
    iVar1 = _strcmp(param_2,"IOConnection");
    if (iVar1 != 0) {
      lVar2 = FUN_1007d36d0(param_1,param_2);
      return lVar2;
    }
    lVar2 = 0;
    if (param_1 != 0) {
      lVar2 = param_1 + 0x10;
    }
  }
  return lVar2;
}

