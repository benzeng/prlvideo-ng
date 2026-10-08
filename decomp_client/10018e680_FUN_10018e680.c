
void FUN_10018e680(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long local_30;
  long local_28;
  
  CSdkRequest::getResultParam((uint)&local_28);
  lVar1 = local_28;
  if (local_28 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t extract VM info handle.");
  }
  else {
    local_30 = local_28;
    _PrlHandle_AddRef(local_28);
    FUN_10018dea0(param_1,&local_30,param_3);
    _PrlHandle_Free(lVar1);
  }
  if (local_28 != 0) {
    _PrlHandle_Free();
  }
  return;
}

