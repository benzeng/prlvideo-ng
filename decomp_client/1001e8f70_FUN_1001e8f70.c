
int FUN_1001e8f70(undefined4 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int local_1c;
  
  lVar2 = _PrlSrv_ShutdownEx(*(undefined8 *)(param_1 + 2),0x800);
  iVar1 = _PrlJob_Wait(lVar2,*param_1);
  if (iVar1 < 0) {
    FUN_100df99c0("[BOOTSTRAP]","prl_client_app",0,"PrlJob_Wait() failed with error  %#x",iVar1);
  }
  else {
    iVar1 = _PrlJob_GetRetCode(lVar2,&local_1c);
    if (iVar1 != 0) {
      FUN_100df99c0("[BOOTSTRAP]","prl_client_app",0,"PrlJob_GetRetCode() failed with error  %#x",
                    iVar1);
      local_1c = iVar1;
    }
    iVar1 = local_1c;
    if (-1 < local_1c) goto LAB_1001e9026;
  }
  uVar3 = FUN_100dddcf0(iVar1);
  FUN_100df99c0("[BOOTSTRAP]","prl_client_app",0,"Shutdown failed with error %s",uVar3);
LAB_1001e9026:
  if (lVar2 != 0) {
    _PrlHandle_Free(lVar2);
  }
  return iVar1;
}

