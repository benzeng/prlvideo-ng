
void FUN_10018e840(undefined8 param_1,int param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_24;
  long local_20;
  
  if (param_2 < 0) {
    return;
  }
  lVar2 = QObject::sender();
  if ((lVar2 != 0) &&
     (lVar2 = ___dynamic_cast(lVar2,PTR_typeinfo_1021e1720,PTR_typeinfo_1021e1640,0), lVar2 != 0)) {
    CSdkRequest::getResultParam((uint)&local_20);
    if (local_20 == 0) {
      FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t extract VM Tools info handle.");
    }
    else {
      iVar1 = _PrlVmToolsInfo_GetState(local_20,&local_24);
      if (iVar1 < 0) {
        uVar3 = FUN_100dddcf0(iVar1);
        FUN_100df99c0("","prl_client_app",0,
                      "(!)Error: PrlVmToolsInfo_GetState failed with RC = %.8X, rc = [%s].",iVar1,
                      uVar3);
      }
      else {
        FUN_10018e970(param_1,local_24);
      }
    }
    if (local_20 == 0) {
      return;
    }
    _PrlHandle_Free();
    return;
  }
  FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get request info object.");
  return;
}

