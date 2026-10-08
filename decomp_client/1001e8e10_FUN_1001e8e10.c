
int FUN_1001e8e10(undefined4 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int local_2c;
  
  puVar1 = (undefined8 *)(param_1 + 2);
  if (*(long *)(param_1 + 2) != 0) {
    _PrlHandle_Free();
  }
  *puVar1 = 0;
  iVar2 = _PrlSrv_Create(puVar1);
  if (iVar2 < 0) {
    FUN_100df99c0("[BOOTSTRAP]","prl_client_app",0,"PrlSrv_Create() failed");
    return iVar2;
  }
  lVar4 = _PrlSrv_LoginLocalEx(*puVar1,0,0,2,4);
  iVar2 = _PrlJob_Wait(lVar4,*param_1);
  if (iVar2 < 0) {
    FUN_100df99c0("[BOOTSTRAP]","prl_client_app",0,"PrlJob_Wait() failed with error  %#x",iVar2);
  }
  else {
    iVar3 = _PrlJob_GetRetCode(lVar4,&local_2c);
    iVar2 = local_2c;
    if (iVar3 != 0) {
      FUN_100df99c0("[BOOTSTRAP]","prl_client_app",0,"PrlJob_GetRetCode() failed with error  %#x",
                    iVar3);
      iVar2 = iVar3;
    }
    if (-1 < iVar2) goto LAB_1001e8f2a;
  }
  uVar5 = FUN_100dddcf0(iVar2);
  FUN_100df99c0("[BOOTSTRAP]","prl_client_app",0,"Login failed with error %s",uVar5);
LAB_1001e8f2a:
  if (lVar4 != 0) {
    _PrlHandle_Free(lVar4);
  }
  return iVar2;
}

