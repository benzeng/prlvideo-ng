
undefined8 FUN_1004726d0(undefined8 param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((param_2 != (char *)0x0) &&
     (iVar1 = _strcmp(param_2,"CTISBackuper"), uVar2 = param_1, iVar1 != 0)) {
    uVar2 = FUN_10047c950(param_1,param_2);
    return uVar2;
  }
  return uVar2;
}

