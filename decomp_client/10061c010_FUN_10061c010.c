
undefined8 FUN_10061c010(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long local_20;
  
  if (((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0)) ||
     (*(long *)(param_1 + 0x18) == 0)) {
    uVar1 = 0;
    FUN_100df99c0("[LICENSE]","prl_client_app",0,"(!)Error: Server instance is null.");
  }
  else {
    FUN_10015aa20(&local_20);
    uVar1 = _PrlSrv_ActivateTrialLicense(local_20,param_2,0);
    uVar1 = FUN_10061b530(param_1,uVar1,0x820);
    if (local_20 != 0) {
      _PrlHandle_Free();
    }
  }
  return uVar1;
}

