
undefined8 FUN_100147630(undefined8 param_1)

{
  undefined8 uVar1;
  long local_20;
  
  FUN_100146b90(&local_20,param_1);
  if (local_20 == 0) {
    uVar1 = 0;
    FUN_100df99c0("","prl_client_app",0,"(!)Error: invalid device handle");
  }
  else {
    uVar1 = _PrlVmDev_Connect(local_20);
    uVar1 = FUN_100146fb0(param_1,uVar1,0x3f6);
    _PrlHandle_Free(local_20);
  }
  return uVar1;
}

