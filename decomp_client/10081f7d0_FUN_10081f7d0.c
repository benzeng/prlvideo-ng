
undefined8 FUN_10081f7d0(undefined8 param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((param_2 != (char *)0x0) &&
     (iVar1 = _strcmp(param_2,"CTaskActivateTrial"), uVar2 = param_1, iVar1 != 0)) {
    uVar2 = FUN_100823c50(param_1,param_2);
    return uVar2;
  }
  return uVar2;
}

