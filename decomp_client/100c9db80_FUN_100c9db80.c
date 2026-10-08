
int FUN_100c9db80(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 local_48 [24];
  undefined8 local_30;
  
  FUN_100caa0f0(local_48,param_1);
  local_30 = 0;
  puVar2 = &local_30;
  if (param_4 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  iVar1 = FUN_100c9d760(local_48,param_2,param_3,puVar2);
  if ((param_4 != 0) && (iVar1 != 0)) {
    iVar1 = FUN_100c93480(param_4,local_30);
    FUN_100c60790(local_30,FUN_100c86400);
  }
  return iVar1;
}

